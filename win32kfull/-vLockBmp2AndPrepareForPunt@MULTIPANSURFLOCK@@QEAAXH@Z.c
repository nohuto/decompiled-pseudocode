void __fastcall MULTIPANSURFLOCK::vLockBmp2AndPrepareForPunt(MULTIPANSURFLOCK *this, int a2)
{
  __int64 *v2; // rax
  __int64 v5; // rcx
  DHSURF dhsurf; // r8
  HSEMAPHORE v7; // rcx

  v2 = (__int64 *)*((_QWORD *)this + 2);
  v5 = *v2;
  *((_QWORD *)this + 3) = *v2;
  EngAcquireSemaphore(*(HSEMAPHORE *)(*(_QWORD *)(v5 + 32) + 776LL));
  dhsurf = (DHSURF)*((_QWORD *)this + 3);
  if ( !*((_DWORD *)dhsurf + 5) )
    EngModifySurface(
      *(HSURF *)(*((_QWORD *)this + 2) + 8LL),
      *(HDEV *)(*((_QWORD *)dhsurf + 4) + 48LL),
      0,
      0,
      dhsurf,
      *((PVOID *)dhsurf + 1),
      *((_DWORD *)dhsurf + 4),
      0LL);
  ++*(_DWORD *)(*((_QWORD *)this + 3) + 20LL);
  EngReleaseSemaphore(*(HSEMAPHORE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 776LL));
  v7 = *(HSEMAPHORE *)(*((_QWORD *)this + 3) + 24LL);
  if ( a2 )
    EngAcquireSemaphoreShared(v7);
  else
    EngAcquireSemaphore(v7);
}
