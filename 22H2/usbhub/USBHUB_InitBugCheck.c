/*
 * XREFs of USBHUB_InitBugCheck @ 0x1C00425D4
 * Callers:
 *     DriverEntry @ 0x1C00422D8 (DriverEntry.c)
 * Callees:
 *     <none>
 */

struct _KBUGCHECK_REASON_CALLBACK_RECORD *__fastcall USBHUB_InitBugCheck(
        PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine)
{
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *PoolWithTag; // rax
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *v3; // rbx

  PoolWithTag = (struct _KBUGCHECK_REASON_CALLBACK_RECORD *)ExAllocatePoolWithTag(
                                                              SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory),
                                                              0x30uLL,
                                                              0x42554855u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->Entry = 0LL;
    *(_OWORD *)&PoolWithTag->CallbackRoutine = 0LL;
    *(_OWORD *)&PoolWithTag->Checksum = 0LL;
    if ( !KeRegisterBugCheckReasonCallback(PoolWithTag, CallbackRoutine, KbCallbackSecondaryDumpData, (PUCHAR)"USBHUB") )
    {
      ExFreePoolWithTag(v3, 0);
      return 0LL;
    }
  }
  return v3;
}
