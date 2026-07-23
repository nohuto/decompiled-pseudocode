/*
 * XREFs of _PnpParseIndirectInfString @ 0x14061004C
 * Callers:
 *     _PnpRegQueryValueIndirect @ 0x1405F8AF0 (_PnpRegQueryValueIndirect.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140633C08 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14073F76C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x140253984 (RtlUnalignedStringCchLengthW.c)
 */

char __fastcall PnpParseIndirectInfString(const wchar_t *a1)
{
  _WORD *v1; // r11
  __int16 v3; // ax
  __int64 v4; // rcx
  __int64 i; // rdx
  __int16 v6; // cx
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int16 v10; // cx
  __int64 v11; // r8
  size_t pcchLength; // [rsp+48h] [rbp+20h] BYREF

  pcchLength = 0LL;
  if ( RtlUnalignedStringCchLengthW(a1, 0x7FFFuLL, &pcchLength) < 0 || pcchLength < 5 || *v1 != 64 )
    return 0;
  v3 = v1[1];
  LODWORD(v4) = 1;
  while ( v3 && v3 != 44 )
  {
    v4 = (unsigned int)(v4 + 1);
    v3 = v1[v4];
  }
  if ( v1[(unsigned int)v4] != 44 || v1[(unsigned int)(v4 + 1)] != 37 )
    return 0;
  for ( i = (unsigned int)(v4 + 2); ; i = (unsigned int)(i + 1) )
  {
    v6 = v1[i];
    if ( !v6 || v6 == 59 )
      break;
  }
  v7 = 0;
  if ( v1[i] == 59 )
    v7 = i;
  if ( v7 )
  {
    v8 = (unsigned int)(v7 - 1);
  }
  else
  {
    if ( pcchLength > 0xFFFFFFFF )
      return 0;
    v8 = (unsigned int)(pcchLength - 1);
  }
  if ( v1[v8] != 37 )
    return 0;
  if ( v7 )
  {
    v9 = (unsigned int)(v7 + 1);
    v10 = v1[v9];
    if ( v10 )
    {
      v11 = (unsigned int)(v9 + 1);
      do
      {
        if ( v10 == 59 && v1[v11] == 40 && v1[(unsigned int)(pcchLength - 1)] == 41 )
          break;
        v9 = (unsigned int)(v9 + 1);
        v11 = (unsigned int)(v11 + 1);
        v10 = v1[v9];
      }
      while ( v10 );
    }
  }
  return 1;
}
