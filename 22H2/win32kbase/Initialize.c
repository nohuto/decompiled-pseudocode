/*
 * XREFs of Initialize @ 0x1C0068BC4
 * Callers:
 *     Win32UserInitialize @ 0x1C0297BBC (Win32UserInitialize.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C00278B0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 Initialize()
{
  unsigned int v0; // ebx
  int v1; // edi
  void *v2; // rsi
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp-40h] BYREF
  int v5; // [rsp+34h] [rbp-3Ch] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+50h] [rbp-20h] BYREF
  int v9; // [rsp+5Ch] [rbp-14h]

  v5 = 0;
  UIPrivelegeIsolation::fEnforce = 0;
  RtlQueryElevationFlags(&v5);
  v0 = 1;
  if ( (v5 & 1) != 0 )
  {
    v1 = 0;
    ResultLength = 0;
    DestinationString = 0LL;
    v4 = gdwPolicyFlags;
    while ( 1 )
    {
      v2 = OpenCacheKeyEx(0LL, 49LL, 0x20019u, &v4);
      if ( !v2 )
        break;
      RtlInitUnicodeString(&DestinationString, L"EnableUIPI");
      if ( ZwQueryValueKey(
             v2,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) < 0 )
      {
        if ( !v4 )
          v1 = 1;
      }
      else
      {
        v1 = v9;
        v4 = 0;
      }
      ZwClose(v2);
      if ( !v4 )
      {
        UIPrivelegeIsolation::fEnforce = 0;
        if ( !v1 )
          goto LABEL_9;
        break;
      }
    }
    UIPrivelegeIsolation::fEnforce = 1;
  }
  else
  {
    v0 = 0;
  }
LABEL_9:
  if ( qword_1C0256918 )
    result = qword_1C0256918();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    result = (__int64)qword_1C0256920;
    if ( qword_1C0256920 )
      return qword_1C0256920(v0, UIPrivelegeIsolation::fEnforce);
  }
  return result;
}
