/*
 * XREFs of UsbhGetDeviceFlags @ 0x1C0052760
 * Callers:
 *     UsbhCheckDeviceErrata @ 0x1C0052254 (UsbhCheckDeviceErrata.c)
 *     UsbhCheckHubErrata @ 0x1C00525B0 (UsbhCheckHubErrata.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     RtlStringCbPrintfW @ 0x1C004561C (RtlStringCbPrintfW.c)
 */

NTSTATUS __fastcall UsbhGetDeviceFlags(unsigned __int16 *a1, _QWORD *a2, char a3)
{
  __int64 v3; // rbx
  const wchar_t *v5; // r8
  int v7; // r10d
  __int64 v9; // r9
  NTSTATUS result; // eax
  const wchar_t *v11; // r8
  int v12; // [rsp+20h] [rbp-98h]
  __int64 v13; // [rsp+20h] [rbp-98h]
  int v14; // [rsp+28h] [rbp-90h]
  __int128 v15; // [rsp+30h] [rbp-88h] BYREF
  wchar_t pszDest[40]; // [rsp+40h] [rbp-78h] BYREF

  v3 = 0LL;
  *a2 = 0LL;
  v5 = L"USB:ROOT_HUB\\VID_%04X&PID_%04X&REV_%04X";
  v7 = a1[5];
  v9 = a1[4];
  v14 = a1[6];
  v15 = 0uLL;
  if ( a3 != 1 )
    v5 = L"USB:USB\\VID_%04X&PID_%04X&REV_%04X";
  v12 = v7;
  result = RtlStringCbPrintfW(pszDest, 0x50uLL, v5, v9, v12, v14);
  if ( result >= 0 )
  {
    KseQueryDeviceFlags(pszDest, L"USB", (char *)&v15 + 8);
    v11 = L"USB:ROOT_HUB\\VID_%04X&PID_%04X";
    if ( a3 != 1 )
      v11 = L"USB:USB\\VID_%04X&PID_%04X";
    LODWORD(v13) = a1[5];
    result = RtlStringCbPrintfW(pszDest, 0x50uLL, v11, a1[4], v13);
    if ( result >= 0 )
    {
      result = KseQueryDeviceFlags(pszDest, L"USB", &v15);
      v3 = *((_QWORD *)&v15 + 1) | v15;
    }
  }
  *a2 = v3;
  return result;
}
