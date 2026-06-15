/*
 * XREFs of sub_180133660 @ 0x180133660
 * Callers:
 *     sub_18005F460 @ 0x18005F460 (sub_18005F460.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall sub_180133660(HSTRING *string)
{
  if ( WindowsCreateStringReference(L"@PackageFullName", 0x10u, (HSTRING_HEADER *)(string + 1), string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
