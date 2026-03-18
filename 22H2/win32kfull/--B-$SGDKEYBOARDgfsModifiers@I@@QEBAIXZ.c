/*
 * XREFs of ??B?$SGDKEYBOARDgfsModifiers@I@@QEBAIXZ @ 0x1C015240E
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00500BC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int(__int64 a1)
{
  return *(unsigned int *)(SGDGetUserSessionState(a1) + 13824);
}
