/*
 * XREFs of USBHUB_FreeBugCheck @ 0x1C004259C
 * Callers:
 *     UsbhDriverUnload @ 0x1C00433D0 (UsbhDriverUnload.c)
 * Callees:
 *     <none>
 */

void __fastcall USBHUB_FreeBugCheck(struct _KBUGCHECK_REASON_CALLBACK_RECORD *P)
{
  if ( P )
  {
    KeDeregisterBugCheckReasonCallback(P);
    ExFreePoolWithTag(P, 0);
  }
}
