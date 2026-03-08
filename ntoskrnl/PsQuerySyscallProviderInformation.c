/*
 * XREFs of PsQuerySyscallProviderInformation @ 0x1409B1560
 * Callers:
 *     <none>
 * Callees:
 *     PspQuerySyscallProviderProcessList @ 0x1409B1EA0 (PspQuerySyscallProviderProcessList.c)
 */

__int64 __fastcall PsQuerySyscallProviderInformation(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, _QWORD *a5)
{
  unsigned int v5; // r10d
  unsigned int SyscallProviderProcessList; // eax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = -1073741821;
  if ( !a2 )
  {
    v8[0] = a4 >> 3;
    SyscallProviderProcessList = PspQuerySyscallProviderProcessList(a1, v8);
    v5 = SyscallProviderProcessList;
    if ( a5 )
    {
      if ( (int)(SyscallProviderProcessList + 0x80000000) < 0 || SyscallProviderProcessList == -2147483643 )
        *a5 = 8LL * v8[0];
    }
  }
  return v5;
}
