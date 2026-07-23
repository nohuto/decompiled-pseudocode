/*
 * XREFs of MmLockPagableDataSection @ 0x1406FE5A0
 * Callers:
 *     HalpPowerInitSystem @ 0x1409A09F0 (HalpPowerInitSystem.c)
 *     VfInitSystemNoRebootNeeded @ 0x1409C6D50 (VfInitSystemNoRebootNeeded.c)
 *     BgkpLockBgfxCodeSection @ 0x1409F3730 (BgkpLockBgfxCodeSection.c)
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 *     MiLockPagableSections @ 0x140A545BC (MiLockPagableSections.c)
 *     HeadlessInit @ 0x140A74260 (HeadlessInit.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     MiLockPagableImageSection @ 0x14029CB80 (MiLockPagableImageSection.c)
 *     RtlImageNtHeader @ 0x14029CFE0 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14029D260 (MI_IS_PHYSICAL_ADDRESS.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     MiLookupDataTableEntry @ 0x140358CCC (MiLookupDataTableEntry.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

PVOID __stdcall MmLockPagableDataSection(PVOID AddressWithinSection)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v3; // rbx
  _BYTE *v4; // rcx
  char *v5; // rsi
  PIMAGE_NT_HEADERS v6; // rax
  unsigned int NumberOfSections; // r10d
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
  v4 = *(_BYTE **)(MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 0) + 48);
  v5 = (char *)((_BYTE *)AddressWithinSection - v4);
  v6 = RtlImageNtHeader(v4);
  NumberOfSections = v6->FileHeader.NumberOfSections;
  v8 = (_DWORD *)((char *)&v6->OptionalHeader.Magic + v6->FileHeader.SizeOfOptionalHeader);
  v9 = 0;
  if ( v6->FileHeader.NumberOfSections )
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
      if ( ++v9 >= NumberOfSections )
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
