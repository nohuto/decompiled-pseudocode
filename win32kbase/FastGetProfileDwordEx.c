int __fastcall FastGetProfileDwordEx(
        PCUNICODE_STRING Source,
        __int64 a2,
        const WCHAR *a3,
        int a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v10; // rax
  void *v11; // rsi
  int v13; // [rsp+30h] [rbp-40h]
  ULONG ResultLength; // [rsp+34h] [rbp-3Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+48h] [rbp-28h] BYREF
  int v17; // [rsp+54h] [rbp-1Ch]

  ResultLength = 0;
  v13 = gdwPolicyFlags | a5;
  DestinationString = 0LL;
  if ( a7 )
    *a7 = 0;
  while ( 1 )
  {
    v10 = OpenCacheKeyEx(Source);
    v11 = (void *)v10;
    if ( !v10 )
      break;
    RtlInitUnicodeString(&DestinationString, a3);
    if ( ZwQueryValueKey(v11, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      v13 = 0;
      *a6 = v17;
    }
    else if ( !v13 )
    {
      if ( a7 )
        *a7 = 1;
      *a6 = a4;
    }
    LODWORD(v10) = ZwClose(v11);
    if ( !v13 )
      return v10;
  }
  if ( (a5 & 0x10) == 0 )
  {
    if ( a7 )
      *a7 = 1;
    *a6 = a4;
  }
  return v10;
}
