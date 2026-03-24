/*
 * XREFs of UserOnGreTextReady @ 0x1C00E62DC
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0134720 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     SetIconMetrics @ 0x1C00E22C0 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00E24DC (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C00E262C (xxxSetWindowNCMetrics.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C00E5230 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     xxxLW_LoadFonts @ 0x1C00E6470 (xxxLW_LoadFonts.c)
 */

_BOOL8 UserOnGreTextReady()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  struct _UNICODE_STRING *v3; // rax
  __int64 v4; // rcx
  BOOL v5; // ebx
  struct _UNICODE_STRING *v6; // rsi
  BOOL v7; // edi
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v9 = 0LL;
  EnterCrit(0LL, 1LL);
  DrvGetLogPixels(v1, v0, v2);
  UserReinitializeStockFonts();
  xxxLW_LoadFonts(0LL);
  v3 = (struct _UNICODE_STRING *)CreateProfileUserName(&v9);
  v5 = 0;
  v6 = v3;
  if ( v3 )
  {
    v7 = xxxSetWindowNCMetrics(v3, 0LL, -1);
    SetMinMetrics(v6, 0LL);
    v5 = (unsigned int)SetIconMetrics(v6, 0LL) != 0 && v7;
    FreeProfileUserName(v6, &v9);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
