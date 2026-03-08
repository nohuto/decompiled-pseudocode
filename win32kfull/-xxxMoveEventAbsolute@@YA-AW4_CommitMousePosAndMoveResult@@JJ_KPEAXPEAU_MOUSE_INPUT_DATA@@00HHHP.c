/*
 * XREFs of ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C0142474
 * Callers:
 *     EditionCommitMousePosAndMove @ 0x1C01AD160 (EditionCommitMousePosAndMove.c)
 * Callees:
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C001DB98 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C0020334 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     PhkFirstValid @ 0x1C00368A8 (PhkFirstValid.c)
 *     SetWakeBit @ 0x1C0038B60 (SetWakeBit.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C006C010 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     TransitionCursorSuppressionState @ 0x1C007B640 (TransitionCursorSuppressionState.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00D6A80 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00D6CE8 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     EditionPostRawMouseInputMessage @ 0x1C0142A40 (EditionPostRawMouseInputMessage.c)
 *     RawInputRequestedForMouse @ 0x1C01AD860 (RawInputRequestedForMouse.c)
 *     UsingPenCursors @ 0x1C01AEE8C (UsingPenCursors.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMoveEventAbsolute(
        int a1,
        LONG a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        LARGE_INTEGER *a11)
{
  int v11; // r13d
  char v12; // bl
  unsigned int v13; // r14d
  __int64 *v15; // rax
  __int64 v16; // rcx
  int v17; // r15d
  bool v18; // r12
  struct tagHOOK *Valid; // rcx
  __int64 v20; // rdi
  __int64 v21; // rax
  bool v22; // zf
  __int64 v23; // rax
  BOOL v24; // r13d
  int v25; // edx
  __int64 v26; // rcx
  unsigned int v28; // edi
  unsigned int v29; // r15d
  __int16 v30; // ax
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rcx
  unsigned int v35; // edx
  LARGE_INTEGER v36; // rax
  LARGE_INTEGER *v37; // rbx
  CursorApiRouter *v38; // rcx
  __int64 v39; // rcx
  __int32 v40; // ebx
  __int64 v41; // rcx
  int v43; // [rsp+34h] [rbp-8Dh] BYREF
  int v44; // [rsp+38h] [rbp-89h]
  LARGE_INTEGER *v45; // [rsp+40h] [rbp-81h]
  __int64 *v46; // [rsp+48h] [rbp-79h] BYREF
  __int64 *v47; // [rsp+50h] [rbp-71h] BYREF
  _WORD v48[2]; // [rsp+58h] [rbp-69h] BYREF
  int v49; // [rsp+5Ch] [rbp-65h]
  int v50; // [rsp+60h] [rbp-61h]
  int v51; // [rsp+64h] [rbp-5Dh]
  int v52; // [rsp+68h] [rbp-59h]
  int v53; // [rsp+6Ch] [rbp-55h]
  LARGE_INTEGER PerformanceCounter; // [rsp+70h] [rbp-51h]
  _DWORD v55[2]; // [rsp+78h] [rbp-49h] BYREF
  __int64 *v56; // [rsp+80h] [rbp-41h]
  __int64 v57; // [rsp+88h] [rbp-39h]
  _DWORD v58[6]; // [rsp+90h] [rbp-31h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-19h]

  v11 = a1;
  v12 = 1;
  v44 = a1;
  v13 = 1;
  v45 = a11;
  v46 = a4;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v15 = *(__int64 **)(gptiRit + 464LL);
  v16 = *v15;
  v17 = (*(_DWORD *)(gptiRit + 680LL) | *(_DWORD *)(*v15 + 16)) & 0x8000;
  v18 = a5 && (unsigned int)RawInputRequestedForMouse();
  if ( v17 || v18 )
  {
    EnterCrit(1LL, 0LL);
    if ( v17 )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v47, "LowLevelMouseMoveHook", 0LL);
      v58[1] = a2;
      v58[3] = a8;
      v58[4] = a6;
      v58[5] = 0;
      v43 = 0;
      v58[0] = v11;
      v58[2] = 0;
      if ( a5 && a3 == *(_DWORD *)(a5 + 20) && (*(_BYTE *)(a5 + 2) & 0x50) != 0 )
        a3 = (unsigned __int8)a3 | 0xFF515700LL;
      v59 = a3;
      Valid = (struct tagHOOK *)PhkFirstValid(gptiRit, 14);
      if ( Valid )
      {
        v45[4] = PerformanceCounter;
        v20 = *(_QWORD *)(gptiCurrent + 1416LL);
        *(_QWORD *)(gptiCurrent + 1416LL) = v58;
        v21 = xxxCallHook2(Valid, 0, 0x200uLL, (__int64)v58, &v43, 0);
        *(_QWORD *)(gptiCurrent + 1416LL) = v20;
        v22 = v21 == 0;
        v23 = *(_QWORD *)(gptiCurrent + 448LL);
        v24 = !v22;
        v25 = *(_DWORD *)(v23 + 4);
        if ( (v25 & *(_DWORD *)(v23 + 16) & 0xFFFFFDFF) != 0 )
          SetWakeBit(gptiCurrent, v25 & 0xFFFFFDFF);
        v45[5] = KeQueryPerformanceCounter(0LL);
        if ( v24 )
        {
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v47);
          UserSessionSwitchLeaveCrit(v26);
          return 0LL;
        }
        v11 = v44;
      }
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v47);
    }
  }
  else
  {
    v12 = 0;
  }
  v28 = 2;
  if ( v18 )
  {
    v29 = a6;
    if ( (unsigned int)RawInputRequestedForMouse() )
    {
      v30 = *(_WORD *)(a5 + 2) & 0xFE7F;
      v56 = v46;
      v48[0] = v30;
      v49 = *(_DWORD *)(a5 + 4);
      v50 = *(_DWORD *)(a5 + 8);
      v51 = *(_DWORD *)(a5 + 12);
      v52 = *(_DWORD *)(a5 + 16);
      v53 = *(_DWORD *)(a5 + 20);
      v48[1] = 0;
      v55[1] = 0;
      v57 = 0LL;
      v55[0] = v46 != 0LL ? 2 : 0;
      if ( (unsigned int)EditionPostRawMouseInputMessage(0LL, a7, a6, v55, v48) )
      {
        v13 = 9;
        *(_WORD *)a5 = -1;
      }
    }
  }
  else
  {
    v29 = a6;
  }
  if ( v12 )
    UserSessionSwitchLeaveCrit(v16);
  if ( (*(_DWORD *)(**(_QWORD **)(gptiRit + 464LL) + 16LL) & 4) != 0 )
    return 0LL;
  if ( a9 && gCursorSuppressionState == 2 )
  {
    EnterCrit(1LL, 0LL);
    if ( gCursorSuppressionState == 2 )
      TransitionCursorSuppressionState(8u, 1);
    UserSessionSwitchLeaveCrit(v31);
  }
  LODWORD(gptCursorAsync) = v11;
  gptCursorAsync->y = a2;
  if ( a10 )
  {
    if ( !a5 || (v32 = 1LL, (*(_BYTE *)(a5 + 2) & 1) != 0) )
      v32 = 0LL;
  }
  else
  {
    v32 = 2LL;
  }
  v33 = CCursorClip::BoundPoint(gpCursorClip, gptCursorAsync, v32, 0LL, gptCursorAsync);
  if ( v33 == 2 )
  {
    v13 |= 2u;
  }
  else if ( v33 == 1 )
  {
    v13 |= 4u;
  }
  if ( !a5 || !_bittest16((const signed __int16 *)(a5 + 2), 8u) )
    v28 = a8 != 0;
  if ( a9 )
  {
    if ( (unsigned int)UsingPenCursors(v34, 1LL) )
    {
      _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, v35);
      KeSetEvent(Feedback::gpevtPointerCursorOperation, v35, 0);
    }
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v46, "MoveCursor", 0LL);
    EtwTraceGreMovePointerBegin(v29, (unsigned int)gptCursorAsync, (unsigned int)gptCursorAsync->y);
    v36 = KeQueryPerformanceCounter(0LL);
    v37 = v45;
    v45[2] = v36;
    CursorApiRouter::MovePointer(v38, *(HDEV *)(gpDispInfo + 40LL), (int)gptCursorAsync, gptCursorAsync->y, v28);
    v37[3] = KeQueryPerformanceCounter(0LL);
    EtwTraceGreMovePointerEnd(v29, (unsigned int)gptCursorAsync, (unsigned int)gptCursorAsync->y);
    v13 |= 0x10u;
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v46);
    CCursorSizes::zzzUpdateGlobalCursorSize(gpCursorSizes, gptCursorAsync, 0);
  }
  if ( !gProtocolType )
  {
    if ( *(_DWORD *)(SGDGetUserSessionState(v34) + 15936) )
    {
      v40 = *(_DWORD *)(SGDGetUserSessionState(v39) + 15936) + 1;
      _InterlockedExchange((volatile __int32 *)(SGDGetUserSessionState(v41) + 15940), v40);
    }
  }
  return v13;
}
