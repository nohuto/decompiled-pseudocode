/*
 * XREFs of HalpBlkPoGetPowerInterface @ 0x1403B1880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpBlkPoGetPowerInterface(__int64 a1)
{
  if ( !HalpInterruptBlockedProcessors )
    return 3221225659LL;
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = HalpBlkPoReadPerfMsr;
  *(_QWORD *)(a1 + 16) = HalpBlkPoWritePerfMsr;
  *(_QWORD *)(a1 + 24) = HalpBlkPoReadPerfIoPort;
  *(_QWORD *)(a1 + 32) = HalpBlkPoWritePerfIoPort;
  return 0LL;
}
