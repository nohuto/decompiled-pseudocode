/*
 * XREFs of SepQueryTypeString @ 0x1409CA608
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14069A700 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140743F0C (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14076AA40 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1409C8F9C (SepAdtObjectReferenceAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CB370 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     ObQueryTypeName @ 0x14097937C (ObQueryTypeName.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepQueryTypeString(__int64 a1, PVOID *a2)
{
  __int64 result; // rax
  __int64 Pool2; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v7 = 0;
  v6 = 0LL;
  result = ObQueryTypeName(a1, (__int64)&v6, 0, &v7);
  if ( (_DWORD)result == -1073741820 )
  {
    Pool2 = ExAllocatePool2(256LL, v7, 1851024723LL);
    *a2 = (PVOID)Pool2;
    if ( Pool2 )
    {
      result = ObQueryTypeName(a1, Pool2, v7, &v7);
      if ( (int)result < 0 )
      {
        ExFreePoolWithTag(*a2, 0);
        *a2 = 0LL;
        return 0LL;
      }
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
