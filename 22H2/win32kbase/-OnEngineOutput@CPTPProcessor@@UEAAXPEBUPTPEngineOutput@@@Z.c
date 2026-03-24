/*
 * XREFs of ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01A61D0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0046930 (HMValidateHandleNoSecure.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C00B1B74 (ApiSetEditionInternalSetCursorPos.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C019A6E0 (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01A5500 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C01A5648 (-CleanupGestureState@CPTPProcessor@@AEAAXXZ.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C01A567C (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C01A5780 (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01A59A0 (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?GestureOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUPTPEngineOutput@@_N@Z @ 0x1C01A5BB8 (-GestureOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUPTPEngineOutput@@_N@Z.c)
 *     ?MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z @ 0x1C01A5FF0 (-MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z.c)
 *     ?SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01A7204 (-SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?ShellEndpointExists@CPTPProcessor@@AEAA_NXZ @ 0x1C01A75AC (-ShellEndpointExists@CPTPProcessor@@AEAA_NXZ.c)
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C01A9488 (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     ?HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C01A9530 (-HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     IsMouseInterceptEnabled @ 0x1C01AEA20 (IsMouseInterceptEnabled.c)
 *     ApiSetSend3FingerTapHotkey @ 0x1C01D0540 (ApiSetSend3FingerTapHotkey.c)
 *     ApiSetSend4FingerTapHotkey @ 0x1C01D0608 (ApiSetSend4FingerTapHotkey.c)
 *     ApiSetSendPTPAsMouse @ 0x1C01D06D0 (ApiSetSendPTPAsMouse.c)
 *     IsGetPTPShellTargetSupported @ 0x1C01FC430 (IsGetPTPShellTargetSupported.c)
 */

