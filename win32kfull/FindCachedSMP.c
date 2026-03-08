/*
 * XREFs of FindCachedSMP @ 0x1C0252520
 * Callers:
 *     GetCachedSMP @ 0x1C0252734 (GetCachedSMP.c)
 * Callees:
 *     CreateStandardMonoPattern @ 0x1C0254780 (CreateStandardMonoPattern.c)
 */

__int64 **__fastcall FindCachedSMP(__int64 a1, int a2)
{
  int v2; // r12d
  __int64 v5; // rdi
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r14
  __int64 **i; // rcx
  __int64 **result; // rax
  _QWORD *v13; // rbx
  void *v14; // rcx
  _QWORD *v15; // rax
  unsigned int v16; // eax
  char *v17; // rax
  char *v18; // rsi
  __int64 v19; // rcx
  __int16 v20; // ax
  __int16 v21; // [rsp+20h] [rbp-20h] BYREF
  char v22; // [rsp+22h] [rbp-1Eh]
  char v23; // [rsp+23h] [rbp-1Dh]
  __int16 v24; // [rsp+24h] [rbp-1Ch]
  __int64 v25; // [rsp+26h] [rbp-1Ah]
  __int16 v26; // [rsp+2Eh] [rbp-12h]
  char *v27; // [rsp+30h] [rbp-10h]

  v2 = *(_DWORD *)(a1 + 28);
  v5 = *(_QWORD *)(SGDGetSessionState(a1) + 48);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v5 + 16));
  v6 = *(_QWORD **)(v5 + 40);
  v7 = v6;
  if ( v6 )
  {
    v8 = 0LL;
    while ( *(_DWORD *)v7 != v2 )
    {
      v8 = v7;
      v7 = (_QWORD *)v7[1];
      if ( !v7 )
        goto LABEL_5;
    }
    if ( v8 )
    {
      v8[1] = v7[1];
      v7[1] = *(_QWORD *)(v5 + 40);
      *(_QWORD *)(v5 + 40) = v7;
    }
    for ( i = (__int64 **)v7[2]; i; i = (__int64 **)*i )
    {
      if ( *((unsigned __int16 *)i + 4) == a2 )
        return i;
    }
  }
  else
  {
LABEL_5:
    if ( *(_WORD *)(v5 + 70) >= 0xAu )
    {
      v9 = (_QWORD *)v6[1];
      v10 = 0LL;
      while ( v9 )
      {
        v10 = v6;
        v6 = v9;
        v9 = (_QWORD *)v9[1];
      }
      v13 = (_QWORD *)v6[2];
      while ( 1 )
      {
        v14 = v13;
        if ( !v13 )
          break;
        v13 = (_QWORD *)*v13;
        EngFreeMem(v14);
      }
      EngFreeMem(v6);
      v10[1] = 0LL;
      --*(_WORD *)(v5 + 70);
    }
    v15 = EngAllocMem(0, 0x18u, 0x32305448u);
    v7 = v15;
    if ( !v15 )
      goto LABEL_26;
    *(_DWORD *)v15 = v2;
    v15[1] = *(_QWORD *)(v5 + 40);
    v15[2] = 0LL;
    ++*(_WORD *)(v5 + 70);
    *(_QWORD *)(v5 + 40) = v15;
  }
  v25 = 0LL;
  v26 = 0;
  v27 = 0LL;
  v21 = 1;
  v22 = 1;
  v23 = a2;
  v24 = 3848;
  v16 = CreateStandardMonoPattern(a1, &v21);
  if ( v16 + 16 >= v16 )
  {
    v17 = (char *)EngAllocMem(0, v16 + 16, 0x33305448u);
    v18 = v17;
    if ( v17 )
    {
      v27 = v17 + 16;
      CreateStandardMonoPattern(a1, &v21);
      v19 = v7[2];
      *((_WORD *)v18 + 6) = WORD2(v25);
      v20 = v25;
      *(_QWORD *)v18 = v19;
      LOWORD(v19) = WORD1(v25);
      *((_WORD *)v18 + 7) = v20;
      result = (__int64 **)v18;
      *((_WORD *)v18 + 5) = v19;
      *((_WORD *)v18 + 4) = a2;
      v7[2] = v18;
      return result;
    }
  }
LABEL_26:
  EngReleaseSemaphore(*(HSEMAPHORE *)(v5 + 16));
  return 0LL;
}
