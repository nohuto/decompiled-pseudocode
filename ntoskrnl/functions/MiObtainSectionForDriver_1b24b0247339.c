__int64 __fastcall MiObtainSectionForDriver(
        PCUNICODE_STRING String1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 *Object)
{
  __int64 *v5; // rsi
  struct _KTHREAD *CurrentThread; // r15
  __int64 *v9; // rdi
  PVOID *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ebx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int16 v18; // r8
  __int64 TempLoaderEntry; // rax
  int SystemRegionType; // eax
  __int64 DataTableEntryBySection; // rax

  v5 = Object;
  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  v9 = 0LL;
  *v5 = 0LL;
  while ( 1 )
  {
    v12 = (PVOID *)PsLoadedModuleList;
    if ( PsLoadedModuleList != &PsLoadedModuleList )
    {
      while ( !RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(v12 + 9), 1u) )
      {
        v12 = (PVOID *)*v12;
        if ( v12 == &PsLoadedModuleList )
          goto LABEL_5;
      }
LABEL_16:
      if ( v9 )
        ObDereferenceObjectDeferDelete(v9);
      SystemRegionType = MiGetSystemRegionType((unsigned __int64)v12[6]);
      if ( (a4 & 1) != 0 )
      {
        if ( SystemRegionType == 1 )
        {
LABEL_20:
          *v5 = (__int64)v12;
          return 272LL;
        }
      }
      else if ( SystemRegionType != 1 )
      {
        goto LABEL_20;
      }
      return 3221225496LL;
    }
LABEL_5:
    if ( v9 )
    {
      TempLoaderEntry = MiAllocateTempLoaderEntry(v9);
      if ( TempLoaderEntry )
      {
        *v5 = TempLoaderEntry;
        return 0LL;
      }
      v15 = -1073741670;
      goto LABEL_30;
    }
    if ( !a3 )
      MmReleaseLoadLock(CurrentThread);
    v15 = MiCreateSectionForDriver(a2, a3, a4, &Object);
    if ( !a3 )
      MmAcquireLoadLock(v14, v13, 0LL);
    if ( v15 < 0 )
      return (unsigned int)v15;
    v9 = Object;
    v16 = MiSectionControlArea((__int64)Object);
    v17 = *(_QWORD *)(*(_QWORD *)v16 + 56LL);
    if ( *(__int16 *)(v17 + 46) < v18 && *(_DWORD *)(v17 + 32) == 1 && (a4 & 1) == 0 )
      break;
    if ( (a4 & 0x40000000) != 0 )
    {
      DataTableEntryBySection = MiFindDataTableEntryBySection(v16);
      v12 = (PVOID *)DataTableEntryBySection;
      if ( DataTableEntryBySection )
        goto LABEL_16;
    }
  }
  v15 = -1073741800;
LABEL_30:
  ObDereferenceObjectDeferDelete(v9);
  return (unsigned int)v15;
}
