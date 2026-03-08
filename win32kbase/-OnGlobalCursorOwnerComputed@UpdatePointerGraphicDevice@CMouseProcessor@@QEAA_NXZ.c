/*
 * XREFs of ?OnGlobalCursorOwnerComputed@UpdatePointerGraphicDevice@CMouseProcessor@@QEAA_NXZ @ 0x1C00C4C28
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C007D6BC (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 */

char __fastcall CMouseProcessor::UpdatePointerGraphicDevice::OnGlobalCursorOwnerComputed(
        CMouseProcessor::UpdatePointerGraphicDevice *this)
{
  _BYTE *v2; // rax
  char v3; // di

  RIMLockExclusive((__int64)this);
  v2 = (char *)this + 17;
  if ( !*((_BYTE *)this + 16) || (v3 = 1, !*v2) )
    v3 = 0;
  *((_BYTE *)this + 16) = 0;
  *v2 = 0;
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
