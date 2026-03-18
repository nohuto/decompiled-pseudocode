/*
 * XREFs of InitializeDefaultFamilyFonts @ 0x1C039087C
 * Callers:
 *     vInitMapper @ 0x1C0391E00 (vInitMapper.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0014ED0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C00C8968 (-bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C00E2700 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

int InitializeDefaultFamilyFonts()
{
  int result; // eax
  unsigned __int64 i; // rbx
  __int64 v2; // rdx
  _WORD *v3; // rax
  __int64 v4; // rdi
  char *v5; // rax
  HANDLE Handle; // [rsp+20h] [rbp-88h] BYREF
  _DWORD KeyValueInformation[24]; // [rsp+30h] [rbp-78h] BYREF

  Handle = 0LL;
  result = GetGreRegKey(
             &Handle,
             0x20019u,
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\FontMapper\\FamilyDefaults");
  if ( result >= 0 )
  {
    memset(KeyValueInformation, 0, 0x54uLL);
    for ( i = 0LL; i < 6; ++i )
    {
      if ( bQueryValueKey(*(PCWSTR *)&algn_1C02DEEE8[i * 8], Handle, KeyValueInformation, 0x54u)
        && KeyValueInformation[1] == 1 )
      {
        v2 = 33LL;
        v3 = &KeyValueInformation[3];
        do
        {
          if ( !*v3 )
            break;
          ++v3;
          --v2;
        }
        while ( v2 );
        v4 = (33 - v2) & -(__int64)(v2 != 0);
        if ( v2 )
        {
          if ( 2 * (_DWORD)v4 == -2 )
            v5 = 0LL;
          else
            v5 = (char *)Win32AllocPoolZInit((unsigned int)(2 * v4 + 2), 1717855815LL);
          gpwszFamilyDefaultFonts[i] = v5;
          if ( v5 )
          {
            if ( (int)StringCchCopyW(v5, v4 + 1, (char *)&KeyValueInformation[3]) < 0 )
            {
              Win32FreePool(gpwszFamilyDefaultFonts[i]);
              gpwszFamilyDefaultFonts[i] = 0LL;
            }
          }
        }
      }
    }
    return ZwClose(Handle);
  }
  return result;
}
