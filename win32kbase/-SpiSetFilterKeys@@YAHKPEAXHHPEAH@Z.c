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
