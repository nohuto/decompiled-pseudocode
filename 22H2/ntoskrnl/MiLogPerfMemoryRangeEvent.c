/*
 * XREFs of MiLogPerfMemoryRangeEvent @ 0x14053155C
 * Callers:
 *     MiDeleteVad @ 0x14021BFB0 (MiDeleteVad.c)
 *     MiCommitPoolMemory @ 0x14028B8AC (MiCommitPoolMemory.c)
 *     MiAllocateContiguousMemory @ 0x1402E808C (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x1402E9070 (MmFreeContiguousMemory.c)
 *     MiDecommitLargePoolVa @ 0x1403714C0 (MiDecommitLargePoolVa.c)
 *     MiMapUserLargePages @ 0x14055E670 (MiMapUserLargePages.c)
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 *     MiLogSectionCreate @ 0x1408C78A0 (MiLogSectionCreate.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA420 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035C1F0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

void __fastcall MiLogPerfMemoryRangeEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rcx
  _QWORD v6[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v7; // [rsp+48h] [rbp-20h] BYREF
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

  v5 = 0LL;
  if ( (a3 & 0x1E) == 0x1A )
    v5 = 16 * (a2 & 0xFFFFFFFFFFFFLL);
  v9 = 0;
  v6[1] = a1;
  v6[2] = a4;
  v6[0] = v5 | (a3 >> 1) & 0xF;
  v8 = 24;
  v7 = v6;
  EtwTraceKernelEvent((__int64)&v7, 1u, 0x20000001u, ((a3 & 1) == 0) | 0x278, 0x11401B02u);
}
