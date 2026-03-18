/*
 * XREFs of UsbhSshResumeDownstream @ 0x1C0009090
 * Callers:
 *     Usbh_SSH_HubSuspended @ 0x1C0003E98 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResume @ 0x1C00041F0 (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0058DF8 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhRefPdo @ 0x1C0002030 (UsbhRefPdo.c)
 *     UsbhUnlatchPdo @ 0x1C0002650 (UsbhUnlatchPdo.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C0002F00 (UsbhFdoCheckUpstreamConnectionState.c)
 *     Usbh_SSH_Event @ 0x1C0004D80 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C000C0D0 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000C920 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C000EC40 (UsbhSyncSuspendPdoPort.c)
 *     UsbhDispatch_BusEvent @ 0x1C000FC10 (UsbhDispatch_BusEvent.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C0011440 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhQueryPortState @ 0x1C0018E60 (UsbhQueryPortState.c)
 *     UsbhSyncSendCommand @ 0x1C0019810 (UsbhSyncSendCommand.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C001D300 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhSshPropagateResume @ 0x1C001E15C (UsbhSshPropagateResume.c)
 *     Usb_Disconnected @ 0x1C0028F5C (Usb_Disconnected.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C0034130 (UsbhPCE_ResumeTimeout.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 */

__int64 __fastcall UsbhSshResumeDownstream(__int64 a1, __int64 a2, char a3)
{
  int v4; // ebp
  unsigned __int16 i; // di
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // r9d
  int v15; // eax
  _DWORD *v16; // rdi
  _DWORD *v17; // rax
  int v18; // esi
  unsigned __int16 j; // si
  __int64 v20; // rdx
  __int64 result; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 v26; // rcx
  __int64 v27; // r13
  __int64 v28; // rbp
  __int64 v29; // r14
  __int64 v30; // rdi
  __int64 v31; // rcx
  KIRQL v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // edi
  unsigned __int16 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r14
  struct _KEVENT *v44; // r15
  __int64 v45; // rbp
  __int64 v46; // rdi
  __int64 v47; // rax
  bool v48; // zf
  __int64 k; // r12
  int v50; // eax
  KIRQL v51; // al
  KSPIN_LOCK *v52; // rcx
  int v53; // r10d
  int PortState; // eax
  char v55; // r10
  int v56; // r11d
  struct _KEVENT *v57; // rcx
  int v58; // r10d
  __int64 v59; // rax
  int v60; // eax
  int Timeout; // [rsp+20h] [rbp-C8h]
  int v62; // [rsp+68h] [rbp-80h] BYREF
  int v63; // [rsp+6Ch] [rbp-7Ch]
  __int16 v64; // [rsp+70h] [rbp-78h] BYREF
  int v65; // [rsp+72h] [rbp-76h]
  __int16 v66; // [rsp+76h] [rbp-72h]
  int v67; // [rsp+78h] [rbp-70h] BYREF
  __int64 v68; // [rsp+80h] [rbp-68h]
  struct _KEVENT *v69; // [rsp+90h] [rbp-58h]
  __int16 v70; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v71; // [rsp+F8h] [rbp+10h]
  char v72; // [rsp+100h] [rbp+18h]
  int v73; // [rsp+108h] [rbp+20h]

  v72 = a3;
  v71 = a2;
  v68 = 0LL;
  v4 = a2;
  v63 = 0;
  v69 = (struct _KEVENT *)FdoExt(a1);
  Log(a1, 0x10000, 1383285870, v4, 0LL);
  for ( i = 1; ; ++i )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v7 = *(_QWORD *)(a1 + 64);
    if ( !v7 )
LABEL_103:
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v7 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v7);
    if ( i > *(unsigned __int8 *)(v7 + 2938) )
      break;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v73 = 1413771367;
      v8 = *(_QWORD *)(v7 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
      *(_DWORD *)v8 = v73;
      *(_QWORD *)(v8 + 16) = i;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 24) = 0LL;
    }
    if ( i )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( !v9 )
        goto LABEL_103;
      if ( *(_DWORD *)v9 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v9);
      if ( i <= *(unsigned __int8 *)(v9 + 2938) )
      {
        v10 = *(_QWORD *)(v9 + 3056);
        if ( v10 )
        {
          v11 = 2928LL * i + v10 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v12 = *(_QWORD *)(v9 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
            *(_DWORD *)v12 = 1044672615;
            *(_QWORD *)(v12 + 8) = 0LL;
            *(_QWORD *)(v12 + 16) = i;
            *(_QWORD *)(v12 + 24) = v11;
          }
          if ( v11 )
          {
            v13 = *(_QWORD *)(v11 + 392);
            if ( v13 )
            {
              v68 = PdoExt(v13);
              v45 = v68;
              KeWaitForSingleObject((PVOID)(v68 + 2944), Executive, 0, 0, 0LL);
              if ( (*(_DWORD *)(v68 + 1420) & 0x4000000) != 0 )
              {
                PortState = UsbhQueryPortState(a1);
                Log(a1, 0x10000, 1397965875, PortState, 0LL);
                if ( v56 >= 0 && (v55 & 2) == 0 )
                {
                  *(_DWORD *)(v68 + 1420) |= 0x3000000u;
                  v57 = (struct _KEVENT *)(v45 + 2920);
                  if ( (v55 & 1) != 0 )
                    KeSetEvent(v57, 0, 0);
                  else
                    KeResetEvent(v57);
                }
              }
              KeSetEvent((PRKEVENT)(v45 + 2944), 0, 0);
            }
          }
        }
      }
    }
  }
  if ( a3 == 1 )
  {
    FdoExt(a1);
    Log(a1, 2048, 1346458174, 0, 0LL);
    v15 = UsbhDispatch_BusEvent(a1, v71, (unsigned int)(v14 + 8));
    Log(a1, 2048, 1346458172, 0, v15);
  }
  v16 = FdoExt(a1);
  UsbhDisarmHubForWakeDetect(a1);
  if ( (v16[640] & 0x80000) != 0 )
  {
    v62 = 0;
    v70 = 0;
    v17 = FdoExt(a1);
    v64 = 256;
    Log(a1, 8, 1400332651, v17[344], 0LL);
    v65 = 1;
    v66 = 0;
    v18 = UsbhSyncSendCommand(a1, (unsigned int)&v64, 0, (unsigned int)&v70, Timeout, (__int64)&v62);
    Log(a1, 8, 1937206065, v18, v62);
    if ( (v18 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v18) )
      UsbhException(a1, 0, 123, 0, 0, v18, v58, usbfile_hub_c, 3746, 0);
    Log(a1, 8, 1937206066, v18, 0LL);
    if ( v18 >= 0 )
      v16[640] &= ~0x80000u;
  }
  for ( j = 1; ; ++j )
  {
    v20 = *(_QWORD *)(a1 + 64);
    if ( !v20 )
      goto LABEL_103;
    if ( *(_DWORD *)v20 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v20);
    result = *(unsigned __int8 *)(v20 + 2938);
    if ( j > (unsigned __int16)result )
      break;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v73 = 1413771367;
      v22 = *(_QWORD *)(v20 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
      *(_DWORD *)v22 = v73;
      *(_QWORD *)(v22 + 16) = j;
      *(_QWORD *)(v22 + 8) = 0LL;
      *(_QWORD *)(v22 + 24) = 0LL;
    }
    if ( j )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( !v23 )
        goto LABEL_103;
      if ( *(_DWORD *)v23 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v23);
      if ( j <= *(unsigned __int8 *)(v23 + 2938) )
      {
        v24 = *(_QWORD *)(v23 + 3056);
        if ( v24 )
        {
          v25 = 2928LL * j + v24 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v26 = *(_QWORD *)(v23 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
            *(_DWORD *)v26 = 1044672615;
            *(_QWORD *)(v26 + 8) = 0LL;
            *(_QWORD *)(v26 + 16) = j;
            *(_QWORD *)(v26 + 24) = v25;
          }
          if ( v25 )
          {
            v27 = *(_QWORD *)(v25 + 392);
            if ( !v27
              || (v68 = PdoExt(*(_QWORD *)(v25 + 392)),
                  v46 = v68,
                  v47 = PdoExt(v27),
                  v48 = (*(_DWORD *)(v46 + 1420) & 0x1000000) == 0,
                  v63 = *(_DWORD *)(v47 + 1128),
                  v48) )
            {
              v67 = 0;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  0,
                  1,
                  20,
                  (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
              }
              v28 = *(_QWORD *)(a1 + 64);
              if ( !v28 )
LABEL_99:
                UsbhTrapFatal_Dbg(a1, 0LL);
              if ( *(_DWORD *)v28 != 541218120 )
                UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
              v29 = 0LL;
              v30 = *(unsigned __int16 *)(v25 + 4);
              if ( (UsbhLogMask & 0x100) != 0 )
              {
                v31 = *(_QWORD *)(v28 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
                *(_DWORD *)v31 = 1329877100;
                *(_QWORD *)(v31 + 8) = 0LL;
                *(_QWORD *)(v31 + 16) = v30;
                *(_QWORD *)(v31 + 24) = 1399612007LL;
              }
              v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
              WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
              if ( (UsbhLogMask & 8) != 0 )
              {
                v33 = *(_QWORD *)(a1 + 64);
                if ( v33 )
                {
                  v34 = *(_QWORD *)(v33 + 888)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
                  *(_DWORD *)v34 = 1413771367;
                  *(_QWORD *)(v34 + 8) = 0LL;
                  *(_QWORD *)(v34 + 16) = v30;
                  *(_QWORD *)(v34 + 24) = 0LL;
                }
              }
              if ( !(_WORD)v30 )
                goto LABEL_89;
              v35 = *(_QWORD *)(a1 + 64);
              if ( !v35 )
                goto LABEL_99;
              if ( *(_DWORD *)v35 != 541218120 )
                UsbhTrapFatal_Dbg(a1, v35);
              if ( (unsigned __int16)v30 > *(unsigned __int8 *)(v35 + 2938) || (v36 = *(_QWORD *)(v35 + 3056)) == 0 )
              {
LABEL_89:
                v39 = 0;
                WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v32);
                v40 = *(_WORD *)(v25 + 4);
                goto LABEL_60;
              }
              v37 = 2928 * v30;
              v38 = 2928 * v30 + v36 - 2928;
              if ( (UsbhLogMask & 8) != 0 )
              {
                v37 = *(_QWORD *)(v35 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
                *(_DWORD *)v37 = 1044672615;
                *(_QWORD *)(v37 + 8) = 0LL;
                *(_QWORD *)(v37 + 16) = v30;
                *(_QWORD *)(v37 + 24) = v38;
              }
              if ( v38 )
              {
                v29 = *(_QWORD *)(v38 + 392);
                if ( v29 )
                  v29 = UsbhRefPdo(v37, v29, 0LL, 1399612007);
              }
              v39 = 0;
              WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v32);
              v40 = *(_WORD *)(v25 + 4);
              if ( !v29 )
              {
LABEL_60:
                if ( (UsbhLogMask & 0x10000) != 0 )
                {
                  v41 = *(_QWORD *)(a1 + 64);
                  if ( v41 )
                  {
                    v42 = *(_QWORD *)(v41 + 888)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v41 + 880)) & *(_DWORD *)(v41 + 884));
                    *(_DWORD *)v42 = 894595955;
                    *(_QWORD *)(v42 + 16) = v40;
                    *(_QWORD *)(v42 + 8) = 0LL;
                    *(_QWORD *)(v42 + 24) = 0LL;
                  }
                }
                goto LABEL_63;
              }
              Log(a1, 0x10000, 1936937522, *(unsigned __int16 *)(v25 + 4), v29);
              Log(a1, 0x10000, 1936937523, 0, *(unsigned __int16 *)(v25 + 4));
              for ( k = v71; ; UsbhPCE_ResumeTimeout(a1, k, *(unsigned __int16 *)(v25 + 4)) )
              {
                v50 = UsbhFdoCheckUpstreamConnectionState(a1, &v67);
                if ( (v50 & 0xC0000000) == 0xC0000000 )
                  break;
                v51 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v28 + 4944));
                v52 = (KSPIN_LOCK *)(v28 + 4944);
                if ( *(_DWORD *)(v25 + 696) != 3 )
                {
                  KeReleaseSpinLock(v52, v51);
                  v53 = 0;
                  goto LABEL_77;
                }
                KeReleaseSpinLock(v52, v51);
                v53 = UsbhWaitEventWithTimeoutEx(a1, v25 + 712, 500LL, 1936937556LL, 0, 0LL);
                if ( v53 != 258 )
                  goto LABEL_77;
              }
              Log(a1, 0x10000, 1936937560, *(unsigned __int16 *)(v25 + 4), v50);
