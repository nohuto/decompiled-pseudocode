/*
 * XREFs of RtlResetStackOverflow @ 0x1800DE694
 * Callers:
 *     RtlQueryWnfStateData @ 0x180044F30 (RtlQueryWnfStateData.c)
 *     TppWorkerThread @ 0x18004D110 (TppWorkerThread.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005064C (EtwpWriteToPrivateBuffers.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x1800840C0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     EtwpCheckForEnoughStackSpace @ 0x180110C54 (EtwpCheckForEnoughStackSpace.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x18009D7E0 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18009D940 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x18009DBA0 (NtQuerySystemInformation.c)
 *     ZwProtectVirtualMemory @ 0x18009DEE0 (ZwProtectVirtualMemory.c)
 */

int RtlResetStackOverflow()
{
  _BYTE *v0; // rax
  unsigned __int64 v1; // r8
  ULONG_PTR v2; // rdx
  ULONG_PTR v3; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-49h] BYREF
  PVOID v6; // [rsp+38h] [rbp-41h] BYREF
  ULONG OldProtect; // [rsp+40h] [rbp-39h] BYREF
  _BYTE BaseAddress[8]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v9; // [rsp+50h] [rbp-29h]
  _BYTE SystemInformation[8]; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+Fh]

  LODWORD(v0) = ZwQueryVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  BaseAddress,
                  MemoryBasicInformation,
                  BaseAddress,
                  0x30uLL,
                  0LL);
  if ( (int)v0 >= 0 )
  {
    NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    v1 = ~(unsigned __int64)(v11 - 1);
    v2 = v1 & (NtCurrentTeb()->GuaranteedStackBytes + v11 - 1LL);
    RegionSize = v2;
    if ( v2 )
    {
      v2 += v11;
      RegionSize = v2;
    }
    v3 = 3 * v11;
    if ( v2 < v3 )
    {
      RegionSize = 3 * v11;
      v2 = (unsigned int)v3;
    }
    v0 = BaseAddress;
    v6 = (PVOID)(((unsigned __int64)BaseAddress & v1) - v2);
    if ( (unsigned __int64)v6 >= v9 + (unsigned __int64)(17 * v11) )
    {
      LODWORD(v0) = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v6, 0LL, &RegionSize, 0x1000u, 4u);
      if ( (int)v0 >= 0 )
        LODWORD(v0) = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v6, &RegionSize, 0x104u, &OldProtect);
    }
  }
  return (int)v0;
}
