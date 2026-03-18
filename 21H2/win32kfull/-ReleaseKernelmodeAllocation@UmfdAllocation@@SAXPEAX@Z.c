/*
 * XREFs of ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C000B670
 * Callers:
 *     UmfdTrueTypeFreeGlyphset @ 0x1C000B5EC (UmfdTrueTypeFreeGlyphset.c)
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C00DD778 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C00DD940 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00DDA68 (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     UmfdDrvFree @ 0x1C010AD30 (UmfdDrvFree.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1C02DBF8C (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C000B73C (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

void __fastcall UmfdAllocation::ReleaseKernelmodeAllocation(char *a1)
{
  PVOID v1; // rbx
  char *v2; // rdi
  NSInstrumentation::CPointerHashTable *v3; // rcx
  const void *v5; // rdx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = UmfdAllocation::s_allocationLookupLock;
  v2 = a1 - 28;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  if ( (*(_DWORD *)v2)-- == 1 )
  {
    if ( UmfdAllocation::s_allocationLookup )
    {
      v5 = (const void *)*((_QWORD *)v2 + 2);
      if ( v5 )
      {
        v6 = 0LL;
        NSInstrumentation::CPointerHashTable::Remove(v3, v5, &v6);
      }
    }
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
    EngFreeMem(v2);
  }
  else
  {
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
  }
}
