/*
 * XREFs of sub_1800EF77C @ 0x1800EF77C
 * Callers:
 *     sub_18000B850 @ 0x18000B850 (sub_18000B850.c)
 *     sub_180073D04 @ 0x180073D04 (sub_180073D04.c)
 *     sub_1800EEB74 @ 0x1800EEB74 (sub_1800EEB74.c)
 *     sub_1800F6BA8 @ 0x1800F6BA8 (sub_1800F6BA8.c)
 *     sub_18010D978 @ 0x18010D978 (sub_18010D978.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800EF77C(HSTRING_HEADER *hstringHeader, PCWSTR sourceString, UINT32 a3, UINT32 a4)
{
  UINT32 v4; // eax
  HRESULT StringReference; // eax

  v4 = a4;
  if ( a4 >= a3 )
    v4 = a3 - 1;
  StringReference = WindowsCreateStringReference(sourceString, v4, hstringHeader, (HSTRING *)&hstringHeader[1]);
  if ( StringReference < 0 )
  {
    RaiseException(StringReference, 1u, 0, 0LL);
    __debugbreak();
  }
}
