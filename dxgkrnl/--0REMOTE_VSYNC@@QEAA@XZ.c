REMOTE_VSYNC *__fastcall REMOTE_VSYNC::REMOTE_VSYNC(REMOTE_VSYNC *this)
{
  *(_WORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 16) = -1;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 66;
  KeInitializeEvent((PRKEVENT)((char *)this + 16), NotificationEvent, 0);
  return this;
}
