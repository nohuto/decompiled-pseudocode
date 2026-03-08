/*
 * XREFs of ?QueryMitigatedRanges@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGES@@@Z @ 0x1C036A8E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::QueryMitigatedRanges(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_QUERYMITIGATEDRANGES *a2)
{
  ULONG NumRanges; // eax

  NumRanges = a2->NumRanges;
  if ( !NumRanges )
    return 0LL;
  WdLogSingleEntry1(2LL, NumRanges);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid mitigation range count: 0x%I64x",
    a2->NumRanges,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
