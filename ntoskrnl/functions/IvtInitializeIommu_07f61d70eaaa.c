__int64 __fastcall IvtInitializeIommu(__int64 a1, int a2, char a3)
{
  int v3; // r13d
  int v4; // eax
  char v5; // r15
  unsigned __int16 v7; // r12
  unsigned int v8; // edx
  __int64 result; // rax
  _DWORD *v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  LARGE_INTEGER v13; // rax
  PVOID v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  LARGE_INTEGER v17; // rax
  PVOID v18; // rax
  char v19; // r15
  char ContextEntryType; // al
  __int64 *v21; // rcx
  __int64 *v22; // r9
  __int64 v23; // r8
  __int64 v24; // rax
  LARGE_INTEGER v25; // rax
  __int64 *v26; // rax
  __int64 *v27; // r8
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  LARGE_INTEGER v30; // rax
  PVOID v31; // rax
  unsigned int v32; // r12d
  unsigned __int64 *v33; // r13
  _QWORD *v34; // r15
  __int64 v35; // rax
  PVOID v36; // rax
  __int64 v37; // rcx
  int v38; // r12d
  unsigned int v39; // r13d
  unsigned int v40; // r15d
  LARGE_INTEGER v41; // rax
  PVOID v42; // rax
  unsigned int v43; // ecx
  __int64 v44; // rbx
  __int64 v45; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  int v47; // ecx
  unsigned __int16 IdentityMappedDomain; // ax
  __int64 v49; // rcx
  __int64 v50; // rcx
  _QWORD *v51; // r8
  _QWORD *v52; // r11
  __int64 v53; // r8
  signed __int32 v54[8]; // [rsp+8h] [rbp-79h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-59h]
  char v56; // [rsp+48h] [rbp-39h]
  unsigned int v57; // [rsp+4Ch] [rbp-35h]
  int v58; // [rsp+50h] [rbp-31h]
  __int64 v59; // [rsp+58h] [rbp-29h] BYREF
  int v60; // [rsp+60h] [rbp-21h]
  unsigned int v61; // [rsp+64h] [rbp-1Dh]
  __int128 v62; // [rsp+68h] [rbp-19h] BYREF
  __int128 v63; // [rsp+78h] [rbp-9h] BYREF
  _OWORD v64[2]; // [rsp+88h] [rbp+7h] BYREF

  v3 = *(_DWORD *)(a1 + 308);
  v57 = *(_DWORD *)(a1 + 304);
  v4 = *(_DWORD *)(a1 + 312);
  v60 = v4;
  v5 = a3;
  v56 = a3;
  v61 = 0;
  v7 = 0;
  v58 = v3;
  v59 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  memset(v64, 0, sizeof(v64));
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      if ( v4 )
      {
        IvtInvalidateRemappingTableEntries(a1, 0LL);
        IvtUpdateGlobalCommand(a1, 0x2000000u, 1);
      }
      if ( !v3 )
        return 0LL;
      IvtInvalidateAllContextEntries(a1);
      if ( *(_BYTE *)(a1 + 320) )
        IvtInvalidateScalableModePasidCache(a1, 0xFFFFu, 0x10000LL, -1, 0, 0, 0);
      IvtFlushTbInternal(a1, 0, 0LL, 1, 0LL, 0LL, 0, 0LL);
      v8 = 0x80000000;
LABEL_73:
      IvtUpdateGlobalCommand(a1, v8, 1);
      return 0LL;
    }
    return 3221225473LL;
  }
  result = HalSocRequestApi(a1, 0LL, 4, 8LL, &IvtPhysicalMemoryApi);
  if ( (int)result < 0 )
    return result;
  v10 = *(_DWORD **)(a1 + 8);
  if ( !v10 )
  {
    v10 = HalMapIoSpace(*(LARGE_INTEGER *)a1, 0x220uLL, MmNonCached);
    *(_QWORD *)(a1 + 8) = v10;
    if ( !v10 )
      return 3221225473LL;
  }
  v10[14] = 0x80000000;
  _InterlockedOr(v54, 0);
  IvtUpdateGlobalCommand(a1, 0x4000000u, 0);
  v11 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL);
  if ( v11 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) = v11;
    _InterlockedOr(v54, 0);
  }
  if ( *(_BYTE *)(a1 + 320) && (*(_DWORD *)(a1 + 224) & 0x20000000) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 224LL) |= 0x80000000;
    _InterlockedOr(v54, 0);
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 220LL) |= 3u;
    _InterlockedOr(v54, 0);
  }
  IvtUpdateGlobalCommand(a1, 0x2000000u, 0);
  if ( *(_BYTE *)(a1 + 320) && *(int *)(*(_QWORD *)(a1 + 8) + 28LL) < 0 )
    IvtUpdateGlobalCommand(a1, 0x80000000, 0);
  if ( !v3 )
  {
LABEL_48:
    v32 = 0;
    v33 = (unsigned __int64 *)&v62;
    v34 = (_QWORD *)(a1 + 112);
    do
    {
      if ( v32 != 1 || v58 && *(_BYTE *)(a1 + 320) )
      {
        v34[2] = 4096LL;
        if ( !*v34 )
        {
          v35 = ((__int64 (__fastcall *)(__int64, __int64))IvtPhysicalMemoryApi)(-1LL, 1LL);
          v34[1] = v35;
          if ( !v35 )
            return 3221225473LL;
          v36 = HalMapIoSpace(*(LARGE_INTEGER *)(32LL * v32 + a1 + 120), 0x1000uLL, MmCached);
          *v34 = v36;
          if ( !v36 )
            return 3221225473LL;
          memset(v36, 0, 0x1000uLL);
        }
        *v33 = *(_DWORD *)v33 & 0xFF8 | (unsigned __int64)((v34[1] / 4096LL) << 12);
      }
      ++v32;
      v34 += 4;
      ++v33;
    }
    while ( v32 < 2 );
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) = 0LL;
    _InterlockedOr(v54, 0);
    v37 = v62;
    if ( *(_BYTE *)(a1 + 320) )
    {
      v37 = v62 | 0x800;
      *(_QWORD *)&v62 = v62 | 0x800;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) = v37;
    _InterlockedOr(v54, 0);
    v38 = v60;
    if ( v60 )
    {
      if ( v60 == 1 )
      {
        *(_QWORD *)(a1 + 288) = IvtSharedRemappingTable;
        *(_QWORD *)(a1 + 296) = IvtSharedRemappingTablePhysical;
      }
      v39 = v57;
      if ( !*(_QWORD *)(a1 + 288) )
      {
        v40 = (16 * v57 + 4095) & 0xFFFFF000;
        v41.QuadPart = ((__int64 (__fastcall *)(__int64, _QWORD))IvtPhysicalMemoryApi)(-1LL, v40 >> 12);
        *(LARGE_INTEGER *)(a1 + 296) = v41;
        if ( !v41.QuadPart )
          return 3221225473LL;
        v42 = HalMapIoSpace(v41, v40, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272));
        *(_QWORD *)(a1 + 288) = v42;
        if ( !v42 )
          return 3221225473LL;
        memset(v42, 0, v40);
        *(_DWORD *)(a1 + 304) = v39;
        if ( v38 == 1 && !IvtSharedRemappingTable )
        {
          IvtSharedRemappingTable = *(_QWORD *)(a1 + 288);
          IvtSharedRemappingTablePhysical = *(_QWORD *)(a1 + 296);
        }
      }
      _BitScanReverse(&v43, v39);
      v44 = (*(_QWORD *)(a1 + 296) / 4096LL) << 12;
      v61 = v43;
      v45 = ((_BYTE)v43 - 1) & 0xF | (unsigned __int64)v44 | 0x800;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) = v45;
      _InterlockedOr(v54, 0);
      KeStallExecutionProcessor(0x64u);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) != v45 )
        KeBugCheckEx(0x5Cu, 0x7000uLL, 0LL, 0LL, 0LL);
      IvtUpdateGlobalCommand(a1, 0x1000000u, 1);
    }
    if ( v58 )
    {
      if ( *(_BYTE *)(a1 + 320) )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 192LL) = 0LL;
        _InterlockedOr(v54, 0);
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 200LL) = 0LL;
        _InterlockedOr(v54, 0);
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 208LL) = *((_QWORD *)&v62 + 1);
        _InterlockedOr(v54, 0);
      }
      IvtInitializeMTRR(a1);
    }
    if ( !*(_QWORD *)(a1 + 184) )
    {
      PhysicalAddress = MmGetPhysicalAddress((PVOID)(a1 + 176));
      v47 = *(_DWORD *)(a1 + 200);
      *(PHYSICAL_ADDRESS *)(a1 + 184) = PhysicalAddress;
      *(_QWORD *)(a1 + 200) = v47 & 3 | PhysicalAddress.QuadPart & 0xFFFFFFFFFFFFFFFCuLL;
      *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 192) & 0xFFFFFFFFFFFFFF90uLL | 0x65;
    }
    v8 = 0x4000000;
    goto LABEL_73;
  }
  if ( *(_BYTE *)(a1 + 319) && !*(_QWORD *)(a1 + 336) && (int)IvtInitializeIdentityMappings(a1) < 0 )
    return 3221225473LL;
  if ( *(_QWORD *)(a1 + 40) )
  {
LABEL_34:
    if ( !*(_QWORD *)(a1 + 16) )
    {
      v25.QuadPart = ((__int64 (__fastcall *)(__int64, __int64))IvtPhysicalMemoryApi)(-1LL, 1LL);
      *(LARGE_INTEGER *)(a1 + 24) = v25;
      if ( !v25.QuadPart )
        return 3221225473LL;
      v26 = (__int64 *)HalMapIoSpace(v25, 0x1000uLL, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272));
      *(_QWORD *)(a1 + 16) = v26;
      v27 = v26;
      if ( !v26 )
        return 3221225473LL;
      v28 = (unsigned __int64)(v26 + 512);
      v12 = *(_QWORD *)(a1 + 48) % 4096LL;
      v29 = ((*(_QWORD *)(a1 + 48) / 4096LL) << 12) | 1;
      while ( (unsigned __int64)v27 < v28 )
      {
        *v27 = v29;
        if ( !*(_BYTE *)(a1 + 320) )
          *++v27 = 0LL;
        ++v27;
        v28 = *(_QWORD *)(a1 + 16) + 4096LL;
      }
    }
    if ( !*(_QWORD *)(a1 + 32) )
    {
      v30.QuadPart = ((__int64 (__fastcall *)(__int64, __int64))IvtPhysicalMemoryApi)(-1LL, 1LL);
      if ( !v30.QuadPart )
        return 3221225473LL;
      v31 = HalMapIoSpace(v30, 0x1000uLL, MmCached);
      *(_QWORD *)(a1 + 32) = v31;
      if ( !v31 )
        return 3221225473LL;
      memset(v31, 0, 0x1000uLL);
    }
    if ( v3 == 2 && !v5 && (int)IvtProcessDeviceExceptions(a1, v12) < 0 )
      return 3221225473LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) = (*(_BYTE *)(a1 + 320) != 0 ? 0x400 : 0) | (unsigned __int64)((*(_QWORD *)(a1 + 24) / 4096LL) << 12);
    _InterlockedOr(v54, 0);
    IvtUpdateGlobalCommand(a1, 0x40000000u, 1);
    goto LABEL_48;
  }
  v13.QuadPart = ((__int64 (__fastcall *)(__int64, __int64))IvtPhysicalMemoryApi)(-1LL, 1LL);
  *(LARGE_INTEGER *)(a1 + 48) = v13;
  if ( !v13.QuadPart )
    return 3221225473LL;
  v14 = HalMapIoSpace(v13, 0x1000uLL, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272));
  *(_QWORD *)(a1 + 40) = v14;
  if ( !v14 )
    return 3221225473LL;
  if ( !IvtBlockedPageTable )
  {
    v17.QuadPart = ((__int64 (__fastcall *)(__int64, __int64))IvtPhysicalMemoryApi)(-1LL, 1LL);
    IvtBlockedPageTablePhysical = v17.QuadPart;
    if ( !v17.QuadPart )
      return 3221225473LL;
    v18 = HalMapIoSpace(v17, 0x1000uLL, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272));
    IvtBlockedPageTable = (__int64)v18;
    if ( !v18 )
      return 3221225473LL;
    memset(v18, 0, 0x1000uLL);
  }
  v19 = 0;
  if ( v3 == 1 )
  {
    if ( !*(_BYTE *)(a1 + 319) )
      goto LABEL_27;
    v19 = 1;
    IdentityMappedDomain = IvtGetIdentityMappedDomain(a1, &v59);
  }
  else
  {
    if ( v3 != 2 )
      goto LABEL_27;
    v19 = 1;
    IdentityMappedDomain = IvtGetBlockedDomain(a1, 0LL, (unsigned __int64 *)&v59);
  }
  v7 = IdentityMappedDomain;
