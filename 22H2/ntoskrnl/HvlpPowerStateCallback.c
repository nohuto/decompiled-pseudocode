/*
 * XREFs of HvlpPowerStateCallback @ 0x14053FFF0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpCheckTscSync @ 0x140548500 (HvlpCheckTscSync.c)
 */

void __fastcall HvlpPowerStateCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2, __int64 a4)
{
  if ( (_DWORD)Argument1 == 3 && (_DWORD)Argument2 == 1 )
    HvlpCheckTscSync(CallbackContext, Argument1, Argument2, a4);
}
