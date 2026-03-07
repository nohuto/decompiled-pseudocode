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
