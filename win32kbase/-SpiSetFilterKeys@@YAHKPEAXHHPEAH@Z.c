/*
 * XREFs of ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C017B654
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C009C980 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C0017820 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ?SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z @ 0x1C017B1F4 (-SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x1C01E4680 (-StopFilterKeysTimers@@YAXXZ.c)
 *     ApiSetEditionCallAccessibilityHook @ 0x1C023C590 (ApiSetEditionCallAccessibilityHook.c)
 *     ApiSetEditionPostShellHookMessages @ 0x1C0241F24 (ApiSetEditionPostShellHookMessages.c)
 */

__int64 __fastcall SpiSetFilterKeys(int a1, struct tagFILTERKEYS *a2, int a3, int a4, int *a5)
{
  unsigned int v7; // r8d
  unsigned int v8; // edx
  unsigned int v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  if ( a1 && a1 != 24 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( *(_DWORD *)a2 != 24 )
    return 0LL;
  v7 = *((_DWORD *)a2 + 2);
  if ( v7 )
  {
    if ( *((_DWORD *)a2 + 5) )
      return 0LL;
  }
  v8 = *((_DWORD *)a2 + 1);
  if ( (v8 & 0x7F) != v8 )
    return 0LL;
  v9 = v8;
  v10 = v8 | 2;
  v11 = v9 & 0xFFFFFFFD;
  if ( (dword_1C02D159C & 2) == 0 )
    v10 = v11;
  *((_DWORD *)a2 + 1) = v10;
  if ( v7 > 0x4E20 || *((_DWORD *)a2 + 3) > 0x4E20u || *((_DWORD *)a2 + 4) > 0x4E20u || *((_DWORD *)a2 + 5) > 0x4E20u )
    return 0LL;
  if ( a3 )
  {
    v12 = SetFilterKeys(a2);
    *a5 = v12;
    a4 = v12;
    if ( !v12 )
    {
      SetFilterKeys((struct tagFILTERKEYS *)&gFilterKeys);
      return 0LL;
    }
  }
  if ( !a4 )
    return 0LL;
  v15 = 0LL;
  v16 = 0LL;
  memmove(&v15, &gFilterKeys, (unsigned int)gFilterKeys);
  memmove(&gFilterKeys, a2, *(unsigned int *)a2);
  LODWORD(gFilterKeys) = 24;
  if ( (dword_1C02D159C & 1) == 0 )
    StopFilterKeysTimers();
  SetAccessEnabledFlag();
  ApiSetEditionCallAccessibilityHook(2LL);
  ApiSetEditionPostShellHookMessages(v14, 2LL, &v15, &gFilterKeys);
  return 1LL;
}
