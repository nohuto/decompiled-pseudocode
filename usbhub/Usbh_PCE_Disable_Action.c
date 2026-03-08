/*
 * XREFs of Usbh_PCE_Disable_Action @ 0x1C0005350
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C00041C0 (UsbhFlushPortChangeQueue.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C00068E0 (UsbhWaitEventWithTimeoutEx.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E98C (WPP_RECORDER_SF_dq.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C003518C (UsbhRemoveQueuedSuspend.c)
 *     UsbhSetPcqEventStatus @ 0x1C0035294 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0035444 (UsbhUnlockPcqWithTag.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0036644 (UsbhiSignalSuspendEvent.c)
 */

__int64 __fastcall Usbh_PCE_Disable_Action(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdx
  KIRQL v5; // al
  __int64 v6; // r8
  KIRQL v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 result; // rax
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_DWORD **)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v4);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v6 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v7 = v5;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v9 = 724267376;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = 2LL;
      *(_QWORD *)(v9 + 24) = v6;
    }
  }
  v10 = *(unsigned __int16 *)(a2 + 4);
  v11 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 724267376;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = v11;
      *(_QWORD *)(v13 + 24) = v10;
    }
  }
  v14 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v14;
  v15 = a2 + 32 * (v14 + 43);
  *(_DWORD *)v15 = 2;
  *(_DWORD *)(v15 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v15 + 8) = -1;
  *(_QWORD *)(v15 + 12) = 0LL;
  *(_QWORD *)(v15 + 20) = 0LL;
  *(_DWORD *)(v15 + 28) = 0;
  v16 = *(int *)(a2 + 12);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v10,
      11,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      a2);
  v17 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 64);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
      *(_DWORD *)v19 = 812659295;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = v16;
      *(_QWORD *)(v19 + 24) = v17;
    }
  }
  switch ( (int)v16 )
  {
    case 1:
    case 2:
    case 18:
      Log(a1, 512, 1597141042, v16, *(unsigned __int16 *)(a2 + 4));
      v23 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 6;
      *(_DWORD *)(v23 + a2 + 1384) = 6;
      UsbhSetPcqEventStatus(a1, a2, 2LL);
      UsbhFlushPortChangeQueue(a1, a2);
      goto LABEL_20;
    case 3:
    case 12:
      Log(a1, 512, 1597141044, v16, *(unsigned __int16 *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL);
      v38 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 12;
      *(_DWORD *)(v38 + a2 + 1384) = 12;
      goto LABEL_39;
    case 4:
      v24 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v25 = *(_QWORD *)(a1 + 64);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
          *(_DWORD *)v26 = 862990943;
          *(_QWORD *)(v26 + 8) = 0LL;
          *(_QWORD *)(v26 + 16) = v16;
          *(_QWORD *)(v26 + 24) = v24;
        }
      }
      v27 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 5;
      *(_DWORD *)(v27 + a2 + 1384) = 5;
      v28 = *(unsigned __int16 *)(a2 + 4);
      v29 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v30 = *(_QWORD *)(a1 + 64);
        if ( v30 )
        {
          v31 = *(_QWORD *)(v30 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
          *(_DWORD *)v31 = 1986359664;
          *(_QWORD *)(v31 + 8) = 0LL;
          *(_QWORD *)(v31 + 16) = v29;
          *(_QWORD *)(v31 + 24) = v28;
        }
      }
      *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1400) = 20;
      v32 = *(unsigned __int16 *)(a2 + 4);
      v33 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v34 = *(_QWORD *)(a1 + 64);
        if ( v34 )
        {
          v35 = *(_QWORD *)(v34 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
          *(_DWORD *)v35 = 757952880;
          *(_QWORD *)(v35 + 8) = 0LL;
          *(_QWORD *)(v35 + 16) = v33;
          *(_QWORD *)(v35 + 24) = v32;
        }
      }
      v36 = *(_DWORD *)(a2 + 12);
      v37 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v37 + a2 + 1384) = v36;
      goto LABEL_18;
    case 5:
    case 16:
    case 17:
      Log(a1, 512, 1597141048, v16, *(unsigned __int16 *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL);
      v42 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v16;
      *(_DWORD *)(v42 + a2 + 1384) = v16;
      goto LABEL_39;
    case 6:
    case 11:
    case 15:
      Log(a1, 512, 1597141045, v16, *(unsigned __int16 *)(a2 + 4));
      UsbhFlushPortChangeQueue(a1, a2);
      UsbhSetPcqEventStatus(a1, a2, 2LL);
LABEL_20:
      KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
      goto LABEL_39;
    case 7:
      Log(a1, 512, 1597141041, v16, *(unsigned __int16 *)(a2 + 4));
      Log(a1, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1400) = 30;
      v20 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 11;
      *(_DWORD *)(v20 + a2 + 1384) = 11;
      UsbhFlushPortChangeQueue(a1, a2);
      KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
      Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      v21 = *(_DWORD *)(a2 + 12);
      v22 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v22 + a2 + 1384) = v21;
LABEL_18:
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v7);
      goto LABEL_40;
    case 8:
      UsbhRemoveQueuedSuspend(a1, a2, v17, v11);
      UsbhiSignalSuspendEvent(a1, a2);
      Log(a1, 512, 1597141047, v16, *(unsigned __int16 *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL);
      v40 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 12;
      *(_DWORD *)(v40 + a2 + 1384) = 12;
      goto LABEL_39;
    case 9:
      UsbhRemoveQueuedSuspend(a1, a2, v17, v11);
      Log(a1, 512, 1597141046, v16, *(unsigned __int16 *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL);
      v39 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 5;
      *(_DWORD *)(v39 + a2 + 1384) = 5;
      goto LABEL_39;
    case 10:
      UsbhRemoveQueuedSuspend(a1, a2, v17, v11);
      UsbhiSignalSuspendEvent(a1, a2);
      Log(a1, 512, 1597141047, v16, *(unsigned __int16 *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL);
      v41 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 13;
      *(_DWORD *)(v41 + a2 + 1384) = 13;
      goto LABEL_39;
    case 13:
    case 14:
      Log(a1, 512, 1597141049, v16, *(unsigned __int16 *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL);
      v43 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 13;
      *(_DWORD *)(v43 + a2 + 1384) = 13;
      goto LABEL_39;
    default:
      v44 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v44 + a2 + 1384) = 19;
      UsbhSetPcqEventStatus(a1, a2, 2LL);
LABEL_39:
      UsbhUnlockPcqWithTag(a1, a2, v7, 0LL);
LABEL_40:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          12,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4));
      v45 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v46 = *(_QWORD *)(a1 + 64);
        if ( v46 )
        {
          v47 = *(_QWORD *)(v46 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 880)) & *(_DWORD *)(v46 + 884));
          *(_DWORD *)v47 = 1129346859;
          *(_QWORD *)(v47 + 8) = 0LL;
          *(_QWORD *)(v47 + 16) = 0LL;
          *(_QWORD *)(v47 + 24) = v45;
        }
      }
      result = UsbhWaitEventWithTimeoutEx(a1, a2 + 472, 660000LL, 729239619LL, 6, a2);
      v49 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v50 = *(_QWORD *)(a1 + 64);
        if ( v50 )
        {
          result = 1129346861LL;
          v51 = *(_QWORD *)(v50 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v50 + 880)) & *(_DWORD *)(v50 + 884));
          *(_DWORD *)v51 = 1129346861;
          *(_QWORD *)(v51 + 8) = 0LL;
          *(_QWORD *)(v51 + 16) = 0LL;
          *(_QWORD *)(v51 + 24) = v49;
        }
      }
      return result;
  }
}
