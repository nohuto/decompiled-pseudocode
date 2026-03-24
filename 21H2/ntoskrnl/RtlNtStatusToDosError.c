/*
 * XREFs of RtlNtStatusToDosError @ 0x14068A4C0
 * Callers:
 *     LocalConvertAclToString @ 0x140673794 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140676E30 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1407875B4 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1407878AC (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x140787E40 (LocalGetSidForString.c)
 *     EtwpEnumerateKeyProviders @ 0x140794898 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1407949F4 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnumerateAutologgerPath @ 0x14079B324 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x14079B594 (EtwStartAutoLogger.c)
 *     LocalGetStringForSid @ 0x1409260E0 (LocalGetStringForSid.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x1402A2200 (RtlNtStatusToDosErrorNoTeb.c)
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
