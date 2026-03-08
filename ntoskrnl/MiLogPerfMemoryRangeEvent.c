/*
 * XREFs of MiLogPerfMemoryRangeEvent @ 0x14061B438
 * Callers:
 *     MiDecommitLargePoolVa @ 0x14020FF88 (MiDecommitLargePoolVa.c)
 *     MiCommitPoolMemory @ 0x14032FC90 (MiCommitPoolMemory.c)
 *     MiAllocateContiguousMemory @ 0x1403B49B4 (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x1403BD6E0 (MmFreeContiguousMemory.c)
 *     MiMapUserLargePages @ 0x1406667E0 (MiMapUserLargePages.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     MiLogSectionCreate @ 0x140A2C970 (MiLogSectionCreate.c)
 *     MiMapSystemImageWithLargePage @ 0x140A46F04 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall MiLogPerfMemoryRangeEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r10
  _QWORD v5[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v6; // [rsp+48h] [rbp-20h] BYREF
  int v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+54h] [rbp-14h]

  v4 = 0LL;
  if ( (a3 & 0x1E) == 0x1A )
    v4 = 16 * (a2 & 0xFFFFFFFFFFFFLL);
  v8 = 0;
  v5[1] = a1;
  v5[2] = a4;
  v7 = 24;
  v5[0] = ((unsigned __int8)v4 ^ (unsigned __int8)((unsigned __int64)a3 >> 1)) & 0xF ^ (unsigned __int64)v4;
  v6 = v5;
  EtwTraceKernelEvent((__int64)&v6, 1u, 0x20000001u, ((a3 & 1) == 0) | 0x278, 0x11401B04u);
}
