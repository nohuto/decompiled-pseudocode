/*
 * XREFs of RtlNtStatusToDosError @ 0x140755BE0
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x14074E300 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x14074F18C (LocalGetAclForString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14074F708 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x14074FCB0 (LocalGetStringForSid.c)
 *     LocalConvertAclToString @ 0x14074FD70 (LocalConvertAclToString.c)
 *     LocalGetSidForString @ 0x140750A70 (LocalGetSidForString.c)
 *     EtwpEnumerateKeyProviders @ 0x1407FD288 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1407FD3E8 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnumerateAutologgerPath @ 0x14083C7E8 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x14083CA48 (EtwStartAutoLogger.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x1402C9C30 (RtlNtStatusToDosErrorNoTeb.c)
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
