/*
 * XREFs of ?OnGlobalCursorOwnerComputed@UpdatePointerGraphicDevice@CMouseProcessor@@QEAA_NXZ @ 0x1C00B7730
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0033B48 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 */

char __fastcall CMouseProcessor::UpdatePointerGraphicDevice::OnGlobalCursorOwnerComputed(
        CMouseProcessor::UpdatePointerGraphicDevice *this)
{
  char v2; // di

  RIMLockExclusive((__int64)this);
  if ( !*((_BYTE *)this + 16) || (v2 = 1, !*((_BYTE *)this + 17)) )
    v2 = 0;
  *((_WORD *)this + 8) = 0;
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
