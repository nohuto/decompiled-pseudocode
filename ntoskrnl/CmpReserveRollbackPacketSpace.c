/*
 * XREFs of CmpReserveRollbackPacketSpace @ 0x140A1B96C
 * Callers:
 *     CmSnapshotRMTxArray @ 0x14074C2A8 (CmSnapshotRMTxArray.c)
 *     CmpSnapshotTxOwnerArrayToRollbackPacket @ 0x140A1BB24 (CmpSnapshotTxOwnerArrayToRollbackPacket.c)
 * Callees:
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall CmpReserveRollbackPacketSpace(unsigned int *a1, unsigned int a2)
{
  __int64 v3; // rbp
  int v4; // ecx
  unsigned int v5; // edi
  unsigned int v6; // r14d
  char *Pool; // rax
  char *v8; // rsi
  struct _PRIVILEGE_SET *v9; // rcx

  v3 = a2;
  v4 = *a1;
  v5 = 0;
  if ( a1[1] - v4 < a2 )
  {
    v6 = v4 + a2;
    Pool = (char *)CmpAllocatePool(256LL, 8LL * (v4 + a2), 909397315LL);
    v8 = Pool;
    if ( Pool )
    {
      memmove(Pool, *((const void **)a1 + 1), 8LL * *a1);
      memset(&v8[8 * *a1], 0, 8 * v3);
      v9 = (struct _PRIVILEGE_SET *)*((_QWORD *)a1 + 1);
      if ( v9 )
        CmSiFreeMemory(v9);
      *((_QWORD *)a1 + 1) = v8;
      a1[1] = v6;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v5;
}
