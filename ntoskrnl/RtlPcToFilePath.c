/*
 * XREFs of RtlPcToFilePath @ 0x1408A16F0
 * Callers:
 *     KitLogFeatureUsage @ 0x14060C7C0 (KitLogFeatureUsage.c)
 *     EtwpProviderArrivalCallback @ 0x140775208 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 */

__int64 __fastcall RtlPcToFilePath(unsigned __int64 a1, UNICODE_STRING *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v5; // r8
  unsigned int v6; // ebx
  PVOID *v7; // rdx
  PVOID v8; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v5 = (PVOID *)PsLoadedModuleList;
  v6 = 0;
  if ( PsLoadedModuleList )
  {
    while ( v5 != &PsLoadedModuleList )
    {
      v7 = v5;
      v5 = (PVOID *)*v5;
      v8 = v7[6];
      if ( a1 >= (unsigned __int64)v8 && a1 < (unsigned __int64)v8 + *((unsigned int *)v7 + 16) )
      {
        RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(v7 + 9));
        goto LABEL_7;
      }
    }
  }
  v6 = -1073741275;
LABEL_7:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegion();
  return v6;
}
