/*
 * XREFs of HalpHvInitMcaStatusMsrCache @ 0x140509010
 * Callers:
 *     HalpMceInit @ 0x140A87B68 (HalpMceInit.c)
 * Callees:
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x140372460 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpGetCpuVendor @ 0x14037D1B4 (HalpGetCpuVendor.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void HalpHvInitMcaStatusMsrCache()
{
  unsigned __int64 v0; // rax
  ULONG_PTR v1; // rbx
  int *v2; // rdi
  int v3; // ebx
  int v4; // esi
  __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx

  if ( !HalpHvMcaStatusCacheInitialized )
  {
    if ( !HalpMcaNumberOfBanks )
    {
      v0 = __readmsr(0x179u);
      HalpMcaNumberOfBanks = v0;
    }
    v1 = 4LL * (unsigned __int8)HalpMcaNumberOfBanks;
    HalpHvMcaBankCount = (unsigned __int8)HalpMcaNumberOfBanks;
    if ( v1 )
    {
      HalpHvMcaStatusMsrIndices = HalpMmAllocCtxAlloc(
                                    (unsigned __int8)HalpMcaNumberOfBanks,
                                    4LL * (unsigned __int8)HalpMcaNumberOfBanks);
      v2 = (int *)HalpHvMcaStatusMsrIndices;
      if ( !HalpHvMcaStatusMsrIndices )
        KeBugCheckEx(0xACu, v1, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\hv\\hvintel.c", 0x63EuLL);
      if ( HalpHvMcaBankCount )
      {
        v3 = 1025;
        v4 = -1073733631;
        v5 = (unsigned int)HalpHvMcaBankCount;
        do
        {
          if ( HalpGetCpuVendor() != 1 || (v6 = v4, !HalpMcaScalableRasSupported) )
            v6 = v3;
          *v2 = v6;
          v4 += 16;
          ++v2;
          v3 += 4;
          --v5;
        }
        while ( v5 );
      }
    }
    else
    {
      HalpHvMcaStatusMsrIndices = 0LL;
    }
    HalpHvMcaLpCount = HalpQueryMaximumRegisteredProcessorCount();
    v8 = 8 * (unsigned int)HalpHvMcaBankCount * (unsigned __int64)(unsigned int)HalpHvMcaLpCount;
    if ( v8 )
    {
      HalpHvMcaStatusCache = HalpMmAllocCtxAlloc(v7, v8);
      if ( !HalpHvMcaStatusCache )
        KeBugCheckEx(0xACu, v8, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\hv\\hvintel.c", 0x658uLL);
    }
    else
    {
      HalpHvMcaStatusCache = 0LL;
    }
    HalpHvMcaStatusCacheInitialized = 1;
  }
}
