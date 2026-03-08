/*
 * XREFs of KeDeleteCpuPartition @ 0x140972338
 * Callers:
 *     PspDeleteCpuPartition @ 0x1409AE100 (PspDeleteCpuPartition.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140237C30 (KeIsEmptyAffinityEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeCpuPartitionMoveCpus @ 0x140572954 (KeCpuPartitionMoveCpus.c)
 */

__int64 __fastcall KeDeleteCpuPartition(unsigned __int16 *a1)
{
  __int64 result; // rax
  _DWORD v3[68]; // [rsp+20h] [rbp-128h] BYREF

  memset(&v3[2], 0, 0x100uLL);
  result = KeIsEmptyAffinityEx(a1);
  if ( !(_DWORD)result )
  {
    v3[0] = 2097153;
    memset(&v3[1], 0, 0x104uLL);
    KiCopyAffinityEx((__int64)v3, 0x20u, a1);
    return KeCpuPartitionMoveCpus(KiSystemCpuPartition, (__int64)a1, (char *)v3, 1);
  }
  return result;
}
