char __fastcall CcFetchDataForRead(
        int a1,
        _QWORD *a2,
        unsigned int a3,
        char a4,
        _DWORD *a5,
        _QWORD *P,
        int a7,
        __int64 a8,
        LARGE_INTEGER *a9)
{
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  unsigned int v13; // ecx
  __int64 v15; // rbp
  __int64 v17; // r8

  v10 = *a2 & 0xFFFFFFFFFFFFF000uLL;
  v11 = *P + (*(_DWORD *)a2 & 0x3F000);
  v12 = ((a3 + *a2 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - v10;
  v13 = 0x40000 - ((*(_DWORD *)P + (*(_DWORD *)a2 & 0x3F000)) & 0x3FFFF);
  if ( v13 >= (unsigned int)v12 )
    v13 = ((a3 + *(_DWORD *)a2 + 4095) & 0xFFFFF000) - v10;
  v15 = v13;
  if ( !(unsigned int)MmHardFaultBytesRequired(v11, v10, v13) )
    goto LABEL_4;
  if ( a4 )
  {
    if ( a9 && !a9->QuadPart )
      *a9 = KeQueryPerformanceCounter(0LL);
    LODWORD(v17) = 0;
    if ( v15 == v12 )
      v17 = *P;
    MmPrefetchForCacheManager(a1, v10, v17, v12, a7);
    *a5 = 1;
LABEL_4:
    MmCheckCachedPageStates(v11, v15, 0, 0LL);
    return 1;
  }
  return 0;
}
