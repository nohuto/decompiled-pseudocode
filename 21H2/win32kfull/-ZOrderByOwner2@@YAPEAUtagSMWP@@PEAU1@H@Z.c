/*
 * XREFs of ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C0081868
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0081210 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 * Callees:
 *     ?IsOwnee@@YAHPEAUtagWND@@0@Z @ 0x1C0081BE0 (-IsOwnee@@YAHPEAUtagWND@@0@Z.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0081C18 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     NextOwnedWindow @ 0x1C0082124 (NextOwnedWindow.c)
 *     PWInsertAfter @ 0x1C0082404 (PWInsertAfter.c)
 *     ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0082690 (-GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagSMWP *__fastcall ZOrderByOwner2(struct tagSMWP *a1, int a2)
{
  __int64 v2; // rbp
  struct tagSMWP *v3; // rsi
  __int64 v5; // r14
  struct tagWND *v7; // r13
  __int64 v8; // r15
  __int64 OwnedWindow; // rax
  __int64 v10; // rbx
  struct tagWND *RealOwner; // rax
  struct tagWND *v12; // r10
  struct tagWND *v13; // r11
  struct tagWND *v14; // rdi
  __int64 v15; // r8
  struct tagWND *v16; // r9
  struct tagSMWP *v17; // rax
  struct tagWND *v18; // r8
  struct tagWND **v19; // r8
  struct tagWND *v20; // r8
  int v21; // eax
  struct tagWND *v22; // r9
  __int64 v23; // r8
  struct tagWND *v24; // rax

  v2 = *((_QWORD *)a1 + 5);
  v3 = a1;
  v5 = 168LL * a2;
  if ( (*(_DWORD *)(v5 + v2 + 32) & 0x204) != 0 )
    return v3;
  v7 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(v5 + v2));
  PWInsertAfter(*(_QWORD *)(v5 + v2 + 8));
  v8 = *((_QWORD *)v7 + 13);
  OwnedWindow = NextOwnedWindow(0LL, v7, v8);
  v10 = 0LL;
  if ( !*((_QWORD *)v7 + 15) && !OwnedWindow )
    return v3;
  RealOwner = v7;
  do
    RealOwner = GetRealOwner(RealOwner);
  while ( RealOwner );
  v14 = v12;
  if ( !v12 )
    goto LABEL_10;
  if ( v12 == (struct tagWND *)1 )
  {
    v20 = *(struct tagWND **)(v8 + 112);
    if ( !v20 )
      goto LABEL_28;
    do
    {
      if ( (*(_BYTE *)(*((_QWORD *)v20 + 5) + 20LL) & 0x20) != 0 )
        break;
      v21 = IsOwnee(v20, v13);
      v20 = *(struct tagWND **)(v23 + 88);
      if ( v21 )
        v22 = v14;
      v14 = v22;
    }
    while ( v20 );
    if ( v14 == (struct tagWND *)1 )
LABEL_28:
      *(_DWORD *)(v5 + v2 + 32) |= 4u;
    goto LABEL_10;
  }
  if ( !(unsigned int)IsOwnee(v12, v13) )
  {
LABEL_10:
    if ( (*(_DWORD *)(v5 + v2 + 32) & 4) == 0 )
    {
      --*((_DWORD *)v3 + 7);
      v17 = AddSelfAndOwnees(
              v3,
              v13,
              v7,
              v12,
              a2,
              *(_DWORD *)(v5 + v2 + 32) & 0x40000 | (*(_DWORD *)(v5 + v2 + 32) >> 7) & 0x400u);
      v3 = v17;
      if ( v17 )
      {
        if ( v14 )
          v10 = *(_QWORD *)v14;
        *(_QWORD *)(*((_QWORD *)v17 + 5) + v5 + 8) = v10;
      }
    }
    return v3;
  }
  if ( v15 )
  {
LABEL_17:
    v18 = *(struct tagWND **)(v8 + 112);
    v14 = 0LL;
    while ( v18 && !(unsigned int)IsOwnee(v18, v13) )
    {
      v14 = (struct tagWND *)v19;
      v18 = v19[11];
    }
    goto LABEL_10;
  }
  v24 = v12;
  while ( v24 != v16 )
  {
    v24 = (struct tagWND *)*((_QWORD *)v24 + 11);
    if ( !v24 )
      goto LABEL_17;
  }
  return v3;
}
