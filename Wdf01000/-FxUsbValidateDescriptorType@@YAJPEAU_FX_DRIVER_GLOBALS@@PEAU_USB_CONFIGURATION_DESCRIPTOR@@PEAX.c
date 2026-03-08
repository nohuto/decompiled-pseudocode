/*
 * XREFs of ?FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX2J_KW4FxUsbValidateDescriptorOp@@K@Z @ 0x1C005BE68
 * Callers:
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C005CA18 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x1C005EB4C (-CreateSettings@FxUsbInterface@@QEAAJXZ.c)
 * Callees:
 *     ?FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z @ 0x1C005BD14 (-FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z.c)
 *     WPP_IFR_SF_ddiid @ 0x1C005BF34 (WPP_IFR_SF_ddiid.c)
 */

__int64 __fastcall FxUsbValidateDescriptorType(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _USB_CONFIGURATION_DESCRIPTOR *ConfigDescriptor,
        char *Start,
        _BYTE *End,
        int DescriptorType,
        unsigned __int64 SizeToValidate,
        FxUsbValidateDescriptorOp MaximumNumDescriptorsToValidate,
        unsigned int FxDriverGlobals_0)
{
  unsigned __int64 v8; // rbp
  char *v9; // r14
  _USB_COMMON_DESCRIPTOR *v12; // rax
  unsigned __int8 v13; // dl
  unsigned int v14; // r8d
  int _a4; // r11d
  _USB_COMMON_DESCRIPTOR *v16; // rcx
  unsigned __int64 flags; // rax
  const _GUID *v19; // [rsp+20h] [rbp-48h]

  v8 = End - Start;
  v9 = Start;
  while ( 1 )
  {
    v12 = FxUsbFindDescriptorType(v9, v8, (unsigned __int8 *)Start, DescriptorType);
    v16 = v12;
    if ( !v12 )
      break;
    flags = v12->bLength;
    if ( flags < SizeToValidate )
    {
      WPP_IFR_SF_ddiid(
        FxDriverGlobals,
        v13,
        v14,
        0xFu,
        v19,
        _a4,
        DescriptorType,
        (char *)v16 - (char *)ConfigDescriptor,
        SizeToValidate,
        flags);
      return 3221225485LL;
    }
    if ( FxDriverGlobals_0 && _a4 == FxDriverGlobals_0 )
      break;
    Start = (char *)(&v16->bLength + flags);
  }
  return 0LL;
}
