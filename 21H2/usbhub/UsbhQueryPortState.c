/*
 * XREFs of UsbhQueryPortState @ 0x1C0018E60
 * Callers:
 *     UsbhSshResumeDownstream @ 0x1C0009090 (UsbhSshResumeDownstream.c)
 *     UsbhFdoSetD0Cold @ 0x1C0009FA0 (UsbhFdoSetD0Cold.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C000EC40 (UsbhSyncSuspendPdoPort.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0015150 (UsbhHubRunPortChangeQueue.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00186F0 (UsbhFdoReturnPortStatus.c)
 *     UsbhQueryChange @ 0x1C001A8AC (UsbhQueryChange.c)
 *     UsbhFdoColdStartPdo @ 0x1C001B954 (UsbhFdoColdStartPdo.c)
 *     UsbhBusSuspend_Action @ 0x1C001ED64 (UsbhBusSuspend_Action.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C002A6B4 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhOvercurrentResetWorker @ 0x1C002F330 (UsbhOvercurrentResetWorker.c)
 *     UsbhBusPnpStop_Action @ 0x1C0030B18 (UsbhBusPnpStop_Action.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C00334E8 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00345D4 (UsbhQueueSoftConnectChange.c)
 *     UsbhFinishStart @ 0x1C0036EB4 (UsbhFinishStart.c)
 *     UsbhPortResumeTimeout @ 0x1C0038490 (UsbhPortResumeTimeout.c)
 *     UsbhSetupDevice @ 0x1C0038CE8 (UsbhSetupDevice.c)
 *     UsbhFdoSetD0Warm @ 0x1C003B8A0 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C003C2B4 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0019810 (UsbhSyncSendCommand.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001C920 (UsbhDispatch_HardResetEvent.c)
 *     Usb_Disconnected @ 0x1C0028F5C (Usb_Disconnected.c)
 *     UsbhFlushPortChange @ 0x1C002A85C (UsbhFlushPortChange.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_q @ 0x1C002E090 (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 */

__int64 __fastcall UsbhQueryPortState(__int64 a1, unsigned __int16 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rsi
  _DWORD *v9; // rax
  int v10; // ecx
  __int64 Pool2; // rax
  unsigned __int16 *v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  KIRQL v17; // bp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  _DWORD *v24; // rsi
  __int64 v25; // rax
  _DWORD *v26; // rsi
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  int v29; // ebp
  unsigned __int16 v30; // si
  unsigned __int16 v31; // bp
  _DWORD *v32; // rax
  _DWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rsi
  _QWORD *v39; // rdi
  _QWORD *v40; // rdx
  _QWORD *v41; // r9
  __int64 v42; // r8
  __int64 v43; // rcx
  int v44; // eax
  _QWORD *v45; // rdx
  _QWORD *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // [rsp+50h] [rbp-58h]
  _BYTE v54[8]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v55[2]; // [rsp+60h] [rbp-48h] BYREF
  __int16 v56; // [rsp+62h] [rbp-46h]
  __int16 v57; // [rsp+64h] [rbp-44h]
  __int16 v58; // [rsp+66h] [rbp-42h]
  KIRQL v59; // [rsp+B0h] [rbp+8h]

  v4 = a2;
  v8 = 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v9 = *(_DWORD **)(a1 + 64);
  if ( !v9 )
    goto LABEL_97;
  if ( *v9 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v10 = v9[640];
  if ( (v10 & 0x4000) != 0 )
  {
    Log(a1, 4, 1937076805, 0LL, 0LL);
    if ( a4 )
      *a4 = -1073713152;
    return 3221225486LL;
  }
  if ( (v10 & 0x10) != 0 )
  {
    Log(a1, 4, 1752319312, 0LL, 0LL);
    if ( a4 )
      *a4 = -1073704960;
    return 3221225666LL;
  }
  Pool2 = ExAllocatePool2(64LL, 10LL, 1112885333LL);
  v13 = (unsigned __int16 *)Pool2;
  if ( !Pool2 )
  {
    Log(a1, 4, 1366319468, 0LL, 0LL);
    if ( a4 )
      *a4 = -1073737728;
    return 3221225626LL;
  }
  *(_WORD *)(Pool2 + 4) = 4;
  *(_DWORD *)a3 = 0;
  *(_WORD *)(Pool2 + 6) = v4;
  *(_DWORD *)Pool2 = 0;
  v55[0] = -93;
  *(_BYTE *)(Pool2 + 8) = 0;
  v55[1] = 0;
  v56 = 0;
  v57 = v4;
  v58 = *(_WORD *)(Pool2 + 4);
  v14 = 0LL;
  v53 = UsbhSyncSendCommand(a1, (unsigned int)v55, Pool2, (int)Pool2 + 4);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 64);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
      *(_DWORD *)v16 = 1329877100;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 16) = v4;
      *(_QWORD *)(v16 + 24) = 1383420738LL;
    }
  }
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 64);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
      *(_DWORD *)v19 = 1413771367;
      *(_QWORD *)(v19 + 16) = a2;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 24) = 0LL;
    }
  }
  if ( !a2 )
    goto LABEL_40;
  v20 = *(_QWORD *)(a1 + 64);
  if ( !v20 )