LABEL_27:
  if ( !*(_BYTE *)(a1 + 320) )
  {
    ContextEntryType = IvtGetContextEntryType(v16, v15, v19);
    IvtBuildContextEntry(a1, ContextEntryType, v7, v59, (__int64 *)&v63);
    v21 = *(__int64 **)(a1 + 40);
    v22 = v21 + 512;
    if ( v21 < v21 + 512 )
    {
      v23 = *((_QWORD *)&v63 + 1);
      v12 = v63;
      v24 = v63 & 1;
      do
      {
        if ( v24 )
        {
          v21[1] = v23;
          *v21 = v12;
        }
        else
        {
          *v21 = 0LL;
          v21[1] = 0LL;
        }
        v21 += 2;
      }
      while ( v21 < v22 );
    }
    goto LABEL_33;
  }
  IvtGetPasidGranularTranslationType(v16, 0, v19);
  result = IvtSetupScalableModeDefaultPasidTables(a1);
  if ( (int)result >= 0 )
  {
    IvtBuildScalableModeContextEntry(v49, *(_QWORD *)(a1 + 104), 0, 0, BugCheckParameter4, (__int64 *)v64);
    v51 = *(_QWORD **)(a1 + 40);
    v52 = v51 + 512;
    while ( v51 < v52 )
    {
      IvtSetScalableModeContextEntry(v50, v64, v51);
      v51 = (_QWORD *)(v53 + 32);
    }
LABEL_33:
    v5 = v56;
    goto LABEL_34;
  }
  return result;
}
