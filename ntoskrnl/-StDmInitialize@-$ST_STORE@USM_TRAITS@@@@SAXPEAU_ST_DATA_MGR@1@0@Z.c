unsigned __int64 __fastcall ST_STORE<SM_TRAITS>::StDmInitialize(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _DWORD *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned __int64 result; // rax
  int v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+54h] [rbp+Ch]
  LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp+10h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  memset((void *)(a1 + 192), 0, 0x6D0uLL);
  v10 = 12;
  *(_OWORD *)a1 = 0LL;
  v11 = 4;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_OWORD *)(a1 + 88) = 0LL;
  *(_OWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_OWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_OWORD *)(a1 + 152) = 0LL;
  *(_OWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  SmHpChunkHeapInitialize(a1 + 192, &v10);
  memset((void *)(a1 + 1376), 0, 0x60uLL);
  *(_QWORD *)(a1 + 1448) = a1 + 1440;
  *(_QWORD *)(a1 + 1440) = 0LL;
  *(_DWORD *)(a1 + 1428) = (__int64)((unsigned int)KeMaximumIncrement
                                   * (unsigned __int64)(unsigned int)((__int64)MEMORY[0xFFFFF78000000320] >> 12)) >> 17;
  *(_DWORD *)(a1 + 1472) = 0;
  *(_QWORD *)(a1 + 1504) = a2;
  memset((void *)(a1 + 1512), 0, 0x60uLL);
  *(_QWORD *)(a1 + 1584) = a1 + 1576;
  *(_QWORD *)(a1 + 1576) = 0LL;
  *(_DWORD *)(a1 + 1564) = (__int64)((unsigned int)KeMaximumIncrement
                                   * (unsigned __int64)(unsigned int)((__int64)MEMORY[0xFFFFF78000000320] >> 12)) >> 17;
  *(_DWORD *)(a1 + 1608) = 1;
  *(_QWORD *)(a1 + 1640) = a2;
  memset((void *)(a1 + 1648), 0, 0x60uLL);
  *(_QWORD *)(a1 + 1720) = a1 + 1712;
  *(_QWORD *)(a1 + 1712) = 0LL;
  *(_DWORD *)(a1 + 1700) = (__int64)((unsigned int)KeMaximumIncrement
                                   * (unsigned __int64)(unsigned int)((__int64)MEMORY[0xFFFFF78000000320] >> 12)) >> 17;
  *(_DWORD *)(a1 + 1608) = 2;
  *(_QWORD *)(a1 + 1760) = 0LL;
  *(_QWORD *)(a1 + 1768) = 0LL;
  v4 = 6LL;
  *(_QWORD *)(a1 + 1752) = 0LL;
  *(_QWORD *)(a1 + 1624) = 0x20000000LL;
  *(_QWORD *)(a1 + 1616) = 0x20000000LL;
  v5 = a1 + 1104;
  *(_QWORD *)(a1 + 1640) = a2;
  *(_QWORD *)(a1 + 1488) = 1LL;
  *(_QWORD *)(a1 + 1496) = 0x1FFFFFFFLL;
  *(_QWORD *)(a1 + 1480) = 1LL;
  *(_QWORD *)(a1 + 1632) = 0x3FFFFFFFLL;
  *(_QWORD *)(a1 + 16) = a1 + 1376;
  *(_QWORD *)(a1 + 80) = a1 + 1512;
  *(_QWORD *)(a1 + 144) = a1 + 1648;
  do
  {
    *(_OWORD *)v5 = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_DWORD *)v5 = -1;
    v5 += 24LL;
    --v4;
  }
  while ( v4 );
  v6 = (_DWORD *)(a1 + 1248);
  v7 = 8LL;
  do
  {
    *v6 = -1;
    v6 += 4;
    --v7;
  }
  while ( v7 );
  v8 = *(_DWORD *)(a1 + 864) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 872) = 4;
  *(_BYTE *)(a1 + 776) = 2;
  *(_DWORD *)(a1 + 864) = v8 | 6;
  *(_DWORD *)(a1 + 1024) = -10001;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  result = (unsigned __int64)((unsigned __int128)(10000 * PerformanceFrequency.QuadPart * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 63;
  *(_DWORD *)(a1 + 1008) = 10000 * PerformanceFrequency.QuadPart / 1000000;
  return result;
}
