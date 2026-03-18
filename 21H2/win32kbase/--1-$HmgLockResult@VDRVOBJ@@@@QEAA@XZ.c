/*
 * XREFs of ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00DB880
 * Callers:
 *     EngDeleteDriverObj @ 0x1C01781D0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C01783E0 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C0178460 (EngUnlockDriverObj.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C00D8C28 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(_QWORD *a1)
{
  if ( *a1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(*a1 + 12LL));
    *a1 = 0LL;
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(a1 + 1);
}
