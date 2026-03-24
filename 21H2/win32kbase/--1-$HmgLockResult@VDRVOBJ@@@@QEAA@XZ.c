/*
 * XREFs of ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00CB9AC
 * Callers:
 *     EngDeleteDriverObj @ 0x1C014C130 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C014C260 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C014C2B0 (EngUnlockDriverObj.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C002C080 (PopThreadGuardedObject.c)
 */

void __fastcall HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(_QWORD *a1)
{
  if ( *a1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(*a1 + 12LL));
    *a1 = 0LL;
  }
  PopThreadGuardedObject(a1 + 1);
}
