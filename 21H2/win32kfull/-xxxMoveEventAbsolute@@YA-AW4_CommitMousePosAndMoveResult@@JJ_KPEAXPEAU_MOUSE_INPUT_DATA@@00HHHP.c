/*
 * XREFs of ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C009B280
 * Callers:
 *     EditionCommitMousePosAndMove @ 0x1C009B1C0 (EditionCommitMousePosAndMove.c)
 * Callees:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0053590 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007EDA8 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007F7CC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     TransitionCursorSuppressionState @ 0x1C0097DC0 (TransitionCursorSuppressionState.c)
 *     EditionPostRawMouseInputMessage @ 0x1C009B5F0 (EditionPostRawMouseInputMessage.c)
 *     RawInputRequestedForMouse @ 0x1C009B988 (RawInputRequestedForMouse.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C009C088 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C009C170 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     UsingPenCursors @ 0x1C009EB60 (UsingPenCursors.c)
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@$$V@?$DomainSharedBase@VDLT_HOOK@@@@IEAA@XZ @ 0x1C00AD2BC (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@$$V@-$DomainSharedBase@VDLT_HOOK@@@@IEAA@XZ.c)
 *     PhkFirstValid @ 0x1C00EA6F4 (PhkFirstValid.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMoveEventAbsolute(
        int a1,
        LONG a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        LARGE_INTEGER *a11)
{
  int v13; // esi
  unsigned int v16; // esi
  unsigned int v17; // ebx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // edx
  LARGE_INTEGER v22; // rax
  LARGE_INTEGER *v23; // rdi
  CursorApiRouter *v24; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // r14d
  __int64 v29; // r8
  char *v30; // rbx
  tagDomLock *v31; // rcx
  tagDomLock *v32; // rcx
  __int64 Valid; // rbx
  __int64 v34; // r8
  struct tagHOOK *v35; // rax
  __int64 v36; // rbx
  bool v37; // zf
  __int64 v38; // rax
  __int64 v39; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER *v41; // rcx
  int v42; // [rsp+30h] [rbp-B1h] BYREF
  LARGE_INTEGER *v43; // [rsp+38h] [rbp-A9h]
  __int64 *v44; // [rsp+40h] [rbp-A1h] BYREF
  _WORD v45[2]; // [rsp+48h] [rbp-99h] BYREF
  int v46; // [rsp+4Ch] [rbp-95h]
  int v47; // [rsp+50h] [rbp-91h]
  int v48; // [rsp+54h] [rbp-8Dh]
  int v49; // [rsp+58h] [rbp-89h]
  int v50; // [rsp+5Ch] [rbp-85h]
  __int64 *v51; // [rsp+60h] [rbp-81h] BYREF
  _DWORD v52[2]; // [rsp+68h] [rbp-79h] BYREF
  __int64 v53; // [rsp+70h] [rbp-71h]
  __int64 v54; // [rsp+78h] [rbp-69h]
  _DWORD v55[6]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v56; // [rsp+98h] [rbp-49h]
  tagDomLock *v57; // [rsp+A0h] [rbp-41h] BYREF
  char v58; // [rsp+A8h] [rbp-39h] BYREF
  char v59; // [rsp+C8h] [rbp-19h]

  v43 = a11;
  v13 = 0;
  if ( ((*(_DWORD *)(gptiRit + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiRit + 464LL) + 16LL)) & 0x8000) != 0 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v44, "LowLevelMouseMoveHook", 0LL);
    v28 = 0;
    v55[3] = a8;
    v55[4] = a6;
    v55[5] = 0;
    v42 = 0;
    v55[0] = a1;
    v55[1] = a2;
    v55[2] = 0;
    if ( a5 && a3 == *(_DWORD *)(a5 + 20) && (*(_BYTE *)(a5 + 2) & 0x50) != 0 )
      a3 = (unsigned __int8)a3 | 0xFF515700LL;
    v56 = a3;
    EnterSharedCrit();
    DomainSharedBase<DLT_HOOK>::DomainExclusiveBase<>::ObjectLockBase<>::ObjectLockBase<>(&v57);
    if ( !v59 )
    {
      v30 = &v58;
      do
      {
        v31 = (tagDomLock *)*((_QWORD *)v30 - 1);
        if ( v31 )
        {
          if ( *v30 )
            tagDomLock::LockExclusive(v31);
          else
            tagDomLock::LockShared(v31);
        }
        ++v13;
        v30 += 16;
      }
      while ( !v13 );
      v59 = 1;
    }
    Valid = PhkFirstValid(gptiRit, 14LL, v29);
    if ( v59 )
    {
      v32 = v57;
      if ( v57 )
      {
        if ( v58 )
          tagDomLock::UnLockExclusive(v57);
        else
          tagDomLock::UnLockShared(v57);
      }
      v59 = 0;
    }
    UserSessionSwitchLeaveCrit(v32);
    if ( Valid )
    {
      v43[4] = KeQueryPerformanceCounter(0LL);
      EnterCrit(1LL, 0LL);
      v35 = (struct tagHOOK *)PhkFirstValid(gptiRit, 14LL, v34);
      if ( v35 )
      {
        v36 = *(_QWORD *)(gptiCurrent + 1376LL);
        *(_QWORD *)(gptiCurrent + 1376LL) = v55;
        v37 = xxxCallHook2(v35, 0, 0x200uLL, (__int64)v55, &v42, 0) == 0;
        *(_QWORD *)(gptiCurrent + 1376LL) = v36;
        v38 = *(_QWORD *)(gptiCurrent + 448LL);
        LOBYTE(v28) = !v37;
        v39 = *(unsigned int *)(v38 + 4);
        if ( ((unsigned int)v39 & *(_DWORD *)(v38 + 16) & 0xFFFFFDFF) != 0 )
        {
          LODWORD(v39) = v39 & 0xFFFFFDFF;
          SetWakeBit(gptiCurrent, v39);
        }
      }
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v41 = v43;
      v43[5] = PerformanceCounter;
      UserSessionSwitchLeaveCrit(v41);
      if ( v28 )
      {
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v44);
        return 0LL;
      }
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v44);
  }
  v16 = 1;
  v17 = 2;
  if ( a5 && (unsigned int)RawInputRequestedForMouse() )
  {
    EnterCrit(1LL, 0LL);
    if ( (unsigned int)RawInputRequestedForMouse() )
    {
      v45[0] = *(_WORD *)(a5 + 2) & 0xFE7F;
      v46 = *(_DWORD *)(a5 + 4);
      v47 = *(_DWORD *)(a5 + 8);
      v48 = *(_DWORD *)(a5 + 12);
      v49 = *(_DWORD *)(a5 + 16);
      v50 = *(_DWORD *)(a5 + 20);
      v45[1] = 0;
      v53 = a4;
      v52[1] = 0;
      v54 = 0LL;
      v52[0] = a4 != 0 ? 2 : 0;
      if ( (unsigned int)EditionPostRawMouseInputMessage(0LL, a7, a6, v52, v45) )
      {
        v16 = 9;
        *(_WORD *)a5 = -1;
      }
    }
    UserSessionSwitchLeaveCrit(v26);
  }
  if ( (*(_DWORD *)(**(_QWORD **)(gptiRit + 464LL) + 16LL) & 4) != 0 )
    return 0LL;
  if ( a9 && gCursorSuppressionState == 2 )
  {
    EnterCrit(1LL, 0LL);
    if ( gCursorSuppressionState == 2 )
      TransitionCursorSuppressionState(8u, 1);
    UserSessionSwitchLeaveCrit(v27);
  }
  LODWORD(gptCursorAsync) = a1;
  gptCursorAsync->y = a2;
  if ( a10 )
  {
    if ( !a5 || (v18 = 1LL, (*(_BYTE *)(a5 + 2) & 1) != 0) )
      v18 = 0LL;
  }
  else
  {
    v18 = 2LL;
  }
  v19 = CCursorClip::BoundPoint(gpCursorClip, gptCursorAsync, v18, 0LL, gptCursorAsync);
  if ( v19 == 2 )
  {
    v16 |= 2u;
  }
  else if ( v19 == 1 )
  {
    v16 |= 4u;
  }
  if ( !a5 || !_bittest16((const signed __int16 *)(a5 + 2), 8u) )
    v17 = a8 != 0;
  if ( a9 )
  {
    if ( (unsigned int)UsingPenCursors(v20, 1LL) )
    {
      _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, v21);
      KeSetEvent(Feedback::gpevtPointerCursorOperation, v21, 0);
    }
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v51, "MoveCursor", 0LL);
    EtwTraceGreMovePointerBegin(a6, (unsigned int)gptCursorAsync, (unsigned int)gptCursorAsync->y);
    v22 = KeQueryPerformanceCounter(0LL);
    v23 = v43;
    v43[2] = v22;
    CursorApiRouter::MovePointer(v24, *(HDEV *)(gpDispInfo + 40LL), (int)gptCursorAsync, gptCursorAsync->y, v17);
    v23[3] = KeQueryPerformanceCounter(0LL);
    EtwTraceGreMovePointerEnd(a6, (unsigned int)gptCursorAsync, (unsigned int)gptCursorAsync->y);
    v16 |= 0x10u;
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v51);
    CCursorSizes::zzzUpdateGlobalCursorSize(gpCursorSizes, gptCursorAsync, 0);
  }
  if ( !gProtocolType )
  {
    if ( LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
      _InterlockedExchange(&gMouseTrailsToHide, LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) + 1);
  }
  return v16;
}
