/*
 * XREFs of ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800A4C98
 * Callers:
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z @ 0x1800A4B3C (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z.c)
 *     ?OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180216E80 (-OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x180049280 (-GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ.c)
 */

void __fastcall CWindowBackgroundTreatment::UpdateBackdropFlags(CBrush **this, __int64 a2)
{
  struct CBrushRenderingGraph *BrushGraph; // rax
  CBrush *v4; // rdx

  BrushGraph = CBrush::GetBrushGraph(this[9], a2);
  v4 = 0LL;
  *((_BYTE *)this + 303) = 0;
  if ( BrushGraph )
  {
    if ( this != (CBrush **)-303LL )
      *((_BYTE *)this + 303) = *((_BYTE *)BrushGraph + 196);
    v4 = (CBrush *)*((_QWORD *)BrushGraph + 26);
  }
  this[38] = v4;
}
