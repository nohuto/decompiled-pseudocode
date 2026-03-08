/*
 * XREFs of KiAcquireTimer2LockUnlessDisabled @ 0x14024EAC8
 * Callers:
 *     KeDisableTimer2 @ 0x140204028 (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x140204390 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 */

bool __fastcall KiAcquireTimer2LockUnlessDisabled(__int64 a1)
{
  KiAcquireKobjectLockSafe(a1);
  if ( (*(_BYTE *)(a1 + 1) & 0x20) != 0 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return (*(_BYTE *)(a1 + 1) & 0x20) != 0;
}
