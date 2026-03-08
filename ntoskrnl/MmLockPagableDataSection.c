/*
 * XREFs of MmLockPagableDataSection @ 0x1407EBF70
 * Callers:
 *     DifMmLockPagableDataSectionWrapper @ 0x1405E4EE0 (DifMmLockPagableDataSectionWrapper.c)
 *     HalpPowerInitSystem @ 0x140A8D5A0 (HalpPowerInitSystem.c)
 *     VfInitDifWithoutReboot @ 0x140ABFC04 (VfInitDifWithoutReboot.c)
 *     VfInitSystemNoRebootNeeded @ 0x140ABFCE8 (VfInitSystemNoRebootNeeded.c)
 *     BgkpLockBgfxCodeSection @ 0x140AEBB60 (BgkpLockBgfxCodeSection.c)
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 *     HeadlessInit @ 0x140B484E0 (HeadlessInit.c)
 *     MiLockPagableSections @ 0x140B5F628 (MiLockPagableSections.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1402252E0 (MiLockPagableImageSection.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14032E710 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     MiLookupDataTableEntry @ 0x14035ECF0 (MiLookupDataTableEntry.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

PVOID __stdcall MmLockPagableDataSection(PVOID AddressWithinSection)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v3; // rbx
  __int64 v4; // rcx
  char *v5; // rsi
  __int64 v6; // rax
  unsigned int v7; // r10d
  _DWORD *v8; // rdx
  int v9; // ecx
  unsigned __int64 v10; // r8
  unsigned int v11; // eax

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
    return (PVOID)1;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  v4 = MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 0)[6];
  v5 = (char *)AddressWithinSection - v4;
  v6 = RtlImageNtHeader(v4);
  v7 = *(unsigned __int16 *)(v6 + 6);
  v8 = (_DWORD *)(*(unsigned __int16 *)(v6 + 20) + v6 + 24);
  v9 = 0;
  if ( *(_WORD *)(v6 + 6) )
  {
    while ( 1 )
    {
      v10 = (unsigned int)v8[3];
      v11 = v8[4];
      if ( (unsigned __int64)v5 >= v10 )
      {
        if ( v11 < v8[2] )
          v11 = v8[2];
        if ( (unsigned __int64)v5 < (unsigned int)v10 + v11 )
          break;
      }
      v8 += 10;
      if ( ++v9 >= v7 )
        goto LABEL_10;
    }
    v3 = v8;
  }
LABEL_10:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( !v3 )
    KeBugCheckEx(0x1Au, 0x1234uLL, (ULONG_PTR)AddressWithinSection, 0LL, 0LL);
  MiLockPagableImageSection((ULONG_PTR)v3, 1uLL);
  return v3;
}
