/*
 * Copyright Iouri Khramtsov 2010.
 *
 * This file is part of PlanetWarrior program.  It is available freely
 * under GNU General Public License v3 included in gpl.txt file together
 * with this source code (also available online at http://www.gnu.org/licenses/gpl.txt).
 * Commercial licensing is available separately.
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QCloseEvent>
#include <QFileDialog>
#include <QMainWindow>

//Forward-declared classes.
class PlanetWarsGame;
class PlanetWarsView;
class Logger;

namespace Ui {
    class MainWindow;
}

//The main application window.
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_renderDelay_valueChanged(int value);
    void on_playButton_clicked();
    void on_browseMapFileButton_clicked();
    void on_browseSecondBotButton_clicked();
    void on_browseFirstBotButton_clicked();

protected:
    void closeEvent(QCloseEvent *);

private:
    QFileDialog* m_browseFirstBotDialog;
    QFileDialog* m_browseSecondBotDialog;
    QFileDialog* m_browseMapBotDialog;

    PlanetWarsGame* m_game;
    PlanetWarsView* m_gameView;
    Logger* m_logger;
};

#endif // MAINWINDOW_H
