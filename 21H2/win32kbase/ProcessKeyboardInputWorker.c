/*
 * XREFs of ProcessKeyboardInputWorker @ 0x1C01B08E0
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C01A26E0 (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C01AFFD0 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     InternalMapVirtualKeyEx @ 0x1C003CFB0 (InternalMapVirtualKeyEx.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C01831C0 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?AccessTimeOut@@YAXXZ @ 0x1C0183240 (-AccessTimeOut@@YAXXZ.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01A1F34 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C01B02B4 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01B0394 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     PtiKbdFromQ @ 0x1C01B11A8 (PtiKbdFromQ.c)
 *     xxxProcessKeyEvent @ 0x1C01B1220 (xxxProcessKeyEvent.c)
 *     VKFromVSC @ 0x1C01B1770 (VKFromVSC.c)
 *     ApiSetEditionRawInputRequestedForKeyboard @ 0x1C01CD9BC (ApiSetEditionRawInputRequestedForKeyboard.c)
 *     ApiSetEditionUserBeep @ 0x1C01CE584 (ApiSetEditionUserBeep.c)
 */

void __fastcall ProcessKeyboardInputWorker(__int64 *a1, struct DEVICEINFO *a2, int a3)
{
  __int64 v5; // rdx
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  __int64 v9; // r8
  int v10; // eax
  unsigned __int8 v11; // cl
  __int64 v12; // rcx
  __int64 v13; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v15; // rax
  struct tagTHREADINFO *v16; // rbx
  struct tagTHREADINFO **v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  PVOID CurrentProcess; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rbx
  __int64 v35; // rax
  PVOID *v36; // rdi
  __int64 *v37; // rsi
  unsigned __int8 v38; // di
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned __int16 v42; // r8
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // r8
  unsigned __int16 v46; // ax
  __int64 v47; // rdx
  __int64 v48; // r9
  __int64 v49; // r8
  int v50; // ecx
  char v51[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v52; // [rsp+34h] [rbp-CCh] BYREF
  int v53; // [rsp+38h] [rbp-C8h] BYREF
  int v54; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v55[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+50h] [rbp-B0h]
  __int64 v57; // [rsp+58h] [rbp-A8h]
  int v58; // [rsp+60h] [rbp-A0h]
  int v59; // [rsp+64h] [rbp-9Ch]
  __int64 v60; // [rsp+68h] [rbp-98h]
  unsigned __int8 v61; // [rsp+70h] [rbp-90h]
  GUID ActivityId; // [rsp+74h] [rbp-8Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+88h] [rbp-78h] BYREF
  int *v64; // [rsp+A8h] [rbp-58h]
  __int64 v65; // [rsp+B0h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+B8h] [rbp-48h] BYREF
  int *v67; // [rsp+D8h] [rbp-28h]
  __int64 v68; // [rsp+E0h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+E8h] [rbp-18h] BYREF
  int *v70; // [rsp+108h] [rbp+8h]
  __int64 v71; // [rsp+110h] [rbp+10h]

  *(_WORD *)((char *)v55 + 1) = 0;
  v5 = *((unsigned __int16 *)a1 + 2);
  v9 = (unsigned __int16)v5;
  HIBYTE(v55[0]) = 0;
  v59 = 0;
  v7 = 0;
  v8 = 0;
  LOWORD(v9) = v5 & 0x10;
  if ( (v5 & 0x10) != 0 || a2 && (*((_DWORD *)a2 + 46) & 0x2000) != 0 || *(_WORD *)a1 == 0xFFFE )
    v8 = 1;
  if ( a2 )
    v56 = *(_QWORD *)a2;
  else
    v56 = 0LL;
  v10 = *((_DWORD *)a1 + 2);
  v57 = *a1;
  v58 = v10;
  v55[1] = 0;
  if ( (v5 & 0x28) == 0 )
  {
    if ( (gSetLedReceived & 0x8000) != 0 )
    {
      RemoteSyncToggleKeys(gSetLedReceived);
      v5 = *((unsigned __int16 *)a1 + 2);
    }
    if ( (v5 & 2) != 0 )
      v11 = -32;
    else
      v11 = (v5 & 4) != 0 ? 0xE1 : 0;
    v51[0] = v11;
    if ( *((_WORD *)a1 + 1) == 255 )
    {
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit();
      ApiSetEditionUserBeep();
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v61 = 1;
        v15 = PsGetCurrentThreadWin32Thread(v13);
        v60 = v15;
        if ( v15 && (*(int *)(v15 + 24) > 0 || *(_DWORD *)(v60 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
          {
            v53 = v61;
            v65 = 4LL;
            v64 = &v53;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024BA90,
              (unsigned __int8 *)dword_1C0218FF7,
              &ActivityId,
              0LL,
              3u,
              &v63);
          }
        }
      }
      else
      {
        v60 = 0LL;
      }
      v16 = 0LL;
      while ( 1 )
      {
        v17 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v17 )
          v16 = *v17;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v19, v18);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v22, v21) == gpepCSRSS && v16 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v16 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v60 && (*(_DWORD *)(v60 + 48) || *(int *)(v60 + 24) > 0) )
      {
        *(_DWORD *)(v60 + 44) = 1;
        *(GUID *)(v60 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024BA90 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
          {
            v52 = v61;
            v68 = 4LL;
            v67 = &v52;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024BA90,
              (unsigned __int8 *)dword_1C0218FA0,
              &ActivityId,
              0LL,
              3u,
              &v66);
            v23 = dword_1C024BA90;
          }
          if ( v23 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
          {
            v54 = v61;
            v71 = 4LL;
            v70 = &v54;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024BA90,
              (unsigned __int8 *)dword_1C0218FCD,
              &ActivityId,
              0LL,
              3u,
              &v69);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v16;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v26 = PsGetCurrentProcess(v25, v24),
            ProcessSessionId = PsGetProcessSessionIdEx(v26),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v30 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v30 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31);
        if ( v30
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v30 + 488) & 0x1000000) != 0
          && (*(_DWORD *)(v30 + 1232) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PVOID *)GetDomainLockRef(12);
          if ( DomainLockRef == gDomainDummyLock )
          {
            v52 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
          }
          if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
          {
            v52 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
          }
          ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*DomainLockRef);
          while ( 1 )
          {
            v37 = (__int64 *)gpducstulHead;
            if ( !gpducstulHead )
              break;
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
            v35 = *v37;
            v37[2] = 0LL;
            if ( !*(_DWORD *)(v35 + 8) )
            {
              v52 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
            }
            v36 = (PVOID *)GetDomainLockRef(12);
            if ( v36 == gDomainDummyLock )
            {
              v53 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
            }
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v36);
            HMUnlockObject(*v37);
            tagDomLock::LockExclusive((PERESOURCE *)v36);
          }
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
        }
      }
      goto LABEL_71;
    }
    LOBYTE(v55[0]) = *((_BYTE *)a1 + 2) & 0x7F;
    if ( a3 && (gpScancodeMap || gpFlexMap) )
    {
      HIWORD(v55[0]) = 0;
      if ( (v5 & 1) != 0 )
        HIWORD(v55[0]) = 0x8000;
      if ( !(unsigned int)MapScancode((struct tagKE *)v55, v51, a2) )
        goto LABEL_71;
      v11 = v51[0];
    }
    LOBYTE(v5) = v11;
    gbVKLastDown = VKFromVSC(v55, v5, v9);
    v38 = gbVKLastDown;
    if ( gbVKLastDown )
    {
      if ( (unsigned __int8)(gbVKLastDown - 91) <= 1u )
      {
        v40 = *((unsigned __int16 *)a1 + 2);
        v41 = (unsigned __int16)v40;
        if ( (v40 & 1) == 0 )
        {
          if ( gptiForeground && (v44 = *((_QWORD *)gptiForeground + 55)) != 0 )
            v45 = *(_QWORD *)(*(_QWORD *)(v44 + 48) + 32LL);
          else
            v45 = gpKbdTbl;
          if ( !LScanCode )
          {
            v46 = InternalMapVirtualKeyEx(0x4Cu, 0LL, v45);
            v40 = *((unsigned __int16 *)a1 + 2);
            LScanCode = v46;
          }
LABEL_94:
          if ( (v40 & 1) != 0 )
            HIWORD(v55[0]) |= 0x8000u;
          if ( qword_1C0258050 )
            v43 = qword_1C0258050(v40, v41);
          else
            v43 = 0;
          if ( v43 && (unsigned __int8)(BYTE2(v55[0]) - 91) <= 1u && !gfEnableWindowsKey )
            goto LABEL_71;
          if ( v38 == 91 )
          {
            LOBYTE(v41) = 64;
          }
          else
          {
            if ( v38 == 92 )
            {
              LOBYTE(v41) = 0x80;
              gCurrentModifierBit = 0x80;
LABEL_119:
              if ( (*((_BYTE *)a1 + 4) & 1) != 0 )
              {
                LOBYTE(v41) = ~(_BYTE)v41;
                gPhysModifierState &= v41;
              }
              else
              {
                gPhysModifierState |= v41;
              }
LABEL_122:
              if ( v38 == 13 && (*((_BYTE *)a1 + 4) & 1) == 0 )
                PoLatencySensitivityHint(1LL, v41);
              if ( (gdwPUDFlags & 0x100) != 0 )
              {
                AccessTimeOut();
                if ( !(unsigned int)AccessProceduresStream((struct tagKE *)v55, *((_DWORD *)a1 + 2), 0) )
                  return;
                v48 = v7;
                v47 = *((unsigned int *)a1 + 2);
                v49 = (*((unsigned __int16 *)a1 + 2) >> 4) & 1;
              }
              else
              {
                v47 = *((unsigned int *)a1 + 2);
                v48 = v7;
                v49 = v8;
              }
              goto LABEL_135;
            }
            if ( (unsigned __int8)(v38 + 96) > 5u )
            {
              LOBYTE(v41) = 0;
            }
            else
            {
              v41 = 1LL;
              LOBYTE(v41) = 1 << (v38 & 0xF);
            }
          }
          gCurrentModifierBit = v41;
          if ( !(_BYTE)v41 )
            goto LABEL_122;
          goto LABEL_119;
        }
LABEL_86:
        if ( LScanCode )
        {
          if ( *((_WORD *)a1 + 1) == LScanCode )
          {
            v38 = 76;
            gbVKLastDown = 76;
            HIWORD(v55[0]) = 76;
          }
          v42 = v40;
          if ( (gfsSASModifiersDown & 8) == 0
            || (v40 = (unsigned __int16)v41, (v41 & 1) != 0) && ((v42 = v41, v38 == 91) || v38 == 92) )
          {
            LScanCode = 0;
            v40 = v42;
          }
        }
        goto LABEL_94;
      }
    }
    else
    {
      if ( gpqForeground )
        v39 = PtiKbdFromQ(gpqForeground);
      else
        v39 = 0LL;
      if ( !(unsigned int)ApiSetEditionRawInputRequestedForKeyboard(v39) )
      {
LABEL_71:
        InputTraceLogging::Keyboard::DropInput();
        return;
      }
      v7 = 1;
    }
    v40 = *((unsigned __int16 *)a1 + 2);
    v41 = (unsigned __int16)v40;
    goto LABEL_86;
  }
  if ( (v5 & 8) != 0 )
  {
    v50 = v10;
    if ( (v5 & 0x10) != 0 )
    {
      v50 = v10 | 0x4000;
      *((_DWORD *)a1 + 2) = v10 | 0x4000;
    }
    RemoteSyncToggleKeys(v50);
    LOWORD(v5) = *((_WORD *)a1 + 2);
  }
  if ( (v5 & 0x20) != 0 )
  {
    LOWORD(v55[0]) = *((_WORD *)a1 + 1);
    v48 = 0LL;
    v49 = ((unsigned __int16)v5 >> 4) & 1;
    HIWORD(v55[0]) = ((_WORD)v5 << 15) | 0x10E7;
    v47 = 0LL;
LABEL_135:
    xxxProcessKeyEvent(v55, v47, v49, v48, a2, 0LL);
  }
}
