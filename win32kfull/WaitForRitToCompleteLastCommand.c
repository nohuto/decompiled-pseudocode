/*
 * XREFs of WaitForRitToCompleteLastCommand @ 0x1C00DB5C8
 * Callers:
 *     EditionDeactivateMitInput @ 0x1C00DB260 (EditionDeactivateMitInput.c)
 *     EditionActivateMitInput @ 0x1C00DB420 (EditionActivateMitInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitForRitToCompleteLastCommand(__int64 a1)
{
  UserSessionSwitchLeaveCrit(a1);
  while ( (unsigned int)ObWaitForSingleObject(WPP_MAIN_CB.Dpc.DeferredRoutine, 0LL, 0LL, 0LL, 0LL) == 257
       && !PsIsThreadTerminating(KeGetCurrentThread()) )
    ;
  return EnterCrit(1LL, 0LL);
}
