void __fastcall PANSURFLOCK::vLockBmpAndPrepareForPunt(__int64 **this)
{
  __int64 *v2; // rcx
  DHSURF dhsurf; // r8

  v2 = (__int64 *)**this;
  this[1] = v2;
  EngAcquireSemaphore(*(HSEMAPHORE *)(v2[4] + 776));
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
  EngAcquireSemaphore((HSEMAPHORE)this[1][3]);
}
