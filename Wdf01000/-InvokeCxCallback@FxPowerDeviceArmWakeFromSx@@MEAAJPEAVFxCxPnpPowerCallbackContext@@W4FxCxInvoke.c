/*
 * XREFs of ?InvokeCxCallback@FxPowerDeviceArmWakeFromSx@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x1C006D7D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_sqqd @ 0x1C006DB8C (WPP_IFR_SF_sqqd.c)
 */

__int64 __fastcall FxPowerDeviceArmWakeFromSx::InvokeCxCallback(
        FxPowerDeviceArmWakeFromSx *this,
        FxCxPnpPowerCallbackContext *Context,
        __int64 PrePost)
{
  char v3; // si
  __int64 (__fastcall *PostCallback)(WDFDEVICE__ *, FxCxPnpPowerCallbackContext *, __int64); // rax
  unsigned int level; // ebx
  unsigned __int16 v7; // r9
  int v8; // eax
  const char *_a3; // rdx
  const _GUID *v11; // [rsp+20h] [rbp-38h]

  v3 = PrePost;
  if ( Context->m_CallbackType == FxCxCallbackArmWakeFromSxWithReason )
  {
    if ( (_BYTE)PrePost )
      PostCallback = (__int64 (__fastcall *)(WDFDEVICE__ *, FxCxPnpPowerCallbackContext *, __int64))Context->u.Generic.PostCallback;
    else
      PostCallback = (__int64 (__fastcall *)(WDFDEVICE__ *, FxCxPnpPowerCallbackContext *, __int64))Context->u.Generic.PreCallback;
    LOBYTE(PrePost) = this->m_ChildrenArmedForWake;
    LOBYTE(Context) = this->m_DeviceWakeEnabled;
    level = PostCallback(this->m_Device, Context, PrePost);
    if ( (level & 0x80000000) == 0 )
      return level;
    v7 = 32;
  }
  else
  {
    if ( (_BYTE)PrePost )
      v8 = ((__int64 (__fastcall *)(WDFDEVICE__ *))Context->u.Generic.PostCallback)(this->m_Device);
    else
      v8 = ((__int64 (__fastcall *)(WDFDEVICE__ *))Context->u.Generic.PreCallback)(this->m_Device);
    level = v8;
    if ( v8 >= 0 )
      return level;
    v7 = 33;
  }
  _a3 = "Pre";
  if ( v3 )
    _a3 = "Post";
  WPP_IFR_SF_sqqd(
    this->m_PkgPnp->m_Globals,
    2u,
    (unsigned int)"Post",
    v7,
    v11,
    _a3,
    this->m_Device,
    this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
    level);
  return level;
}
