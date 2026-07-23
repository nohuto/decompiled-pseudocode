/*
 * XREFs of _PnpParseIndirectResourceString @ 0x1405DE350
 * Callers:
 *     _PnpRegQueryValueIndirect @ 0x1405F8AF0 (_PnpRegQueryValueIndirect.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140633C08 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14073F76C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x140253984 (RtlUnalignedStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     RtlUnicodeStringToInteger @ 0x1405DE4B0 (RtlUnicodeStringToInteger.c)
 */

char __fastcall PnpParseIndirectResourceString(__int64 a1)
{
  int v2; // ebp
  __int16 v4; // ax
  unsigned int v5; // ecx
  __int64 v6; // rsi
  __int16 v7; // ax
  __int64 i; // rcx
  __int16 v9; // dx
  int v10; // edi
  __int64 v11; // rdx
  __int16 v12; // cx
  __int64 v13; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  size_t Value; // [rsp+68h] [rbp+20h] BYREF

  Value = 0LL;
  DestinationString = 0LL;
  if ( RtlUnalignedStringCchLengthW((STRSAFE_PCUNZWCH)a1, 0x7FFFuLL, &Value) < 0 )
    return 0;
  v2 = Value;
  if ( Value < 5 || *(_WORD *)a1 != 64 )
    return 0;
  v4 = *(_WORD *)(a1 + 2);
  v5 = 1;
  while ( v4 && v4 != 44 )
    v4 = *(_WORD *)(a1 + 2LL * ++v5);
  if ( *(_WORD *)(a1 + 2LL * v5) != 44 )
    return 0;
  v6 = v5 + 1;
  v7 = *(_WORD *)(a1 + 2 * v6);
  if ( v7 != 35 && v7 != 45 )
    return 0;
  for ( i = (unsigned int)(v6 + 1); ; i = (unsigned int)(i + 1) )
  {
    v9 = *(_WORD *)(a1 + 2 * i);
    if ( !v9 || v9 == 59 )
      break;
  }
  v10 = 0;
  if ( *(_WORD *)(a1 + 2 * i) == 59 )
    v10 = i;
  if ( RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)(a1 + 2 * (v6 + 1))) < 0 )
    return 0;
  if ( v10 )
  {
    DestinationString.Length = 2 * (v10 - v6) - 2;
    DestinationString.MaximumLength = DestinationString.Length;
  }
  if ( RtlUnicodeStringToInteger(&DestinationString, 0xAu, (PULONG)&Value) < 0 )
    return 0;
  if ( v10 )
  {
    v11 = (unsigned int)(v10 + 1);
    v12 = *(_WORD *)(a1 + 2 * v11);
    if ( v12 )
    {
      v13 = (unsigned int)(v10 + 2);
      do
      {
        if ( v12 == 59 && *(_WORD *)(a1 + 2 * v13) == 40 && *(_WORD *)(a1 + 2LL * (unsigned int)(v2 - 1)) == 41 )
          break;
        v11 = (unsigned int)(v11 + 1);
        v13 = (unsigned int)(v13 + 1);
        v12 = *(_WORD *)(a1 + 2 * v11);
      }
      while ( v12 );
    }
  }
  return 1;
}
