/*
 * XREFs of _PnpParseIndirectInfString @ 0x14077B4AC
 * Callers:
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406C9418 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14074DDF4 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _PnpRegQueryValueIndirect @ 0x140769420 (_PnpRegQueryValueIndirect.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x140246434 (RtlUnalignedStringCchLengthW.c)
 */

bool __fastcall PnpParseIndirectInfString(const wchar_t *a1)
{
  _WORD *v1; // r11
  __int16 v3; // ax
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int64 i; // rcx
  __int16 v7; // r8
  int v8; // r8d
  __int64 v9; // rax
  size_t pcchLength; // [rsp+48h] [rbp+20h] BYREF

  pcchLength = 0LL;
  if ( RtlUnalignedStringCchLengthW(a1, 0x7FFFuLL, &pcchLength) < 0 || pcchLength < 5 || *v1 != 64 )
    return 0;
  v3 = v1[1];
  v4 = 1;
  while ( v3 && v3 != 44 )
    v3 = v1[++v4];
  if ( v1[v4] != 44 )
    return 0;
  v5 = v4 + 1;
  if ( v1[v5] != 37 )
    return 0;
  for ( i = (unsigned int)(v5 + 1); ; i = (unsigned int)(i + 1) )
  {
    v7 = v1[i];
    if ( !v7 || v7 == 59 )
      break;
  }
  v8 = 0;
  if ( v1[i] == 59 )
    v8 = i;
  if ( v8 )
  {
    v9 = (unsigned int)(v8 - 1);
  }
  else
  {
    if ( pcchLength > 0xFFFFFFFF )
      return 0;
    v9 = (unsigned int)(pcchLength - 1);
  }
  return v1[v9] == 37;
}
