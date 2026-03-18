/*
 * XREFs of FastGetProfileDwordEx @ 0x1C0036EC0
 * Callers:
 *     _lambda_39f407e4fe10312c322b3b59a6fe001c_::operator() @ 0x1C00B7DBC (_lambda_39f407e4fe10312c322b3b59a6fe001c_--operator().c)
 *     FastGetProfileDword @ 0x1C00B7E20 (FastGetProfileDword.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C00371E0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 */

int __fastcall FastGetProfileDwordEx(
        __int64 a1,
        unsigned int a2,
        const WCHAR *a3,
        int a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v11; // rax
  void *v12; // rsi
  int v14; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-3Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+48h] [rbp-28h] BYREF
  int v18; // [rsp+54h] [rbp-1Ch]

  ResultLength = 0;
  v14 = gdwPolicyFlags | a5;
  DestinationString = 0LL;
  if ( a7 )
    *a7 = 0;
  while ( 1 )
  {
    v11 = OpenCacheKeyEx(a1, a2, 131097LL, &v14);
    v12 = (void *)v11;
    if ( !v11 )
      break;
    RtlInitUnicodeString(&DestinationString, a3);
    if ( ZwQueryValueKey(v12, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      v14 = 0;
      *a6 = v18;
    }
    else if ( !v14 )
    {
      if ( a7 )
        *a7 = 1;
      *a6 = a4;
    }
    LODWORD(v11) = ZwClose(v12);
    if ( !v14 )
      return v11;
  }
  if ( (a5 & 0x10) == 0 )
  {
    if ( a7 )
      *a7 = 1;
    *a6 = a4;
  }
  return v11;
}
