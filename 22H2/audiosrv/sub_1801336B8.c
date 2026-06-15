/*
 * XREFs of sub_1801336B8 @ 0x1801336B8
 * Callers:
 *     sub_180008FF0 @ 0x180008FF0 (sub_180008FF0.c)
 *     sub_18005F460 @ 0x18005F460 (sub_18005F460.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall sub_1801336B8(HSTRING *string)
{
  if ( WindowsCreateStringReference(L"MediaPlayback", 0xDu, (HSTRING_HEADER *)(string + 1), string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
