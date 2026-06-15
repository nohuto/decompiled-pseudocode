/*
 * XREFs of sub_1800EEB74 @ 0x1800EEB74
 * Callers:
 *     sub_18000B850 @ 0x18000B850 (sub_18000B850.c)
 * Callees:
 *     sub_1800EF77C @ 0x1800EF77C (sub_1800EF77C.c)
 */

HSTRING_HEADER *__fastcall sub_1800EEB74(HSTRING_HEADER *hstringHeader)
{
  unsigned __int64 v2; // rax

  v2 = -1LL;
  hstringHeader[1].Reserved.Reserved1 = 0LL;
  do
    ++v2;
  while ( aMicrophone[v2] );
  if ( v2 > 0xFFFFFFFF || (int)v2 + 1 < (unsigned int)v2 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    __debugbreak();
    JUMPOUT(0x1800EEBDBLL);
  }
  sub_1800EF77C(hstringHeader, L"microphone");
  return hstringHeader;
}
