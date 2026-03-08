/*
 * XREFs of PpvUtilIsPdo @ 0x140ABF024
 * Callers:
 *     IovUtilIsWdmStack @ 0x140ACFCB0 (IovUtilIsWdmStack.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140AE4140 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     <none>
 */

bool __fastcall PpvUtilIsPdo(__int64 a1)
{
  __int64 v1; // rcx

  return a1 && (v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) != 0 && (*(_DWORD *)(v1 + 396) & 0x20000) == 0;
}
