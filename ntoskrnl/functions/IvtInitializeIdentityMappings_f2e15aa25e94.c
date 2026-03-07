__int64 __fastcall IvtInitializeIdentityMappings(__int64 a1)
{
  int v2; // ebx
  unsigned int v3; // ebp
  LARGE_INTEGER v4; // rax
  PVOID v5; // rax
  unsigned int v6; // r15d
  __int64 v7; // r14
  __int64 v8; // r13
  LARGE_INTEGER v9; // rax
  LARGE_INTEGER v10; // rbx
  PVOID v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx

  v2 = *(_DWORD *)(a1 + 248);
  v3 = (*(_QWORD *)(a1 + 216) & 0x800000000LL) != 0 ? 30 : 21;
  v4.QuadPart = ((__int64 (__fastcall *)(__int64, __int64))IvtPhysicalMemoryApi)(-1LL, 1LL);
  *(LARGE_INTEGER *)(a1 + 328) = v4;
  if ( !v4.QuadPart )
    return 3221225473LL;
  v5 = HalMapIoSpace(v4, 0x1000uLL, MmCached);
  *(_QWORD *)(a1 + 336) = v5;
  memset(v5, 0, 0x1000uLL);
  if ( (v2 != 0 ? 48 : 39) - v3 > 9 )
  {
    v6 = 0;
    v7 = 0LL;
    while ( 1 )
    {
      v8 = *(_QWORD *)(a1 + 336);
      v9.QuadPart = ((__int64 (__fastcall *)(__int64, __int64))IvtPhysicalMemoryApi)(-1LL, 1LL);
      v10 = v9;
      if ( !v9.QuadPart )
        return 3221225473LL;
      v11 = HalMapIoSpace(v9, 0x1000uLL, MmCached);
      v12 = (__int64)v11;
      if ( !v11 )
        return 3221225473LL;
      memset(v11, 0, 0x1000uLL);
      IvtInitializeLargePagePte(v12, (unsigned __int64)v6 << ((unsigned __int8)v3 + 9), v3);
      v13 = 1LL;
      v14 = 2LL;
      do
      {
        v15 = v13++;
        v16 = *(_QWORD *)(v7 + v8) | v15;
        *(_QWORD *)(v7 + v8) = v16;
        --v14;
      }
      while ( v14 );
      *(_QWORD *)(v7 + v8) = v16 ^ (v10.QuadPart ^ v16) & 0xFFFFFFFFFF000LL;
      if ( (*(_BYTE *)(a1 + 224) & 1) == 0 )
        KeInvalidateRangeAllCachesNoIpi(v12, 0x1000u);
      ++v6;
      v7 += 8LL;
      if ( v6 >= 0x200 )
        goto LABEL_13;
    }
  }
  IvtInitializeLargePagePte(*(_QWORD *)(a1 + 336), 0LL, v3);
LABEL_13:
  if ( (*(_BYTE *)(a1 + 224) & 1) == 0 )
    KeInvalidateRangeAllCachesNoIpi(*(_QWORD *)(a1 + 336), 0x1000u);
  return 0LL;
}
