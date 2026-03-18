/*
 * XREFs of MiDeleteZeroThreadContext @ 0x140654D54
 * Callers:
 *     MiInsertNewZeroThread @ 0x1403AC75C (MiInsertNewZeroThread.c)
 *     MiZeroNodeExiting @ 0x1406557A8 (MiZeroNodeExiting.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x1402E92A4 (MiDeleteUltraThreadContext.c)
 *     MiSignalZeroingPassComplete @ 0x14034DD24 (MiSignalZeroingPassComplete.c)
 *     MiDereferencePageRunsEx @ 0x1403575E4 (MiDereferencePageRunsEx.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x14035E09C (MiDereferenceAnyActiveHugeContext.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
