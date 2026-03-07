void __fastcall UsbhSshResumeDownstream(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 v6; // di
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  _DWORD *v14; // r14
  int v15; // r9d
  int v16; // eax
  _DWORD *v17; // rdi
  _DWORD *v18; // rax
  int v19; // ebp
  unsigned __int16 i; // bp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // r15
  __int64 v29; // r14
  __int64 v30; // rdi
  __int64 v31; // rcx
  KIRQL v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned __int16 v38; // ax
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // edi
  struct _KEVENT *v42; // rdi
  int v43; // eax
  KIRQL v44; // al
  KSPIN_LOCK *v45; // rcx
  __int64 v46; // r14
  _DWORD *v47; // r14
  _DWORD *v48; // rax
  bool v49; // zf
  int PortState; // eax
  char v51; // r10
  int v52; // r11d
  struct _KEVENT *v53; // rcx
  int v54; // r10d
  _DWORD *v55; // rax
  int v56; // eax
  int Timeout; // [rsp+20h] [rbp-B8h]
  int v58; // [rsp+68h] [rbp-70h] BYREF
  int v59; // [rsp+6Ch] [rbp-6Ch]
  __int16 v60; // [rsp+70h] [rbp-68h] BYREF
  int v61; // [rsp+72h] [rbp-66h]
  __int16 v62; // [rsp+76h] [rbp-62h]
  int v63; // [rsp+78h] [rbp-60h] BYREF
  _DWORD *v64; // [rsp+80h] [rbp-58h]
  __int64 v65; // [rsp+90h] [rbp-48h]
  struct _KEVENT *v66; // [rsp+98h] [rbp-40h]
  __int16 v67; // [rsp+E0h] [rbp+8h] BYREF
  char v68; // [rsp+F0h] [rbp+18h]
  int v69; // [rsp+F8h] [rbp+20h]

  v68 = a3;
  v59 = 0;
  v66 = (struct _KEVENT *)FdoExt(a1);
  Log(a1, 0x10000, 1383285870, a2, 0LL);
  v64 = 0LL;
  v6 = 1;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  while ( 1 )
  {
    v7 = *(_QWORD *)(a1 + 64);
    if ( !v7 )
LABEL_105:
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v7 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v7);
    if ( v6 > *(unsigned __int8 *)(v7 + 2938) )
      break;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v69 = 1413771367;
      v8 = *(_QWORD *)(v7 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
      *(_DWORD *)v8 = v69;
      *(_QWORD *)(v8 + 16) = v6;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 24) = 0LL;
    }
    if ( v6 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( !v9 )
        goto LABEL_105;
      if ( *(_DWORD *)v9 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v9);
      if ( v6 <= *(unsigned __int8 *)(v9 + 2938) )
      {
        v10 = *(_QWORD *)(v9 + 3056);
        if ( v10 )
        {
          v11 = 2928LL * v6 + v10 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v12 = *(_QWORD *)(v9 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
            *(_DWORD *)v12 = 1044672615;
            *(_QWORD *)(v12 + 8) = 0LL;
            *(_QWORD *)(v12 + 16) = v6;
            *(_QWORD *)(v12 + 24) = v11;
          }
          if ( v11 )
          {
            v13 = *(_QWORD *)(v11 + 392);
            if ( v13 )
            {
              v64 = PdoExt(v13);
              v14 = v64;
              KeWaitForSingleObject(v64 + 736, Executive, 0, 0, 0LL);
              if ( (v64[355] & 0x4000000) != 0 )
              {
                PortState = UsbhQueryPortState(a1);
                Log(a1, 0x10000, 1397965875, PortState, 0LL);
                if ( v52 >= 0 && (v51 & 2) == 0 )
                {
                  v64[355] |= 0x3000000u;
                  v53 = (struct _KEVENT *)(v14 + 730);
                  if ( (v51 & 1) != 0 )
                    KeSetEvent(v53, 0, 0);
                  else
                    KeResetEvent(v53);
                }
              }
              KeSetEvent((PRKEVENT)(v14 + 736), 0, 0);
            }
          }
        }
      }
    }
    ++v6;
  }
  if ( a3 == 1 )
  {
    FdoExt(a1);
    Log(a1, 2048, 1346458174, 0, 0LL);
    v16 = UsbhDispatch_BusEvent(a1, a2, (unsigned int)(v15 + 8));
    Log(a1, 2048, 1346458172, 0, v16);
  }
  v17 = FdoExt(a1);
  UsbhDisarmHubForWakeDetect(a1);
  if ( (v17[640] & 0x80000) != 0 )
  {
    v58 = 0;
    v67 = 0;
    v18 = FdoExt(a1);
    v60 = 256;
    Log(a1, 8, 1400332651, v18[344], 0LL);
    v61 = 1;
    v62 = 0;
    v19 = UsbhSyncSendCommand(a1, (unsigned int)&v60, 0, (unsigned int)&v67, Timeout, (__int64)&v58);
    Log(a1, 8, 1937206065, v19, v58);
    if ( (v19 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v19) )
      UsbhException(a1, 0, 123, 0, 0, v19, v54, usbfile_hub_c, 3746, 0);
    Log(a1, 8, 1937206066, v19, 0LL);
    if ( v19 >= 0 )
      v17[640] &= ~0x80000u;
  }
  for ( i = 1; ; ++i )
  {
    v21 = *(_QWORD *)(a1 + 64);
    if ( !v21 )
      goto LABEL_105;
    if ( *(_DWORD *)v21 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v21);
    if ( i > *(unsigned __int8 *)(v21 + 2938) )
      break;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v69 = 1413771367;
      v22 = *(_QWORD *)(v21 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
      *(_DWORD *)v22 = v69;
      *(_QWORD *)(v22 + 16) = i;
      *(_QWORD *)(v22 + 8) = 0LL;
      *(_QWORD *)(v22 + 24) = 0LL;
    }
    if ( i )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( !v23 )
        goto LABEL_105;
      if ( *(_DWORD *)v23 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v23);
      if ( i <= *(unsigned __int8 *)(v23 + 2938) )
      {
        v24 = *(_QWORD *)(v23 + 3056);
        if ( v24 )
        {
          v25 = 2928LL * i + v24 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v26 = *(_QWORD *)(v23 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
            *(_DWORD *)v26 = 1044672615;
            *(_QWORD *)(v26 + 8) = 0LL;
            *(_QWORD *)(v26 + 16) = i;
            *(_QWORD *)(v26 + 24) = v25;
          }
          if ( v25 )
          {
            v27 = *(_QWORD *)(v25 + 392);
            v65 = v27;
            if ( !v27
              || (v64 = PdoExt(v27), v47 = v64,
                                     v48 = PdoExt(v27),
                                     v49 = (v47[355] & 0x1000000) == 0,
                                     v59 = v48[282],
                                     v49) )
            {
              v63 = 0;
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
LABEL_101:
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
                goto LABEL_90;
              v35 = *(_QWORD *)(a1 + 64);
              if ( !v35 )
                goto LABEL_101;
              if ( *(_DWORD *)v35 != 541218120 )
                UsbhTrapFatal_Dbg(a1, v35);
              if ( (unsigned __int16)v30 > *(unsigned __int8 *)(v35 + 2938) || (v36 = *(_QWORD *)(v35 + 3056)) == 0 )
              {
LABEL_90:
                WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v32);
                v38 = *(_WORD *)(v25 + 4);
                goto LABEL_60;
              }
              v37 = 2928 * v30 + v36 - 2928;
              if ( (UsbhLogMask & 8) != 0 )
              {
                v36 = *(_QWORD *)(v35 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
                *(_DWORD *)v36 = 1044672615;
                *(_QWORD *)(v36 + 8) = 0LL;
                *(_QWORD *)(v36 + 16) = v30;
                *(_QWORD *)(v36 + 24) = v37;
              }
              if ( v37 )
              {
                v29 = *(_QWORD *)(v37 + 392);
                if ( v29 )
                  v29 = UsbhRefPdo(v36, v29, 0LL, 1399612007);
              }
              WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v32);
              v38 = *(_WORD *)(v25 + 4);
              if ( !v29 )
              {
LABEL_60:
                if ( (UsbhLogMask & 0x10000) != 0 )
                {
                  v39 = *(_QWORD *)(a1 + 64);
                  if ( v39 )
                  {
                    v40 = *(_QWORD *)(v39 + 888)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
                    *(_DWORD *)v40 = 894595955;
                    *(_QWORD *)(v40 + 8) = 0LL;
                    *(_QWORD *)(v40 + 16) = v38;
                    *(_QWORD *)(v40 + 24) = 0LL;
                  }
                }
                v41 = 0;
                goto LABEL_72;
              }
              Log(a1, 0x10000, 1936937522, *(unsigned __int16 *)(v25 + 4), v29);
              Log(a1, 0x10000, 1936937523, 0, *(unsigned __int16 *)(v25 + 4));
              while ( 1 )
              {
                v43 = UsbhFdoCheckUpstreamConnectionState(a1, &v63);
                if ( (v43 & 0xC0000000) == 0xC0000000 )
                  break;
                v44 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v28 + 4944));
                v45 = (KSPIN_LOCK *)(v28 + 4944);
                if ( *(_DWORD *)(v25 + 696) != 3 )
                {
                  KeReleaseSpinLock(v45, v44);
                  goto LABEL_71;
                }
                KeReleaseSpinLock(v45, v44);
                if ( (unsigned int)UsbhWaitEventWithTimeoutEx(a1, (void *)(v25 + 712), 500, 1936937556, 0, 0LL) != 258 )
                  goto LABEL_71;
                UsbhPCE_ResumeTimeout(a1, a2, *(unsigned __int16 *)(v25 + 4));
              }
              Log(a1, 0x10000, 1936937560, *(unsigned __int16 *)(v25 + 4), v43);
LABEL_71:
              UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_PORT);
              v41 = UsbhSshPropagateResume(a1, a2, v29);
              Log(a1, 0x10000, 1936937524, *(unsigned __int16 *)(v25 + 4), v29);
              UsbhUnlatchPdo(a1, v29, 0LL, 0x536C6267u);
              if ( v41 >= 0 )
              {
LABEL_72:
                v46 = v65;
                if ( v65 && (v64[355] & 0x8004) == 0 && v59 == 4 )
                {
                  *(_DWORD *)(v25 + 2408) |= 2u;
                  v55 = PdoExt(v46);
                  v56 = UsbhSyncSuspendPdoPort((__int64)(v55 + 236), v46, 0);
                  *(_DWORD *)(v25 + 2408) &= ~2u;
                  v41 = v56;
                }
              }
              if ( (v41 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v41) )
                UsbhException(a1, i, 128, 0, 0, v41, 0, usbfile_sshub_c, 2436, 0);
              continue;
            }
          }
        }
      }
    }
  }
  if ( v68 == 1 )
  {
    Usbh_SSH_Event(a1, 7u, a2);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE);
    v42 = v66;
    KeSetEvent(v66 + 141, 0, 0);
    UsbhEnableTimerObject(a1, (__int64)&v42[133].Header.WaitListHead, v42[219].Header.Lock, 0, a2, 0x77485353u);
  }
}
