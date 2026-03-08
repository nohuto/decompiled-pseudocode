/*
 * XREFs of KeFlushIoBuffers @ 0x1402DCDE0
 * Callers:
 *     HalFlushDmaBuffer @ 0x140454880 (HalFlushDmaBuffer.c)
 *     HalpDmaFlushDriverMdl @ 0x1404FDB64 (HalpDmaFlushDriverMdl.c)
 *     HalpDmaFlushBuffer @ 0x14050E7A0 (HalpDmaFlushBuffer.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x14050E9D8 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x14050F0B4 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpFlushMapBuffers @ 0x14050F610 (HalpFlushMapBuffers.c)
 *     ViMapDoubleBuffer @ 0x140AC678C (ViMapDoubleBuffer.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140250530 (EtwGetKernelTraceTimestamp.c)
 *     KeInvalidateAllCaches @ 0x1403010D0 (KeInvalidateAllCaches.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiFlushRangeAllCaches @ 0x14056FBF0 (KiFlushRangeAllCaches.c)
 *     EtwTraceCpuCacheFlush @ 0x1405FA4BC (EtwTraceCpuCacheFlush.c)
 */

char __fastcall KeFlushIoBuffers(ULONG_PTR BugCheckParameter4, char a2, char a3, __int64 a4)
{
  PVOID v4; // rax
  unsigned __int8 CurrentIrql; // r12
  __int64 v9; // r13
  char v10; // di
  char v11; // r15
  void *v12; // rsi
  _OWORD v14[2]; // [rsp+30h] [rbp-58h] BYREF

  LOBYTE(v4) = KiSystemFullyCoherent;
  memset(v14, 0, sizeof(v14));
  if ( !KiSystemFullyCoherent )
  {
    CurrentIrql = KeGetCurrentIrql();
    v9 = *(unsigned int *)(BugCheckParameter4 + 40);
    v10 = 1;
    v11 = 1;
    if ( a3 || a2 )
    {
      if ( (*(_BYTE *)(BugCheckParameter4 + 10) & 5) != 0 )
      {
        v12 = *(void **)(BugCheckParameter4 + 24);
      }
      else
      {
        v4 = MmMapLockedPagesSpecifyCache((PMDL)BugCheckParameter4, 0, MmCached, 0LL, 0, 0x40000020u);
        v12 = v4;
      }
      if ( v12 )
      {
        v11 = 0;
      }
      else if ( CurrentIrql == 15 )
      {
        KeBugCheckEx(0x55u, 0x86uLL, 0xBADuLL, 0LL, 0LL);
      }
      if ( (xmmword_140D1EAD0 & 0x4000000) != 0 )
        LOBYTE(v4) = EtwGetKernelTraceTimestamp((__int64)v14, 2214592512LL);
      else
        v10 = 0;
      if ( v11 )
      {
        if ( a3 )
          LOBYTE(v4) = KeInvalidateAllCaches();
      }
      else
      {
        LOBYTE(v4) = KiFlushRangeAllCaches(BugCheckParameter4, v12, v9, a3);
      }
      if ( v10 )
      {
        LOBYTE(a4) = a2 == 0;
        LOBYTE(v4) = EtwTraceCpuCacheFlush(v14, v12, v9, a4);
      }
    }
  }
  return (char)v4;
}
