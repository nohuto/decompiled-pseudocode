/*
 * XREFs of ObCheckRefTraceProcess @ 0x14070E7D8
 * Callers:
 *     PspInsertProcess @ 0x14070E514 (PspInsertProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     PsGetProcessImageFileName @ 0x1402E1550 (PsGetProcessImageFileName.c)
 *     RtlPrefixUnicodeString @ 0x1406D5A70 (RtlPrefixUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 */

NTSTATUS __fastcall ObCheckRefTraceProcess(__int64 a1)
{
  NTSTATUS result; // eax
  const char *ProcessImageFileName; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rax
  STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  String1 = 0LL;
  if ( (ObpTraceFlags & 0x20) == 0 )
    return 0;
  ProcessImageFileName = (const char *)PsGetProcessImageFileName(a1);
  RtlInitAnsiString(&DestinationString, ProcessImageFileName);
  if ( !DestinationString.Length )
    return 0;
  result = RtlAnsiStringToUnicodeString(&String1, &DestinationString, 1u);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
    if ( (ObpTraceFlags & 0x20) != 0 && RtlPrefixUnicodeString(&String1, ObpTraceProcessName, 1u) )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1120), 0x200u);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    v5 = KeGetCurrentThread();
    if ( v5->SpecialApcDisable++ == -1
      && ($C71981A45BEB2B45F82C232A7085991E *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    RtlFreeUnicodeString(&String1);
    return 0;
  }
  return result;
}
