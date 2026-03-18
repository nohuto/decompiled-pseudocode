/*
 * XREFs of ProcessKeyboardInputWorker @ 0x1C01E9C00
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C00052B0 (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C01E94F4 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     GetActiveHKL @ 0x1C003F290 (GetActiveHKL.c)
 *     InternalMapVirtualKeyEx @ 0x1C003F3A0 (InternalMapVirtualKeyEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxProcessKeyEvent @ 0x1C00CABA0 (xxxProcessKeyEvent.c)
 *     VKFromVSC @ 0x1C00CD590 (VKFromVSC.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C00E7BD0 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?AccessTimeOut@@YAXXZ @ 0x1C00E7C50 (-AccessTimeOut@@YAXXZ.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01DB3B8 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C01E97EC (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01E98CC (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     PtiKbdFromQ @ 0x1C01EA3D8 (PtiKbdFromQ.c)
 *     ApiSetEditionRawInputRequestedForKeyboard @ 0x1C020B1AC (ApiSetEditionRawInputRequestedForKeyboard.c)
 *     ApiSetEditionUserBeep @ 0x1C020C130 (ApiSetEditionUserBeep.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ProcessKeyboardInputWorker(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // di
  __int64 v4; // r9
  int v6; // r15d
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int8 v11; // si
  __int16 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  LARGE_INTEGER *v19; // rbx
  struct tagTHREADINFO **v20; // rbx
  struct tagTHREADINFO *v21; // rbx
  __int64 v22; // rcx
  unsigned int v23; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  struct tagKERNELHANDLETABLEENTRY *v27; // rax
  __int64 v28; // rcx
  __int64 *v29; // rbx
  __int64 v30; // r8
  char v31; // di
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int16 ActiveHKL; // ax
  __int64 v36; // rax
  unsigned __int16 v37; // ax
  char v38; // dl
  int v39; // ecx
  char v40[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v41; // [rsp+34h] [rbp-CCh] BYREF
  int v42; // [rsp+38h] [rbp-C8h]
  _DWORD v43[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+48h] [rbp-B8h]
  __int64 v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+58h] [rbp-A8h]
  int v47; // [rsp+5Ch] [rbp-A4h]
  __int64 v48; // [rsp+60h] [rbp-A0h] BYREF
  int v49; // [rsp+68h] [rbp-98h]
  GUID ActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v58; // [rsp+100h] [rbp+0h]
  __int64 v59; // [rsp+108h] [rbp+8h]

  v3 = *((_WORD *)a1 + 2);
  v4 = 0LL;
  v42 = 0;
  v8 = v3;
  v43[0] = 0;
  v47 = 0;
  v6 = a3;
  v41 = 0;
  LOWORD(v8) = v3 & 0x10;
  if ( (v3 & 0x10) != 0 || a2 && (*(_DWORD *)(a2 + 184) & 0x2000) != 0 || *(_WORD *)a1 == 0xFFFE )
    v41 = 1;
  if ( a2 )
    v44 = *(_QWORD *)a2;
  else
    v44 = 0LL;
  v9 = *((_DWORD *)a1 + 2);
  v45 = *a1;
  v46 = v9;
  v43[1] = 0;
  if ( (v3 & 0x28) == 0 )
  {
    v10 = gSetLedReceived;
    if ( (gSetLedReceived & 0x8000) != 0 )
    {
      RemoteSyncToggleKeys(gSetLedReceived);
      v3 = *((_WORD *)a1 + 2);
    }
    if ( (v3 & 2) != 0 )
      v11 = -32;
    else
      v11 = (v3 & 4) != 0 ? 0xE1 : 0;
    v12 = *((_WORD *)a1 + 1);
    v40[0] = v11;
    if ( v12 == 255 )
    {
      UserSessionSwitchLeaveCrit(v10, v8, a3, v4);
      ApiSetEditionUserBeep();
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v14, v13, v15);
      else
        CurrentThreadWin32Thread = 0LL;
      v48 = CurrentThreadWin32Thread;
      v49 = 1;
      if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v48 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          v53 = 4LL;
          v41 = v49 == 1;
          v52 = &v41;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD79,
            &ActivityId,
            0LL,
            3u,
            &v51);
        }
      }
      if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
        || (v17 = W32kEtwEnabledKeyword,
            v18 = 0x8000002010000000uLL,
            (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
        && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
        || (v18 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x200000010000000LL) != 0
        && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
      {
        v19 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v14, v17, v18);
        if ( v19 )
          v19[1] = KeQueryPerformanceCounter(0LL);
      }
      v20 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      EtwTraceAcquiredExclusiveUserCrit();
      if ( v20 )
      {
        v21 = *v20;
        if ( IsThreadCrossSessionAttached() )
          v21 = 0LL;
        if ( v48 )
        {
          v22 = *(unsigned int *)(v48 + 24);
          if ( *(_DWORD *)(v48 + 48) || (int)v22 > 0 )
          {
            *(_DWORD *)(v48 + 44) = 1;
            *(GUID *)(v48 + 28) = ActivityId;
            if ( (unsigned int)dword_1C028EE70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v56 = 4LL;
                v41 = v49 == 1;
                v55 = &v41;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD22,
                  &ActivityId,
                  0LL,
                  3u,
                  &v54);
                v23 = dword_1C028EE70;
              }
              if ( v23 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v59 = 4LL;
                v41 = v49 == 1;
                v58 = &v41;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD4F,
                  &ActivityId,
                  0LL,
                  3u,
                  &v57);
              }
            }
          }
        }
        gptiCurrent = v21;
        if ( v21 )
        {
          *((_DWORD *)v21 + 377) = 1;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
          if ( CurrentProcessWin32Process )
          {
            if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
              && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v29 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                v27 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                v28 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                gpSharedUserCritDeferredUnlockListHead = v27;
                if ( !*(_DWORD *)(v28 + 8) )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v25, v26);
                  v28 = *v29;
                }
                HMUnlockObject(v28);
              }
            }
          }
        }
      }
      else
      {
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v48);
        gptiCurrent = 0LL;
      }
      goto LABEL_60;
    }
    if ( isChildPartition() && (v3 & 0x40) != 0 )
    {
      v31 = *((_BYTE *)a1 + 2);
      HIWORD(v43[0]) = v12;
    }
    else
    {
      LOBYTE(v43[0]) = *((_BYTE *)a1 + 2) & 0x7F;
      if ( v6 && (gpScancodeMap || gpFlexMap) )
      {
        HIWORD(v43[0]) = 0;
        if ( (v3 & 1) != 0 )
          HIWORD(v43[0]) = 0x8000;
        if ( !(unsigned int)MapScancode((struct tagKE *)v43, v40, (struct DEVICEINFO *)a2) )
          goto LABEL_60;
        v11 = v40[0];
      }
      v31 = VKFromVSC((unsigned __int8 *)v43, v11);
    }
    gbVKLastDown = v31;
    if ( v31 )
    {
      if ( (unsigned __int8)(v31 - 91) <= 1u )
      {
        v33 = *((unsigned __int16 *)a1 + 2);
        v34 = (unsigned __int16)v33;
        if ( (v33 & 1) == 0 )
        {
          if ( gptiForeground && (v36 = *((_QWORD *)gptiForeground + 55)) != 0 )
            v30 = *(_QWORD *)(*(_QWORD *)(v36 + 48) + 32LL);
          else
            v30 = gpKbdTbl;
          if ( !LScanCode )
          {
            v37 = InternalMapVirtualKeyEx(0x4Cu, 0LL, v30);
            v33 = *((unsigned __int16 *)a1 + 2);
            LScanCode = v37;
          }
          goto LABEL_89;
        }
LABEL_81:
        if ( LScanCode )
        {
          if ( *((_WORD *)a1 + 1) == LScanCode )
          {
            v31 = 76;
            gbVKLastDown = 76;
            HIWORD(v43[0]) = 76;
          }
          v30 = (unsigned __int16)v33;
          if ( (gfsSASModifiersDown & 8) == 0
            || (v33 = (unsigned __int16)v34, (v34 & 1) != 0) && ((v30 = (unsigned __int16)v34, v31 == 91) || v31 == 92) )
          {
            LScanCode = 0;
            v33 = (unsigned __int16)v30;
          }
        }
LABEL_89:
        if ( (v33 & 1) != 0 )
        {
          ActiveHKL = GetActiveHKL();
          LOBYTE(v33) = LOBYTE(v43[0]) + 15;
          if ( (unsigned __int8)(LOBYTE(v43[0]) + 15) > 1u )
            goto LABEL_103;
          v33 = 1023LL;
          if ( (unsigned __int16)((ActiveHKL & 0x3FF) - 17) > 1u )
            goto LABEL_103;
          if ( ((v31 - 22) & 0xFB) != 0 )
          {
            if ( v11 == 0xE1 )
              return;
            goto LABEL_103;
          }
          if ( v11 == 0xE1 )
LABEL_103:
            HIWORD(v43[0]) |= 0x8000u;
        }
        if ( !qword_1C029CC70
          || !(unsigned int)qword_1C029CC70(v33, v34, v30)
          || (unsigned __int8)(BYTE2(v43[0]) - 91) > 1u
          || gfEnableWindowsKey )
        {
          if ( v31 == 91 )
          {
            v38 = 64;
          }
          else
          {
            if ( v31 != 92 )
            {
              if ( (unsigned __int8)(v31 + 96) > 5u )
              {
                gCurrentModifierBit = 0;
              }
              else
              {
                v38 = 1 << (v31 & 0xF);
                gCurrentModifierBit = v38;
                if ( v38 )
                {
LABEL_117:
                  if ( (*((_BYTE *)a1 + 4) & 1) != 0 )
                    gPhysModifierState &= ~v38;
                  else
                    gPhysModifierState |= v38;
                }
              }
              if ( v31 == 13 && (*((_BYTE *)a1 + 4) & 1) == 0 )
                PoLatencySensitivityHint(1LL);
              if ( (gdwPUDFlags & 0x100) != 0 )
              {
                AccessTimeOut();
                if ( (unsigned int)AccessProceduresStream((struct tagKE *)v43, *((_DWORD *)a1 + 2), 0) )
                  xxxProcessKeyEvent(
                    (unsigned __int8 *)v43,
                    *((unsigned int *)a1 + 2),
                    (*((unsigned __int16 *)a1 + 2) >> 4) & 1,
                    v42,
                    a2,
                    0LL);
              }
              else
              {
                xxxProcessKeyEvent((unsigned __int8 *)v43, *((unsigned int *)a1 + 2), v41, v42, a2, 0LL);
              }
              return;
            }
            v38 = 0x80;
          }
          gCurrentModifierBit = v38;
          goto LABEL_117;
        }
LABEL_60:
        InputTraceLogging::Keyboard::DropInput();
        return;
      }
    }
    else
    {
      if ( gpqForeground )
        v32 = PtiKbdFromQ(gpqForeground);
      else
        v32 = 0LL;
      if ( !(unsigned int)ApiSetEditionRawInputRequestedForKeyboard(v32) )
        goto LABEL_60;
      v42 = 1;
    }
    v33 = *((unsigned __int16 *)a1 + 2);
    v34 = (unsigned __int16)v33;
    goto LABEL_81;
  }
  if ( (v3 & 8) != 0 )
  {
    v39 = v9;
    if ( (v3 & 0x10) != 0 )
    {
      v39 = v9 | 0x4000;
      *((_DWORD *)a1 + 2) = v9 | 0x4000;
    }
    RemoteSyncToggleKeys(v39);
    v3 = *((_WORD *)a1 + 2);
  }
  if ( (v3 & 0x20) != 0 )
  {
    LOWORD(v43[0]) = *((_WORD *)a1 + 1);
    HIWORD(v43[0]) = (v3 << 15) | 0x10E7;
    xxxProcessKeyEvent((unsigned __int8 *)v43, 0LL, (v3 >> 4) & 1, 0, a2, 0LL);
  }
}
