/*
 * XREFs of ?vUnLockBmp1AndRemovePunt@MULTIPANSURFLOCK@@QEAAXXZ @ 0x1C0297558
 * Callers:
 *     ??1MULTIPANSURFLOCK@@QEAA@XZ @ 0x1C0294A94 (--1MULTIPANSURFLOCK@@QEAA@XZ.c)
 *     ??1PANSURFLOCK@@QEAA@XZ @ 0x1C0294B2C (--1PANSURFLOCK@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MULTIPANSURFLOCK::vUnLockBmp1AndRemovePunt(MULTIPANSURFLOCK *this)
{
  DHSURF dhsurf; // rax

  if ( *(_QWORD *)this )
  {
    EngReleaseSemaphore(*(HSEMAPHORE *)(*((_QWORD *)this + 1) + 24LL));
    EngAcquireSemaphore(*(HSEMAPHORE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 32LL) + 776LL));
    --*(_DWORD *)(*((_QWORD *)this + 1) + 20LL);
    dhsurf = (DHSURF)*((_QWORD *)this + 1);
    if ( !*((_DWORD *)dhsurf + 5) )
    {
      EngModifySurface(
        *(HSURF *)(*(_QWORD *)this + 8LL),
        *(HDEV *)(*((_QWORD *)dhsurf + 4) + 48LL),
        0x394ABu,
        3u,
        dhsurf,
        0LL,
        0,
        0LL);
      dhsurf = (DHSURF)*((_QWORD *)this + 1);
    }
    EngReleaseSemaphore(*(HSEMAPHORE *)(*((_QWORD *)dhsurf + 4) + 776LL));
    *(_QWORD *)this = 0LL;
  }
}
