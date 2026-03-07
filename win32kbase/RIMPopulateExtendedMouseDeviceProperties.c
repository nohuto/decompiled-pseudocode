char __fastcall RIMPopulateExtendedMouseDeviceProperties(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rbx
  void *v4; // rax
  int v5; // r9d
  size_t v6; // rcx
  const WCHAR *v7; // r8
  wchar_t *v8; // r10
  __int64 v9; // rdx
  __int16 v10; // ax
  int *v12; // [rsp+28h] [rbp-E0h]
  ULONG v13; // [rsp+30h] [rbp-D8h]
  size_t pcchDest; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  wchar_t *ppszDest; // [rsp+50h] [rbp-B8h] BYREF
  char v17; // [rsp+58h] [rbp-B0h] BYREF

  if ( (*(_DWORD *)(a1 + 184) & 0x2000) != 0 )
  {
    LODWORD(pcchDest) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
  }
  v2 = (void *)RIMRegOpenDeviceInstanceKey(a1);
  *(_QWORD *)&DestinationString.Length = 45875200LL;
  ppszDest = 0LL;
  DestinationString.Buffer = (PWSTR)&v17;
  pcchDest = 0LL;
  v3 = 0LL;
  LODWORD(v4) = RtlUnicodeStringValidateDestWorker(
                  &DestinationString,
                  &ppszDest,
                  &pcchDest,
                  0LL,
                  (const size_t)v12,
                  v13);
  v5 = (int)v4;
  if ( (int)v4 >= 0 )
  {
    v6 = pcchDest;
    v7 = L"\\Registry\\Machine\\";
    v8 = ppszDest;
    v9 = 0x7FFFLL;
    v5 = 0;
    v10 = 0;
    if ( !pcchDest )
      goto LABEL_23;
    do
    {
      if ( !v9 )
        break;
      if ( !*v7 )
        break;
      *v8++ = *v7++;
      --v9;
      ++v10;
      --v6;
    }
    while ( v6 );
    if ( !v6 && v9 && *v7 )
LABEL_23:
      v5 = -2147483643;
    LOWORD(v4) = 2 * v10;
    DestinationString.Length = (unsigned __int16)v4;
  }
  if ( v5 >= 0 )
  {
    LODWORD(v4) = RtlUnicodeStringCatString(
                    &DestinationString,
                    L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
    if ( (int)v4 >= 0 )
    {
      v4 = RIMRegOpenKey(&DestinationString);
      v3 = v4;
    }
  }
  if ( v2 || v3 )
  {
    LODWORD(pcchDest) = 0;
    LOBYTE(v4) = ReadDevicePropertyFromRegistry(L"ForceVirtualDesktop", v2, v3, 0, (int *)&pcchDest);
    if ( (_BYTE)v4 )
    {
      LODWORD(v4) = ((_DWORD)pcchDest != 0) | *(_DWORD *)(a1 + 904) & 0xFFFFFFFE;
      *(_DWORD *)(a1 + 904) = (_DWORD)v4;
    }
    if ( v2 )
      LOBYTE(v4) = ZwClose(v2);
    if ( v3 )
      LOBYTE(v4) = ZwClose(v3);
  }
  return (char)v4;
}
