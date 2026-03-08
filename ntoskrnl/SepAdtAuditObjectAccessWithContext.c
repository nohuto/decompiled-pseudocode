/*
 * XREFs of SepAdtAuditObjectAccessWithContext @ 0x1406995C8
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140790670 (NtOpenObjectAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409C8838 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409C8A64 (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CB370 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     SepAdtAuditThisEventWithContext @ 0x140699810 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140699890 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     RtlPrefixUnicodeString @ 0x1406D5A70 (RtlPrefixUnicodeString.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1408A1798 (SepAdtClassifyObjectIntoSubCategory.c)
 */

__int64 __fastcall SepAdtAuditObjectAccessWithContext(
        __int64 a1,
        const UNICODE_STRING *a2,
        char a3,
        char a4,
        __int64 a5,
        char a6,
        unsigned __int16 *a7)
{
  unsigned int v11; // r10d
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int16 v17; // ax

  *a7 = 118;
  v11 = a3 != 0 ? 3 : 0;
  v12 = v11 | 0x30;
  if ( !a4 )
    v12 = v11;
  result = SepAdtAuditThisEventByCategoryWithContext(2LL, v12, a5);
  if ( (_BYTE)result )
  {
    if ( a1 || a6 )
    {
      LOBYTE(v16) = a4;
      LOBYTE(v15) = a3;
      v17 = SepAdtClassifyObjectIntoSubCategory(a1, a2, v15, v16);
    }
    else if ( a2 && RtlPrefixUnicodeString(&SepSamTypeNamePrefix, a2, 0) )
    {
      v17 = 119;
    }
    else
    {
      v17 = 120;
    }
    LOBYTE(v15) = a4;
    *a7 = v17;
    LOBYTE(v14) = a3;
    return SepAdtAuditThisEventWithContext(v17, v14, v15, a5);
  }
  return result;
}
