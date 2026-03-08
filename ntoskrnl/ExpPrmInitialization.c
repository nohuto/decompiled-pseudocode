/*
 * XREFs of ExpPrmInitialization @ 0x140B7157C
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140B3F0B8 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 */

char __fastcall ExpPrmInitialization(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *i; // rbx
  PVOID *v5; // rdi
  const UNICODE_STRING *v6; // rbp

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
  {
    v5 = (PVOID *)PsLoadedModuleList;
    if ( PsLoadedModuleList != &PsLoadedModuleList )
    {
      v6 = (const UNICODE_STRING *)(i[6] + 72LL);
      while ( !RtlEqualUnicodeString(v6, (PCUNICODE_STRING)(v5 + 9), 1u) )
      {
        v5 = (PVOID *)*v5;
        if ( v5 == &PsLoadedModuleList )
          goto LABEL_9;
      }
      i[6] = v5;
    }
LABEL_9:
    ;
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
