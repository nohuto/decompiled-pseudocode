/*
 * XREFs of HUBMISC_LogDescriptorValidationErrorForHub @ 0x1C00340B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x1C0014388 (McTemplateK0ppqq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall HUBMISC_LogDescriptorValidationErrorForHub(__int64 a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      return McTemplateK0ppqq_EtwWriteTransfer(a1, &USBHUB3_ETW_EVENT_DESCRIPTOR_VALIDATION_FAILURE, 0LL);
  }
  return result;
}
