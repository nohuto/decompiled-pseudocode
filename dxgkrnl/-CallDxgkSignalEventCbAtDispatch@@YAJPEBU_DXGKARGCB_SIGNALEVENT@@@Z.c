/*
 * XREFs of ?CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x1C004C584
 * Callers:
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0302CC0 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     DxgkSignalEventCB @ 0x1C005CF90 (DxgkSignalEventCB.c)
 */

__int64 __fastcall CallDxgkSignalEventCbAtDispatch(struct _DXGKARGCB_SIGNALEVENT *a1)
{
  KIRQL v2; // di

  v2 = KfRaiseIrql(2u);
  LODWORD(a1) = DxgkSignalEventCB(a1);
  KeLowerIrql(v2);
  return (unsigned int)a1;
}
