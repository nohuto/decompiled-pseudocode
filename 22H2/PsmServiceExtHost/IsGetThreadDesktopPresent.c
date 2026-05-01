/*
 * XREFs of IsGetThreadDesktopPresent @ 0x180045D9C
 * Callers:
 *     ?GetCurrentDesktopName@@YAHPEAGI@Z @ 0x1800879D4 (-GetCurrentDesktopName@@YAHPEAGI@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180045380 (ApiSetQueryApiSetPresence_0.c)
 */

char IsGetThreadDesktopPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800B3CFC == 1 )
    return 1;
  if ( dword_1800B3CFC == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"LN", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1800B3CFC = 2 - (v1 != 0);
  return result;
}
