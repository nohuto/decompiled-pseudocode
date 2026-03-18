/*
 * XREFs of RtlNtStatusToDosError @ 0x1407AA930
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x14069BA60 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x14069C8EC (LocalGetAclForString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14069CE68 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x14069D410 (LocalGetStringForSid.c)
 *     LocalConvertAclToString @ 0x14069D4D0 (LocalConvertAclToString.c)
 *     LocalGetSidForString @ 0x14069E1D0 (LocalGetSidForString.c)
 *     EtwpEnumerateKeyProviders @ 0x14080B5F4 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14080B754 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnumerateAutologgerPath @ 0x14083DAD8 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x14083DD38 (EtwStartAutoLogger.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x140333FF0 (RtlNtStatusToDosErrorNoTeb.c)
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
