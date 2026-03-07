void __fastcall MULTIPANSURFLOCK::vLockBmp1AndPrepareForPunt(__int64 **this, int a2)
{
  __int64 *v4; // rcx
  DHSURF dhsurf; // r8
  HSEMAPHORE v6; // rcx

  v4 = (__int64 *)**this;
  this[1] = v4;
  EngAcquireSemaphore(*(HSEMAPHORE *)(v4[4] + 776));
  dhsurf = (DHSURF)this[1];
  if ( !*((_DWORD *)dhsurf + 5) )
    EngModifySurface(
      (HSURF)(*this)[1],
      *(HDEV *)(*((_QWORD *)dhsurf + 4) + 48LL),
      0,
      0,
      dhsurf,
      *((PVOID *)dhsurf + 1),
      *((_DWORD *)dhsurf + 4),
      0LL);
  ++*((_DWORD *)this[1] + 5);
  EngReleaseSemaphore(*(HSEMAPHORE *)(this[1][4] + 776));
  v6 = (HSEMAPHORE)this[1][3];
  if ( a2 )
    EngAcquireSemaphoreShared(v6);
  else
    EngAcquireSemaphore(v6);
}
