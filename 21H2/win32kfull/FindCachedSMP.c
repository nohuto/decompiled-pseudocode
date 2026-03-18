/*
 * XREFs of FindCachedSMP @ 0x1C013D27C
 * Callers:
 *     GetCachedSMP @ 0x1C013D0AC (GetCachedSMP.c)
 * Callees:
 *     CreateStandardMonoPattern @ 0x1C013C9D8 (CreateStandardMonoPattern.c)
 */

__int64 **__fastcall FindCachedSMP(__int64 a1, int a2)
{
  int v2; // r14d
  _QWORD *v5; // r8
  _QWORD *v6; // r9
  _QWORD *v7; // rdi
  __int64 **i; // rcx
  __int64 **result; // rax
  _QWORD *v10; // rax
  unsigned int v11; // eax
  char *v12; // rax
  char *v13; // rbx
  __int16 v14; // ax
  __int16 v15; // cx
  _QWORD *v16; // rbx
  _QWORD *v17; // rsi
  _QWORD *j; // rax
  _QWORD *v19; // rdi
  void *v20; // rcx
  __m128i v21; // [rsp+20h] [rbp-20h] BYREF
  char *v22; // [rsp+30h] [rbp-10h]

  v2 = *(_DWORD *)(a1 + 28);
  EngAcquireSemaphore(qword_1C0336420);
  v5 = pv;
  if ( pv )
  {
    v6 = 0LL;
    while ( *(_DWORD *)v5 != v2 )
    {
      v6 = v5;
      v5 = (_QWORD *)v5[1];
      if ( !v5 )
        goto LABEL_11;
    }
    if ( v6 )
    {
      v6[1] = v5[1];
      v5[1] = pv;
      pv = v5;
    }
    v7 = v5 + 2;
    for ( i = (__int64 **)v5[2]; i; i = (__int64 **)*i )
    {
      if ( *((unsigned __int16 *)i + 4) == a2 )
        return i;
    }
  }
  else
  {
LABEL_11:
    if ( (unsigned __int16)word_1C0336456 >= 0xAu )
    {
      v16 = pv;
      v17 = 0LL;
      for ( j = (_QWORD *)*((_QWORD *)pv + 1); j; j = (_QWORD *)j[1] )
      {
        v17 = v16;
        v16 = j;
      }
      v19 = (_QWORD *)v16[2];
      while ( 1 )
      {
        v20 = v19;
        if ( !v19 )
          break;
        v19 = (_QWORD *)*v19;
        EngFreeMem(v20);
      }
      EngFreeMem(v16);
      v17[1] = 0LL;
      --word_1C0336456;
    }
    v10 = EngAllocMem(0, 0x18u, 0x32305448u);
    if ( !v10 )
      goto LABEL_26;
    v7 = v10 + 2;
    ++word_1C0336456;
    v10[1] = pv;
    v10[2] = 0LL;
    *(_DWORD *)v10 = v2;
    pv = v10;
  }
  *(__int64 *)((char *)v21.m128i_i64 + 6) = 0LL;
  v21.m128i_i16[7] = 0;
  v21.m128i_i16[0] = 1;
  v21.m128i_i8[2] = 1;
  v21.m128i_i8[3] = a2;
  v21.m128i_i16[2] = 3848;
  v22 = 0LL;
  v11 = CreateStandardMonoPattern(a1, &v21);
  if ( v11 + 16 >= v11 )
  {
    v12 = (char *)EngAllocMem(0, v11 + 16, 0x33305448u);
    v13 = v12;
    if ( v12 )
    {
      v22 = v12 + 16;
      CreateStandardMonoPattern(a1, &v21);
      v14 = v21.m128i_i16[3];
      *(_QWORD *)v13 = *v7;
      *((_WORD *)v13 + 5) = v21.m128i_i16[4];
      v15 = v21.m128i_i16[5];
      *((_WORD *)v13 + 7) = v14;
      result = (__int64 **)v13;
      *((_WORD *)v13 + 6) = v15;
      *((_WORD *)v13 + 4) = a2;
      *v7 = v13;
      return result;
    }
  }
LABEL_26:
  EngReleaseSemaphore(qword_1C0336420);
  return 0LL;
}
