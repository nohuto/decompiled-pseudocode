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
      return 117;
    if ( v5 == IoFileObjectType )
    {
      if ( !SepAuditingEnabledForSubcategory(128, a3, a4)
        || (unsigned __int8)SepIsRemovableStorageDevice(*(_QWORD *)(v6 + 8)) != 1 )
      {
        return 116;
      }
      return v7;
    }
    if ( v5 == (POBJECT_TYPE *)IoDeviceObjectType
      && SepAuditingEnabledForSubcategory(128, a3, a4)
      && (unsigned __int8)SepIsRemovableStorageDevice(v8) == 1 )
    {
      return v7;
    }
    return 118;
  }
  if ( !a2 )
    return 118;
  if ( !RtlCompareUnicodeString(a2, &SepFileTypeName, 0) )
    return 116;
  return (RtlCompareUnicodeString(a2, &SepRegistryTypeName, 0) != 0) + 117;
}
