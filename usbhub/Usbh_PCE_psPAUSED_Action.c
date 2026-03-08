/*
 * XREFs of Usbh_PCE_psPAUSED_Action @ 0x1C001C090
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhRefPdo @ 0x1C00012A0 (UsbhRefPdo.c)
 *     UsbhCancelResetTimeout @ 0x1C00015A0 (UsbhCancelResetTimeout.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0001CD0 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhSignalDriverResetEvent @ 0x1C0001DA8 (UsbhSignalDriverResetEvent.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C00039F8 (UsbhFreePortChangeQueueObject.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C0003BCC (UsbhReleaseEnumBusLockEx.c)
 *     UsbhFlushPortChangeQueue @ 0x1C00041C0 (UsbhFlushPortChangeQueue.c)
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E98C (WPP_RECORDER_SF_dq.c)
 *     UsbhSignalPauseEvent @ 0x1C003530C (UsbhSignalPauseEvent.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0035444 (UsbhUnlockPcqWithTag.c)
 *     UsbhBusUnlatchPdo @ 0x1C004C9E8 (UsbhBusUnlatchPdo.c)
 */

void __fastcall Usbh_PCE_psPAUSED_Action(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  KIRQL v8; // al
  __int64 v9; // r8
  KIRQL v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // esi
  int v20; // esi
  int v21; // esi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  KSPIN_LOCK *v29; // rsi
  KIRQL v30; // bp
  _DWORD *v31; // rdx
  _QWORD **v32; // rsi
  _QWORD *v33; // r8
  _QWORD *v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rbp
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  KIRQL v45; // r12
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  KIRQL v53; // r14
  int v54; // r9d

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    goto LABEL_71;
  if ( *(_DWORD *)v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v6 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v7 = *(_QWORD *)(v5 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
    *(_DWORD *)v7 = 812661041;
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_QWORD *)(v7 + 16) = a2;
    *(_QWORD *)(v7 + 24) = v6;
    LODWORD(v6) = *(unsigned __int16 *)(a2 + 4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      a3,
      45,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v6,
      a3);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v9 = *(unsigned __int16 *)(a2 + 4);
  v10 = v8;
  *(_DWORD *)(a2 + 448) = 1;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
      *(_DWORD *)v12 = 724267376;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 19LL;
      *(_QWORD *)(v12 + 24) = v9;
    }
  }
  v13 = *(unsigned __int16 *)(a2 + 4);
  v14 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 64);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
      *(_DWORD *)v16 = 724267376;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 16) = v14;
      *(_QWORD *)(v16 + 24) = v13;
    }
  }
  v17 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v17;
  v18 = a2 + 32 * (v17 + 43);
  *(_DWORD *)v18 = 19;
  *(_DWORD *)(v18 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v18 + 8) = -1;
  *(_QWORD *)(v18 + 12) = 0LL;
  *(_QWORD *)(v18 + 20) = 0LL;
  *(_DWORD *)(v18 + 28) = 0;
  v19 = *(_DWORD *)(a2 + 12);
  if ( v19 != 5 && *(_DWORD *)(a2 + 12) != 6 && *(_DWORD *)(a2 + 12) != 12 && *(_DWORD *)(a2 + 12) != 16 )
  {
    UsbhFlushPortChangeQueue(a1, a2);
    v20 = v19 - 10;
    if ( v20 )
    {
      v21 = v20 - 3;
      if ( v21 )
      {
        if ( v21 == 1 )
        {
          v22 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 3;
          *(_DWORD *)(v22 + a2 + 1384) = 3;
        }
      }
      else
      {
        v23 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(v23 + a2 + 1384) = 12;
      }
    }
    else
    {
      v24 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 8;
      *(_DWORD *)(v24 + a2 + 1384) = 8;
    }
    UsbhSignalPauseEvent(a1, a2);
    UsbhUnlockPcqWithTag(a1, a2, v10, 0LL);
    return;
  }
  v25 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 12) = v19;
  *(_DWORD *)(v25 + a2 + 1384) = v19;
  v26 = *(_QWORD *)(a1 + 64);
  if ( !v26 )
    goto LABEL_71;
  if ( *(_DWORD *)v26 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v26);
  v27 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v28 = *(_QWORD *)(v26 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
    *(_DWORD *)v28 = 1397778803;
    *(_QWORD *)(v28 + 8) = 0LL;
    *(_QWORD *)(v28 + 16) = 0LL;
    *(_QWORD *)(v28 + 24) = v27;
  }
  v29 = (KSPIN_LOCK *)(v26 + 4944);
  v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 4944));
  if ( *(_QWORD *)(a2 + 792) )
  {
    *(_QWORD *)(a2 + 792) = 0LL;
    KeSetEvent((PRKEVENT)(a2 + 800), 0, 0);
  }
  KeReleaseSpinLock(v29, v30);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      55,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4));
  v31 = *(_DWORD **)(a1 + 64);
  if ( !v31 )
    goto LABEL_71;
  if ( *v31 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v31);
  v32 = (_QWORD **)(a2 + 456);
  while ( 1 )
  {
    v33 = *v32;
    if ( *v32 == v32 )
      break;
    if ( (_QWORD **)v33[1] != v32 || (v34 = (_QWORD *)*v33, *(_QWORD **)(*v33 + 8LL) != v33) )
      __fastfail(3u);
    *v32 = v34;
    v34[1] = v32;
    UsbhFreePortChangeQueueObject(a1, a2, (__int64)(v33 - 2), 1);
  }
  v35 = *(unsigned __int16 *)(a2 + 4);
  v36 = *(int *)(a2 + 12);
  *(_DWORD *)(a2 + 2876) = 0;
  *(_BYTE *)(a2 + 2839) = 0;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v37 = *(_QWORD *)(a1 + 64);
    if ( v37 )
    {
      v38 = *(_QWORD *)(v37 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
      *(_DWORD *)v38 = 757952880;
      *(_QWORD *)(v38 + 8) = 0LL;
      *(_QWORD *)(v38 + 16) = v36;
      *(_QWORD *)(v38 + 24) = v35;
    }
  }
  v39 = *(_DWORD *)(a2 + 12);
  v40 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(v40 + a2 + 1384) = v39;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
  v41 = *(unsigned __int16 *)(a2 + 4);
  v42 = 0LL;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v43 = *(_QWORD *)(a1 + 64);
    if ( v43 )
    {
      v44 = *(_QWORD *)(v43 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v43 + 880)) & *(_DWORD *)(v43 + 884));
      *(_DWORD *)v44 = 1329877100;
      *(_QWORD *)(v44 + 8) = 0LL;
      *(_QWORD *)(v44 + 16) = v41;
      *(_QWORD *)(v44 + 24) = 1884308559LL;
    }
  }
  v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v46 = *(_QWORD *)(a1 + 64);
    if ( v46 )
    {
      v47 = *(_QWORD *)(v46 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 880)) & *(_DWORD *)(v46 + 884));
      *(_DWORD *)v47 = 1413771367;
      *(_QWORD *)(v47 + 8) = 0LL;
      *(_QWORD *)(v47 + 16) = v41;
      *(_QWORD *)(v47 + 24) = 0LL;
    }
  }
  if ( !(_WORD)v41 )
    goto LABEL_63;
  v48 = *(_QWORD *)(a1 + 64);
  if ( !v48 )
