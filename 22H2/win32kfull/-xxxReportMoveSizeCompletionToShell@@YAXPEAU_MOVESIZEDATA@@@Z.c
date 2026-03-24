/*
 * XREFs of ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020F5A4
 * Callers:
 *     xxxMoveSize @ 0x1C02122B4 (xxxMoveSize.c)
 * Callees:
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C00496F0 (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0067530 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C023CFAC (-ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1C023D1EC (-WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 */

void __fastcall xxxReportMoveSizeCompletionToShell(struct _MOVESIZEDATA *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  int v5; // edi
  int v6; // ebx
  unsigned int v7; // ebx
  __int64 v8; // rbp
  BOOL v9; // eax
  unsigned int v10; // edx
  int v11; // r8d
  unsigned int v12; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rcx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 70);
  if ( IsShellParticipatesInSizing((struct tagWND *)v3, a2, a3) )
  {
    v6 = *((_DWORD *)a1 + 49);
    *((_DWORD *)a1 + 70) = v5 & 0xFFFFFFFB;
    if ( v6 >= 0 )
      v7 = 2;
    else
      v7 = (v6 & 0x100000) == 0;
    NotifyShell::WindowSizingCompleted(v3, v7);
  }
  else if ( (v5 & 8) == 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 328LL);
    if ( v8 )
    {
      v15[2] = 0LL;
      v9 = IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 264));
      if ( v11 != v10 || !v9 )
      {
        v12 = 2;
        if ( (*((_DWORD *)a1 + 49) & 0x100000) != 0 )
        {
          if ( v11 == v10 )
            v12 = ~v5 & 2;
          else
            v12 = v10;
        }
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v15[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v15;
        v15[1] = v8;
        HMLockObject(v8);
        if ( (unsigned __int8)NotifyShell::ArrangementCompleted(**((_QWORD **)a1 + 2), v12) && !v12 )
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v8 + 16), 0);
        ThreadUnlock1(v14);
      }
    }
  }
}
