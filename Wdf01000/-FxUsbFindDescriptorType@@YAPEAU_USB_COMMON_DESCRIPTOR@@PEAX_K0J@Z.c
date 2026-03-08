/*
 * XREFs of ?FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z @ 0x1C005BD14
 * Callers:
 *     ?FxUsbParseConfigurationDescriptor@@YAPEAU_USB_INTERFACE_DESCRIPTOR@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@EE@Z @ 0x1C005BD40 (-FxUsbParseConfigurationDescriptor@@YAPEAU_USB_INTERFACE_DESCRIPTOR@@PEAU_USB_CONFIGURATION_DESC.c)
 *     ?FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX2J_KW4FxUsbValidateDescriptorOp@@K@Z @ 0x1C005BE68 (-FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C005CA18 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x1C005EB4C (-CreateSettings@FxUsbInterface@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

_USB_COMMON_DESCRIPTOR *__fastcall FxUsbFindDescriptorType(
        char *Buffer,
        unsigned __int64 BufferLength,
        unsigned __int8 *Start,
        int DescriptorType)
{
  while ( 1 )
  {
    if ( Start >= (unsigned __int8 *)&Buffer[BufferLength] )
      return 0LL;
    if ( Start[1] == DescriptorType )
      break;
    Start += *Start;
  }
  return (_USB_COMMON_DESCRIPTOR *)Start;
}
