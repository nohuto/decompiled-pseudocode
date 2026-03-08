/*
 * XREFs of ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C00B7B4C
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C010AFDC (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C01BBF54 (-PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 */

__int64 __fastcall PerformLegacyDpiUpgrade(struct _UNICODE_STRING *a1, int a2)
{
  unsigned int v2; // ebx
  int v5; // ecx
  int v6; // eax
  int v8; // [rsp+30h] [rbp-20h] BYREF
  int v9; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v10; // [rsp+38h] [rbp-18h] BYREF
  int v11; // [rsp+3Ch] [rbp-14h]
  int v12; // [rsp+40h] [rbp-10h] BYREF

  v2 = 0;
  v9 = 0;
  v8 = 0;
  v11 = 0;
  v12 = 0;
  FastGetProfileDword(a1, 4LL, L"Win8DpiScaling");
  FastGetProfileDword(a1, 4LL, L"DpiScalingVer");
  v10 = 0;
  FastGetProfileIntW(a1, 4LL, L"DesktopDPIOverride", 0xFFFFLL, &v12, 0);
  v5 = v12;
  if ( a2 || v12 != 0xFFFF )
    v6 = v11;
  else
    v6 = v11;
  v11 = v6;
  if ( v12 == 0xFFFF )
    v5 = 0;
  v12 = v5;
  DrvDxgkUpgradeLegacyDpiSettings(&v10, &v9);
  if ( v11 )
    *(_DWORD *)(gpsi + 2236LL) |= 0x20u;
  else
    *(_DWORD *)(gpsi + 2236LL) &= ~0x20u;
  v8 = 4096;
  ((void (__fastcall *)(struct _UNICODE_STRING *, __int64, const wchar_t *, __int64, int *, int))FastWriteProfileValue)(
    a1,
    4LL,
    L"DpiScalingVer",
    4LL,
    &v8,
    4);
  if ( v11 || v9 )
    return 1;
  return v2;
}
