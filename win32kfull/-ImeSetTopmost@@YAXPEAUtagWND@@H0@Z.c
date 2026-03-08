/*
 * XREFs of ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x1C0026C68
 * Callers:
 *     ?ImeCheckTopmost@@YAXPEAUtagWND@@@Z @ 0x1C0026C08 (-ImeCheckTopmost@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0026DF4 (-GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     LinkWindow @ 0x1C00639C0 (LinkWindow.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     UnlinkWindow @ 0x1C00AB340 (UnlinkWindow.c)
 */

void __fastcall ImeSetTopmost(struct tagWND *a1, int a2, struct tagWND *a3)
{
  __int64 v3; // r14
  struct tagWND *LastTopMostWindowNoIME; // rbx
  struct tagWND *v8; // rdi
  struct tagWND *v9; // r8
  struct tagWND *v10; // r15
  struct tagWND *v11; // rbp
  __int64 v12; // rdx
  struct tagWND *v13; // rcx
  char v14; // al
  struct tagWND *v15; // rcx
  struct tagWND *v16; // rdx
  bool v17; // zf
  struct tagWND *i; // rdx
  __int64 v19; // r9

  v3 = *((_QWORD *)a1 + 13);
  LastTopMostWindowNoIME = 0LL;
  if ( !v3 )
    return;
  v8 = *(struct tagWND **)(v3 + 112);
  if ( a2 )
    goto LABEL_5;
  LastTopMostWindowNoIME = GetLastTopMostWindowNoIME(a1);
  if ( !a3 )
    goto LABEL_4;
  v14 = 0;
  v15 = LastTopMostWindowNoIME;
  if ( LastTopMostWindowNoIME )
  {
    while ( 1 )
    {
      v16 = (struct tagWND *)*((_QWORD *)v15 + 11);
      LastTopMostWindowNoIME = v15;
      if ( v16 == a3 )
        break;
      v17 = v15 == a1;
      v15 = (struct tagWND *)*((_QWORD *)v15 + 11);
      if ( v17 )
        v14 = 1;
      if ( !v16 )
        return;
    }
    if ( !v14 )
    {
LABEL_4:
      v9 = (struct tagWND *)*((_QWORD *)a1 + 15);
      if ( (*(_BYTE *)(*((_QWORD *)v9 + 5) + 20LL) & 0x20) != 0 )
      {
        for ( i = LastTopMostWindowNoIME; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
        {
          if ( i == v9 )
            break;
          v19 = *(_QWORD *)(*((_QWORD *)i + 17) + 8LL);
          if ( (*(_BYTE *)(v19 + 10) & 1) == 0 && *(_WORD *)v19 != *(_WORD *)(gpsi + 898LL) )
            LastTopMostWindowNoIME = i;
        }
      }
LABEL_5:
      v10 = LastTopMostWindowNoIME;
LABEL_6:
      if ( v8 )
      {
        while ( 1 )
        {
          v11 = (struct tagWND *)*((_QWORD *)v8 + 11);
          if ( *((_QWORD *)v8 + 2) == *((_QWORD *)a1 + 2) )
          {
            v12 = *(_QWORD *)(*((_QWORD *)v8 + 17) + 8LL);
            if ( ((*(_BYTE *)(v12 + 10) & 1) != 0 || *(_WORD *)v12 == *(_WORD *)(gpsi + 898LL))
              && v8 != LastTopMostWindowNoIME )
            {
              v13 = v8;
              while ( v13 != a1
                   || LastTopMostWindowNoIME && *((_QWORD *)LastTopMostWindowNoIME + 13) != *((_QWORD *)v8 + 13)
                   || *((_QWORD *)v8 + 13) != v3 )
              {
                v13 = (struct tagWND *)*((_QWORD *)v13 + 15);
                if ( !v13 )
                  goto LABEL_8;
              }
              UnlinkWindow(v8, v3);
              SetOrClrWF(a2 != 0, v8, 2056LL, 1LL);
              LinkWindow(v8);
              LastTopMostWindowNoIME = v8;
            }
          }
LABEL_8:
          v8 = v11;
          if ( !v11 )
            break;
          if ( v11 == v10 )
          {
            v8 = (struct tagWND *)*((_QWORD *)LastTopMostWindowNoIME + 11);
            goto LABEL_6;
          }
        }
      }
    }
  }
}
