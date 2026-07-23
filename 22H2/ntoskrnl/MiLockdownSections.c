/*
 * XREFs of MiLockdownSections @ 0x14075DD54
 * Callers:
 *     MiConstructLoaderEntry @ 0x14075D5C0 (MiConstructLoaderEntry.c)
 *     MiInitializeLoadedModuleList @ 0x140A55E9C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14029CFE0 (RtlImageNtHeader.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     RtlSetBits @ 0x1402D9750 (RtlSetBits.c)
 *     MiUnlockLoaderEntry @ 0x140358A50 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x140358C88 (MiLockLoaderEntry.c)
 */

char __fastcall MiLockdownSections(__int64 a1)
{
  void *v1; // r15
  __int64 v2; // rsi
  int v3; // ebx
  int SystemRegionType; // eax
  int v5; // edi
  PIMAGE_NT_HEADERS v6; // rbx
  __int64 v7; // r14
  int NumberOfSections; // ebp
  _RTL_BITMAP *v9; // r12
  _DWORD *v10; // rbx
  BOOL v11; // eax
  int v12; // edx
  unsigned int v13; // ecx

  v1 = *(void **)(a1 + 48);
  v2 = a1 + 160;
  v3 = 0;
  if ( (MiFlags & 0x10000) != 0 && (!*(_QWORD *)(a1 + 112) || (*(_DWORD *)(a1 + 196) & 2) != 0) )
    v3 = 2;
  SystemRegionType = MiGetSystemRegionType(*(_QWORD *)(a1 + 48));
  v5 = v3 | 1;
  if ( SystemRegionType == 1 )
    v5 = v3;
  if ( v5 )
  {
    v6 = RtlImageNtHeader(v1);
    v7 = v6->FileHeader.SizeOfOptionalHeader + 60LL;
    MiLockLoaderEntry(v2, 0LL);
    NumberOfSections = v6->FileHeader.NumberOfSections;
    v9 = *(_RTL_BITMAP **)(v2 + 112);
    if ( v6->FileHeader.NumberOfSections )
    {
      v10 = (unsigned int *)((char *)&v6->Signature + v7);
      do
      {
        v11 = 0;
        if ( *(v10 - 9) == 1987011374 )
          v11 = *((_WORD *)v10 - 16) == 29285;
        v12 = v11 | 2;
        if ( (*v10 & 0x20000000) == 0 )
          v12 = v11;
        if ( (v12 & v5) != 0 )
        {
          v13 = *(v10 - 5);
          if ( v13 < *(v10 - 7) )
            v13 = *(v10 - 7);
          RtlSetBits(
            v9,
            *(v10 - 6) >> 12,
            ((((unsigned __int64)v1 + *(v10 - 6) + v13 + 4095) & 0xFFFFFFFFFFFFF000uLL)
           - ((unsigned __int64)v1
            + (unsigned int)*(v10 - 6))) >> 12);
        }
        --NumberOfSections;
        v10 += 10;
      }
      while ( NumberOfSections > 0 );
    }
    LOBYTE(SystemRegionType) = MiUnlockLoaderEntry(v2, 0);
  }
  return SystemRegionType;
}
