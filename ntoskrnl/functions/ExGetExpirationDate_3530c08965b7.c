__int64 __fastcall ExGetExpirationDate(PLARGE_INTEGER Time)
{
  int LicenseValue; // ebx
  __int64 v3; // rcx
  int v5; // [rsp+38h] [rbp-1h] BYREF
  TIME_FIELDS TimeFields; // [rsp+40h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+17h] BYREF
  __int128 v8; // [rsp+60h] [rbp+27h]
  __int128 v9; // [rsp+70h] [rbp+37h]

  *(_DWORD *)&TimeFields.Milliseconds = 0;
  v5 = 0;
  DestinationString = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( !Time )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&DestinationString, L"Kernel-ExpirationDate");
  LicenseValue = ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v5);
  if ( LicenseValue < 0 )
    goto LABEL_8;
  v3 = v9 - v8;
  if ( (_QWORD)v9 == (_QWORD)v8 )
    v3 = *((_QWORD *)&v9 + 1) - *((_QWORD *)&v8 + 1);
  if ( !v3 )
    goto LABEL_8;
  TimeFields.Year = v8;
  *(_DWORD *)&TimeFields.Month = *(_DWORD *)((char *)&v8 + 2);
  TimeFields.Hour = WORD3(v8);
  *(_DWORD *)&TimeFields.Minute = DWORD2(v8);
  if ( !RtlTimeFieldsToTime(&TimeFields, Time) )
  {
    LicenseValue = -1073741823;
LABEL_8:
    Time->QuadPart = 0LL;
  }
  return (unsigned int)LicenseValue;
}