void __fastcall CPTPProcessor::OnEngineOutput(CPTPProcessor *this, const struct PTPEngineOutput *a2)
{
  int v4; // ecx
  CHidInput *v5; // rcx
  void *v6; // r9
  bool v7; // dl
  unsigned int v8; // r8d
  CPTPProcessor *v9; // rcx
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // ecx
  CPTPProcessor *v13; // rcx
  __int64 v14; // r8
  CTouchProcessor *v15; // rcx
  CTouchProcessor *v16; // rcx
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v18; // rbp
  _QWORD *v19; // rcx
  LARGE_INTEGER v20; // r9
  char *v21; // r8
  _QWORD *v22; // rcx
  int v23; // ecx
  int v24; // r8d
  int v25; // ecx
  CHidInput *v26; // rcx

  if ( HMValidateHandleNoSecure(*((_QWORD *)this + 30), 19) )
  {
    if ( *(_DWORD *)a2 )
    {
      switch ( *(_DWORD *)a2 )
      {
        case 1:
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v18 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
          InputTraceLogging::PTP::MouseOutput(
            *((const struct CPointerInputFrame **)this + 31),
            PerformanceCounter.QuadPart,
            a2);
          v19 = (_QWORD *)*((_QWORD *)this + 31);
          if ( v19 )
            v20 = (LARGE_INTEGER)v19[14];
          else
            v20 = PerformanceCounter;
          if ( !v19 || *((_DWORD *)this + 64) )
          {
            v21 = (char *)this + 2096;
            *((_OWORD *)this + 131) = 0LL;
            *((_OWORD *)this + 132) = 0LL;
            *((_OWORD *)this + 133) = 0LL;
            *((_QWORD *)this + 268) = 0LL;
          }
          else
          {
            v21 = (char *)this + 2096;
            *((_QWORD *)this + 264) = v19[13];
            *((_QWORD *)this + 262) = v19[9];
            v22 = *(_QWORD **)(v19[19] + 16LL);
            if ( v22 )
            {
              *((_QWORD *)this + 267) = v22[284];
              *((_QWORD *)this + 268) = v22[286];
              *((_QWORD *)this + 263) = v22[283];
            }
          }
          v23 = *((_DWORD *)a2 + 1);
          if ( v23 == 5 )
            ApiSetEditionInternalSetCursorPos(*((_DWORD *)a2 + 2), *((_DWORD *)a2 + 3), 2u);
          else
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))ApiSetSendPTPAsMouse)(
              *((_QWORD *)a2 + 1),
              (unsigned int)(1 << v23),
              (LARGE_INTEGER)PerformanceCounter.QuadPart,
              v18,
              (LARGE_INTEGER)v20.QuadPart,
              v21,
              *((_QWORD *)this + 30));
          break;
        case 2:
          if ( *((_DWORD *)a2 + 2)
            && (int)IsGetPTPShellTargetSupported() >= 0
            && !CPTPProcessor::ShellEndpointExists(v9)
            || (unsigned __int8)IsMouseInterceptEnabled() )
          {
            CPTPProcessor::CleanupGestureState((CPTPProcessor *)((char *)this - 160));
          }
          else
          {
            v11 = *((_DWORD *)a2 + 1);
            if ( v11 )
            {
              v12 = v11 - 2;
              if ( v12 )
              {
                if ( v12 == 1 )
                {
                  InputTraceLogging::PTP::GestureOutput(*((const struct CPointerInputFrame **)this + 31), a2);
                  v13 = (CPTPProcessor *)*((_QWORD *)this + 31);
                  *((_DWORD *)v13 + 31) ^= (*((_DWORD *)v13 + 31) ^ (*((_DWORD *)a2 + 2) << 8)) & 0x100;
                  CPTPProcessor::CopyPointersIntoFrame(
                    v13,
                    *((struct CPointerInputFrame **)this + 31),
                    v14,
                    (const struct PTPEngineOutput *)((char *)a2 + 20),
                    0);
                  CTouchProcessor::ProcessTouchpadInput(
                    v15,
                    *((struct CPointerInputFrame **)this + 31),
                    *((_DWORD *)this + 64),
                    *((_DWORD *)this + 65));
                  *((_QWORD *)this + 31) = 0LL;
                }
              }
              else
              {
                InputTraceLogging::PTP::GestureOutput(*((const struct CPointerInputFrame **)this + 28), a2);
                v16 = (CTouchProcessor *)*((_QWORD *)this + 28);
                *((_DWORD *)v16 + 31) ^= (*((_DWORD *)v16 + 31) ^ (*((_DWORD *)a2 + 2) << 8)) & 0x100;
                CTouchProcessor::ProcessTouchpadInput(
                  v16,
                  *((struct CPointerInputFrame **)this + 28),
                  *((_DWORD *)this + 64),
                  *((_DWORD *)this + 65));
                *((_QWORD *)this + 28) = 0LL;
              }
            }
            else
            {
              CPTPProcessor::CreateGestureCache(
                (CPTPProcessor *)((char *)this - 160),
                v10,
                (const struct PTPEngineOutput *)((char *)a2 + 20));
            }
          }
          break;
        case 3:
          v5 = (CHidInput *)*((unsigned int *)a2 + 1);
          if ( (_DWORD)v5 )
          {
            if ( (_DWORD)v5 != 1 )
              return;
            v6 = 0LL;
            v7 = 1;
            v8 = 0;
          }
          else
          {
            v6 = (void *)*((_QWORD *)this + 30);
            v7 = 0;
            v8 = *((_DWORD *)a2 + 2);
          }
          CHidInput::HandlePTPTimer(v5, v7, v8, v6);
          break;
        default:
          if ( *(_DWORD *)a2 == 4 && !(unsigned __int8)IsMouseInterceptEnabled() )
          {
            v4 = *((_DWORD *)a2 + 1);
            if ( v4 )
            {
              if ( v4 == 1 )
                ApiSetSend4FingerTapHotkey();
            }
            else
            {
              ApiSetSend3FingerTapHotkey();
            }
          }
          break;
      }
    }
    else
    {
      v24 = *((_DWORD *)this + 55);
      if ( (v24 & 1) != 0 || (v24 & 2) == 0 )
      {
        v25 = *((_DWORD *)a2 + 1);
        if ( v25 )
        {
          v26 = (CHidInput *)(unsigned int)(v25 - 1);
          if ( (_DWORD)v26 )
          {
            if ( (unsigned int)((_DWORD)v26 - 1) <= 1 )
              CPTPProcessor::EndInertia((CPTPProcessor *)((char *)this - 160));
          }
          else
          {
            if ( *((_BYTE *)this + 232) )
            {
              CHidInput::HandlePTPInertiaTimer(v26, 1, 0, *((void **)this + 30));
              v24 = *((_DWORD *)this + 55);
              *((_BYTE *)this + 232) = 0;
            }
            *((_DWORD *)this + 55) = v24 & 0xFFFFFFFE;
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
    }
  }
}
