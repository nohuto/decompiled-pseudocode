__int64 HalpTscReserveResources()
{
  __int64 result; // rax
  __int64 v1; // rdi
  __int64 v2; // rcx
  ULONG_PTR v3; // rbx
  void *v4; // rax
  __int64 v5; // rsi

  HalpTscFallbackLock = 0LL;
  result = HalpQueryMaximumRegisteredProcessorCount();
  v1 = (unsigned int)result;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    v2 = (4 * (_DWORD)result + ((4 * (_DWORD)result + 8 * (_DWORD)result + 7) & 0xFFFFFFF8) + 7) & 0xFFFFFFF8;
    v3 = ((((_DWORD)v2 + 4 * (_DWORD)result + 7) & 0xFFFFFFF8) + ((_DWORD)result << 7) + 135) & 0xFFFFFFF8;
    v4 = (void *)HalpMmAllocCtxAlloc(v2, v3);
    v5 = (__int64)v4;
    if ( !v4 )
      KeBugCheckEx(0xACu, v3, 0xAB00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\timers\\pc\\tscsync.c", 0x166uLL);
    memset(v4, 0, v3);
    HalpTscDeltas = v5;
    HalpTscMaximumCounterSyncSpread = 1024;
    HalpTscNopCycles = (v5 + 8 * v1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    HalpTscWaves = (HalpTscNopCycles + 4 * v1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    HalpTscSkewOffset = (HalpTscWaves + 4 * v1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    TscRequest = (((HalpTscSkewOffset + 4 * v1 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 120) & 0xFFFFFFFFFFFFFF80uLL;
    result = HalpTscCheckAdjustMsrCapability();
    HalpTscAdjustAvailable = result;
  }
  return result;
}
