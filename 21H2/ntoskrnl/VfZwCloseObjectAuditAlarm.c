/*
 * XREFs of VfZwCloseObjectAuditAlarm @ 0x1409E9B50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViZwCheckUnicodeString @ 0x1409ED8AC (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x1409ED990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCloseObjectAuditAlarm(ULONG_PTR BugCheckParameter3, __int64 a2, char a3)
{
  __int64 v6; // r8
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckUnicodeString(BugCheckParameter3, retaddr);
  LOBYTE(v6) = a3;
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64, __int64))pXdvZwCloseObjectAuditAlarm)(BugCheckParameter3, a2, v6);
}
