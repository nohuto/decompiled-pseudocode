__int64 __fastcall SepIsLockedDown(unsigned __int8 a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  int LicenseValue; // eax
  unsigned __int8 v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h]
  int v8; // [rsp+60h] [rbp+18h]
  int v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0;
  v2 = 0;
  v8 = 0;
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
  v7 = v6;
  if ( v6 )
    goto LABEL_9;
  LicenseValue = ZwQueryLicenseValue((__int64)aTv_1, (__int64)&v9);
  v2 = LicenseValue;
  if ( LicenseValue != -1073741772 )
  {
    if ( LicenseValue < 0 )
      return v2;
    if ( !v7 )
      goto LABEL_8;
LABEL_9:
    *a2 = 0;
    return v2;
  }
  v7 = 0;
  v2 = 0;
LABEL_8:
  if ( ExQueryFastCacheDevLicense() )
    goto LABEL_9;
  return v2;
}