LABEL_77:
              UsbhEtwLogHubIrpEvent(
                a1,
                0LL,
                0LL,
                &USBHUB_ETW_EVENT_HUB_RESUME_PORT,
                *(unsigned __int16 *)(v25 + 4),
                v53);
              v39 = UsbhSshPropagateResume(a1, k, v29);
              Log(a1, 0x10000, 1936937524, *(unsigned __int16 *)(v25 + 4), v29);
              UsbhUnlatchPdo(a1, v29, 0LL, 0x536C6267u);
              if ( v39 >= 0 )
              {
LABEL_63:
                if ( v27 && (*(_DWORD *)(v68 + 1420) & 0x8004) == 0 && v63 == 4 )
                {
                  *(_DWORD *)(v25 + 2408) |= 2u;
                  v59 = PdoExt(v27);
                  v60 = UsbhSyncSuspendPdoPort(v59 + 944, v27, 0LL);
                  *(_DWORD *)(v25 + 2408) &= ~2u;
                  v39 = v60;
                }
              }
              if ( (v39 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v39) )
                UsbhException(a1, j, 128, 0, 0, v39, 0, usbfile_sshub_c, 2436, 0);
              continue;
            }
          }
        }
      }
    }
  }
  if ( v72 == 1 )
  {
    v43 = v71;
    Usbh_SSH_Event(a1, 7u, v71);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE, 0, 0);
    v44 = v69;
    KeSetEvent(v69 + 141, 0, 0);
    return UsbhEnableTimerObject(a1, (int)v44 + 3200, v44[219].Header.LockNV, 0, v43, 2001228627);
  }
  return result;
}
