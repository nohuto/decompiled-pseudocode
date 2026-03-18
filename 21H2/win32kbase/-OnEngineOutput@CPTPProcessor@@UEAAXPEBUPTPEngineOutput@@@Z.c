/*
 * XREFs of ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01DE5A0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C00BF800 (ApiSetEditionInternalSetCursorPos.c)
 *     ?MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z @ 0x1C00E896E (-MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C01D2C30 (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01DD958 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C01DDA98 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 *     ?CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C01DDBA0 (-CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01DDF8C (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?GestureOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUPTPEngineOutput@@_N@Z @ 0x1C01DE094 (-GestureOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUPTPEngineOutput@@_N@Z.c)
 *     ?QueuePTPMouseEvent@CPTPProcessor@@AEAA_NUtagPOINT@@K_K11HPEBUtagUIPI_INFO_INT@@@Z @ 0x1C01DF63C (-QueuePTPMouseEvent@CPTPProcessor@@AEAA_NUtagPOINT@@K_K11HPEBUtagUIPI_INFO_INT@@@Z.c)
 *     ?SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01DF854 (-SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C01E1BD4 (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     ?HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C01E1C7C (-HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     IsMouseInterceptEnabled @ 0x1C01E8010 (IsMouseInterceptEnabled.c)
 *     ApiSetSend3FingerTapHotkey @ 0x1C020F4EC (ApiSetSend3FingerTapHotkey.c)
 *     ApiSetSend4FingerTapHotkey @ 0x1C020F638 (ApiSetSend4FingerTapHotkey.c)
 */

