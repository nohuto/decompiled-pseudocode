/*
 * XREFs of PipCslStateChangeCallback @ 0x14079BB00
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     PipCslUpdateState @ 0x14079BB30 (PipCslUpdateState.c)
 */

void __fastcall PipCslStateChangeCallback(PVOID CallbackContext, _BYTE *Argument1, PVOID Argument2)
{
  __int64 v3; // rcx

  if ( !PipCslInitialized )
    KeBugCheckEx(0xCAu, 0x10uLL, 0LL, 0LL, 0LL);
  v3 = 1LL;
  if ( !*Argument1 )
    v3 = 2LL;
  PipCslUpdateState(v3, Argument1, Argument2);
}
