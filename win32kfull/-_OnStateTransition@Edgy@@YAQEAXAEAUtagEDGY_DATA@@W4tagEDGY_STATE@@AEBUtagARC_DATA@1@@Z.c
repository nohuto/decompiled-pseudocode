/*
 * XREFs of ?_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z @ 0x1C01E98E0
 * Callers:
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z @ 0x1C01E9804 (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z.c)
 * Callees:
 *     ?Execute@ShellHangDetection@@YAXXZ @ 0x1C000EDD4 (-Execute@ShellHangDetection@@YAXXZ.c)
 *     ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1C01E8B54 (-_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z.c)
 *     ?_OnEnterDisambiguation@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01E973C (-_OnEnterDisambiguation@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_OnEnterIdle@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01E97B4 (-_OnEnterIdle@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 */

__int64 __fastcall Edgy::_OnStateTransition(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rbp
  HWND v7; // r8
  __int64 v8; // rdx
  Edgy *v9; // rcx

  v4 = *(_QWORD *)(a1 + 224);
  if ( *(_DWORD *)(a1 + 16) == 1 )
    EtwTraceEdgyDetectionStop(*(unsigned int *)(a3 + 8));
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      Edgy::_OnEnterDisambiguation((Edgy *)a1, (struct tagEDGY_DATA *)a3, (const struct Edgy::tagARC_DATA *)a3);
    }
    else if ( a2 == 2 )
    {
      ShellHangDetection::Execute((ShellHangDetection *)a1);
      v8 = *(_QWORD *)(a3 + 16);
      v9 = *(Edgy **)a3;
      if ( *(_DWORD *)(a1 + 16) == 1 )
      {
        v8 = *(_QWORD *)(a1 + 184);
        v9 = *(Edgy **)(a1 + 224);
      }
      Edgy::_AdjustFrameHwnd(v9, *(void *const *)(v8 + 8), v7);
    }
  }
  else
  {
    Edgy::_OnEnterIdle((Edgy *)a1, (struct tagEDGY_DATA **)a3, (const struct Edgy::tagARC_DATA *)a3);
  }
  *(_DWORD *)(a1 + 16) = a2;
  return v4;
}