LABEL_97:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v20 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v20);
  if ( a2 <= *(unsigned __int8 *)(v20 + 2938) )
  {
    v21 = *(_QWORD *)(v20 + 3056);
    if ( v21 )
    {
      v22 = v21 + 2928LL * a2 - 2928;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v23 = *(_QWORD *)(v20 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
        *(_DWORD *)v23 = 1044672615;
        *(_QWORD *)(v23 + 8) = 0LL;
        *(_QWORD *)(v23 + 16) = a2;
        *(_QWORD *)(v23 + 24) = v22;
      }
      if ( v22 )
      {
        v14 = *(_QWORD *)(v22 + 392);
        if ( v14 )
        {
          v24 = *(_DWORD **)(v14 + 64);
          if ( !v24 )
            UsbhTrapFatal_Dbg(*(_QWORD *)(v22 + 392), 0LL);
          if ( *v24 != 1329877064 )
            UsbhTrapFatal_Dbg(*(_QWORD *)(v22 + 392), *(_QWORD *)(v14 + 64));
          v25 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
          if ( v25 )
          {
            *(_DWORD *)v25 = 1668571500;
            v26 = v24 + 318;
            *(_QWORD *)(v25 + 32) = v14;
            *(_DWORD *)(v25 + 24) = 1383420738;
            *(_QWORD *)(v25 + 40) = 0LL;
            v27 = (_QWORD *)(v25 + 8);
            v28 = (_QWORD *)*((_QWORD *)v26 + 1);
            if ( (_DWORD *)*v28 != v26 )
              goto LABEL_78;
            *v27 = v26;
            v27[1] = v28;
            *v28 = v27;
            *((_QWORD *)v26 + 1) = v27;
            WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
          }
          else
          {
            ++v24[322];
            WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v17);
          v8 = *(_QWORD *)(v14 + 64);
          if ( !v8 )
            UsbhTrapFatal_Dbg(v14, 0LL);
          if ( *(_DWORD *)v8 != 1329877064 )
            UsbhTrapFatal_Dbg(v14, *(_QWORD *)(v14 + 64));
          goto LABEL_41;
        }
      }
    }
  }
