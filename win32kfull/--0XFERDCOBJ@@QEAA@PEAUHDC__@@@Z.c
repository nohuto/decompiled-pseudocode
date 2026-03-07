XFERDCOBJ *__fastcall XFERDCOBJ::XFERDCOBJ(XFERDCOBJ *this, HDC a2)
{
  int v4; // eax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 3) = 1;
  v4 = PushThreadGuardedObject((char *)this + 16, this, XFERDCOBJ::ThreadCleanup);
  *((_DWORD *)this + 12) = v4;
  if ( v4 )
    XDCOBJ::vLock(this, a2);
  return this;
}
