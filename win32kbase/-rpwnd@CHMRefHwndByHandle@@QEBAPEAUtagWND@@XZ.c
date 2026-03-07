struct tagWND *__fastcall CHMRefHwndByHandle::rpwnd(CHMRefHwndByHandle *this)
{
  return (struct tagWND *)*((_QWORD *)this + 1);
}
