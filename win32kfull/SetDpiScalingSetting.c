NTSTATUS __fastcall SetDpiScalingSetting(int a1, int a2)
{
  const WCHAR *v3; // rdx
  ULONG v4; // ecx
  int ValueData; // [rsp+48h] [rbp+10h] BYREF

  ValueData = a2;
  if ( a1 )
  {
    if ( a1 != 1 )
      return -1073741811;
    v3 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\DWM";
    v4 = 0;
  }
  else
  {
    v3 = L"Software\\Microsoft\\Windows\\DWM";
    v4 = 5;
  }
  return RtlWriteRegistryValue(v4, v3, L"UseDpiScaling", 4u, &ValueData, 4u);
}
