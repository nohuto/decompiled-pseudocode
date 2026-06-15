/*
 * XREFs of sub_18013473C @ 0x18013473C
 * Callers:
 *     sub_18007C420 @ 0x18007C420 (sub_18007C420.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_18013473C(HSTRING *a1)
{
  HRESULT result; // eax

  result = WindowsDeleteString(*a1);
  *a1 = 0LL;
  return result;
}
