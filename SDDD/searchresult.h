#ifndef SEARCHRESULT_H
#define SEARCHRESULT_H

#include <QWidget>

namespace Ui {
class SearchResult;
}

class SearchResult : public QWidget
{
    Q_OBJECT

public:
    explicit SearchResult(QWidget *parent = 0);
    ~SearchResult();

private:
    Ui::SearchResult *ui;
};

#endif // SEARCHRESULT_H
