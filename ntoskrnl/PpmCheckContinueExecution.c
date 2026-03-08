/*
 * XREFs of PpmCheckContinueExecution @ 0x140236E60
 * Callers:
 *     PpmPerfAction @ 0x140236430 (PpmPerfAction.c)
 *     PpmPerfControlActionCallback @ 0x14045A9F0 (PpmPerfControlActionCallback.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KeCheckProcessorAffinityEx @ 0x140234B10 (KeCheckProcessorAffinityEx.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140236F18 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     PoCopyDeepIdleMask @ 0x1402AEFF0 (PoCopyDeepIdleMask.c)
 *     KiSubtractAffinityEx @ 0x1402D4CBC (KiSubtractAffinityEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeFindFirstSetRightAffinityEx @ 0x14056CE10 (KeFindFirstSetRightAffinityEx.c)
 */

__int64 PpmCheckContinueExecution()
{
  unsigned int Number; // ebx
  int v2; // eax
  __int64 *v3; // rcx
  _DWORD v4[68]; // [rsp+30h] [rbp-128h] BYREF

  memset(&v4[2], 0, 0x100uLL);
  KeQuerySystemAllowedCpuSetAffinity(&PpmCachedSystemAllowedCpuSet, &PpmCachedSystemAllowedCpuSetVersion);
  Number = KeGetCurrentPrcb()->Number;
  if ( !(unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)&PpmCachedSystemAllowedCpuSet, Number) )
  {
    v4[0] = 2097153;
    memset(&v4[1], 0, 0x104uLL);
    PoCopyDeepIdleMask(v4);
    v2 = KiSubtractAffinityEx(&PpmCachedSystemAllowedCpuSet, v4, v4, HIWORD(v4[0]));
    v3 = (__int64 *)v4;
    if ( !v2 )
      v3 = &PpmCachedSystemAllowedCpuSet;
    LOWORD(Number) = KeFindFirstSetRightAffinityEx(v3);
  }
  if ( !qword_140C3BD98 )
    word_140C3BD62 = Number + 2048;
  return KiInsertQueueDpc((ULONG_PTR)&PpmCheckDpc, 0LL, 0LL, 0LL, 0);
}
