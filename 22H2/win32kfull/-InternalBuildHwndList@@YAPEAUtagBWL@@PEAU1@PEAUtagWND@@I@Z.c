/*
 * XREFs of ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006D3A0
 * Callers:
 *     BuildHwndList @ 0x1C006CAC0 (BuildHwndList.c)
 *     NtUserBuildHwndList @ 0x1C006CC80 (NtUserBuildHwndList.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006D3A0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00372D4 (IsNonImmersiveBand.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C004B590 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     _anonymous_namespace_::EligibleWindow @ 0x1C004B6E8 (_anonymous_namespace_--EligibleWindow.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006D3A0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 */

struct tagBWL *__fastcall InternalBuildHwndList(struct tagBWL *a1, struct tagWND *a2, char a3)
{
  struct tagWND *v4; // rdi
  struct tagBWL *v5; // rbx
  int v6; // r14d
  __int64 v7; // rbp
  __int64 v8; // rbp
  struct tagWND *v9; // rdx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rcx

  v4 = a2;
  v5 = a1;
  if ( !a2 )
    return a1;
  v6 = a3 & 0x20;
  do
  {
    v7 = *((_QWORD *)v5 + 3);
    if ( !v6
      || IsNonImmersiveBand((__int64)v4)
      || (a3 & 0x10) != 0 && (*(_DWORD *)(*((_QWORD *)v4 + 5) + 232LL) & 0x1000000) != 0 )
    {
      if ( (a3 & 0x40) == 0
        || (v14 = *((_QWORD *)v4 + 5), (*(_BYTE *)(v14 + 31) & 0x11) != 0x10)
        || (*(_BYTE *)(v14 + 20) & 0x40) != 0
        || !ShellWindowManagement::BehaviorEnabled(*((ShellWindowManagement **)v4 + 3), (const struct tagDESKTOP *)0xFF)
        || !anonymous_namespace_::EligibleWindow(v4, 0) )
      {
        if ( !v7 || v7 == *((_QWORD *)v4 + 2) )
        {
          **((_QWORD **)v5 + 1) = *(_QWORD *)v4;
          *((_QWORD *)v5 + 1) += 8LL;
          v8 = *((_QWORD *)v5 + 1);
          if ( v8 == *((_QWORD *)v5 + 2) )
          {
            v11 = v8 - (_QWORD)v5;
            v12 = UserReAllocPool(v5, (unsigned int)v11 + 8LL, (unsigned int)v11 + 72LL, 1819767637LL);
            if ( !v12 )
              return v5;
            v13 = v12 + v11;
            v5 = (struct tagBWL *)v12;
            *(_QWORD *)(v12 + 8) = v13;
            *(_QWORD *)(v12 + 16) = v13 + 64;
          }
        }
      }
    }
    if ( (a3 & 1) != 0 )
    {
      v9 = (struct tagWND *)*((_QWORD *)v4 + 14);
      if ( v9 )
      {
        v5 = InternalBuildHwndList(v5, v9, 3u);
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
