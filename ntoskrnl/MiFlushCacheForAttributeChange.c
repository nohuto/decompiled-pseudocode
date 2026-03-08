/*
 * XREFs of MiFlushCacheForAttributeChange @ 0x140214754
 * Callers:
 *     MiChangePageAttributeBatch @ 0x140211998 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttributeContiguous @ 0x140214270 (MiChangePageAttributeContiguous.c)
 *     MiChangePageAttribute @ 0x14036CE40 (MiChangePageAttribute.c)
 *     MiFlushCacheRange @ 0x14065E91C (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140B675DC (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1402149F0 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036D020 (MiFlushEntireTbDueToAttributeChange.c)
 */

void __fastcall MiFlushCacheForAttributeChange(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v6; // rbp
  LARGE_INTEGER v8; // rdi
  int v9; // ebx
  unsigned int v10; // ebx
  __int64 v11; // r12
  LONGLONG v12; // rdx
  LARGE_INTEGER v13; // rax
  LARGE_INTEGER v14; // rcx
  __int128 v15; // rtt
  signed __int32 v16[8]; // [rsp+0h] [rbp-58h] BYREF
  LARGE_INTEGER v17; // [rsp+20h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF

  v6 = a2;
  v8.QuadPart = 0LL;
  v9 = 2;
  if ( a3 != 2 )
    v9 = 0;
  if ( a2 )
  {
    v10 = v9 | 0xC0000000;
    do
    {
      v11 = MiMapPageInHyperSpaceWorker(a1, 0LL, v10);
      if ( a4 )
      {
        PerformanceFrequency.QuadPart = 0LL;
        v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
        if ( PerformanceFrequency.QuadPart != 10000000 )
          v8.QuadPart = 10000000 * v8.QuadPart / PerformanceFrequency.QuadPart;
        _InterlockedOr(v16, 0);
      }
      KeInvalidateRangeAllCachesNoIpi(v11, 4096LL);
      if ( a4 )
      {
        _InterlockedOr(v16, 0);
        v17.QuadPart = 0LL;
        v13 = KeQueryPerformanceCounter(&v17);
        if ( v17.QuadPart != 10000000 )
        {
          v15 = 10000000 * v13.QuadPart;
          v13.QuadPart = 10000000 * v13.QuadPart / v17.QuadPart;
          v12 = v15 % v17.QuadPart;
        }
        v14 = v8;
        if ( v13.QuadPart >= (unsigned __int64)v8.QuadPart )
          v14 = v13;
        *a4 += v14.QuadPart - v8.QuadPart;
      }
      LOBYTE(v12) = 17;
      MiUnmapPageInHyperSpaceWorker(v11, v12, 0x80000000LL);
      ++a1;
      --v6;
    }
    while ( v6 );
  }
  if ( a3 == 3 )
    MiFlushEntireTbDueToAttributeChange();
}
