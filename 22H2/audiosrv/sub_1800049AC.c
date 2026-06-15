/*
 * XREFs of sub_1800049AC @ 0x1800049AC
 * Callers:
 *     sub_1800047A4 @ 0x1800047A4 (sub_1800047A4.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800049AC(HKEY hKey, LPCWSTR lpSubKey, REGSAM samDesired, HKEY *a4)
{
  int v4; // ebx
  unsigned int v8; // edi
  LSTATUS v9; // eax
  LSTATUS v10; // eax
  LSTATUS v11; // ebx
  __int64 result; // rax
  DWORD Type; // [rsp+30h] [rbp-D0h] BYREF
  DWORD cbData; // [rsp+34h] [rbp-CCh] BYREF
  HKEY hKeya; // [rsp+38h] [rbp-C8h] BYREF
  HKEY phkResult; // [rsp+40h] [rbp-C0h] BYREF
  BYTE Data[528]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = 0;
  *a4 = 0LL;
  hKeya = 0LL;
  v8 = 0;
  v9 = RegOpenKeyExW(hKey, lpSubKey, 8u, samDesired, &hKeya);
  if ( v9 )
  {
    if ( v9 == 2 )
    {
      return 3LL;
    }
    else
    {
      LOBYTE(v4) = v9 != 5;
      return (unsigned int)(v4 + 4);
    }
  }
  else
  {
    cbData = 520;
    Type = 0;
    v10 = RegQueryValueExW(hKeya, L"SymbolicLinkValue", 0LL, &Type, Data, &cbData);
    if ( (!v10 || v10 == 234) && Type == 6 )
      v8 = 1;
    if ( v10 == 2 || v8 != 1 )
    {
      phkResult = 0LL;
      v11 = RegOpenKeyExW(hKey, lpSubKey, 0, 0x20019u, &phkResult);
      RegCloseKey(phkResult);
      v8 = 2 - (v11 != 0);
    }
    result = v8;
    *a4 = hKeya;
  }
  return result;
}
