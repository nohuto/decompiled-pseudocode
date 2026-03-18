/*
 * XREFs of ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0071CD0
 * Callers:
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C00716D0 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0071CD0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 * Callees:
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0071CD0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     IsNonImmersiveBand @ 0x1C00AEDA4 (IsNonImmersiveBand.c)
 *     ?EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z @ 0x1C0109B50 (-EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z.c)
 */

struct tagBWL *__fastcall InternalBuildHwndList(struct tagBWL *a1, struct tagWND *a2, char a3)
{
  struct tagWND *v4; // rbx
  struct tagBWL *v5; // rbp
  int v6; // r14d
  __int64 v7; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx

  v4 = a2;
  v5 = a1;
  if ( !a2 )
    return a1;
  v6 = a3 & 0x10;
  do
  {
    v7 = *((_QWORD *)v5 + 3);
    if ( !v6 || (unsigned int)IsNonImmersiveBand(v4) )
    {
      if ( (a3 & 0x20) == 0
        || (v13 = *((_QWORD *)v4 + 5), (*(_BYTE *)(v13 + 31) & 0x11) != 0x10)
        || (*(_BYTE *)(v13 + 20) & 0x40) != 0
        || !ShellWindowManagement::EligibleWindow(v4, a2) )
      {
        if ( !v7 || v7 == *((_QWORD *)v4 + 2) )
        {
          **((_QWORD **)v5 + 1) = *(_QWORD *)v4;
          *((_QWORD *)v5 + 1) += 8LL;
          v9 = *((_QWORD *)v5 + 1);
          if ( v9 == *((_QWORD *)v5 + 2) )
          {
            v10 = v9 - (_QWORD)v5;
            v11 = UserReAllocPool(v5, (unsigned int)v10 + 8LL, (unsigned int)v10 + 72LL, 1819767637LL);
            if ( !v11 )
              return v5;
            v12 = v11 + v10;
            v5 = (struct tagBWL *)v11;
            *(_QWORD *)(v11 + 8) = v12;
            *(_QWORD *)(v11 + 16) = v12 + 64;
          }
        }
      }
    }
    if ( (a3 & 1) != 0 )
    {
      a2 = (struct tagWND *)*((_QWORD *)v4 + 14);
      if ( a2 )
      {
        v5 = InternalBuildHwndList(v5, a2, 3u);
        if ( *((_QWORD *)v5 + 1) >= *((_QWORD *)v5 + 2) )
          break;
      }
    }
    if ( (a3 & 2) == 0 )
      break;
    v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
  }
  while ( v4 );
  return v5;
}
