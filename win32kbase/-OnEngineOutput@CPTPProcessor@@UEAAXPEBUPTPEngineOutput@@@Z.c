void __fastcall CPTPProcessor::OnEngineOutput(CPTPProcessor *this, const struct PTPEngineOutput *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // r9
  unsigned int v12; // r8d
  bool v13; // dl
  __int64 v14; // r8
  char v15; // si
  unsigned int v16; // edx
  _DWORD *v17; // rcx
  CPTPProcessor *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  struct CPointerInputFrame *GestureCache; // rbp
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  LARGE_INTEGER PerformanceCounter; // rbp
  unsigned __int64 v32; // r14
  _QWORD *v33; // r8
  unsigned __int64 QuadPart; // r9
  int *v35; // rdx
  int v36; // eax
  _QWORD *v37; // rcx
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // ecx
  _OWORD v42[4]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v43; // [rsp+80h] [rbp-38h]

  v5 = HMValidateHandleNoSecure(*((_QWORD *)this + 45), 19);
  if ( !v5 )
    return;
  switch ( *(_DWORD *)a2 )
  {
    case 0:
      v39 = *((_DWORD *)this + 55);
      if ( (v39 & 1) != 0 || (v39 & 2) == 0 )
      {
        v40 = *((_DWORD *)a2 + 1);
        if ( v40 )
        {
          v41 = v40 - 1;
          if ( v41 )
          {
            if ( (unsigned int)(v41 - 1) <= 1 )
              CPTPProcessor::EndInertia((CPTPProcessor *)((char *)this - 160), v4, v6, v7);
          }
          else
          {
            CPTPProcessor::CancelInertiaTimer((void **)this - 20, v4, v6, v7);
          }
        }
        else
        {
          CPTPProcessor::CacheInertia((CPTPProcessor *)((char *)this - 160));
        }
      }
      else
      {
        CPTPProcessor::SendPTPInertiaEndToContainer((CPTPProcessor *)((char *)this - 160), a2);
      }
      goto LABEL_56;
    case 1:
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v32 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      InputTraceLogging::PTP::MouseOutput(
        *((const struct CPointerInputFrame **)this + 46),
        PerformanceCounter.QuadPart,
        a2);
      v33 = (_QWORD *)*((_QWORD *)this + 46);
      if ( v33 )
        QuadPart = v33[27];
      else
        QuadPart = PerformanceCounter.QuadPart;
      v35 = (int *)((char *)this + 376);
      v36 = *((_DWORD *)this + 95);
      *(_QWORD *)&v42[0] = *(_QWORD *)(*(_QWORD *)(v5 + 472) + 944LL);
      DWORD2(v42[0]) = v36;
      if ( !v33 || *v35 )
      {
        *((_OWORD *)this + 141) = 0LL;
        v43 = 0LL;
        *((_OWORD *)this + 142) = 0LL;
        *((_OWORD *)this + 143) = 0LL;
        *((_QWORD *)this + 288) = v43;
      }
      else
      {
        *((_QWORD *)this + 284) = v33[10];
        *((_QWORD *)this + 282) = v33[9];
        v37 = *(_QWORD **)(v33[32] + 16LL);
        if ( v37 )
        {
          *((_QWORD *)this + 287) = v37[285];
          *((_QWORD *)this + 288) = v37[287];
          *((_QWORD *)this + 283) = v37[284];
        }
      }
      v38 = *((_DWORD *)a2 + 1);
      if ( v38 == 5 )
      {
        ApiSetEditionInternalSetCursorPos(*((_DWORD *)a2 + 2), *((unsigned int *)a2 + 3), 2LL);
      }
      else if ( CPTPProcessor::QueuePTPMouseEvent(
                  (CPTPProcessor *)((char *)this - 160),
                  *(struct tagPOINT *)((char *)a2 + 8),
                  1 << v38,
                  PerformanceCounter.QuadPart,
                  v32,
                  QuadPart,
                  *v35,
                  (const struct tagUIPI_INFO_INT *)v42) )
      {
        if ( *((_QWORD *)this + 46) )
          *((_BYTE *)this + 2212) = 1;
        else
          InitiatePTPMouseProcessing();
      }
      goto LABEL_56;
    case 2:
      if ( *((_DWORD *)a2 + 1) == 2 )
      {
        *((_BYTE *)this + 2213) = 0;
        if ( !(unsigned __int8)IsMouseInterceptEnabled() )
        {
          GestureCache = CPTPProcessor::CreateGestureCache(
                           (CPTPProcessor *)((char *)this - 160),
                           v24,
                           (const struct PTPEngineOutput *)((char *)a2 + 20),
                           *((_DWORD *)a2 + 2) != 0);
          if ( GestureCache )
          {
            if ( (*((_DWORD *)this + 89) & 4) != 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 668);
            *((_DWORD *)this + 89) &= ~4u;
            CInputDest::SetEmpty((CPTPProcessor *)((char *)this + 232));
            *((_BYTE *)this + 2213) = 1;
            InputTraceLogging::PTP::GestureOutput(GestureCache, a2);
            v30 = SGDGetUserSessionState(v27, v26, v28, v29);
            CTouchProcessor::ProcessTouchpadInput(
              *(CTouchProcessor **)(v30 + 3424),
              GestureCache,
              *((_DWORD *)this + 94),
              *((_DWORD *)this + 95));
          }
        }
      }
      else if ( *((_DWORD *)a2 + 1) == 3 && *((_BYTE *)this + 2213) )
      {
        InputTraceLogging::PTP::GestureOutput(*((const struct CPointerInputFrame **)this + 46), a2);
        v14 = *((unsigned int *)a2 + 4);
        v15 = 1;
        v16 = 0;
        if ( (_DWORD)v14 )
        {
          v17 = (_DWORD *)((char *)a2 + 32);
          while ( (*v17 & 4) == 0 )
          {
            ++v16;
            v17 += 24;
            if ( v16 >= (unsigned int)v14 )
              goto LABEL_26;
          }
          v15 = 0;
        }
LABEL_26:
        v18 = (CPTPProcessor *)*((_QWORD *)this + 46);
        *((_DWORD *)v18 + 57) ^= (*((_DWORD *)v18 + 57) ^ (*((_DWORD *)a2 + 2) << 8)) & 0x100;
        CPTPProcessor::CopyPointersIntoFrame(
          v18,
          *((struct CPointerInputFrame **)this + 46),
          v14,
          (const struct PTPEngineOutput *)((char *)a2 + 20),
          0);
        v23 = SGDGetUserSessionState(v20, v19, v21, v22);
        CTouchProcessor::ProcessTouchpadInput(
          *(CTouchProcessor **)(v23 + 3424),
          *((struct CPointerInputFrame **)this + 46),
          *((_DWORD *)this + 94),
          *((_DWORD *)this + 95));
        *((_QWORD *)this + 46) = 0LL;
        if ( v15 )
        {
          *((_BYTE *)this + 2213) = 0;
          *((_DWORD *)this + 89) &= ~4u;
          CInputDest::SetEmpty((CPTPProcessor *)((char *)this + 232));
        }
      }
      goto LABEL_56;
  }
  if ( *(_DWORD *)a2 != 3 )
  {
    if ( *(_DWORD *)a2 == 4 && !(unsigned __int8)IsMouseInterceptEnabled() )
    {
      v8 = *((_DWORD *)a2 + 1);
      if ( v8 )
      {
        if ( v8 == 1 )
          ApiSetSend4FingerTapHotkey();
      }
      else
      {
        ApiSetSend3FingerTapHotkey();
      }
    }
    goto LABEL_56;
  }
  v9 = *((unsigned int *)a2 + 1);
  if ( !(_DWORD)v9 )
  {
    v10 = SGDGetUserSessionState(v9, v4, v6, v7);
    v11 = (void *)*((_QWORD *)this + 45);
    v13 = 0;
    v12 = *((_DWORD *)a2 + 2);
    goto LABEL_16;
  }
  if ( (_DWORD)v9 == 1 )
  {
    v10 = SGDGetUserSessionState(v9, v4, v6, v7);
    v11 = 0LL;
    v12 = 0;
    v13 = 1;
LABEL_16:
    CHidInput::HandlePTPTimer(*(CHidInput **)(v10 + 16840), v13, v12, v11);
  }
LABEL_56:
  if ( *(_DWORD *)a2 == 2 || *(_DWORD *)a2 == 4 )
  {
    if ( WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
    {
      v42[0] = 0LL;
      LODWORD(v42[0]) = 2;
      CCompositionRefreshRateBooster::EvaluateEventForCompositionFrameRateBoost(
        (CCompositionRefreshRateBooster *)((char *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 96),
        (const struct InputHelper::CompositionFrameRateBoostCandidateEvent *)v42);
    }
  }
}
