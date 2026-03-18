/*
 * XREFs of RtlNtStatusToDosError @ 0x14069E070
 * Callers:
 *     LocalGetSidForString @ 0x140675CC0 (LocalGetSidForString.c)
 *     LocalGetAclForString @ 0x140675DA8 (LocalGetAclForString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140676314 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x140676AC0 (LocalGetStringForSid.c)
 *     LocalConvertAclToString @ 0x140676B80 (LocalConvertAclToString.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140743E60 (LocalConvertStringSDToSD_Rev1.c)
 *     EtwStartAutoLogger @ 0x140817CD8 (EtwStartAutoLogger.c)
 *     EtwpEnumerateKeyProviders @ 0x140818934 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1408226C0 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnumerateAutologgerPath @ 0x1408515A8 (EtwpEnumerateAutologgerPath.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x140225DA0 (RtlNtStatusToDosErrorNoTeb.c)
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
