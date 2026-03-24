/*
 * XREFs of ?Release@DXGAUTOEXPUSHLOCK@@QEAAXXZ @ 0x1C0002250
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008C500 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGAUTOEXPUSHLOCK::Release(DXGAUTOEXPUSHLOCK *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4);
  if ( v1 == 1 )
  {
    *((_DWORD *)this + 4) = 0;
    ExReleasePushLockSharedEx(*((_QWORD *)this + 1), 0LL);
  }
  else if ( v1 == 2 )
  {
    *((_DWORD *)this + 4) = 0;
    ExReleasePushLockExclusiveEx(*((_QWORD *)this + 1), 0LL);
  }
}
