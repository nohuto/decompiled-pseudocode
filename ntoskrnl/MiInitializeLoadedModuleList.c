/*
 * XREFs of MiInitializeLoadedModuleList @ 0x140B5D84C
 * Callers:
 *     MiInitializeDriverImages @ 0x140B3B090 (MiInitializeDriverImages.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1402CB3A0 (RtlpxLookupFunctionTable.c)
 *     KasanDriverLoadImage @ 0x1402F4670 (KasanDriverLoadImage.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1402FE620 (RtlRemoveInvertedFunctionTable.c)
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 *     MiLinkHotPatchToBase @ 0x1406402B8 (MiLinkHotPatchToBase.c)
 *     MiConstructLoaderEntry @ 0x14072CE24 (MiConstructLoaderEntry.c)
 *     MiLockdownSections @ 0x14072E408 (MiLockdownSections.c)
 *     MmAcquireLoadLock @ 0x1407D2360 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407D2400 (MmReleaseLoadLock.c)
 *     MiFreeLoadedImportList @ 0x1407F6CA0 (MiFreeLoadedImportList.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x140828D60 (MiCaptureBootDriverRetpolineInfo.c)
 *     NtSetDebugFilterState @ 0x140828EB0 (NtSetDebugFilterState.c)
 *     MiAddEntryToImportList @ 0x140A282AC (MiAddEntryToImportList.c)
 *     MiBuildImportsForBootDrivers @ 0x140B5DAD4 (MiBuildImportsForBootDrivers.c)
 *     MiLocateKernelSections @ 0x140B5DE44 (MiLocateKernelSections.c)
 */

__int64 __fastcall MiInitializeLoadedModuleList(__int64 a1)
{
  bool v2; // r15
  __int64 v3; // rdi
  unsigned int *v4; // rsi
  unsigned int *v5; // rcx
  __int64 v6; // r14
  unsigned int *v7; // rcx
  int v8; // eax
  struct _KTHREAD *Lock; // rsi
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  PVOID *i; // rbx
  __int64 v13; // rdx
  unsigned int v15; // ebx
  unsigned __int64 v16; // rcx
  PVOID v17; // rdi
  _QWORD *v18; // rax
  __int128 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h]
  unsigned int *v21; // [rsp+80h] [rbp+30h] BYREF

  v21 = 0LL;
  qword_140C65548 = (__int64)&qword_140C65540;
  qword_140C65540 = (__int64)&qword_140C65540;
  v2 = (KiSpeculationFeatures & 0x20000000000LL) != 0 || (KiSpeculationFeatures & 0x40000000000LL) != 0;
  ExInitializeResourceLite(&PsLoadedModuleResource);
  ExpCovPushLock = 0LL;
  qword_140C2C848 = (__int64)&ExpCovUnloadedModuleList;
  ExpCovUnloadedModuleList = (__int64)&ExpCovUnloadedModuleList;
  *(&PsLoadedModuleList + 1) = &PsLoadedModuleList;
  PsLoadedModuleList = &PsLoadedModuleList;
  NtSetDebugFilterState(0x7Eu, 0, 1);
  v3 = *(_QWORD *)(a1 + 16);
  MiLocateKernelSections(v3);
  while ( v3 != a1 + 16 )
  {
    if ( (int)MiConstructLoaderEntry(v3, (const void **)(v3 + 88), (const void **)(v3 + 72), 0, 1, &v21) < 0 )
      return 0LL;
    *(_QWORD *)(v3 + 144) = v21;
    v4 = v21;
    v21[49] |= 0x100u;
    v5 = v21;
    if ( qword_140C65598 == v3 )
      qword_140C65598 = (__int64)v21;
    v6 = *((_QWORD *)v21 + 6);
    if ( v6 == PsNtosImageBase && (MiFlags & 0x40000) == 0 )
    {
      v15 = v21[16];
      v16 = *((_QWORD *)v21 + 6);
      v20 = 0LL;
      v19 = 0LL;
      RtlpxLookupFunctionTable(v16, (__int64)&v19);
      qword_140E00040 = v20;
      xmmword_140E00030 = v19;
      LODWORD(qword_140E00040) = v15;
      RtlRemoveInvertedFunctionTable(v6);
      v5 = v21;
    }
    MiLockdownSections((__int64)v5);
    if ( v2 )
    {
      v7 = v21;
      if ( (v21[26] & 0x800000) != 0 )
        goto LABEL_13;
      v8 = MiCaptureBootDriverRetpolineInfo(*((_QWORD *)v21 + 6), v21[16], (_QWORD *)v4 + 40);
      if ( ((v8 + 0x80000000) & 0x80000000) == 0 && v8 != -1073741637 )
        return 0LL;
    }
    v7 = v21;
LABEL_13:
    if ( (int)KasanDriverLoadImage((__int64)v7, 1) < 0 )
      return 0LL;
    v3 = *(_QWORD *)v3;
  }
  Lock = MmAcquireLoadLock();
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 3784LL);
  v11 = (_QWORD *)*v10;
  if ( (_QWORD *)*v10 != v10 )
  {
    do
    {
      if ( (v11[5] & 3) == 1 )
      {
        *(_QWORD *)(*(_QWORD *)(v11[10] + 144LL) + 280LL) = *(_QWORD *)(v11[11] + 144LL);
        MiLinkHotPatchToBase(*(_QWORD *)(v11[10] + 144LL), *(_QWORD *)(v11[11] + 144LL), *((_DWORD *)v11 + 17));
      }
      v11 = (_QWORD *)*v11;
    }
    while ( v11 != (_QWORD *)(*(_QWORD *)(a1 + 240) + 3784LL) );
  }
  MiBuildImportsForBootDrivers();
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( (*((_DWORD *)i + 49) & 0x20) == 0 )
    {
      v13 = (__int64)i[35];
      if ( v13 )
      {
        v17 = i[17];
        if ( v17 != (PVOID)1 )
        {
          v18 = MiAddEntryToImportList((__int64 *)i[17], v13);
          if ( !v18 )
            return 0LL;
          i[17] = v18;
          MiFreeLoadedImportList(v17);
        }
      }
    }
  }
  MmReleaseLoadLock((__int64)Lock);
  return 1LL;
}
