/*
 * XREFs of ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1C00EF53C
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C010AFDC (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall LW_LoadResources(struct _UNICODE_STRING *a1)
{
  BOOL v2; // edx
  __int64 v3; // [rsp+40h] [rbp-18h] BYREF

  FastGetProfileStringFromIDW(a1, 12LL, 5LL, L"N", &v3, 4, 0);
  v2 = (_WORD)v3 == 49 || (_WORD)v3 == 89 || (_WORD)v3 == 121;
  *(_DWORD *)(gpsi + 1988LL) = v2;
  FastGetProfileStringFromIDW(a1, 11LL, 9LL, L"Y", &v3, 4, 0);
  if ( (((_WORD)v3 - 89) & 0xFFDF) != 0 )
    gdwPUDFlags &= ~0x80000u;
  else
    gdwPUDFlags |= 0x80000u;
  FastGetProfileStringFromIDW(a1, 11LL, 220LL, L"N", &v3, 4, 0);
  if ( (((_WORD)v3 - 89) & 0xFFDF) != 0 )
    gdwPUDFlags &= ~0x1000000u;
  else
    gdwPUDFlags |= 0x1000000u;
}
