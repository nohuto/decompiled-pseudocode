/*
 * XREFs of RtlNtStatusToDosError @ 0x1405E9950
 * Callers:
 *     LocalConvertAclToString @ 0x1406689C4 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14066A500 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140787774 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x140787A6C (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x140788000 (LocalGetSidForString.c)
 *     EtwpEnumerateKeyProviders @ 0x1407946F0 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14079484C (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnumerateAutologgerPath @ 0x14079B524 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x14079B794 (EtwStartAutoLogger.c)
 *     LocalGetStringForSid @ 0x140926240 (LocalGetStringForSid.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x14021F640 (RtlNtStatusToDosErrorNoTeb.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *Teb; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) == 0 && CurrentThread->ApcStateIndex != 1 )
  {
    Teb = CurrentThread->Teb;
    if ( Teb )
      Teb[1172] = Status;
  }
  return RtlNtStatusToDosErrorNoTeb(Status);
}
