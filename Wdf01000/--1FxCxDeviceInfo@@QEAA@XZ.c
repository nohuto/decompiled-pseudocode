/*
 * XREFs of ??1FxCxDeviceInfo@@QEAA@XZ @ 0x1C003D4F4
 * Callers:
 *     ??1FxDevice@@UEAA@XZ @ 0x1C003D530 (--1FxDevice@@UEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxCxDeviceInfo::~FxCxDeviceInfo(FxCxDeviceInfo *this)
{
  FxCxPnpPowerCallbackContext **CxPnpPowerCallbackContexts; // rbx
  __int64 v2; // rdi

  CxPnpPowerCallbackContexts = this->CxPnpPowerCallbackContexts;
  v2 = 21LL;
  do
  {
    if ( *CxPnpPowerCallbackContexts )
      FxPoolFree((FX_POOL_TRACKER *)*CxPnpPowerCallbackContexts);
    ++CxPnpPowerCallbackContexts;
    --v2;
  }
  while ( v2 );
}
