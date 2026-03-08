/*
 * XREFs of KeInitializeCpuPartition @ 0x1403A5F58
 * Callers:
 *     PsCreateCpuPartition @ 0x140853FE4 (PsCreateCpuPartition.c)
 *     PspInitializeCpuPartitionsPhase0 @ 0x140B68074 (PspInitializeCpuPartitionsPhase0.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall KeInitializeCpuPartition(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 2097153;
  memset((void *)(a1 + 8), 0, 0x100uLL);
  *(_QWORD *)(a1 + 264) = 0LL;
  result = a1 + 272;
  *(_DWORD *)(a1 + 288) = a2;
  *(_QWORD *)(a1 + 280) = a1 + 272;
  *(_QWORD *)(a1 + 272) = a1 + 272;
  *(_OWORD *)(a1 + 296) = 0LL;
  *(_OWORD *)(a1 + 312) = 0LL;
  return result;
}
