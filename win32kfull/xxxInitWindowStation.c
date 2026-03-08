/*
 * XREFs of xxxInitWindowStation @ 0x1C00C1348
 * Callers:
 *     xxxCreateWindowStation @ 0x1C00BE56C (xxxCreateWindowStation.c)
 * Callees:
 *     FinalUserInit @ 0x1C00C1B24 (FinalUserInit.c)
 *     SetKeyboardRate @ 0x1C0102588 (SetKeyboardRate.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0108E98 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     SetIconMetrics @ 0x1C010C85C (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C010CA78 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C010CBC8 (xxxSetWindowNCMetrics.c)
 *     GreTextInitialized @ 0x1C010FB94 (GreTextInitialized.c)
 */

__int64 xxxInitWindowStation()
{
  struct _UNICODE_STRING *v0; // rdi
  __int64 v1; // rcx
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  v0 = (struct _UNICODE_STRING *)CreateProfileUserName(&v5);
  FastGetProfileIntFromID(v0, 2LL, 606LL);
  v2 = SGDGetUserSessionState(v1);
  SetKeyboardRate(*(unsigned int *)(v2 + 12612));
  NlsKbdInitializePerSystem();
  xxxLoadSomeStrings();
  if ( !(unsigned int)GreTextInitialized() || (v3 = xxxSetWindowNCMetrics(v0, 0LL)) != 0 )
  {
    SetMinMetrics(v0);
    v3 = SetIconMetrics(v0);
    if ( v3 )
    {
      v3 = FinalUserInit();
      if ( v3 )
        *(_DWORD *)(gpsi + 6984LL) = 1;
    }
  }
  FreeProfileUserName(v0, &v5);
  return v3;
}
