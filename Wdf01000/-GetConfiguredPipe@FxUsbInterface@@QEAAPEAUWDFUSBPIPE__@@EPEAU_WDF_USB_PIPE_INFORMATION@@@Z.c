/*
 * XREFs of ?GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C005EF18
 * Callers:
 *     imp_WdfUsbInterfaceGetConfiguredPipe @ 0x1C0057A50 (imp_WdfUsbInterfaceGetConfiguredPipe.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C005A468 (-GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 */

WDFUSBPIPE__ *__fastcall FxUsbInterface::GetConfiguredPipe(
        FxUsbInterface *this,
        unsigned __int8 PipeIndex,
        _WDF_USB_PIPE_INFORMATION *PipeInfo)
{
  __int64 v5; // rdi

  if ( PipeIndex >= this->m_NumberOfConfiguredPipes )
    return 0LL;
  v5 = PipeIndex;
  if ( PipeInfo )
    FxUsbPipe::GetInformation(this->m_ConfiguredPipes[PipeIndex], PipeInfo);
  return (WDFUSBPIPE__ *)FxObject::GetObjectHandleUnchecked(this->m_ConfiguredPipes[v5]);
}
