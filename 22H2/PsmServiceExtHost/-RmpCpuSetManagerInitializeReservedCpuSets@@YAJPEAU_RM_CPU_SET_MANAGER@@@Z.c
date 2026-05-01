/*
 * XREFs of ?RmpCpuSetManagerInitializeReservedCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180040DDC
 * Callers:
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800405B4 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z @ 0x180040E88 (-RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 */

__int64 __fastcall RmpCpuSetManagerInitializeReservedCpuSets(struct _RM_CPU_SET_MANAGER *a1)
{
  int CpuSetInformation; // ebx
  unsigned int v3; // r10d
  unsigned int i; // r9d
  char *v5; // r8
  unsigned __int64 v7; // rdx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  P = 0LL;
  CpuSetInformation = RmpCpuSetManagerGetCpuSetInformation((struct _SYSTEM_CPU_SET_INFORMATION **)&P, &v8);
  if ( CpuSetInformation >= 0 )
  {
    memset_0((char *)a1 + 408, 0, 0xA0uLL);
    v3 = v8;
    for ( i = 0; i < v3; i += *(_DWORD *)v5 )
    {
      v5 = (char *)P + i;
      if ( !*((_DWORD *)v5 + 1) && (v5[19] & 2) != 0 )
      {
        v7 = (unsigned __int64)(unsigned int)(*((_DWORD *)v5 + 2) - 256) >> 16;
        *((_QWORD *)a1 + v7 + 51) |= 1LL << v5[8];
      }
    }
    CpuSetInformation = 0;
  }
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return (unsigned int)CpuSetInformation;
}
