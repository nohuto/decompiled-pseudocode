/*
 * XREFs of SepQueryNameString @ 0x140744C84
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14069A700 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepValidateReferencedCachedHandles @ 0x1407448F8 (SepValidateReferencedCachedHandles.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14076AA40 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409C7074 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x1409C84FC (SeOperationAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1409C8F9C (SepAdtObjectReferenceAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CB370 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x14071EE84 (ObQueryNameStringMode.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1407E7618 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepQueryNameString(char *a1, PVOID *a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 Pool2; // rax
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v8 = 0;
  v4 = ObQueryNameStringMode(a1, 0LL, 0, &v8, 0);
  v5 = v4;
  if ( v4 == -1073741820 || v4 == -1073741789 )
  {
    Pool2 = ExAllocatePool2(256LL, v8, 1850697043LL);
    *a2 = (PVOID)Pool2;
    if ( Pool2 )
    {
      v5 = ObQueryNameStringMode(a1, Pool2, v8, &v8, 0);
      if ( v5 < 0 || !*(_WORD *)*a2 )
      {
        ExFreePoolWithTag(*a2, 0);
        *a2 = 0LL;
        if ( v5 >= 0
          && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8)] == PsProcessType )
        {
          PsGetAllocatedFullProcessImageNameEx(a1, a2);
        }
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
