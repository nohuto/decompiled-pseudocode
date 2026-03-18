/*
 * XREFs of ?CompleteWithPriority@FxRequest@@QEAAJJD@Z @ 0x1C0049BBC
 * Callers:
 *     imp_WdfRequestCompleteWithPriorityBoost @ 0x1C004A140 (imp_WdfRequestCompleteWithPriorityBoost.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007EE0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C002EB50 (WPP_IFR_SF_qqqd.c)
 */

__int64 __fastcall FxRequest::CompleteWithPriority(
        FxRequest *this,
        unsigned int Status,
        __int64 PriorityBoost,
        unsigned __int16 a4)
{
  char v4; // si
  const void *_a1; // rax
  int _a4; // edx
  _FX_DRIVER_GLOBALS *v9; // r11

  v4 = PriorityBoost;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qqqd(
      v9,
      5u,
      0x10u,
      0xCu,
      WPP_FxRequest_hpp_Traceguids,
      _a1,
      this->m_Irp.m_Irp,
      this->m_Irp.m_Irp->IoStatus.Information,
      _a4);
  }
  this->m_PriorityBoost = v4;
  return FxRequest::CompleteInternal(this, (_FX_DRIVER_GLOBALS *)Status, PriorityBoost, a4);
}
