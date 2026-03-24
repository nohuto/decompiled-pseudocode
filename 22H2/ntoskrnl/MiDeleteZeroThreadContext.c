/*
 * XREFs of MiDeleteZeroThreadContext @ 0x14054FB54
 * Callers:
 *     MiZeroNodePages @ 0x1403AB040 (MiZeroNodePages.c)
 *     MiZeroLargePageThread @ 0x1403AEB30 (MiZeroLargePageThread.c)
 *     MiZeroPageThread @ 0x1403CA4D0 (MiZeroPageThread.c)
 *     MiInitializePartitionThreads @ 0x1408C7CA4 (MiInitializePartitionThreads.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x14031C868 (MiDereferencePageRunsEx.c)
 *     MiDeleteUltraThreadContext @ 0x140357B5C (MiDeleteUltraThreadContext.c)
 *     MiSignalZeroingPassComplete @ 0x1403AEE6C (MiSignalZeroingPassComplete.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x14054FBA0 (MiDereferenceAnyActiveHugeContext.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteZeroThreadContext(_QWORD *P)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _DWORD *v4; // r9
  __int64 v5; // rcx

  MiDereferenceAnyActiveHugeContext();
  MiDeleteUltraThreadContext((__int64)(P + 11));
  MiSignalZeroingPassComplete((__int64)P, v2, v3, v4);
  v5 = P[30];
  if ( v5 )
    MiDereferencePageRunsEx(v5, 1);
  ExFreePoolWithTag(P, 0);
}
