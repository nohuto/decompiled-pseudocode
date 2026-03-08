/*
 * XREFs of KeContextToKframes @ 0x140416130
 * Callers:
 *     KiDispatchException @ 0x140362740 (KiDispatchException.c)
 *     KiContinueEx @ 0x140364520 (KiContinueEx.c)
 *     KiContinuePreviousModeUser @ 0x1403647F4 (KiContinuePreviousModeUser.c)
 *     KiRestoreProcessorState @ 0x14036A318 (KiRestoreProcessorState.c)
 *     KiRestoreSetContextState @ 0x1404172F0 (KiRestoreSetContextState.c)
 *     KyRaiseException @ 0x140576670 (KyRaiseException.c)
 * Callees:
 *     KxContextToKframes @ 0x1402D7DC0 (KxContextToKframes.c)
 */

char __fastcall KeContextToKframes(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  char result; // al
  int CurrentIrql; // [rsp+28h] [rbp-B0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    __writecr8(1uLL);
  result = KxContextToKframes(a1, a2, a3, a4, a5);
  if ( result )
    _fxrstor((void *)(a3 + 256));
  if ( !CurrentIrql )
  {
    result = 0;
    __writecr8(0LL);
  }
  return result;
}
