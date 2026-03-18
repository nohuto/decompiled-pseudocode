/*
 * XREFs of WaitForRitToCompleteLastCommand @ 0x1C00A45A8
 * Callers:
 *     EditionDeactivateMitInput @ 0x1C00A4240 (EditionDeactivateMitInput.c)
 *     EditionActivateMitInput @ 0x1C00A4400 (EditionActivateMitInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitForRitToCompleteLastCommand(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
  while ( (unsigned int)ObWaitForSingleObject(WPP_MAIN_CB.Dpc.DeferredContext, 0LL, 0LL, 0LL, 0LL) == 257
       && !PsIsThreadTerminating(KeGetCurrentThread()) )
    ;
  return EnterCrit(1LL, 0LL);
}
