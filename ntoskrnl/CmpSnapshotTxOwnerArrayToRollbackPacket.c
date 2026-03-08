/*
 * XREFs of CmpSnapshotTxOwnerArrayToRollbackPacket @ 0x140A1BB24
 * Callers:
 *     CmpTryAcquireIXLockWithRollbackPacket @ 0x14074C1BC (CmpTryAcquireIXLockWithRollbackPacket.c)
 * Callees:
 *     CmpAddUoWToRollbackPacket @ 0x140A1B6D0 (CmpAddUoWToRollbackPacket.c)
 *     CmpReserveRollbackPacketSpace @ 0x140A1B96C (CmpReserveRollbackPacketSpace.c)
 */

__int64 __fastcall CmpSnapshotTxOwnerArrayToRollbackPacket(unsigned int *a1, unsigned int *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v6; // rbp

  v2 = *a1;
  if ( !(_DWORD)v2 )
    __fastfail(5u);
  LODWORD(v2) = v2 & 0x7FFFFFFF;
  result = CmpReserveRollbackPacketSpace(a2, v2);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)v2 == 1 )
    {
      CmpAddUoWToRollbackPacket(a2, *((_QWORD *)a1 + 1));
    }
    else if ( (_DWORD)v2 )
    {
      v6 = 0LL;
      do
      {
        CmpAddUoWToRollbackPacket(a2, *(_QWORD *)(*((_QWORD *)a1 + 1) + v6));
        v6 += 8LL;
        --v2;
      }
      while ( v2 );
    }
    return 0LL;
  }
  return result;
}
