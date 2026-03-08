/*
 * XREFs of SetDpiSetting @ 0x1C00B9880
 * Callers:
 *     <none>
 * Callees:
 *     SetDpiAllHWProfileSetting @ 0x1C00B9AC0 (SetDpiAllHWProfileSetting.c)
 */

__int64 __fastcall SetDpiSetting(int a1, unsigned int a2)
{
  NTSTATUS v2; // ebx
  int *p_ValueData; // rax
  ULONG v4; // ecx
  const WCHAR *v5; // r8
  const WCHAR *v6; // rdx
  int v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned int ValueData; // [rsp+48h] [rbp+10h] BYREF

  ValueData = a2;
  v8 = 1;
  if ( !a1 )
  {
    p_ValueData = (int *)&ValueData;
    v5 = L"LogPixels";
    v6 = L"Control Panel\\Desktop";
    v4 = 5;
    return (unsigned int)RtlWriteRegistryValue(v4, v6, v5, 4u, p_ValueData, 4u);
  }
  if ( a1 != 1 )
    return (unsigned int)-1073741811;
  v2 = RtlWriteRegistryValue(
         0,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts",
         L"LogPixels",
         4u,
         &ValueData,
         4u);
  if ( v2 >= 0 )
    v2 = RtlWriteRegistryValue(
           0,
           L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\FontDPI",
           L"LogPixels",
           4u,
           &ValueData,
           4u);
  SetDpiAllHWProfileSetting(ValueData);
  if ( v2 >= 0 )
  {
    p_ValueData = &v8;
    v4 = 0;
    v5 = L"Overrode";
    v6 = L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\DPI";
    return (unsigned int)RtlWriteRegistryValue(v4, v6, v5, 4u, p_ValueData, 4u);
  }
  return (unsigned int)v2;
}
