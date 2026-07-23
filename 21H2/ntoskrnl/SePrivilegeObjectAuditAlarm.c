/*
 * XREFs of SePrivilegeObjectAuditAlarm @ 0x1406939E0
 * Callers:
 *     PspCreateObjectHandle @ 0x14063F5E4 (PspCreateObjectHandle.c)
 *     ObpCreateHandle @ 0x14070D930 (ObpCreateHandle.c)
 *     SeCheckPrivilegedObject @ 0x14078E020 (SeCheckPrivilegedObject.c)
 * Callees:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140693A3C (SepAdtPrivilegeObjectAuditAlarm.c)
 */

__int64 __fastcall SePrivilegeObjectAuditAlarm(int a1, __int64 *a2, int a3, __int64 a4, char a5, char a6)
{
  __int64 result; // rax

  if ( a6 )
    return SepAdtPrivilegeObjectAuditAlarm((unsigned int)&SeSubsystemName, 0, 0, a1, *a2, a2[2], a2[3], a3, a4, a5);
  return result;
}
