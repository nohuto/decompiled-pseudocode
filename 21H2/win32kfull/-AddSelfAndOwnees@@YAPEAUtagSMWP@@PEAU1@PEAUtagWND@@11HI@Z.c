/*
 * XREFs of ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0081C18
 * Callers:
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C0081868 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0081C18 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 * Callees:
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0048C48 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0081C18 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     NextOwnedWindow @ 0x1C0082124 (NextOwnedWindow.c)
 *     ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0082690 (-GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagSMWP *__fastcall AddSelfAndOwnees(
        struct tagSMWP *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagWND *a4,
        int a5,
        unsigned int a6)
{
  struct tagWND *v9; // rbx
  int v10; // r15d
  struct tagWND *v11; // rsi
  struct tagWND *OwnedWindow; // rax
  struct tagSMWP *v13; // r10
  struct tagSMWP *result; // rax
  __int64 v15; // rcx
  struct tagWND *RealOwner; // rax

  v9 = a3;
  if ( a3 )
  {
    do
    {
      RealOwner = GetRealOwner(v9);
      if ( a2 == RealOwner )
        break;
      v9 = RealOwner;
    }
    while ( RealOwner );
  }
  v10 = 0;
  v11 = 0LL;
  while ( 1 )
  {
    OwnedWindow = (struct tagWND *)NextOwnedWindow(v11, a2, *((_QWORD *)a2 + 13));
    v11 = OwnedWindow;
    if ( !OwnedWindow )
      break;
    if ( !v9 )
      goto LABEL_10;
    if ( !v10 )
    {
      if ( a4 )
      {
        if ( a4 != (struct tagWND *)1 )
        {
          while ( OwnedWindow != a4 )
          {
            OwnedWindow = (struct tagWND *)*((_QWORD *)OwnedWindow + 11);
            if ( !OwnedWindow )
              goto LABEL_23;
          }
        }
      }
      else
      {
LABEL_23:
        v13 = AddSelfAndOwnees(v13, v9, a3, a4, a5, a6);
        if ( !v13 )
          return 0LL;
        v10 = 1;
      }
    }
    if ( v11 != v9 )
LABEL_10:
      v13 = AddSelfAndOwnees(v13, v11, 0LL, 0LL, a5, a6);
    if ( !v13 )
      return 0LL;
  }
  if ( v9 )
  {
    if ( !v10 )
    {
      v13 = AddSelfAndOwnees(v13, v9, a3, a4, a5, a6);
      if ( !v13 )
        return 0LL;
    }
  }
  result = (struct tagSMWP *)_DeferWindowPos((__int64)v13, a2, 0LL, 0, 0, 0, 0, a6 | 0x13, 0);
  if ( !result )
    return 0LL;
  v15 = *((int *)result + 7);
  if ( a5 != (_DWORD)v15 - 1 )
    *(_QWORD *)(*((_QWORD *)result + 5) + 168 * v15 - 160) = *(_QWORD *)(*((_QWORD *)result + 5) + 168 * v15 - 336);
  return result;
}
