/*
 * XREFs of PpmCheckContinueExecution @ 0x14022B780
 * Callers:
 *     PpmPerfAction @ 0x140220770 (PpmPerfAction.c)
 *     PpmPerfControlActionCallback @ 0x14056E7B0 (PpmPerfControlActionCallback.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14021FD60 (KiInsertQueueDpc.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x14022A190 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KeSubtractAffinityEx @ 0x14022B670 (KeSubtractAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x1402EC870 (PoCopyDeepIdleMask.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     KeFindFirstSetRightAffinityEx @ 0x140513590 (KeFindFirstSetRightAffinityEx.c)
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
  if ( !qword_140C21098 )
    word_140C21062 = Number + 1280;
  return KiInsertQueueDpc((ULONG_PTR)&PpmCheckDpc, 0LL, 0LL, 0LL, 0);
}
