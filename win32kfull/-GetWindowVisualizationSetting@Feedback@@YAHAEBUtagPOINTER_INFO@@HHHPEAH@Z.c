/*
 * XREFs of ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01AE7D0
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01AE304 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 * Callees:
 *     FeedbackGetWindowSetting @ 0x1C01AEDEC (FeedbackGetWindowSetting.c)
 */

__int64 __fastcall Feedback::GetWindowVisualizationSetting(
        Feedback *this,
        const struct tagPOINTER_INFO *a2,
        int a3,
        int a4,
        int *a5)
{
  int *v5; // rdi
  Feedback *v6; // rsi
  int v7; // eax
  unsigned int PointerVisualization; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v19; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+58h] [rbp+10h] BYREF

  v20 = 0;
  v5 = a5;
  v6 = this;
  v19 = 0;
  *a5 = 0;
  v7 = *((_DWORD *)this + 3);
  if ( (v7 & 0x10000) != 0 )
  {
    if ( a3 || a4 )
    {
      PointerVisualization = 1;
      v19 = 1;
    }
    else
    {
      PointerVisualization = (_DWORD)a2 == 0;
      if ( !(_DWORD)a2 && *(_DWORD *)this == 2 )
      {
        this = (Feedback *)*((_QWORD *)this + 3);
        if ( this )
        {
          v9 = ValidateHwnd(this);
          if ( v9 )
          {
            if ( (unsigned int)FeedbackGetWindowSetting(v9, 1LL, 1LL, &v20) )
              PointerVisualization = v20;
          }
        }
      }
      if ( !PointerVisualization )
        goto LABEL_19;
    }
    if ( (unsigned int)(*(_DWORD *)v6 - 2) <= 1 )
    {
      this = (Feedback *)*((_QWORD *)v6 + 3);
      if ( this )
      {
        v10 = ValidateHwnd(this);
        if ( v10 )
        {
          if ( (unsigned int)FeedbackGetWindowSetting(v10, 13LL, 1LL, &v20) && v20 )
          {
            PointerVisualization = 0;
            v19 = 0;
          }
        }
      }
    }
LABEL_19:
    v11 = SGDGetUserSessionState(this);
    CTouchProcessor::SetPointerVisualization(
      *(CTouchProcessor **)(v11 + 3424),
      *((_WORD *)v6 + 2),
      PointerVisualization,
      &v19,
      0);
    return PointerVisualization;
  }
  if ( (v7 & 0x40000) != 0 )
  {
    v12 = SGDGetUserSessionState(this);
    PointerVisualization = CTouchProcessor::GetPointerVisualization(
                             *(CTouchProcessor **)(v12 + 3424),
                             *((_WORD *)v6 + 2),
                             v5);
    v14 = SGDGetUserSessionState(v13);
    CTouchProcessor::SetPointerVisualization(*(CTouchProcessor **)(v14 + 3424), *((_WORD *)v6 + 2), 1, 0LL, 0);
  }
  else
  {
    PointerVisualization = (_DWORD)a2 == 0;
    if ( (v7 & 4) != 0 )
    {
      v15 = SGDGetUserSessionState(this);
      PointerVisualization = CTouchProcessor::GetPointerVisualization(
                               *(CTouchProcessor **)(v15 + 3424),
                               *((_WORD *)v6 + 2),
                               v5);
      if ( *v5 )
      {
        v17 = SGDGetUserSessionState(v16);
        CTouchProcessor::SetPointerVisualization(
          *(CTouchProcessor **)(v17 + 3424),
          *((_WORD *)v6 + 2),
          PointerVisualization,
          0LL,
          0);
        if ( PointerVisualization )
          *v5 = 0;
      }
    }
  }
  return PointerVisualization;
}
