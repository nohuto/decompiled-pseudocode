/*
 * XREFs of ImeSetTopmost @ 0x1C0035968
 * Callers:
 *     ImeCheckTopmost @ 0x1C0035908 (ImeCheckTopmost.c)
 * Callees:
 *     ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0035B24 (-GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     LinkWindow @ 0x1C006FD00 (LinkWindow.c)
 *     UnlinkWindow @ 0x1C007E978 (UnlinkWindow.c)
 */

void __fastcall ImeSetTopmost(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r14
  struct tagWND *LastTopMostWindowNoIME; // rbx
  struct tagWND *v8; // rdi
  char v9; // al
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v12; // r8
  struct tagWND *v13; // r15
  struct tagWND *v14; // rbp
  __int64 v15; // rdx
  struct tagWND *v16; // rcx
  struct tagWND *i; // rdx
  __int64 v18; // r9

  v3 = *(_QWORD *)(a1 + 104);
  LastTopMostWindowNoIME = 0LL;
  if ( !v3 )
    return;
  v8 = *(struct tagWND **)(v3 + 112);
  if ( !a2 )
  {
    LastTopMostWindowNoIME = GetLastTopMostWindowNoIME((struct tagWND *)a1);
    if ( a3 )
    {
      v9 = 0;
      if ( !LastTopMostWindowNoIME )
        return;
      do
      {
        v10 = *((_QWORD *)LastTopMostWindowNoIME + 11);
        if ( v10 == a3 )
          break;
        v11 = LastTopMostWindowNoIME == (struct tagWND *)a1;
        LastTopMostWindowNoIME = (struct tagWND *)*((_QWORD *)LastTopMostWindowNoIME + 11);
        if ( v11 )
          v9 = 1;
      }
      while ( v10 );
      if ( !LastTopMostWindowNoIME || v9 )
        return;
    }
    v12 = *(_QWORD *)(a1 + 120);
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 20LL) & 0x20) != 0 )
    {
      for ( i = LastTopMostWindowNoIME; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
      {
        if ( i == (struct tagWND *)v12 )
          break;
        v18 = *(_QWORD *)(*((_QWORD *)i + 17) + 8LL);
        if ( (*(_BYTE *)(v18 + 10) & 1) == 0 && *(_WORD *)v18 != *(_WORD *)(gpsi + 898LL) )
          LastTopMostWindowNoIME = i;
      }
    }
  }
  v13 = LastTopMostWindowNoIME;
  while ( v8 )
  {
    v14 = (struct tagWND *)*((_QWORD *)v8 + 11);
    if ( *((_QWORD *)v8 + 2) == *(_QWORD *)(a1 + 16) )
    {
      v15 = *(_QWORD *)(*((_QWORD *)v8 + 17) + 8LL);
      if ( ((*(_BYTE *)(v15 + 10) & 1) != 0 || *(_WORD *)v15 == *(_WORD *)(gpsi + 898LL))
        && v8 != LastTopMostWindowNoIME )
      {
        v16 = v8;
        while ( v16 != (struct tagWND *)a1
             || LastTopMostWindowNoIME && *((_QWORD *)LastTopMostWindowNoIME + 13) != *((_QWORD *)v8 + 13)
             || *((_QWORD *)v8 + 13) != v3 )
        {
          v16 = (struct tagWND *)*((_QWORD *)v16 + 15);
          if ( !v16 )
            goto LABEL_14;
        }
        UnlinkWindow(v8, v3);
        SetOrClrWF(a2 != 0, v8, 2056LL, 1LL);
        LinkWindow(v8);
        LastTopMostWindowNoIME = v8;
      }
    }
LABEL_14:
    v8 = v14;
    if ( !v14 )
      break;
    if ( v14 == v13 )
      v8 = (struct tagWND *)*((_QWORD *)LastTopMostWindowNoIME + 11);
  }
}
