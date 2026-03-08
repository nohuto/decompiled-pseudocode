/*
 * XREFs of USBHUB_InitBugCheck @ 0x1C0041BF4
 * Callers:
 *     DriverEntry @ 0x1C0041964 (DriverEntry.c)
 * Callees:
 *     <none>
 */

struct _KBUGCHECK_REASON_CALLBACK_RECORD *__fastcall USBHUB_InitBugCheck(
        PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine)
{
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *Pool2; // rax
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *v3; // rbx

  Pool2 = (struct _KBUGCHECK_REASON_CALLBACK_RECORD *)ExAllocatePool2(64LL, 48LL, 1112885333LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    Pool2->State = 0;
    if ( !KeRegisterBugCheckReasonCallback(Pool2, CallbackRoutine, KbCallbackSecondaryDumpData, (PUCHAR)"USBHUB") )
    {
      ExFreePoolWithTag(v3, 0);
      return 0LL;
    }
  }
  return v3;
}
