/*
 * XREFs of ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C00C7A64
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0026814 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C01D43E8 (-PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 */

__int64 __fastcall PerformLegacyDpiUpgrade(struct _UNICODE_STRING *a1)
{
  unsigned int v1; // ebx
  int v4; // [rsp+30h] [rbp-20h] BYREF
  int v5; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v6; // [rsp+38h] [rbp-18h] BYREF
  int v7; // [rsp+3Ch] [rbp-14h]
  int v8; // [rsp+40h] [rbp-10h]

  v1 = 0;
  v5 = 0;
  v4 = 0;
  v7 = 0;
  FastGetProfileDword(a1, 4LL, L"Win8DpiScaling");
  FastGetProfileDword(a1, 4LL, L"DpiScalingVer");
  v6 = 0;
  FastGetProfileIntW(a1, 4LL, L"DesktopDPIOverride");
  v8 = 0;
  DrvDxgkUpgradeLegacyDpiSettings(&v6, &v5);
  if ( v7 )
    *(_DWORD *)(gpsi + 2236LL) |= 0x20u;
  else
    *(_DWORD *)(gpsi + 2236LL) &= ~0x20u;
  v4 = 4096;
  ((void (__fastcall *)(struct _UNICODE_STRING *, __int64, const wchar_t *, __int64, int *, int))FastWriteProfileValue)(
    a1,
    4LL,
    L"DpiScalingVer",
    4LL,
    &v4,
    4);
  if ( v7 || v5 )
    return 1;
  return v1;
}
