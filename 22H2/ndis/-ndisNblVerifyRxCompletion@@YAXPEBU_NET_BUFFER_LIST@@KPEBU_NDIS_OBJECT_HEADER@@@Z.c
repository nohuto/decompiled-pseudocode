/*
 * XREFs of ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0075278
 * Callers:
 *     NdisReturnNetBufferLists @ 0x1C00044C0 (NdisReturnNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C0007190 (NdisFReturnNetBufferLists.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1C00751B0 (datapathVerifierReportProblem.c)
 *     verifySingleRxNbl @ 0x1C0075948 (verifySingleRxNbl.c)
 */

void __fastcall ndisNblVerifyRxCompletion(ULONG_PTR BugCheckParameter4, unsigned int a2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR v6; // r14
  __int16 v7; // bp
  __int16 i; // bx
  __int16 v9; // ax

  v3 = a2;
  if ( (a2 & 1) != 0 && KeGetCurrentIrql() != 2 )
    datapathVerifierReportProblem(0x20uLL, BugCheckParameter3, KeGetCurrentIrql());
  if ( (v3 & 0xFFFFFFF8) != 0 )
    datapathVerifierReportProblem(1uLL, BugCheckParameter3, v3);
  v6 = BugCheckParameter4;
  v7 = 0;
  for ( i = 0; v6; i |= ~v9 )
  {
    verifySingleRxNbl(v6, BugCheckParameter3);
    v9 = *(_WORD *)(v6 + 258);
    v6 = *(_QWORD *)v6;
    v7 |= v9;
  }
  if ( (v3 & 2) != 0 && v7 != ~i )
    datapathVerifierReportProblem(0x23uLL, BugCheckParameter3, BugCheckParameter4);
}
