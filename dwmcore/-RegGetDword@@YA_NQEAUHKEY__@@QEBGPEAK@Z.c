bool __fastcall RegGetDword(HKEY a1, const WCHAR *a2, unsigned int *a3)
{
  bool v3; // bl
  unsigned int v6[6]; // [rsp+30h] [rbp-18h] BYREF
  DWORD v7; // [rsp+50h] [rbp+8h] BYREF
  DWORD v8; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v7 = 4;
  if ( a1 && !RegQueryValueExW(a1, a2, 0LL, &v8, (LPBYTE)v6, &v7) )
  {
    v3 = v8 == 4;
    *a3 = v6[0];
  }
  return v3;
}
