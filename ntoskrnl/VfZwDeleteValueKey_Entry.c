/*
 * XREFs of VfZwDeleteValueKey_Entry @ 0x140AD1680
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140AD1F84 (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x140AD2048 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDeleteValueKey_Entry(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  ULONG_PTR *v3; // r8

  result = ViZwShouldCheck(a1, a2, a1);
  if ( (_DWORD)result )
    return ViZwCheckUnicodeString(v3[1], *v3);
  return result;
}
