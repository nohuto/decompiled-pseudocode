/*
 * XREFs of Initialize @ 0x1C00572BC
 * Callers:
 *     Win32UserInitialize @ 0x1C02E231C (Win32UserInitialize.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0019FB0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*Initialize())(void)
{
  unsigned int v0; // ebx
  int v1; // edi
  void *v2; // rsi
  __int64 (*result)(void); // rax
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
    do
    {
      v2 = OpenCacheKeyEx(0LL, 49LL, 131097LL, &v4);
      if ( !v2 )
        goto LABEL_9;
      RtlInitUnicodeString(&DestinationString, L"EnableUIPI");
      if ( ZwQueryValueKey(
             v2,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) >= 0 )
      {
        v1 = v9;
        v4 = 0;
      }
      else if ( !v4 )
      {
        v1 = 1;
      }
      ZwClose(v2);
    }
    while ( v4 );
    if ( v1 )
    {
LABEL_9:
      UIPrivelegeIsolation::fEnforce = 1;
      goto LABEL_10;
    }
    UIPrivelegeIsolation::fEnforce = 0;
  }
  else
  {
    v0 = 0;
  }
LABEL_10:
  result = qword_1C029C678;
  if ( qword_1C029C678 )
  {
    result = (__int64 (*)(void))qword_1C029C678();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C029C680;
      if ( qword_1C029C680 )
        return (__int64 (*)(void))qword_1C029C680(v0, UIPrivelegeIsolation::fEnforce);
    }
  }
  return result;
}
