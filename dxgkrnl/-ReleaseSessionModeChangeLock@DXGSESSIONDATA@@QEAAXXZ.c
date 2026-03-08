/*
 * XREFs of ?ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0009224
 * Callers:
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C01AADDC (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGSESSIONDATA::ReleaseSessionModeChangeLock(DXGSESSIONDATA *this)
{
  char *v1; // r8
  bool v2; // zf
  char *v3; // rcx

  v1 = (char *)this + 18544;
  v2 = *((_QWORD *)this + 2319) == (_QWORD)KeGetCurrentThread();
  v3 = (char *)this + 18544;
  if ( v2 )
  {
    *((_QWORD *)v1 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v3, 0LL);
  }
  else
  {
    _InterlockedDecrement((volatile signed __int32 *)v1 + 4);
    ExReleasePushLockSharedEx(v3, 0LL);
  }
  KeLeaveCriticalRegion();
}
