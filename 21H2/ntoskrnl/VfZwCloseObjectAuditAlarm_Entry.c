/*
 * XREFs of VfZwCloseObjectAuditAlarm_Entry @ 0x140A94C30
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140A95904 (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x140A959C8 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCloseObjectAuditAlarm_Entry(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  ULONG_PTR *v3; // r8

  result = ViZwShouldCheck(a1, a2, a1);
  if ( (_DWORD)result )
    return ViZwCheckUnicodeString(v3[3], *v3);
  return result;
}
