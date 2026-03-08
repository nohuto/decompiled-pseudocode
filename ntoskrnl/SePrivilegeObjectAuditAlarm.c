/*
 * XREFs of SePrivilegeObjectAuditAlarm @ 0x140699650
 * Callers:
 *     PspCreateObjectHandle @ 0x1406B1864 (PspCreateObjectHandle.c)
 *     SeCheckPrivilegedObject @ 0x1407913D4 (SeCheckPrivilegedObject.c)
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 * Callees:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406996AC (SepAdtPrivilegeObjectAuditAlarm.c)
 */

__int64 __fastcall SePrivilegeObjectAuditAlarm(int a1, __int64 *a2, int a3, __int64 a4, char a5, char a6)
{
  __int64 result; // rax

  if ( a6 )
    return SepAdtPrivilegeObjectAuditAlarm((unsigned int)&SeSubsystemName, 0, 0, a1, *a2, a2[2], a2[3], a3, a4, a5);
  return result;
}
