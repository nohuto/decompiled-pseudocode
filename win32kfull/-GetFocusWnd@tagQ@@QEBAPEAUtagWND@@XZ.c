struct tagWND *__fastcall tagQ::GetFocusWnd(tagQ *this)
{
  return (struct tagWND *)*((_QWORD *)this + 15);
}
