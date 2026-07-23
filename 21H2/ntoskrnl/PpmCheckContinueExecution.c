/*
 * XREFs of PpmCheckContinueExecution @ 0x1402D0030
 * Callers:
 *     PpmPerfAction @ 0x1402C5070 (PpmPerfAction.c)
 *     PpmPerfControlActionCallback @ 0x14056E9F0 (PpmPerfControlActionCallback.c)
 * Callees:
 *     PoCopyDeepIdleMask @ 0x14029DBC0 (PoCopyDeepIdleMask.c)
 *     KiInsertQueueDpc @ 0x1402C4660 (KiInsertQueueDpc.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1402CEA40 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KeSubtractAffinityEx @ 0x1402CFF20 (KeSubtractAffinityEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     KeFindFirstSetRightAffinityEx @ 0x1405137D0 (KeFindFirstSetRightAffinityEx.c)
 */

__int64 PpmCheckContinueExecution()
{
  __int64 Number; // rax
  int v2; // eax
  unsigned __int16 *v3; // rcx
  unsigned __int16 v4[88]; // [rsp+30h] [rbp-C8h] BYREF

  memset(v4, 0, 0xA8uLL);
  KeQuerySystemAllowedCpuSetAffinity(&PpmCachedSystemAllowedCpuSet, PpmCachedSystemAllowedCpuSetVersion);
  Number = KeGetCurrentPrcb()->Number;
  if ( ((*((_QWORD *)&PpmCachedSystemAllowedCpuSet
         + ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6)
         + 1) >> (KiProcessorIndexToNumberMappingTable[Number] & 0x3F)) & 1) == 0 )
  {
    PoCopyDeepIdleMask(v4);
    v2 = KeSubtractAffinityEx((unsigned __int16 *)&PpmCachedSystemAllowedCpuSet, v4, v4);
    v3 = v4;
    if ( !v2 )
      v3 = (unsigned __int16 *)&PpmCachedSystemAllowedCpuSet;
    LOWORD(Number) = KeFindFirstSetRightAffinityEx(v3);
  }
  if ( !qword_140C210B8 )
    word_140C21082 = Number + 1280;
  return KiInsertQueueDpc((ULONG_PTR)&PpmCheckDpc, 0LL, 0LL, 0LL, 0);
}
