/*
 * XREFs of xxxInitWindowStation @ 0x1C00D42E4
 * Callers:
 *     xxxCreateWindowStation @ 0x1C00D22F8 (xxxCreateWindowStation.c)
 * Callees:
 *     GreTextInitialized @ 0x1C00C4278 (GreTextInitialized.c)
 *     SetIconMetrics @ 0x1C00C6CF4 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00C6F10 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C00C7060 (xxxSetWindowNCMetrics.c)
 *     FinalUserInit @ 0x1C00D43C4 (FinalUserInit.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00D4C34 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     SetKeyboardRate @ 0x1C00D58C4 (SetKeyboardRate.c)
 */

__int64 __fastcall xxxInitWindowStation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _UNICODE_STRING *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  v4 = (struct _UNICODE_STRING *)CreateProfileUserName(&v15, a2, a3, a4);
  FastGetProfileIntFromID(v4, 2LL, 606LL);
  SetKeyboardRate(v6, v5, v7, v8);
  NlsKbdInitializePerSystem(v10, v9);
  xxxLoadSomeStrings();
  if ( !GreTextInitialized() || (v13 = xxxSetWindowNCMetrics(v4, 0LL, -1)) != 0 )
  {
    SetMinMetrics(v4, 0LL);
    v13 = SetIconMetrics(v4, 0LL);
    if ( v13 )
    {
      v13 = FinalUserInit(v12, v11);
      if ( v13 )
        *(_DWORD *)(gpsi + 6984LL) = 1;
    }
  }
  FreeProfileUserName(v4, &v15);
  return v13;
}
