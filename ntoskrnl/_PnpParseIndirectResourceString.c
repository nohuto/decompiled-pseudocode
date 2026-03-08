/*
 * XREFs of _PnpParseIndirectResourceString @ 0x140751C48
 * Callers:
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406C9418 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14074DDF4 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _PnpRegQueryValueIndirect @ 0x140769420 (_PnpRegQueryValueIndirect.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x140246434 (RtlUnalignedStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     RtlUnicodeStringToInteger @ 0x140751D60 (RtlUnicodeStringToInteger.c)
 */

bool __fastcall PnpParseIndirectResourceString(const wchar_t *a1)
{
  _WORD *v1; // r11
  __int16 v3; // ax
  unsigned int v4; // ecx
  __int64 v5; // rdi
  __int16 v6; // ax
  __int64 i; // rcx
  __int16 v8; // dx
  int v9; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  size_t Value; // [rsp+58h] [rbp+20h] BYREF

  Value = 0LL;
  DestinationString = 0LL;
  if ( RtlUnalignedStringCchLengthW(a1, 0x7FFFuLL, &Value) < 0 || Value < 5 || *v1 != 64 )
    return 0;
  v3 = v1[1];
  v4 = 1;
  while ( v3 && v3 != 44 )
    v3 = v1[++v4];
  if ( v1[v4] != 44 )
    return 0;
  v5 = v4 + 1;
  v6 = v1[v5];
  if ( v6 != 35 && v6 != 45 )
    return 0;
  for ( i = v4 + 2; ; i = (unsigned int)(i + 1) )
  {
    v8 = v1[i];
    if ( !v8 || v8 == 59 )
      break;
  }
  v9 = 0;
  if ( v1[i] == 59 )
    v9 = i;
  if ( RtlInitUnicodeStringEx(&DestinationString, &v1[v5 + 1]) < 0 )
    return 0;
  if ( v9 )
  {
    DestinationString.Length = 2 * (v9 - v5) - 2;
    DestinationString.MaximumLength = DestinationString.Length;
  }
  return RtlUnicodeStringToInteger(&DestinationString, 0xAu, (PULONG)&Value) >= 0;
}
