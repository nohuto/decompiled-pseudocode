/*
 * XREFs of ?FxUsbValidateConfigDescriptorHeaders@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@_K@Z @ 0x1C005BDBC
 * Callers:
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C005CA18 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_i @ 0x1C00458F4 (WPP_IFR_SF_i.c)
 *     WPP_IFR_SF_dii @ 0x1C005C068 (WPP_IFR_SF_dii.c)
 *     WPP_IFR_SF_idii @ 0x1C005C160 (WPP_IFR_SF_idii.c)
 */

__int64 __fastcall FxUsbValidateConfigDescriptorHeaders(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _USB_CONFIGURATION_DESCRIPTOR *ConfigDescriptor,
        __int64 ConfigDescriptorLength)
{
  _USB_CONFIGURATION_DESCRIPTOR *v3; // r9
  _USB_CONFIGURATION_DESCRIPTOR *v5; // r10
  __int64 level; // rax
  unsigned __int8 *v7; // rcx
  const _GUID *_a1; // [rsp+20h] [rbp-38h]
  int globals; // [rsp+28h] [rbp-30h]

  v3 = (_USB_CONFIGURATION_DESCRIPTOR *)((char *)ConfigDescriptor + ConfigDescriptorLength);
  v5 = ConfigDescriptor;
  if ( ConfigDescriptor >= (_USB_CONFIGURATION_DESCRIPTOR *)((char *)ConfigDescriptor + ConfigDescriptorLength) )
    return 0LL;
  while ( &v5->wTotalLength <= (unsigned __int16 *)v3 )
  {
    level = v5->bLength;
    v7 = &v5->bLength + level;
    if ( (_USB_CONFIGURATION_DESCRIPTOR *)((char *)v5 + level) > v3 )
    {
      WPP_IFR_SF_idii(
        FxDriverGlobals,
        (unsigned __int8)ConfigDescriptor,
        ConfigDescriptorLength,
        (_WORD)v3 - (_WORD)v5,
        _a1,
        (char *)v5 - (char *)ConfigDescriptor,
        level,
        (char *)v3 - (char *)v5,
        ConfigDescriptorLength);
      return 3221225485LL;
    }
    if ( !(_BYTE)level )
    {
      WPP_IFR_SF_i(
        FxDriverGlobals,
        (unsigned __int8)ConfigDescriptor,
        0xEu,
        0xDu,
        WPP_usbutil_cpp_Traceguids,
        (char *)v5 - (char *)ConfigDescriptor);
      return 3221225485LL;
    }
    v5 = (_USB_CONFIGURATION_DESCRIPTOR *)((char *)v5 + level);
    if ( v7 >= (unsigned __int8 *)v3 )
      return 0LL;
  }
  WPP_IFR_SF_dii(
    FxDriverGlobals,
    (unsigned __int8)ConfigDescriptor,
    ConfigDescriptorLength,
    (unsigned __int16)v3,
    _a1,
    globals,
    (char *)v5 - (char *)ConfigDescriptor,
    ConfigDescriptorLength);
  return 3221225485LL;
}
