/*
 * XREFs of xxxInitWindowStation @ 0x1C000C0B8
 * Callers:
 *     xxxCreateWindowStation @ 0x1C000C6EC (xxxCreateWindowStation.c)
 * Callees:
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00246B0 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     SetKeyboardRate @ 0x1C00DC214 (SetKeyboardRate.c)
 *     SetIconMetrics @ 0x1C00E22C0 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00E24DC (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C00E262C (xxxSetWindowNCMetrics.c)
 *     GreTextInitialized @ 0x1C00E3548 (GreTextInitialized.c)
 *     FinalUserInit @ 0x1C00E5318 (FinalUserInit.c)
 */

__int64 xxxInitWindowStation()
{
  struct _UNICODE_STRING *v0; // rdi
  unsigned int v1; // ebx
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  v0 = (struct _UNICODE_STRING *)CreateProfileUserName(&v3);
  FastGetProfileIntFromID(v0, 2LL, 606LL);
  SetKeyboardRate();
  NlsKbdInitializePerSystem();
  xxxLoadSomeStrings();
  if ( !(unsigned int)GreTextInitialized() || (v1 = xxxSetWindowNCMetrics(v0, 0LL)) != 0 )
  {
    SetMinMetrics(v0);
    v1 = SetIconMetrics(v0);
    if ( v1 )
    {
      v1 = FinalUserInit();
      if ( v1 )
        *(_DWORD *)(gpsi + 6984LL) = 1;
    }
  }
  FreeProfileUserName(v0, &v3);
  return v1;
}
