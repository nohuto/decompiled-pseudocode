/*
 * XREFs of ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00D2E04
 * Callers:
 *     EngDeleteDriverObj @ 0x1C016B1A0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C016B2C0 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C016B320 (EngUnlockDriverObj.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003CB00 (PopThreadGuardedObject.c)
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
