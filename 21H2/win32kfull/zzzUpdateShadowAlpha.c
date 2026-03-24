/*
 * XREFs of zzzUpdateShadowAlpha @ 0x1C013E34C
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1C00BC070 (NtUserSetLayeredWindowAttributes.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C00BC1E8 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C00F1FE4 (zzzUpdateLayeredWindow.c)
 *     _GetLayeredWindowAttributes @ 0x1C013E49C (_GetLayeredWindowAttributes.c)
 */

struct tagSHADOW *__fastcall zzzUpdateShadowAlpha(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  struct tagSHADOW *v3; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  _BYTE v9[8]; // [rsp+50h] [rbp+7h] BYREF
  __int128 v10; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v11; // [rsp+68h] [rbp+1Fh]
  _QWORD v12[6]; // [rsp+70h] [rbp+27h] BYREF
  char v13; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v14; // [rsp+C0h] [rbp+77h] BYREF
  int v15; // [rsp+C8h] [rbp+7Fh] BYREF

  v12[2] = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  result = FindShadow(a1);
  v15 = 0;
  v3 = result;
  LODWORD(v14) = 0;
  v13 = 0;
  if ( result )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v12[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v12;
    v12[1] = a1;
    if ( a1 )
      HMLockObject(a1);
    if ( (unsigned int)GetLayeredWindowAttributes(a1, v9, &v13, &v15) && (v15 & 2) != 0 )
    {
      BYTE2(v14) = v13;
      BYTE3(v14) = 1;
      v6 = *((_QWORD *)v3 + 1);
      v7 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v10 = *(_QWORD *)(v7 + 416);
      *(_QWORD *)(v7 + 416) = &v10;
      *((_QWORD *)&v10 + 1) = v6;
      if ( v6 )
        HMLockObject(v6);
      zzzUpdateLayeredWindow(
        *((struct tagWND **)v3 + 1),
        0LL,
        0LL,
        0LL,
        0LL,
        0LL,
        0,
        (struct _BLENDFUNCTION *)&v14,
        2u,
        0LL);
      ThreadUnlock1(v8);
    }
    return (struct tagSHADOW *)ThreadUnlock1(v5);
  }
  return result;
}
