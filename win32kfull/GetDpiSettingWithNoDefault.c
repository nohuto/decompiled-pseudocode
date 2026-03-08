/*
 * XREFs of GetDpiSettingWithNoDefault @ 0x1C00B9980
 * Callers:
 *     GetDpiSetting @ 0x1C00B9960 (GetDpiSetting.c)
 *     ?PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C01BBF54 (-PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall GetDpiSettingWithNoDefault(int a1, unsigned int *a2)
{
  unsigned __int16 v3; // bx
  __int16 v4; // di
  __int64 result; // rax
  unsigned int v6; // [rsp+38h] [rbp-79h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+48h] [rbp-69h] BYREF
  __int64 v8; // [rsp+80h] [rbp-31h]
  int v9; // [rsp+88h] [rbp-29h]
  __int128 v10; // [rsp+90h] [rbp-21h]
  __int128 v11; // [rsp+A0h] [rbp-11h]
  __int64 v12; // [rsp+B0h] [rbp-1h]
  ULONG RelativeTo[2]; // [rsp+B8h] [rbp+7h]
  PCWSTR Path; // [rsp+C0h] [rbp+Fh]
  int v15; // [rsp+C8h] [rbp+17h]
  const WCHAR *v16; // [rsp+D0h] [rbp+1Fh]
  int v17; // [rsp+D8h] [rbp+27h]
  const WCHAR *v18; // [rsp+E0h] [rbp+2Fh]

  QueryTable.Flags = 292;
  v6 = 0;
  QueryTable.Name = L"LogPixels";
  QueryTable.QueryRoutine = 0LL;
  QueryTable.EntryContext = &v6;
  QueryTable.DefaultType = 0x4000000;
  v12 = 0LL;
  Path = L"Control Panel\\Desktop";
  v16 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts";
  v18 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\FontDPI";
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v8 = 0LL;
  v9 = 0;
  RelativeTo[0] = 5;
  v15 = 0;
  v17 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v3 = 1;
      v4 = 2;
      goto LABEL_4;
    }
    v4 = 3;
  }
  else
  {
    v4 = 1;
  }
  v3 = 0;
LABEL_4:
  while ( RtlQueryRegistryValues(RelativeTo[4 * v3], (&Path)[2 * v3], &QueryTable, 0LL, 0LL) < 0 )
  {
    ++v3;
    result = 0xFFFFLL;
    if ( !--v4 )
      return result;
  }
  result = v6;
  *a2 = v6;
  return result;
}
