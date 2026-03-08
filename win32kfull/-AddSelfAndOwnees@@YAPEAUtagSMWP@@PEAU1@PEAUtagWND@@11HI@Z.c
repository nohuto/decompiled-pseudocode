/*
 * XREFs of ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0026850
 * Callers:
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C0026458 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0026850 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 * Callees:
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0026850 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0026A8C (-GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0067EB8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 */

struct tagSMWP *__fastcall AddSelfAndOwnees(
        struct tagSMWP *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagWND *a4,
        int a5,
        unsigned int a6)
{
  struct tagSMWP *v9; // r10
  struct tagWND *v10; // r14
  int v11; // eax
  struct tagWND *v12; // rsi
  struct tagWND *v13; // rbx
  struct tagWND *v14; // rcx
  struct tagWND *v15; // rax
  struct tagSMWP *result; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct tagWND *RealOwner; // rax
  struct tagWND *v20; // rax
  int i; // [rsp+90h] [rbp+18h]

  v9 = a1;
  v10 = a3;
  if ( a3 )
  {
    do
    {
      RealOwner = GetRealOwner(v10);
      if ( a2 == RealOwner )
        break;
      v10 = RealOwner;
    }
    while ( RealOwner );
  }
  v11 = 0;
  v12 = 0LL;
  for ( i = 0; ; v11 = i )
  {
    v13 = v12;
    if ( !v12 )
      break;
    do
    {
      v13 = (struct tagWND *)*((_QWORD *)v13 + 11);
      if ( !v13 )
        break;
LABEL_7:
      v14 = (struct tagWND *)*((_QWORD *)v13 + 15);
      v15 = v13;
      if ( v13 != v14 )
      {
        v15 = (struct tagWND *)*((_QWORD *)v13 + 15);
        if ( v14 )
        {
          do
          {
            v18 = *((_QWORD *)v15 + 13);
            if ( v18 == *((_QWORD *)v13 + 13) )
              break;
            v15 = (struct tagWND *)*((_QWORD *)v15 + 13);
          }
          while ( v18 );
        }
      }
    }
    while ( a2 != v15 );
    v12 = v13;
    if ( !v13 )
    {
      v11 = i;
      goto LABEL_12;
    }
    if ( !v10 )
      goto LABEL_20;
    if ( !i )
    {
      v20 = v13;
      if ( a4 )
      {
        if ( a4 != (struct tagWND *)1 )
        {
          while ( v20 != a4 )
          {
            v20 = (struct tagWND *)*((_QWORD *)v20 + 11);
            if ( !v20 )
              goto LABEL_31;
          }
        }
      }
      else
      {
LABEL_31:
        v9 = AddSelfAndOwnees(v9, v10, a3, a4, a5, a6);
        if ( !v9 )
          return 0LL;
        i = 1;
      }
    }
    if ( v13 != v10 )
LABEL_20:
      v9 = AddSelfAndOwnees(v9, v13, 0LL, 0LL, a5, a6);
    if ( !v9 )
      return 0LL;
  }
  v13 = *(struct tagWND **)(*((_QWORD *)a2 + 13) + 112LL);
  if ( v13 )
    goto LABEL_7;
LABEL_12:
  if ( v10 )
  {
    if ( !v11 )
    {
      v9 = AddSelfAndOwnees(v9, v10, a3, a4, a5, a6);
      if ( !v9 )
        return 0LL;
    }
  }
  result = (struct tagSMWP *)_DeferWindowPos(v9, a2, 0LL, 0LL, 0, 0, 0, a6 | 0x13, 0);
  if ( !result )
    return 0LL;
  v17 = *((int *)result + 7);
  if ( a5 != (_DWORD)v17 - 1 )
    *(_QWORD *)(*((_QWORD *)result + 5) + 168 * v17 - 160) = *(_QWORD *)(*((_QWORD *)result + 5) + 168 * v17 - 336);
  return result;
}
