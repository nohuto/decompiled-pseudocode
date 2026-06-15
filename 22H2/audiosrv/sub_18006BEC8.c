/*
 * XREFs of sub_18006BEC8 @ 0x18006BEC8
 * Callers:
 *     sub_18002ABF0 @ 0x18002ABF0 (sub_18002ABF0.c)
 * Callees:
 *     ApiSetQueryApiSetPresence @ 0x18006C830 (ApiSetQueryApiSetPresence.c)
 */

char sub_18006BEC8()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18019E288 == 1 )
    return 1;
  if ( dword_18019E288 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_18019E288 = 2 - (v1 != 0);
  return result;
}
