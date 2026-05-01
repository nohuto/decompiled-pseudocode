/*
 * XREFs of IsNAVShutdownPresent @ 0x1800927F8
 * Callers:
 *     ?Shutdown@ViewManagerBridge@@UEAAXXZ @ 0x180332090 (-Shutdown@ViewManagerBridge@@UEAAXXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800948A0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsNAVShutdownPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18064F718 == 1 )
    return 1;
  if ( dword_18064F718 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"HJ", &v1) < 0 )
    return 0;
  result = v1;
  dword_18064F718 = 2 - (v1 != 0);
  return result;
}
