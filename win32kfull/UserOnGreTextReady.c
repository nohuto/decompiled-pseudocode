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
  EnterCrit(1LL, 0LL);
  DrvGetLogPixels(v1, v0, v2);
  UserReinitializeStockFonts();
  xxxLW_LoadFonts(0LL);
  v3 = (struct _UNICODE_STRING *)CreateProfileUserName(&v9);
  v5 = 0;
  v6 = v3;
  if ( v3 )
  {
    v7 = xxxSetWindowNCMetrics(v3, 0LL) != 0;
    SetMinMetrics(v6);
    v5 = (unsigned int)SetIconMetrics(v6) != 0 && v7;
    FreeProfileUserName(v6, &v9);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