LABEL_71:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v48 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v48);
  if ( (unsigned __int16)v41 <= *(unsigned __int8 *)(v48 + 2938) )
  {
    v49 = *(_QWORD *)(v48 + 3056);
    if ( v49 )
    {
      v50 = 2928 * v41 + v49 - 2928;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v49 = *(_QWORD *)(v48 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v48 + 880)) & *(_DWORD *)(v48 + 884));
        *(_DWORD *)v49 = 1044672615;
        *(_QWORD *)(v49 + 8) = 0LL;
        *(_QWORD *)(v49 + 16) = v41;
        *(_QWORD *)(v49 + 24) = v50;
      }
      if ( v50 )
      {
        v42 = *(_QWORD *)(v50 + 392);
        if ( v42 )
          v42 = UsbhRefPdo(v49, v42, 0LL, 1884308559);
      }
    }
  }
LABEL_63:
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v45);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v51 = *(_QWORD *)(a1 + 64);
    if ( v51 )
    {
      v52 = *(_QWORD *)(v51 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v51 + 880)) & *(_DWORD *)(v51 + 884));
      *(_DWORD *)v52 = 1634744625;
      *(_QWORD *)(v52 + 8) = 0LL;
      *(_QWORD *)(v52 + 16) = a2;
      *(_QWORD *)(v52 + 24) = v42;
    }
  }
  if ( v42 )
  {
    *(_DWORD *)(a2 + 416) = 1;
    v53 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 5168));
    if ( *((_QWORD *)PdoExt(v42) + 108) )
    {
      Log(a1, 4, 825847906, v42, 0LL);
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 5168), v53);
      UsbhCancelResetTimeout(a1, a2, 1);
      UsbhReleaseEnumBusLockEx(a1, a3, *(_WORD *)(a2 + 4));
      UsbhSignalSyncDeviceResetPdo(a1, v42, -1073741823);
      UsbhSignalDriverResetEvent(a1, a2);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 5168), v53);
    }
    UsbhBusUnlatchPdo(a1, v42, a2, v54, 0LL);
  }
}
