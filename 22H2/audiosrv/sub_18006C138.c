/*
 * XREFs of sub_18006C138 @ 0x18006C138
 * Callers:
 *     sub_180047590 @ 0x180047590 (sub_180047590.c)
 * Callees:
 *     ApiSetQueryApiSetPresence @ 0x18006C830 (ApiSetQueryApiSetPresence.c)
 */

char sub_18006C138()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18019E2C0 == 1 )
    return 1;
  if ( dword_18019E2C0 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence(L"RT", &v1) < 0 )
    return 0;
  result = v1;
  dword_18019E2C0 = 2 - (v1 != 0);
  return result;
}
