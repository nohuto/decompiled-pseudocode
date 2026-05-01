/*
 * XREFs of IsPicRetrieveFileInfoPresent @ 0x180093A94
 * Callers:
 *     ?GetAppInventoryData@@YA?AUAppInventoryData@@PEBG@Z @ 0x1804CE768 (-GetAppInventoryData@@YA-AUAppInventoryData@@PEBG@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800948C0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsPicRetrieveFileInfoPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18064F824 == 1 )
    return 1;
  if ( dword_18064F824 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"BD", &v1) < 0 )
    return 0;
  result = v1;
  dword_18064F824 = 2 - (v1 != 0);
  return result;
}
