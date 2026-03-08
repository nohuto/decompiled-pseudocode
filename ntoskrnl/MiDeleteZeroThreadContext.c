/*
 * XREFs of MiDeleteZeroThreadContext @ 0x140652704
 * Callers:
 *     MiInsertNewZeroThread @ 0x1403A72CC (MiInsertNewZeroThread.c)
 *     MiZeroNodeExiting @ 0x14065315C (MiZeroNodeExiting.c)
 * Callees:
 *     MiSignalZeroingPassComplete @ 0x1402E1384 (MiSignalZeroingPassComplete.c)
 *     MiDereferencePageRunsEx @ 0x1402EBA28 (MiDereferencePageRunsEx.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x1402F309C (MiDereferenceAnyActiveHugeContext.c)
 *     MiDeleteUltraThreadContext @ 0x14035137C (MiDeleteUltraThreadContext.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteZeroThreadContext(_QWORD *P)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  MiDereferenceAnyActiveHugeContext((__int64)P);
  MiDeleteUltraThreadContext((__int64)(P + 26));
  v2 = P[11];
  if ( v2 )
    MiSignalZeroingPassComplete(v2);
  v3 = P[49];
  if ( v3 )
    MiDereferencePageRunsEx(v3, 1);
  ExFreePoolWithTag(P, 0);
}
