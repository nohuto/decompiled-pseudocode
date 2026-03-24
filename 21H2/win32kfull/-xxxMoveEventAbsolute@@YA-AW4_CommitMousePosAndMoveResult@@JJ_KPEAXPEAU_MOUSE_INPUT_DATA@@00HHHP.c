/*
 * XREFs of ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C003145C
 * Callers:
 *     EditionCommitMousePosAndMove @ 0x1C0030DA0 (EditionCommitMousePosAndMove.c)
 * Callees:
 *     GreMovePointer @ 0x1C0016B30 (GreMovePointer.c)
 *     PhkFirstValid @ 0x1C00202CC (PhkFirstValid.c)
 *     TransitionCursorSuppressionState @ 0x1C0028D10 (TransitionCursorSuppressionState.c)
 *     EditionPostRawMouseInputMessage @ 0x1C0030E60 (EditionPostRawMouseInputMessage.c)
 *     RawInputRequestedForMouse @ 0x1C0031434 (RawInputRequestedForMouse.c)
 *     UsingPenCursors @ 0x1C0033470 (UsingPenCursors.c)
 *     SetWakeBit @ 0x1C0051920 (SetWakeBit.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C005BDB0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00C14A4 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00C14D0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C0167380 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMoveEventAbsolute(
        int a1,
        LONG a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        struct tagWND *a7,
        int a8,
        int a9,
        int a10,
        LARGE_INTEGER *a11)
{
  unsigned int v15; // esi
  int v16; // ebx
  __int64 v17; // xmm1_8
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // edx
  LARGE_INTEGER v23; // rax
  LARGE_INTEGER *v24; // rdi
  __int64 v26; // rcx
  int v27; // r14d
  __int64 Valid; // rbx
  __int64 v29; // rcx
  struct tagHOOK *v30; // rax
  __int64 v31; // rbx
  bool v32; // zf
  __int64 v33; // rax
  int v34; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER *v36; // rcx
  int v37; // [rsp+30h] [rbp-81h] BYREF
  LARGE_INTEGER *v38; // [rsp+38h] [rbp-79h]
  _BYTE v39[8]; // [rsp+40h] [rbp-71h] BYREF
  __int128 v40; // [rsp+48h] [rbp-69h] BYREF
  __int64 v41; // [rsp+58h] [rbp-59h]
  _BYTE v42[8]; // [rsp+60h] [rbp-51h] BYREF
  _WORD v43[2]; // [rsp+68h] [rbp-49h] BYREF
  int v44; // [rsp+6Ch] [rbp-45h]
  int v45; // [rsp+70h] [rbp-41h]
  int v46; // [rsp+74h] [rbp-3Dh]
  int v47; // [rsp+78h] [rbp-39h]
  int v48; // [rsp+7Ch] [rbp-35h]
  _DWORD v49[6]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v50; // [rsp+98h] [rbp-19h]

  v38 = a11;
  if ( ((*(_DWORD *)(**(_QWORD **)(gptiRit + 464LL) + 16LL) | *(_DWORD *)(gptiRit + 680LL)) & 0x8000) != 0 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v39,
      "LowLevelMouseMoveHook",
      0LL);
    v27 = 0;
    v49[3] = a8;
    v49[4] = a6;
    v49[5] = 0;
    v37 = 0;
    v49[0] = a1;
    v49[1] = a2;
    v49[2] = 0;
    if ( a5 && a3 == *(_DWORD *)(a5 + 20) && (*(_BYTE *)(a5 + 2) & 0x50) != 0 )
      a3 = (unsigned __int8)a3 | 0xFF515700LL;
    v50 = a3;
    EnterSharedCrit(0LL, 1LL);
    Valid = PhkFirstValid(gptiRit, 14);
    UserSessionSwitchLeaveCrit(v29);
    if ( Valid )
    {
      v38[4] = KeQueryPerformanceCounter(0LL);
      EnterCrit(0LL, 1LL);
      v30 = (struct tagHOOK *)PhkFirstValid(gptiRit, 14);
      if ( v30 )
      {
        v31 = *(_QWORD *)(gptiCurrent + 1376LL);
        *(_QWORD *)(gptiCurrent + 1376LL) = v49;
        v32 = xxxCallHook2(v30, 0, 0x200uLL, (__int64)v49, &v37, 0) == 0;
        *(_QWORD *)(gptiCurrent + 1376LL) = v31;
        v33 = *(_QWORD *)(gptiCurrent + 448LL);
        LOBYTE(v27) = !v32;
        v34 = *(unsigned __int16 *)(v33 + 4);
        if ( ((unsigned __int16)v34 & *(_WORD *)(v33 + 10) & 0xFDFF) != 0 )
          SetWakeBit(gptiCurrent, v34 & 0xFFFFFDFF);
      }
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v36 = v38;
      v38[5] = PerformanceCounter;
      UserSessionSwitchLeaveCrit(v36);
      if ( v27 )
      {
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v39);
        return 0LL;
      }
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v39);
  }
  v15 = 1;
  v16 = 2;
  if ( a5 )
  {
    EnterCrit(0LL, 1LL);
    v17 = *((_QWORD *)&gObjDummyLock + 2);
    v40 = gObjDummyLock;
    v41 = v17;
    if ( (unsigned int)RawInputRequestedForMouse() )
    {
      v43[0] = *(_WORD *)(a5 + 2) & 0xFE7F;
      v44 = *(_DWORD *)(a5 + 4);
      v45 = *(_DWORD *)(a5 + 8);
      v46 = *(_DWORD *)(a5 + 12);
      v47 = *(_DWORD *)(a5 + 16);
      v48 = *(_DWORD *)(a5 + 20);
      v43[1] = 0;
      *((_QWORD *)&v40 + 1) = a4;
      v41 = 0LL;
      *(_QWORD *)&v40 = a4 != 0 ? 2uLL : 0;
      if ( (unsigned int)EditionPostRawMouseInputMessage(0LL, a7, a6, (__int64)&v40, (__int64)v43) )
      {
        v15 = 9;
        *(_WORD *)a5 = -1;
      }
    }
    UserSessionSwitchLeaveCrit(v18);
  }
  if ( (*(_DWORD *)(**(_QWORD **)(gptiRit + 464LL) + 16LL) & 4) != 0 )
    return 0LL;
  if ( a9 && gCursorSuppressionState == 2 )
  {
    EnterCrit(0LL, 1LL);
    if ( gCursorSuppressionState == 2 )
      TransitionCursorSuppressionState(8u, 1);
    UserSessionSwitchLeaveCrit(v26);
  }
  LODWORD(gptCursorAsync) = a1;
  gptCursorAsync->y = a2;
  if ( a10 )
  {
    if ( !a5 || (v19 = 1LL, (*(_BYTE *)(a5 + 2) & 1) != 0) )
      v19 = 0LL;
  }
  else
  {
    v19 = 2LL;
  }
  v20 = CCursorClip::BoundPoint(gpCursorClip, gptCursorAsync, v19, 0LL, gptCursorAsync);
  if ( v20 == 2 )
  {
    v15 |= 2u;
  }
  else if ( v20 == 1 )
  {
    v15 |= 4u;
  }
  if ( !a5 || (v21 = 256LL, (*(_WORD *)(a5 + 2) & 0x100) == 0) )
    v16 = a8 != 0;
  if ( a9 )
  {
    if ( (unsigned int)UsingPenCursors(v21, 1LL) )
    {
      _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, v22);
      KeSetEvent(Feedback::gpevtPointerCursorOperation, v22, 0);
    }
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v42,
      "MoveCursor",
      0LL);
    EtwTraceGreMovePointerBegin(a6, (unsigned int)gptCursorAsync, (unsigned int)gptCursorAsync->y);
    v23 = KeQueryPerformanceCounter(0LL);
    v24 = v38;
    v38[2] = v23;
    GreMovePointer(*(_DWORD **)(gpDispInfo + 40LL), (int)gptCursorAsync, gptCursorAsync->y, v16);
    v24[3] = KeQueryPerformanceCounter(0LL);
    EtwTraceGreMovePointerEnd(a6, (unsigned int)gptCursorAsync, (unsigned int)gptCursorAsync->y);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v42);
    CCursorSizes::zzzUpdateGlobalCursorSize(gpCursorSizes, gptCursorAsync, 0);
  }
  if ( !gProtocolType )
  {
    if ( WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
      _InterlockedExchange(&gMouseTrailsToHide, WPP_MAIN_CB.Dpc.TargetInfoAsUlong + 1);
  }
  return v15;
}
