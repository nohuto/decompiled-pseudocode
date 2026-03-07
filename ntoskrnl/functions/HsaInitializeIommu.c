__int64 __fastcall HsaInitializeIommu(__int64 a1, int a2, char a3)
{
  int v3; // esi
  int v4; // r12d
  __int64 result; // rax
  LARGE_INTEGER v7; // rax
  PVOID v8; // rax
  PVOID v9; // rax
  unsigned int v10; // esi
  _QWORD *v11; // r15
  __int64 v12; // r13
  __int64 v13; // rdx
  SIZE_T v14; // r14
  bool v15; // zf
  __int64 v16; // rax
  PVOID v17; // rax
  unsigned int v18; // r14d
  unsigned int v19; // r13d
  unsigned int v20; // eax
  unsigned __int64 v21; // rbx
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int16 v24; // r9
  __int16 BlockedDomain; // ax
  int v26; // r8d
  __int64 v27; // rax
  __int64 *v28; // rdx
  unsigned __int64 v29; // r8
  _QWORD *v30; // r9
  unsigned int i; // ecx
  __int64 v32; // rdx
  __int16 v33; // r9
  char v34; // r8
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v43; // rcx
  signed __int32 v44[8]; // [rsp+8h] [rbp-99h] BYREF
  char v45; // [rsp+68h] [rbp-39h]
  unsigned int v46; // [rsp+6Ch] [rbp-35h] BYREF
  unsigned __int64 v47; // [rsp+70h] [rbp-31h] BYREF
  int v48; // [rsp+78h] [rbp-29h]
  __int64 *v49; // [rsp+80h] [rbp-21h]
  __int128 v50; // [rsp+88h] [rbp-19h]
  __int128 v51; // [rsp+98h] [rbp-9h]
  _QWORD v52[4]; // [rsp+A8h] [rbp+7h] BYREF

  v3 = *(_DWORD *)(a1 + 176);
  v4 = *(_DWORD *)(a1 + 172);
  v45 = a3;
  v46 = 0;
  v47 = 0LL;
  v48 = v3;
  v50 = 0LL;
  v51 = 0LL;
  if ( !a2 )
  {
    result = HalSocRequestApi(a1, 0LL, 4, 8LL, &HsaPhysicalMemoryApi);
    if ( (int)result < 0 )
      return result;
    if ( !v4 && !v3 )
      goto LABEL_39;
    if ( v4 == 2 && !HsaBlockedPageTable )
    {
      v7.QuadPart = ((__int64 (__fastcall *)(__int64, __int64))HsaPhysicalMemoryApi)(-1LL, 1LL);
      HsaBlockedPageTablePhysical = v7.QuadPart;
      if ( !v7.QuadPart )
        return 3221225473LL;
      v8 = HalMapIoSpace(v7, 0x1000uLL, (MEMORY_CACHING_TYPE)((*(unsigned __int8 *)(a1 + 16) >> 5) & 1));
      HsaBlockedPageTable = (__int64)v8;
      if ( !v8 )
        return 3221225473LL;
      memset(v8, 0, 0x1000uLL);
    }
    result = HsaInitializeInterruptRemapping(a1);
    if ( (int)result < 0 )
      return result;
    if ( *(_QWORD *)a1
      || (v9 = HalMapIoSpace(*(LARGE_INTEGER *)(a1 + 8), 0x2040uLL, MmNonCached), (*(_QWORD *)a1 = v9) != 0LL) )
    {
      v10 = 0;
      v49 = v52;
      v11 = (_QWORD *)(a1 + 24);
      v12 = 3LL;
      do
      {
        if ( v10 )
        {
          if ( v10 == 3 )
          {
            v13 = 2LL;
            v14 = 0x2000LL;
          }
          else
          {
            v13 = 1LL;
            v14 = 4096LL;
          }
        }
        else
        {
          v13 = 512LL;
          v14 = 0x200000LL;
        }
        v15 = *v11 == 0LL;
        v11[2] = v14;
        if ( v15 )
        {
          v16 = ((__int64 (__fastcall *)(__int64, __int64))HsaPhysicalMemoryApi)(-1LL, v13);
          v11[1] = v16;
          if ( !v16 )
            return 3221225473LL;
          v17 = HalMapIoSpace(*(LARGE_INTEGER *)(a1 + 24LL * v10 + 32), v14, MmNonCached);
          *v11 = v17;
          if ( !v17 )
            return 3221225473LL;
          memset(v17, 0, v14);
          v18 = 0;
          if ( !v10 )
          {
            v19 = 0;
            v47 = *(_QWORD *)(a1 + 24);
            v20 = 0;
            v21 = v47;
            v22 = 0;
            v46 = 0;
            do
            {
              v23 = 0LL;
              v24 = 0;
              v47 = 0LL;
              if ( v4 == 2 )
              {
                BlockedDomain = HsaGetBlockedDomain(a1, (int *)&v46, &v47);
                v23 = v47;
                v24 = BlockedDomain;
                v26 = 2;
              }
              else
              {
                v26 = 0;
                v18 = v20;
                v19 = v22;
              }
              HsaBuildDeviceTableEntry(
                a1,
                0LL,
                0,
                0,
                0,
                v24,
                v26,
                v23,
                0LL,
                (__int64)&HsaSharedRemappingTable,
                v21 + 32LL * v18);
              v18 = v19 + 1;
              v46 = v18;
              v20 = ++v19;
              v22 = v18;
            }
            while ( v18 < 0x10000 );
            v12 = 3LL;
          }
        }
        ++v10;
        v27 = v11[1] / 4096LL;
        v28 = v49;
        v11 += 3;
        *v49 = v27;
        v49 = v28 + 1;
      }
      while ( v10 < 4 );
      if ( v4 != 2 || v45 || (int)HsaProcessDeviceExceptions(a1) >= 0 )
      {
        v29 = 0LL;
        v30 = (_QWORD *)(a1 + 64);
        do
        {
          for ( i = 15; i > 8; --i )
          {
            if ( (unsigned __int64)(1LL << i) <= *v30 >> 4 )
              break;
          }
          v30 += 3;
          v32 = *(_QWORD *)((char *)&v50 + v29 + 8) ^ (*(_QWORD *)((char *)&v50 + v29 + 8) ^ (v52[v29 / 8 + 1] << 12)) & 0xFFFFFFFFFF000LL;
          *(_QWORD *)((char *)&v50 + v29 + 8) = v32 ^ (v32 ^ ((unsigned __int64)i << 56)) & 0xF00000000000000LL;
          v29 += 8LL;
          --v12;
        }
        while ( v12 );
        v3 = v48;
LABEL_39:
        **(_QWORD **)a1 = ((v52[0] & 0xFFFFFFFFFFLL) << 12) | ((unsigned __int16)(*(_QWORD *)(a1 + 40) >> 12)
                                                             + ((*(_QWORD *)(a1 + 40) & 0xFFFLL) != 0)
                                                             - 1) & 0x1FF;
        _InterlockedOr(v44, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *((_QWORD *)&v50 + 1);
        _InterlockedOr(v44, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 16LL) = v51;
        _InterlockedOr(v44, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 0x2000LL) = 0LL;
        _InterlockedOr(v44, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8200LL) = 0LL;
        _InterlockedOr(v44, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8208LL) = 0LL;
        _InterlockedOr(v44, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8216LL) = 0LL;
        _InterlockedOr(v44, 0);
        v33 = *(_WORD *)(a1 + 18);
        if ( (v33 & 8) != 0 )
        {
          *(_QWORD *)(*(_QWORD *)a1 + 56LL) = *((_QWORD *)&v51 + 1);
          _InterlockedOr(v44, 0);
          v33 = *(_WORD *)(a1 + 18);
        }
        v34 = *(_BYTE *)(a1 + 16);
        v35 = v34 & 1;
        v36 = (2 * v35 + 69637) | 0x100;
        if ( (v34 & 2) == 0 )
          v36 = 2 * v35 + 69637;
        v37 = v36 | 0x200;
        if ( (v34 & 4) == 0 )
          v37 = v36;
        v38 = v37 | 0x400;
        if ( (v34 & 0x20) == 0 )
          v38 = v37;
        v39 = v38 | 0x800;
        if ( (v34 & 8) == 0 )
          v39 = v38;
        v40 = v39 | 0xA00000A000LL;
        if ( (v33 & 4) == 0 )
          v40 = v39;
        v41 = v40 | 0x60;
        if ( !*(_QWORD *)(a1 + 128) )
        {
          PhysicalAddress = MmGetPhysicalAddress((PVOID)(a1 + 120));
          *(PHYSICAL_ADDRESS *)(a1 + 128) = PhysicalAddress;
          *(_QWORD *)(a1 + 136) = *(_QWORD *)(a1 + 136) & 0xFF0000000000002LL | (8
                                                                               * ((PhysicalAddress.QuadPart >> 3) & 0x1FFFFFFFFFFFFLL)) | 0x1000000000000005LL;
        }
        v43 = v41 | 0xC000000020000LL;
        if ( !v3 )
          v43 = v41;
        *(_QWORD *)(*(_QWORD *)a1 + 24LL) = v43;
        _InterlockedOr(v44, 0);
        if ( (*(_BYTE *)(a1 + 18) & 0x10) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)a1 + 364LL) = 0x2000;
          _InterlockedOr(v44, 0);
        }
        return 0LL;
      }
    }
    return 3221225473LL;
  }
  return 0LL;
}