LABEL_40:
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v17);
LABEL_41:
  v29 = v53;
  if ( v53 >= 0 && v8 && *(_BYTE *)(v8 + 2740) )
  {
    v30 = *v13;
    v31 = v13[1];
    if ( ((v31 | *v13) & 8) != 0 )
    {
      v32 = FdoExt(a1);
      UsbhDispatch_HardResetEvent(a1, v32 + 566, 3LL);
    }
    if ( (v30 & 1) == 0 && (v31 & 1) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, 3, 3, 21, (__int64)"FKh&", a1);
      byte_1C006A6C8 = 1;
      UsbhFlushPortChange(a1, a2, v54);
      v33 = FdoExt(a1);
      UsbhDispatch_HardResetEvent(a1, v33 + 566, 3LL);
    }
    v29 = v53;
  }
  if ( !v14 )
    goto LABEL_79;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v34 = *(_QWORD *)(a1 + 64);
    if ( v34 )
    {
      v35 = *(_QWORD *)(v34 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
      *(_DWORD *)v35 = 1329877109;
      *(_QWORD *)(v35 + 8) = 0LL;
      *(_QWORD *)(v35 + 16) = v14;
      *(_QWORD *)(v35 + 24) = 1383420738LL;
    }
  }
  v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v36 = *(_QWORD *)(a1 + 64);
    if ( v36 )
    {
      v37 = *(_QWORD *)(v36 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
      *(_DWORD *)v37 = 1348891236;
      *(_QWORD *)(v37 + 8) = 0LL;
      *(_QWORD *)(v37 + 16) = v14;
      *(_QWORD *)(v37 + 24) = 1383420738LL;
    }
  }
  v38 = *(_QWORD *)(v14 + 64);
  if ( !v38 )
    UsbhTrapFatal_Dbg(v14, 0LL);
  if ( *(_DWORD *)v38 != 1329877064 )
    UsbhTrapFatal_Dbg(v14, *(_QWORD *)(v14 + 64));
  v39 = (_QWORD *)(v38 + 1272);
  v40 = *(_QWORD **)(v38 + 1272);
  if ( v40 == (_QWORD *)(v38 + 1272) )
  {
LABEL_69:
    v44 = *(_DWORD *)(v38 + 1288);
    if ( v44 )
      *(_DWORD *)(v38 + 1288) = v44 - 1;
    goto LABEL_71;
  }
  while ( 1 )
  {
    v41 = v40 - 1;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v42 = *(_QWORD *)(a1 + 64);
      if ( v42 )
      {
        v43 = *(_QWORD *)(v42 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884));
        *(_DWORD *)v43 = 1064591724;
        *(_QWORD *)(v43 + 8) = 0LL;
        *(_QWORD *)(v43 + 16) = v38;
        *(_QWORD *)(v43 + 24) = 1383420738LL;
      }
    }
    if ( *((_DWORD *)v41 + 6) == 1383420738 && !v41[5] )
      break;
    v40 = (_QWORD *)*v40;
    if ( v40 == v39 )
      goto LABEL_69;
  }
  v45 = (_QWORD *)*v40;
  if ( (_QWORD *)v45[1] != v41 + 1 || (v46 = (_QWORD *)v41[2], (_QWORD *)*v46 != v41 + 1) )
LABEL_78:
    __fastfail(3u);
  *v46 = v45;
  v45[1] = v46;
  ExFreePoolWithTag(v41, 0);
LABEL_71:
  if ( (_QWORD *)*v39 == v39 && !*(_DWORD *)(v38 + 1288) )
    KeSetEvent((PRKEVENT)(v38 + 1296), 0, 0);
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v59);
LABEL_79:
  if ( (UsbhLogMask & 4) != 0 )
  {
    v47 = *(_QWORD *)(a1 + 64);
    if ( v47 )
    {
      v48 = *(_QWORD *)(v47 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v47 + 880)) & *(_DWORD *)(v47 + 884));
      *(_DWORD *)v48 = 1953722449;
      *(_QWORD *)(v48 + 16) = v29;
      *(_QWORD *)(v48 + 8) = 0LL;
      *(_QWORD *)(v48 + 24) = 0LL;
    }
  }
  if ( v29 < 0 || v13[2] == 4 )
  {
    if ( (v29 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v29) )
    {
      Log(a1, 4, 1366324018, v13[2], 0LL);
      UsbhException(a1, a2, 8, (int)v13, 10, v29, 0, usbfile_bus_c, 1649, 0);
    }
    if ( v29 >= 0 )
    {
      v49 = v13[1];
      *(_WORD *)(a3 + 2) = v49;
      v50 = *v13;
      *(_WORD *)a3 = v50;
      if ( (UsbhLogMask & 4) != 0 )
      {
        v51 = *(_QWORD *)(a1 + 64);
        if ( v51 )
        {
          v52 = *(_QWORD *)(v51 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v51 + 880)) & *(_DWORD *)(v51 + 884));
          *(_DWORD *)v52 = 1953722448;
          *(_QWORD *)(v52 + 8) = 0LL;
          *(_QWORD *)(v52 + 16) = v49;
          *(_QWORD *)(v52 + 24) = v50;
        }
      }
    }
    if ( a4 )
      *a4 = 0;
    ExFreePoolWithTag(v13, 0);
    return (unsigned int)v29;
  }
  else
  {
    Log(a1, 4, 1366324017, v13[2], 0LL);
    UsbhException(a1, a2, 9, (int)v13, 10, v29, 0, usbfile_bus_c, 1635, 0);
    if ( a4 )
      *a4 = 0;
    ExFreePoolWithTag(v13, 0);
    return 3221225473LL;
  }
}
