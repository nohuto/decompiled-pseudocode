/*
 * XREFs of ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01FA0CC
 * Callers:
 *     NtMITSynthesizeMouseInput @ 0x1C0155C20 (NtMITSynthesizeMouseInput.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C0035AFC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     UpconvertTime @ 0x1C007ED60 (UpconvertTime.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C009A4B4 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C00AFFA4 (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::Extensibility_SynthesizeMouseInput(
        CMouseProcessor *a1,
        __int64 a2,
        char a3,
        _QWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  ULONG v11; // ecx
  int v12; // edx
  __int16 v13; // ax
  __int16 v14; // ax
  __int16 v15; // cx
  bool v16; // zf
  __int16 Ptr_high; // ax
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  unsigned int v22; // esi
  unsigned int v23; // ecx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // r8
  LARGE_INTEGER *v35; // rbx
  struct tagTHREADINFO **v36; // rbx
  struct tagTHREADINFO *v37; // rbx
  __int64 v38; // rcx
  unsigned int v39; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  struct tagKERNELHANDLETABLEENTRY *v43; // rax
  __int64 v44; // rcx
  __int64 *v45; // rbx
  __int64 result; // rax
  _DWORD v47[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE ActivityId[28]; // [rsp+40h] [rbp-C0h] BYREF
  struct tagPOINT v49; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v51; // [rsp+D0h] [rbp-30h]
  _DWORD *v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v55; // [rsp+100h] [rbp+0h]
  _DWORD *v56; // [rsp+110h] [rbp+10h]
  __int64 v57; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+120h] [rbp+20h] BYREF
  __int64 v59; // [rsp+130h] [rbp+30h]
  _DWORD *v60; // [rsp+140h] [rbp+40h]
  __int64 v61; // [rsp+148h] [rbp+48h]

  if ( !CInputThreadBase::IsInputThread(gpInputThread) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  v11 = *(_DWORD *)(a2 + 32);
  v51 = 0LL;
  v12 = 256;
  v50 = 0LL;
  if ( v11 || *(_DWORD *)(a2 + 36) )
  {
    v13 = *(_WORD *)(a2 + 24) & 3;
    v50.Reserved = v11;
    WORD1(v50.Ptr) = v13;
    LODWORD(v51) = *(_DWORD *)(a2 + 36);
    if ( (a3 & 4) != 0 )
      v12 = 258;
  }
  else
  {
    v12 = 264;
  }
  v14 = *(_WORD *)(a2 + 26) & 0xFFF;
  v15 = *(_WORD *)(a2 + 28);
  WORD2(v50.Ptr) = v14;
  if ( v15 )
  {
    v16 = (v14 & 0xC00) == 0;
    Ptr_high = HIWORD(v50.Ptr);
    if ( !v16 )
      Ptr_high = v15;
    HIWORD(v50.Ptr) = Ptr_high;
  }
  v18 = v12 | 0x800;
  if ( (a3 & 2) == 0 )
    v18 = v12;
  v19 = v18 | 0x200;
  if ( (a3 & 8) != 0 )
    v19 = v18;
  v20 = v19 | 0x400;
  if ( (a3 & 1) == 0 )
    v20 = v19;
  v21 = v20 | 0x2000;
  if ( (a3 & 0x20) == 0 )
    v21 = v20;
  v22 = v21 | 0x10000;
  if ( (a3 & 0x80) == 0 )
    v22 = v21;
  if ( (a3 & 0x10) != 0 )
    v22 = v22 & 0xFFFFFFF3 | 4;
  v23 = *(_DWORD *)(a2 + 8);
  v24 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)&v54.Size = *(_QWORD *)a2;
  v54.Ptr = 1LL;
  v58.Ptr = UpconvertTime(v23);
  *(struct _EVENT_DATA_DESCRIPTOR *)ActivityId = v54;
  *(_QWORD *)&ActivityId[16] = 0LL;
  *(_QWORD *)&v58.Size = v24;
  v59 = v24;
  v54 = v58;
  v55 = v24;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx(
    (__int64)&v49,
    (__int64)&v50,
    (__int128 *)&v54,
    v22 | 0x40,
    (__int64)ActivityId,
    a4);
  UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v49, 0LL);
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v30, v29, v31);
  else
    CurrentThreadWin32Thread = 0LL;
  *(_QWORD *)ActivityId = CurrentThreadWin32Thread;
  *(_DWORD *)&ActivityId[8] = 1;
  if ( CurrentThreadWin32Thread
    && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(*(_QWORD *)ActivityId + 48LL)) )
  {
    EtwActivityIdControl(3u, (LPGUID)&ActivityId[12]);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v61 = 4LL;
      v47[0] = *(_DWORD *)&ActivityId[8] == 1;
      v60 = v47;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        (const GUID *)&ActivityId[12],
        0LL,
        3u,
        &v58);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v33 = W32kEtwEnabledKeyword, v34 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v34 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v35 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v30, v33, v34);
    if ( v35 )
      v35[1] = KeQueryPerformanceCounter(0LL);
  }
  v36 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v36 )
  {
    v37 = *v36;
    if ( IsThreadCrossSessionAttached() )
      v37 = 0LL;
    if ( *(_QWORD *)ActivityId )
    {
      v38 = *(unsigned int *)(*(_QWORD *)ActivityId + 24LL);
      if ( *(_DWORD *)(*(_QWORD *)ActivityId + 48LL) || (int)v38 > 0 )
      {
        *(_DWORD *)(*(_QWORD *)ActivityId + 44LL) = 1;
        *(_OWORD *)(*(_QWORD *)ActivityId + 28LL) = *(_OWORD *)&ActivityId[12];
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v57 = 4LL;
            v47[0] = *(_DWORD *)&ActivityId[8] == 1;
            v56 = v47;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              (const GUID *)&ActivityId[12],
              0LL,
              3u,
              &v54);
            v39 = dword_1C028EE70;
          }
          if ( v39 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v53 = 4LL;
            v47[0] = *(_DWORD *)&ActivityId[8] == 1;
            v52 = v47;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              (const GUID *)&ActivityId[12],
              0LL,
              3u,
              &v50);
          }
        }
      }
    }
    gptiCurrent = v37;
    if ( v37 )
    {
      *((_DWORD *)v37 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v38);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v45 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v43 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v44 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v43;
            if ( !*(_DWORD *)(v44 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v41, v42);
              v44 = *v45;
            }
            HMUnlockObject(v44);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)ActivityId);
    gptiCurrent = 0LL;
  }
  if ( CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult((__int64)&v49, 4LL) )
    return 2LL;
  v16 = !CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult((__int64)&v49, 2LL);
  result = 1LL;
  if ( !v16 )
    return 2LL;
  return result;
}