void __fastcall CPTPProcessor::OnEngineOutput(CPTPProcessor *this, const struct PTPEngineOutput *a2)
{
  __int64 v4; // rsi
  int v5; // ecx
  CHidInput *v6; // rcx
  void *v7; // r9
  bool v8; // dl
  unsigned int v9; // r8d
  CPTPProcessor *v10; // rcx
  __int64 v11; // r8
  CTouchProcessor *v12; // rcx
  __int64 v13; // rdx
  struct CPointerInputFrame *GestureCache; // rsi
  CTouchProcessor *v15; // rcx
  LARGE_INTEGER PerformanceCounter; // rbp
  unsigned __int64 v17; // r14
  _QWORD *v18; // r8
  unsigned __int64 QuadPart; // r9
  int v20; // eax
  _QWORD *v21; // rcx
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  CHidInput *v25; // rcx
  __int64 v26; // [rsp+40h] [rbp-58h] BYREF
  int v27; // [rsp+48h] [rbp-50h]
  __int64 v28; // [rsp+80h] [rbp-18h]

  v4 = HMValidateHandleNoSecure(*((_QWORD *)this + 45), 19);
  if ( v4 )
  {
    if ( *(_DWORD *)a2 )
    {
      switch ( *(_DWORD *)a2 )
      {
        case 1:
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v17 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
          InputTraceLogging::PTP::MouseOutput(
            *((const struct CPointerInputFrame **)this + 46),
            PerformanceCounter.QuadPart,
            a2);
          v18 = (_QWORD *)*((_QWORD *)this + 46);
          if ( v18 )
            QuadPart = v18[27];
          else
            QuadPart = PerformanceCounter.QuadPart;
          v20 = *((_DWORD *)this + 95);
          v26 = *(_QWORD *)(*(_QWORD *)(v4 + 472) + 944LL);
          v27 = v20;
          if ( !v18 || *((_DWORD *)this + 94) )
          {
            *(_OWORD *)((char *)this + 2248) = 0LL;
            v28 = 0LL;
            *(_OWORD *)((char *)this + 2264) = 0LL;
            *(_OWORD *)((char *)this + 2280) = 0LL;
            *((_QWORD *)this + 287) = v28;
          }
          else
          {
            *((_QWORD *)this + 283) = v18[10];
            *((_QWORD *)this + 281) = v18[9];
            v21 = *(_QWORD **)(v18[32] + 16LL);
            if ( v21 )
            {
              *((_QWORD *)this + 286) = v21[285];
              *((_QWORD *)this + 287) = v21[287];
              *((_QWORD *)this + 282) = v21[284];
            }
          }
          v22 = *((_DWORD *)a2 + 1);
          if ( v22 == 5 )
          {
            ApiSetEditionInternalSetCursorPos(*((_DWORD *)a2 + 2), *((unsigned int *)a2 + 3), 2LL);
          }
          else if ( CPTPProcessor::QueuePTPMouseEvent(
                      (CPTPProcessor *)((char *)this - 152),
                      *(struct tagPOINT *)((char *)a2 + 8),
                      1 << v22,
                      PerformanceCounter.QuadPart,
                      v17,
                      QuadPart,
                      *((_DWORD *)this + 94),
                      (const struct tagUIPI_INFO_INT *)&v26) )
          {
            if ( *((_QWORD *)this + 46) )
              *((_BYTE *)this + 2212) = 1;
            else
              KeSetEvent((PRKEVENT)gpevtPTPOperation, 1, 0);
          }
          break;
        case 2:
          if ( *((_DWORD *)a2 + 1) == 2 )
          {
            *((_BYTE *)this + 2214) = 0;
            if ( !(unsigned __int8)IsMouseInterceptEnabled() )
            {
              GestureCache = CPTPProcessor::CreateGestureCache(
                               (CPTPProcessor *)((char *)this - 152),
                               v13,
                               (const struct PTPEngineOutput *)((char *)a2 + 20),
                               *((_DWORD *)a2 + 2) != 0);
              if ( GestureCache )
              {
                *((_BYTE *)this + 2214) = 1;
                *((_DWORD *)this + 89) &= ~4u;
                CInputDest::SetEmpty((CPTPProcessor *)((char *)this + 232));
                InputTraceLogging::PTP::GestureOutput(GestureCache, a2);
                CTouchProcessor::ProcessTouchpadInput(v15, GestureCache, *((_DWORD *)this + 94), *((_DWORD *)this + 95));
              }
            }
          }
          else if ( *((_DWORD *)a2 + 1) == 3 && *((_BYTE *)this + 2214) )
          {
            InputTraceLogging::PTP::GestureOutput(*((const struct CPointerInputFrame **)this + 46), a2);
            v10 = (CPTPProcessor *)*((_QWORD *)this + 46);
            *((_DWORD *)v10 + 57) ^= (*((_DWORD *)v10 + 57) ^ (*((_DWORD *)a2 + 2) << 8)) & 0x100;
            CPTPProcessor::CopyPointersIntoFrame(
              v10,
              *((struct CPointerInputFrame **)this + 46),
              v11,
              (const struct PTPEngineOutput *)((char *)a2 + 20),
              0);
            CTouchProcessor::ProcessTouchpadInput(
              v12,
              *((struct CPointerInputFrame **)this + 46),
              *((_DWORD *)this + 94),
              *((_DWORD *)this + 95));
            *((_QWORD *)this + 46) = 0LL;
          }
          break;
        case 3:
          v6 = (CHidInput *)*((unsigned int *)a2 + 1);
          if ( (_DWORD)v6 )
          {
            if ( (_DWORD)v6 != 1 )
              return;
            v7 = 0LL;
            v8 = 1;
            v9 = 0;
          }
          else
          {
            v7 = (void *)*((_QWORD *)this + 45);
            v8 = 0;
            v9 = *((_DWORD *)a2 + 2);
          }
          CHidInput::HandlePTPTimer(v6, v8, v9, v7);
          break;
        default:
          if ( *(_DWORD *)a2 == 4 && !(unsigned __int8)IsMouseInterceptEnabled() )
          {
            v5 = *((_DWORD *)a2 + 1);
            if ( v5 )
            {
              if ( v5 == 1 )
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
      v23 = *((_DWORD *)this + 55);
      if ( (v23 & 1) != 0 || (v23 & 2) == 0 )
      {
        v24 = *((_DWORD *)a2 + 1);
        if ( v24 )
        {
          v25 = (CHidInput *)(unsigned int)(v24 - 1);
          if ( (_DWORD)v25 )
          {
            if ( (unsigned int)((_DWORD)v25 - 1) <= 1 )
              CPTPProcessor::EndInertia((CPTPProcessor *)((char *)this - 152));
          }
          else
          {
            if ( *((_BYTE *)this + 224) )
            {
              CHidInput::HandlePTPInertiaTimer(v25, 1, 0, *((void **)this + 45));
              v23 = *((_DWORD *)this + 55);
              *((_BYTE *)this + 224) = 0;
            }
            *((_DWORD *)this + 55) = v23 & 0xFFFFFFFE;
          }
        }
        else
        {
          CPTPProcessor::CacheInertia((CPTPProcessor *)((char *)this - 152));
        }
      }
      else
      {
        CPTPProcessor::SendPTPInertiaEndToContainer((CPTPProcessor *)((char *)this - 152), a2);
      }
    }
  }
}
