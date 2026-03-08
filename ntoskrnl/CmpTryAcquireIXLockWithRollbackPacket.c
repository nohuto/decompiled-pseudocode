/*
 * XREFs of CmpTryAcquireIXLockWithRollbackPacket @ 0x14074C1BC
 * Callers:
 *     CmpTryAcquireKcbIXLocks @ 0x14074C150 (CmpTryAcquireKcbIXLocks.c)
 * Callees:
 *     CmpSnapshotTxOwnerArrayToRollbackPacket @ 0x140A1BB24 (CmpSnapshotTxOwnerArrayToRollbackPacket.c)
 */

__int64 __fastcall CmpTryAcquireIXLockWithRollbackPacket(int *a1, char a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax

  v3 = *a1;
  v4 = 0;
  if ( a2 )
  {
    if ( !v3 )
      return v4;
  }
  else if ( v3 >= 0 )
  {
    return v4;
  }
  if ( a3 )
  {
    v5 = CmpSnapshotTxOwnerArrayToRollbackPacket(a1, a3);
    if ( v5 >= 0 )
      return (unsigned int)-1073741267;
    return (unsigned int)v5;
  }
  else
  {
    return (unsigned int)-1072103423;
  }
}
