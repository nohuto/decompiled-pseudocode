struct tagWND *__fastcall tagQ::GetActiveWindow(tagQ *this)
{
  return (struct tagWND *)*((_QWORD *)this + 16);
}
