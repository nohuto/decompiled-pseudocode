/*
 * XREFs of ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C030B250
 * Callers:
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C033FB88 (-EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z.c)
 */

__int64 __fastcall DxgEscapeEvictByCriteria(struct _D3DKMT_VIDMM_ESCAPE *a1)
{
  DXGPROCESS *Current; // rax

  if ( a1->Type != D3DKMT_VIDMMESCAPETYPE_EVICT_BY_CRITERIA )
  {
    WdLogSingleEntry1(1LL, 412LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pVidMmEscape->Type == D3DKMT_VIDMMESCAPETYPE_EVICT_BY_CRITERIA",
      412LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  if ( Current )
    return DXGPROCESS::EvictAllResources(Current, &a1->EvictByCriteria);
  WdLogSingleEntry1(2LL, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid process context, returning 0x%I64x",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
