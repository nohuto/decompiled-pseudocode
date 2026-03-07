DEVLOCKOBJ_WNDOBJ *__fastcall DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ(DEVLOCKOBJ_WNDOBJ *this, struct XDCOBJ *a2)
{
  *((_WORD *)this + 24) = 256;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 22) = 1;
  DEVLOCKOBJ_WNDOBJ::vConstructor(this, a2);
  return this;
}
