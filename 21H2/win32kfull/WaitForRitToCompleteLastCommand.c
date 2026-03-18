/*
 * XREFs of WaitForRitToCompleteLastCommand @ 0x1C00FD15C
 * Callers:
 *     EditionActivateMitInput @ 0x1C00FCD90 (EditionActivateMitInput.c)
 *     EditionDeactivateMitInput @ 0x1C00FCE60 (EditionDeactivateMitInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitForRitToCompleteLastCommand(__int64 a1)
{
  UserSessionSwitchLeaveCrit(a1);
  while ( (unsigned int)ObWaitForSingleObject(ghDITRITEvent, 0LL, 0LL, 0LL, 0LL) == 257
       && !PsIsThreadTerminating(KeGetCurrentThread()) )
    ;
  return EnterCrit(1LL, 0LL);
}
