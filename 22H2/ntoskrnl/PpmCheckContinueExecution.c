/*
 * XREFs of PpmCheckContinueExecution @ 0x14022B0F0
 * Callers:
 *     PpmPerfAction @ 0x140220730 (PpmPerfAction.c)
 *     PpmPerfControlActionCallback @ 0x14056E6F0 (PpmPerfControlActionCallback.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14021FD20 (KiInsertQueueDpc.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140229B00 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KeSubtractAffinityEx @ 0x14022AFE0 (KeSubtractAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x14035DDD0 (PoCopyDeepIdleMask.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     KeFindFirstSetRightAffinityEx @ 0x1405134D0 (KeFindFirstSetRightAffinityEx.c)
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
