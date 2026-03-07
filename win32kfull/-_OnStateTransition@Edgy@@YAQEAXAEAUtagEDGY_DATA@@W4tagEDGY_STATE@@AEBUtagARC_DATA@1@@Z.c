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
