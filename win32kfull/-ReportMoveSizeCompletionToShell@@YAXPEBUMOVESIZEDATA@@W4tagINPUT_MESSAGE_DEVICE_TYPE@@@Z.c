/*
 * XREFs of ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C01EB67C
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C0031BD4 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C00FA9C0 (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C021F9F0 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C021FBB0 (-DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1C0220AD0 (-WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 */

__int64 __fastcall ReportMoveSizeCompletionToShell(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // r15d
  unsigned int v4; // r12d
  char v6; // bp
  char v7; // r14
  const struct tagWND *v8; // rsi
  __int64 result; // rax
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rdx

  v3 = *(_DWORD *)(a1 + 200);
  v4 = a2;
  if ( (v3 & 0x20000000) == 0 )
  {
    v6 = 1;
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  v6 = 0;
  if ( (v3 & 0x80000) != 0 )
    goto LABEL_3;
  v7 = 1;
LABEL_4:
  v8 = *(const struct tagWND **)(a1 + 16);
  result = *((_QWORD *)v8 + 3);
  v10 = *(_QWORD *)(result + 320);
  if ( v10 )
  {
    if ( IsShellParticipatesInSizing(*(struct tagWND **)(a1 + 16), a2, a3) )
    {
      if ( (*(_DWORD *)(a1 + 324) & 2) != 0 )
        NotifyShell::WindowSizingCompleted(v8, *(unsigned int *)(a1 + 320));
    }
    else if ( !v6 && !v7 )
    {
      if ( IsSemiMaximized(v8) )
      {
        NotifyShell::ArrangementCompleted(v11, *(unsigned int *)(a1 + 320), 1LL);
        CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v10 + 16), 0);
      }
      else if ( (v3 & 0x6000) != 0 )
      {
        NotifyShell::ArrangementCompleted(v11, *(unsigned int *)(a1 + 320), 2LL);
      }
    }
    v12 = 3LL;
    if ( *(_DWORD *)(a1 + 176) != 9 )
      v12 = 1LL;
    return NotifyShell::DragSizeInfo(*(_QWORD *)(a1 + 16), v12, v4);
  }
  return result;
}
