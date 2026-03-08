/*
 * XREFs of StEtaIoStart @ 0x1405C8538
 * Callers:
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x1405C1E04 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall StEtaIoStart(LARGE_INTEGER *a1, unsigned int a2, int a3, unsigned __int64 a4)
{
  unsigned int v4; // esi
  __int64 v5; // r12
  unsigned __int64 v6; // r15
  LARGE_INTEGER v8; // rbx
  unsigned __int32 v9; // ebp
  signed __int32 HighPart; // r14d
  int v11; // eax
  signed __int32 v12; // eax
  bool v13; // cc
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // cx

  v4 = 0;
  v5 = a3;
  v6 = a4;
  v8 = a1[a3 + 2];
  if ( (a4 & 1) != 0 )
  {
    v6 = a4 & 0xFFFFFFFFFFFFFFFEuLL;
    while ( *(_DWORD *)v8.QuadPart < a2 )
      v8.QuadPart += 32LL;
  }
  else
  {
    while ( *(_DWORD *)v8.QuadPart < a2 )
      v8.QuadPart += 32LL;
    *(_WORD *)(v8.QuadPart + 4) = 0;
  }
  v9 = *(_DWORD *)(v8.QuadPart + 8);
  HighPart = a1[1].HighPart;
  v11 = _InterlockedIncrement((volatile signed __int32 *)&a1[1]);
  if ( v11 == 1 )
  {
    *a1 = KeQueryPerformanceCounter(0LL);
    v12 = _InterlockedCompareExchange(&a1[1].HighPart, v9, HighPart);
    if ( HighPart != v12 )
    {
      v13 = v12 <= HighPart;
      do
      {
        if ( !v13 )
          v9 += v12 - HighPart;
        HighPart = v12;
        v12 = _InterlockedCompareExchange(&a1[1].HighPart, v9, v12);
        v13 = v12 <= HighPart;
      }
      while ( v12 != HighPart );
      return v4;
    }
  }
  else
  {
    _InterlockedExchangeAdd(&a1[1].HighPart, v9);
    if ( v11 > 1 )
      return v4;
  }
  v14 = *(_WORD *)(v8.QuadPart + 6) + 1;
  *(_WORD *)(v8.QuadPart + 6) = v14;
  if ( v14 < *((_WORD *)&a1[4].LowPart + 2 * v5)
    || (v15 = *((_WORD *)&a1[4].u.LowPart + 2 * v5 + 1)) != 0 && (v15 & v14) == 0 )
  {
    *(LARGE_INTEGER *)(v8.QuadPart + 16) = KeQueryPerformanceCounter(0LL);
    v4 = 1;
    *(_QWORD *)(v8.QuadPart + 24) = v6;
  }
  return v4;
}
