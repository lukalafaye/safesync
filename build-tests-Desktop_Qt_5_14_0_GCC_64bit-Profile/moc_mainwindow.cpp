/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[379];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 28), // "on_CServerHostButton_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 28), // "on_CServerUserButton_clicked"
QT_MOC_LITERAL(4, 70, 29), // "on_CServerDailyButton_clicked"
QT_MOC_LITERAL(5, 100, 30), // "on_CServerBackupButton_clicked"
QT_MOC_LITERAL(6, 131, 30), // "on_CClientBackupButton_clicked"
QT_MOC_LITERAL(7, 162, 27), // "on_CClientKeyButton_clicked"
QT_MOC_LITERAL(8, 190, 22), // "on_resetButton_clicked"
QT_MOC_LITERAL(9, 213, 23), // "on_hResetButton_clicked"
QT_MOC_LITERAL(10, 237, 14), // "connectionTest"
QT_MOC_LITERAL(11, 252, 24), // "on_CSearchButton_clicked"
QT_MOC_LITERAL(12, 277, 22), // "on_CSyncButton_clicked"
QT_MOC_LITERAL(13, 300, 21), // "on_CLogButton_clicked"
QT_MOC_LITERAL(14, 322, 29), // "on_changeBackupButton_clicked"
QT_MOC_LITERAL(15, 352, 26) // "on_changeSSHButton_clicked"

    },
    "MainWindow\0on_CServerHostButton_clicked\0"
    "\0on_CServerUserButton_clicked\0"
    "on_CServerDailyButton_clicked\0"
    "on_CServerBackupButton_clicked\0"
    "on_CClientBackupButton_clicked\0"
    "on_CClientKeyButton_clicked\0"
    "on_resetButton_clicked\0on_hResetButton_clicked\0"
    "connectionTest\0on_CSearchButton_clicked\0"
    "on_CSyncButton_clicked\0on_CLogButton_clicked\0"
    "on_changeBackupButton_clicked\0"
    "on_changeSSHButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    0,   85,    2, 0x0a /* Public */,
       4,    0,   86,    2, 0x0a /* Public */,
       5,    0,   87,    2, 0x0a /* Public */,
       6,    0,   88,    2, 0x0a /* Public */,
       7,    0,   89,    2, 0x0a /* Public */,
       8,    0,   90,    2, 0x0a /* Public */,
       9,    0,   91,    2, 0x0a /* Public */,
      10,    0,   92,    2, 0x0a /* Public */,
      11,    0,   93,    2, 0x0a /* Public */,
      12,    0,   94,    2, 0x0a /* Public */,
      13,    0,   95,    2, 0x0a /* Public */,
      14,    0,   96,    2, 0x0a /* Public */,
      15,    0,   97,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_CServerHostButton_clicked(); break;
        case 1: _t->on_CServerUserButton_clicked(); break;
        case 2: _t->on_CServerDailyButton_clicked(); break;
        case 3: _t->on_CServerBackupButton_clicked(); break;
        case 4: _t->on_CClientBackupButton_clicked(); break;
        case 5: _t->on_CClientKeyButton_clicked(); break;
        case 6: _t->on_resetButton_clicked(); break;
        case 7: _t->on_hResetButton_clicked(); break;
        case 8: _t->connectionTest(); break;
        case 9: _t->on_CSearchButton_clicked(); break;
        case 10: _t->on_CSyncButton_clicked(); break;
        case 11: _t->on_CLogButton_clicked(); break;
        case 12: _t->on_changeBackupButton_clicked(); break;
        case 13: _t->on_changeSSHButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
