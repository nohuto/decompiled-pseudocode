__int64 __fastcall SpiSetAccessTimeOut(int a1, unsigned int *a2, int a3, int a4, int *a5)
{
  unsigned int v6; // edi
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // eax
  bool v11; // zf
  __int64 v12; // rax
  unsigned __int16 v14[40]; // [rsp+30h] [rbp-31h] BYREF

  if ( a1 && a1 != 12 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( *a2 != 12 )
    return 0LL;
  v6 = a2[1];
  if ( (v6 & 3) != v6 || a2[2] > 0x36EE80 )
    return 0LL;
  if ( a3 )
  {
    memset(v14, 0, sizeof(v14));
    RtlStringCchPrintfW(v14, 40LL, L"%d", v6);
    v7 = -1LL;
    v8 = -1LL;
    do
      ++v8;
    while ( v14[v8] );
    *a5 = (unsigned int)FastWriteProfileValue(0LL, 0x12u, (const WCHAR *)L"Flags", 1u, v14, 2 * (int)v8 + 2);
    RtlStringCchPrintfW(v14, 40LL, L"%d", a2[2]);
    v9 = -1LL;
    do
      ++v9;
    while ( v14[v9] );
    v10 = (unsigned int)FastWriteProfileValue(0LL, 0x12u, (const WCHAR *)L"TimeToWait", 1u, v14, 2 * (int)v9 + 2);
    v11 = (v10 & *a5) == 0;
    *a5 &= v10;
    a4 = *a5;
    if ( v11 )
    {
      RtlStringCchPrintfW(v14, 40LL, L"%d", (unsigned int)dword_1C02D1564);
      v12 = -1LL;
      do
        ++v12;
      while ( v14[v12] );
      FastWriteProfileValue(0LL, 0x12u, (const WCHAR *)L"Flags", 1u, v14, 2 * v12 + 2);
      RtlStringCchPrintfW(v14, 40LL, L"%d", dword_1C02D1568);
      do
        ++v7;
      while ( v14[v7] );
      FastWriteProfileValue(0LL, 0x12u, (const WCHAR *)L"TimeToWait", 1u, v14, 2 * v7 + 2);
      return 0LL;
    }
  }
  if ( !a4 )
    return 0LL;
  memmove(&gAccessTimeOut, a2, *a2);
  gAccessTimeOut = 12;
  SetAccessEnabledFlag();
  AccessTimeOutReset();
  return 1LL;
}
