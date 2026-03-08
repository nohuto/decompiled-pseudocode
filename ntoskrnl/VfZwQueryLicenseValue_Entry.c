/*
 * XREFs of VfZwQueryLicenseValue_Entry @ 0x140AD1C70
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140AD1F84 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140AD200C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140AD2048 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryLicenseValue_Entry(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(a1[4], *a1);
    ViZwCheckVirtualAddress(a1[3], *a1);
    ViZwCheckVirtualAddress(a1[1], *a1);
    return ViZwCheckUnicodeString(a1[5], *a1);
  }
  return result;
}
