/*
 * XREFs of ?InvokeCxCallback@FxPnpDeviceReleaseHardware@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x1C006D410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_sqqd @ 0x1C006DB8C (WPP_IFR_SF_sqqd.c)
 */

__int64 __fastcall FxPnpDeviceReleaseHardware::InvokeCxCallback(
        FxPnpDeviceReleaseHardware *this,
        FxCxPnpPowerCallbackContext *Context,
        FxCxInvokeCallbackSubType PrePost)
{
  int level; // eax
  unsigned int v6; // ebx
  const char *_a3; // r8
  const _GUID *v9; // [rsp+20h] [rbp-38h]

  if ( PrePost )
    level = ((__int64 (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *))Context->u.Generic.PostCallback)(
              this->m_Device,
              this->m_ResourcesTranslated);
  else
    level = ((__int64 (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *))Context->u.Generic.PreCallback)(
              this->m_Device,
              this->m_ResourcesTranslated);
  v6 = level;
  if ( level < 0 )
  {
    _a3 = "Pre";
    if ( PrePost )
      _a3 = "Post";
    WPP_IFR_SF_sqqd(
      this->m_PkgPnp->m_Globals,
      2u,
      (unsigned int)_a3,
      0x13u,
      v9,
      _a3,
      this->m_Device,
      this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
      level);
  }
  return v6;
}
