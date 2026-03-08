/*
 * XREFs of InitializeDefaultFamilyFonts @ 0x1C03B6ADC
 * Callers:
 *     vInitMapper @ 0x1C03B6370 (vInitMapper.c)
 * Callees:
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C00B96F0 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     ?bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C00BAA08 (-bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C01165A4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

int InitializeDefaultFamilyFonts()
{
  int result; // eax
  __int64 v1; // rcx
  __int64 v2; // rbx
  char *v3; // rbp
  void **v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned __int16 *v7; // rax
  __int64 v8; // rbx
  char *v9; // rax
  HANDLE Handle; // [rsp+20h] [rbp-88h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+30h] [rbp-78h] BYREF
  int v12; // [rsp+34h] [rbp-74h]
  char v13[84]; // [rsp+3Ch] [rbp-6Ch] BYREF

  Handle = 0LL;
  result = GetGreRegKey(
             &Handle,
             0x20019u,
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\FontMapper\\FamilyDefaults");
  if ( result >= 0 )
  {
    v2 = *(_QWORD *)(SGDGetSessionState(v1) + 32);
    memset_0(KeyValueInformation, 0, 0x54uLL);
    v3 = (char *)&unk_1C030B400 - v2;
    v4 = (void **)(v2 + 19536);
    v5 = 6LL;
    while ( 1 )
    {
      if ( !bQueryValueKey(*(PCWSTR *)&v3[(_QWORD)v4 - 19536], Handle, KeyValueInformation, 0x54u) || v12 != 1 )
        goto LABEL_12;
      v6 = 33LL;
      v7 = (unsigned __int16 *)v13;
      do
      {
        if ( !*v7 )
          break;
        ++v7;
        --v6;
      }
      while ( v6 );
      v8 = (33 - v6) & -(__int64)(v6 != 0);
      if ( !v6 )
        goto LABEL_12;
      if ( 2 * (_DWORD)v8 != -2 )
      {
        v9 = (char *)Win32AllocPoolZInit((unsigned int)(2 * v8 + 2), 1717855815LL);
        *v4 = v9;
        if ( !v9 || (int)StringCchCopyW(v9, v8 + 1, v13) >= 0 )
          goto LABEL_12;
        Win32FreePool(*v4);
      }
      *v4 = 0LL;
LABEL_12:
      ++v4;
      if ( !--v5 )
        return ZwClose(Handle);
    }
  }
  return result;
}
