/*
 * XREFs of RtlNtStatusToDosError @ 0x14066C040
 * Callers:
 *     LocalConvertAclToString @ 0x1406EC584 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406EFC20 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1407874B4 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1407877AC (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x140787D40 (LocalGetSidForString.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407961B4 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x140796424 (EtwStartAutoLogger.c)
 *     EtwpEnumerateKeyProviders @ 0x140797DFC (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140797F58 (EtwpEnableAutoLoggerProvider.c)
 *     LocalGetStringForSid @ 0x140926130 (LocalGetStringForSid.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x1402FAA50 (RtlNtStatusToDosErrorNoTeb.c)
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
