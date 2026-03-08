/*
 * XREFs of UsbhGetDeviceFlags @ 0x1C00519E8
 * Callers:
 *     UsbhCheckDeviceErrata @ 0x1C00514D4 (UsbhCheckDeviceErrata.c)
 *     UsbhCheckHubErrata @ 0x1C005182C (UsbhCheckHubErrata.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     RtlStringCbPrintfW @ 0x1C0044C1C (RtlStringCbPrintfW.c)
 */

NTSTATUS __fastcall UsbhGetDeviceFlags(unsigned __int16 *a1, _QWORD *a2, char a3)
{
  __int64 v3; // rbx
  const wchar_t *v5; // r8
  __int64 v8; // r9
  NTSTATUS result; // eax
  const wchar_t *v10; // r8
  int v11; // [rsp+20h] [rbp-98h]
  __int64 v12; // [rsp+20h] [rbp-98h]
  int v13; // [rsp+28h] [rbp-90h]
  __int128 v14; // [rsp+30h] [rbp-88h] BYREF
  wchar_t pszDest[40]; // [rsp+40h] [rbp-78h] BYREF

  v3 = 0LL;
  *a2 = 0LL;
  v5 = L"USB:ROOT_HUB\\VID_%04X&PID_%04X&REV_%04X";
  v13 = a1[6];
  v11 = a1[5];
  v8 = a1[4];
  if ( a3 != 1 )
    v5 = L"USB:USB\\VID_%04X&PID_%04X&REV_%04X";
  v14 = 0uLL;
  result = RtlStringCbPrintfW(pszDest, 0x50uLL, v5, v8, v11, v13);
  if ( result >= 0 )
  {
    KseQueryDeviceFlags(pszDest, L"USB", (char *)&v14 + 8);
    v10 = L"USB:ROOT_HUB\\VID_%04X&PID_%04X";
    if ( a3 != 1 )
      v10 = L"USB:USB\\VID_%04X&PID_%04X";
    LODWORD(v12) = a1[5];
    result = RtlStringCbPrintfW(pszDest, 0x50uLL, v10, a1[4], v12);
    if ( result >= 0 )
    {
      result = KseQueryDeviceFlags(pszDest, L"USB", &v14);
      v3 = *((_QWORD *)&v14 + 1) | v14;
    }
  }
  *a2 = v3;
  return result;
}
