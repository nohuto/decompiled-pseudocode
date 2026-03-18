/*
 * XREFs of VfZwQueryValueKey_Entry @ 0x140A95680
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140A95904 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140A9598C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140A959C8 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryValueKey_Entry(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckUnicodeString(a1[5], *a1);
    ViZwCheckVirtualAddress(a1[3], *a1);
    return ViZwCheckVirtualAddress(a1[1], *a1);
  }
  return result;
}
