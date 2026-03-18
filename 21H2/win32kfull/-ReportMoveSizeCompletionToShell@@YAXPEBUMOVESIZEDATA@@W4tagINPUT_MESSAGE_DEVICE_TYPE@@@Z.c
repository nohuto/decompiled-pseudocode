/*
 * XREFs of ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C020AD78
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C00694C0 (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C015C47C (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C02362C8 (-DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1C0236F64 (-WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 */

__int64 __fastcall ReportMoveSizeCompletionToShell(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // r12d
  unsigned int v4; // ebx
  char v6; // r14
  char v7; // r15
  const struct tagWND *v8; // rbp
  __int64 result; // rax
  __int64 v10; // r13
  __int64 *v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // [rsp+58h] [rbp+10h]

  v13 = a2;
  v3 = *(_DWORD *)(a1 + 200);
  v4 = 0;
  if ( (v3 & 0x40000000) != 0 )
  {
    v6 = 0;
    v7 = 1;
    if ( (v3 & 0x100000) == 0 )
      goto LABEL_5;
  }
  else
  {
    v6 = 1;
  }
  v7 = 0;
LABEL_5:
  v8 = *(const struct tagWND **)(a1 + 16);
  result = *((_QWORD *)v8 + 3);
  v10 = *(_QWORD *)(result + 320);
  if ( v10 )
  {
    if ( IsShellParticipatesInSizing(*(struct tagWND **)(a1 + 16), a2, a3) )
    {
      if ( (*(_DWORD *)(a1 + 332) & 8) != 0 )
      {
        if ( v6 )
          v4 = 2;
        else
          LOBYTE(v4) = v7 != 0;
        NotifyShell::WindowSizingCompleted(v8, *(unsigned int *)(a1 + 328), v4);
      }
    }
    else if ( !v6 && !v7 )
    {
      if ( IsSemiMaximized(v8) )
      {
        NotifyShell::ArrangementCompleted(v11, *(unsigned int *)(a1 + 328), 1LL);
        CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v10 + 16), 0);
      }
      else if ( (v3 & 0x6000) != 0 )
      {
        NotifyShell::ArrangementCompleted(v11, *(unsigned int *)(a1 + 328), 2LL);
      }
    }
    v12 = 3LL;
    if ( *(_DWORD *)(a1 + 176) != 9 )
      v12 = 1LL;
    return NotifyShell::DragSizeInfo(*(_QWORD *)(a1 + 16), v12, v13);
  }
  return result;
}
