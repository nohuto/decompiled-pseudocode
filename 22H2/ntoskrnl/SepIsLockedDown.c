/*
 * XREFs of SepIsLockedDown @ 0x14091BFEC
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x140603818 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x1403FC4A0 (ZwQueryLicenseValue.c)
 *     ExQueryFastCacheDevLicense @ 0x14069ABE0 (ExQueryFastCacheDevLicense.c)
 *     KIsSideloadingEnabled @ 0x14095EFF4 (KIsSideloadingEnabled.c)
 */

__int64 __fastcall SepIsLockedDown(unsigned __int8 a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  NTSTATUS v4; // eax
  unsigned __int8 v6; // [rsp+50h] [rbp+8h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF
  ULONG ResultDataSize; // [rsp+60h] [rbp+18h] BYREF
  ULONG Type; // [rsp+68h] [rbp+20h] BYREF

  Type = 0;
  v2 = 0;
  ResultDataSize = 0;
  v6 = 0;
  *a2 = 1;
  if ( a1 < 2u )
  {
    *a2 = 0;
    return v2;
  }
  v2 = KIsSideloadingEnabled(&v6);
  if ( (v2 & 0x80000000) != 0 )
    return v2;
  Data = v6;
  if ( v6 )
    goto LABEL_9;
  v4 = ZwQueryLicenseValue(&stru_140C0EF58, &Type, &Data, 4u, &ResultDataSize);
  v2 = v4;
  if ( v4 != -1073741772 )
  {
    if ( v4 < 0 )
      return v2;
    if ( !Data )
      goto LABEL_8;
LABEL_9:
    *a2 = 0;
    return v2;
  }
  Data = 0;
  v2 = 0;
LABEL_8:
  if ( ExQueryFastCacheDevLicense() )
    goto LABEL_9;
  return v2;
}
