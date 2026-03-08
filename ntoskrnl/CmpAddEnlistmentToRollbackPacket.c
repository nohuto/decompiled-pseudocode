/*
 * XREFs of CmpAddEnlistmentToRollbackPacket @ 0x140A1B628
 * Callers:
 *     CmSnapshotRMTxArray @ 0x14074C2A8 (CmSnapshotRMTxArray.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     CmpAddPointerToRollbackPacket @ 0x140A1B67C (CmpAddPointerToRollbackPacket.c)
 */

__int64 __fastcall CmpAddEnlistmentToRollbackPacket(__int64 a1, void *a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  ObfReferenceObject(a2);
  v4 = CmpAddPointerToRollbackPacket(a1, a2);
  v5 = v4;
  if ( v4 == -1073740008 )
  {
    v5 = 0;
  }
  else if ( v4 >= 0 )
  {
    return 0;
  }
  ObfDereferenceObject(a2);
  return v5;
}
