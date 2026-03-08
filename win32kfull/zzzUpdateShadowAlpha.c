/*
 * XREFs of zzzUpdateShadowAlpha @ 0x1C02248CC
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1C002A290 (NtUserSetLayeredWindowAttributes.c)
 * Callees:
 *     _GetLayeredWindowAttributes @ 0x1C000F978 (_GetLayeredWindowAttributes.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0029674 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BE8C0 (zzzUpdateLayeredWindow.c)
 */

struct tagSHADOW *__fastcall zzzUpdateShadowAlpha(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  __int64 v3; // rcx
  struct tagSHADOW *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _BYTE v11[8]; // [rsp+50h] [rbp+7h] BYREF
  __int128 v12; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+68h] [rbp+1Fh]
  __int128 v14; // [rsp+70h] [rbp+27h] BYREF
  __int64 v15; // [rsp+80h] [rbp+37h]
  BYTE v16; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v17; // [rsp+C0h] [rbp+77h] BYREF
  unsigned int v18; // [rsp+C8h] [rbp+7Fh] BYREF

  v15 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  result = FindShadow(a1);
  v18 = 0;
  v4 = result;
  LODWORD(v17) = 0;
  v16 = 0;
  if ( result )
  {
    ThreadLock(v3, &v12);
    if ( (unsigned int)GetLayeredWindowAttributes((__int64)a1, (__int64)v11, &v16, &v18) )
    {
      if ( (v18 & 2) != 0 )
      {
        BYTE2(v17) = v16;
        BYTE3(v17) = 1;
        ThreadLock(*((_QWORD *)v4 + 1), &v14);
        zzzUpdateLayeredWindow(
          *((struct tagWND **)v4 + 1),
          0LL,
          0LL,
          0LL,
          0LL,
          0LL,
          0,
          (struct _BLENDFUNCTION *)&v17,
          2u,
          0LL);
        ThreadUnlock1(v9, v8, v10);
      }
    }
    return (struct tagSHADOW *)ThreadUnlock1(v6, v5, v7);
  }
  return result;
}
