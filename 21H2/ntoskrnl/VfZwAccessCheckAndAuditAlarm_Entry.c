/*
 * XREFs of VfZwAccessCheckAndAuditAlarm_Entry @ 0x140A94880
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140A95904 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140A9598C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140A959C8 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAccessCheckAndAuditAlarm_Entry(ULONG_PTR *a1)
{
  __int64 result; // rax

  result = ViZwShouldCheck();
  if ( (_DWORD)result )
  {
    ViZwCheckUnicodeString(a1[11], *a1);
    ViZwCheckUnicodeString(a1[9], *a1);
    ViZwCheckUnicodeString(a1[8], *a1);
    ViZwCheckVirtualAddress(a1[7], *a1);
    ViZwCheckVirtualAddress(a1[5], *a1);
    ViZwCheckVirtualAddress(a1[3], *a1);
    return ViZwCheckVirtualAddress(a1[1], *a1);
  }
  return result;
}
