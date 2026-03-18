/*
 * XREFs of SepAdtClassifyObjectIntoSubCategory @ 0x1408A6618
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406C0580 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1406C3338 (SepAdtAuditObjectAccessWithContext.c)
 *     ObpCreateHandle @ 0x1406E45C0 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1407DCE08 (SeAuditHandleCreation.c)
 *     SeOperationAuditAlarm @ 0x1409CB54C (SeOperationAuditAlarm.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x140229700 (SepAuditingEnabledForSubcategory.c)
 *     RtlCompareUnicodeString @ 0x1406DA1F0 (RtlCompareUnicodeString.c)
 *     SepIsRemovableStorageDevice @ 0x1409D12D0 (SepIsRemovableStorageDevice.c)
 */

__int16 __fastcall SepAdtClassifyObjectIntoSubCategory(__int64 a1, const UNICODE_STRING *a2, char a3, char a4)
{
  POBJECT_TYPE *v5; // rax
  __int64 v6; // r11
  __int16 v7; // r9
  __int64 v8; // r11

  if ( a1 )
  {
    v5 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
    if ( v5 == CmKeyObjectType )
      return 118;
    if ( v5 == IoFileObjectType )
    {
      if ( !SepAuditingEnabledForSubcategory(129, a3, a4)
        || (unsigned __int8)SepIsRemovableStorageDevice(*(_QWORD *)(v6 + 8)) != 1 )
      {
        return 117;
      }
      return v7;
    }
    if ( v5 == (POBJECT_TYPE *)IoDeviceObjectType
      && SepAuditingEnabledForSubcategory(129, a3, a4)
      && (unsigned __int8)SepIsRemovableStorageDevice(v8) == 1 )
    {
      return v7;
    }
    return 119;
  }
  if ( !a2 )
    return 119;
  if ( !RtlCompareUnicodeString(a2, &SepFileTypeName, 0) )
    return 117;
  return (RtlCompareUnicodeString(a2, &SepRegistryTypeName, 0) != 0) + 118;
}
