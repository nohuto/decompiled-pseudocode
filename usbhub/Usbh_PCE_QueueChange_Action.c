/*
 * XREFs of Usbh_PCE_QueueChange_Action @ 0x1C0010600
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0001CD0 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhLogSignalDriverResetEvent @ 0x1C0001E74 (UsbhLogSignalDriverResetEvent.c)
 *     UsbhFlushPortChangeQueue @ 0x1C00041C0 (UsbhFlushPortChangeQueue.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C0011240 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002E788 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E98C (WPP_RECORDER_SF_dq.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C0033BAC (UsbhFreePortChangeQueueTimeoutObject.c)
 *     UsbhSetPcqEventStatus @ 0x1C0035294 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0035444 (UsbhUnlockPcqWithTag.c)
 *     WPP_RECORDER_SF_dc @ 0x1C0036684 (WPP_RECORDER_SF_dc.c)
 */

_UNKNOWN **Usbh_PCE_QueueChange_Action(__int64 a1, __int64 a2, char a3, ...)
{
  _DWORD *v6; // rdx
  KSPIN_LOCK *v7; // r13
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
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  KSPIN_LOCK *v29; // r14
  KIRQL v30; // r13
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  char v34; // r14
  int v35; // r9d
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  int v39; // edx
  int v40; // r8d
  __int64 v41; // r14
  int v42; // r15d
  int v43; // eax
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  KIRQL v56; // r14
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rdx
  int v60; // edx
  __int64 v61; // r9
  char v62; // r10
  __int16 v63; // r9
  PDEVICE_OBJECT v64; // rcx
  int v65; // r9d
  __int16 v66; // r9
  __int64 v67; // rax
  __int64 v68; // r9
  __int64 v69; // r9
  int v70; // r10d
  __int64 v71; // r9
  __int16 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rax
  _UNKNOWN **result; // rax
  int v76; // [rsp+20h] [rbp-68h]
  int v77; // [rsp+40h] [rbp-48h]
  __int64 v78; // [rsp+A8h] [rbp+20h] BYREF
  va_list va; // [rsp+A8h] [rbp+20h]
  __int64 v80; // [rsp+B0h] [rbp+28h]
  __int64 v81; // [rsp+B8h] [rbp+30h]
  va_list va1; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v78 = va_arg(va1, _QWORD);
  v80 = va_arg(va1, _QWORD);
  v81 = va_arg(va1, _QWORD);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    goto LABEL_92;
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  v7 = (KSPIN_LOCK *)(a2 + 440);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v9 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v10 = v8;
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
      *(_QWORD *)(v12 + 16) = 4LL;
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
  *(_DWORD *)v18 = 4;
  *(_DWORD *)(v18 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v18 + 12) = v78;
  *(_DWORD *)(v18 + 8) = -1;
  *(_QWORD *)(v18 + 16) = 0LL;
  *(_QWORD *)(v18 + 24) = 0LL;
  v19 = *(int *)(a2 + 12);
  v20 = *(unsigned __int16 *)(a2 + 4);
  v77 = *(_DWORD *)(a2 + 12);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v21 = *(_QWORD *)(a1 + 64);
    if ( v21 )
    {
      v22 = *(_QWORD *)(v21 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
      *(_DWORD *)v22 = 812659807;
      *(_QWORD *)(v22 + 8) = 0LL;
      *(_QWORD *)(v22 + 16) = v19;
      *(_QWORD *)(v22 + 24) = v20;
    }
  }
  v23 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v24 = *(_QWORD *)(a1 + 64);
    if ( v24 )
    {
      v25 = *(_QWORD *)(v24 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
      *(_DWORD *)v25 = 812147537;
      *(_QWORD *)(v25 + 8) = 0LL;
      *(_QWORD *)(v25 + 16) = a2;
      *(_QWORD *)(v25 + 24) = v23;
    }
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v26 = *(_QWORD *)(a1 + 64);
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
        *(_DWORD *)v27 = 812147537;
        *(_QWORD *)(v27 + 24) = (unsigned int)v78;
        *(_QWORD *)(v27 + 8) = 0LL;
        *(_QWORD *)(v27 + 16) = a2;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v23,
      19,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  if ( (v78 & 0x80000) != 0 )
  {
    v28 = *(_QWORD *)(a1 + 64);
    if ( v28 )
    {
      if ( *(_DWORD *)v28 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v29 = (KSPIN_LOCK *)(v28 + 4944);
      v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v28 + 4944));
      v31 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v32 = *(_QWORD *)(a1 + 64);
        if ( v32 )
        {
          v33 = *(_QWORD *)(v32 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
          *(_DWORD *)v33 = 1836086128;
          *(_QWORD *)(v33 + 8) = 0LL;
          *(_QWORD *)(v33 + 16) = 0LL;
          *(_QWORD *)(v33 + 24) = v31;
        }
      }
      if ( KeReadStateEvent((PRKEVENT)(a2 + 800)) )
      {
        KeResetEvent((PRKEVENT)(a2 + 800));
        *(_QWORD *)(a2 + 792) = a2;
      }
      KeReleaseSpinLock(v29, v30);
      v7 = (KSPIN_LOCK *)(a2 + 440);
      goto LABEL_31;
    }
LABEL_92:
    UsbhTrapFatal_Dbg(a1, 0LL);
  }
LABEL_31:
  v34 = v77;
  switch ( v77 )
  {
    case 1:
    case 18:
      Log(a1, 512, 1597272118, 0LL, *(unsigned __int16 *)(a2 + 4));
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_82;
      v64 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) == v72 )
        goto LABEL_82;
      v65 = 25;
      goto LABEL_81;
    case 2:
      v41 = v81;
      v42 = v80;
      v43 = UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v20, (unsigned int)va, v80, v81);
      v44 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v45 = *(_QWORD *)(a1 + 64);
        if ( v45 )
        {
          v46 = *(_QWORD *)(v45 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884));
          *(_DWORD *)v46 = 846214239;
          *(_QWORD *)(v46 + 8) = 0LL;
          *(_QWORD *)(v46 + 16) = v43;
          *(_QWORD *)(v46 + 24) = v44;
        }
      }
      if ( v43 < 0 )
      {
        Log(a1, 8, 1902727218, a2, v20);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dd(
            WPP_GLOBAL_Control->DeviceExtension,
            v60,
            1,
            21,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            v20,
            v62);
        if ( v42 == 1 )
        {
          Log(a1, 512, 1902735480, v41, *(unsigned __int16 *)(a2 + 4));
          UsbhSignalSyncDeviceResetPdo(a1, v41, -1073741823);
          if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
            UsbhSetPcqEventStatus(a1, a2, 3LL);
        }
        else if ( v42 == 2 )
        {
          LOBYTE(v61) = 1;
          UsbhFreePortChangeQueueTimeoutObject(a1, a2, v41, v61);
        }
        UsbhUnlockPcqWithTag(a1, a2, v10, 0LL);
        v34 = v77;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            20,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            v20);
        if ( (UsbhLogMask & 8) != 0 )
        {
          v47 = *(_QWORD *)(a1 + 64);
          if ( v47 )
          {
            v48 = *(_QWORD *)(v47 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v47 + 880)) & *(_DWORD *)(v47 + 884));
            *(_DWORD *)v48 = 827353457;
            *(_QWORD *)(v48 + 8) = 0LL;
            *(_QWORD *)(v48 + 16) = a2;
            *(_QWORD *)(v48 + 24) = v20;
          }
        }
        v49 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 4;
        *(_DWORD *)(v49 + a2 + 1384) = 4;
        v50 = *(unsigned __int16 *)(a2 + 4);
        v51 = *(int *)(a2 + 12);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          v52 = *(_QWORD *)(a1 + 64);
          if ( v52 )
          {
            v53 = *(_QWORD *)(v52 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v52 + 880)) & *(_DWORD *)(v52 + 884));
            *(_DWORD *)v53 = 757952880;
            *(_QWORD *)(v53 + 8) = 0LL;
            *(_QWORD *)(v53 + 16) = v51;
            *(_QWORD *)(v53 + 24) = v50;
          }
        }
        v54 = *(_DWORD *)(a2 + 12);
        v55 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v55 + a2 + 1384) = v54;
        KeReleaseSpinLock(v7, v10);
        v56 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 2448));
        if ( *(_DWORD *)(a2 + 2412) != 1 )
        {
          *(_DWORD *)(a2 + 2412) = 1;
          if ( (UsbhLogMask & 0x200) != 0 )
          {
            v57 = *(_QWORD *)(a2 + 16);
            if ( v57 )
            {
              v58 = *(_QWORD *)(v57 + 64);
              if ( v58 )
              {
                v59 = *(_QWORD *)(v58 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v58 + 880)) & *(_DWORD *)(v58 + 884));
                *(_DWORD *)v59 = 1464029265;
                *(_QWORD *)(v59 + 8) = 0LL;
                *(_QWORD *)(v59 + 16) = a2;
                *(_QWORD *)(v59 + 24) = 0LL;
              }
            }
          }
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 2440));
          IoQueueWorkItem(*(PIO_WORKITEM *)(a2 + 2456), UsbhHubProcessChangeWorker, DelayedWorkQueue, (PVOID)a2);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 2448), v56);
        v34 = v77;
      }
      goto LABEL_88;
    case 3:
    case 14:
      Log(a1, 512, 1597272116, 0LL, *(unsigned __int16 *)(a2 + 4));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        && LOWORD(WPP_GLOBAL_Control->DeviceType) != v66 )
      {
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          23,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          v20);
      }
      UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v20, (unsigned int)va, v80, v81);
      v67 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 14;
      v68 = 0LL;
      *(_DWORD *)(v67 + a2 + 1384) = 14;
      break;
    case 4:
      Log(a1, 512, 1597272115, 0LL, *(unsigned __int16 *)(a2 + 4));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v64 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v63 )
        {
          v65 = 22;
LABEL_81:
          WPP_RECORDER_SF_d(
            v64->DeviceExtension,
            0,
            1,
            v65,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            v20);
        }
      }
LABEL_82:
      UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v20, (unsigned int)va, v80, v81);
      goto LABEL_83;
    case 5:
    case 6:
    case 11:
    case 12:
    case 13:
    case 15:
    case 16:
    case 17:
    case 20:
      Log(a1, 512, 1597272117, (int)v80, *(unsigned __int16 *)(a2 + 4));
      if ( v70 == 1 )
      {
        Log(a1, 512, 1597272184, v81, *(unsigned __int16 *)(a2 + 4));
        UsbhSignalSyncDeviceResetPdo(a1, v71, -1073741823);
        if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
          UsbhSetPcqEventStatus(a1, a2, 3LL);
      }
      else if ( v70 == 2 )
      {
        LOBYTE(v69) = 1;
        UsbhFreePortChangeQueueTimeoutObject(a1, a2, v81, v69);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          24,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          v20);
      v68 = 0LL;
      break;
    case 7:
      Log(a1, 512, 1597272113, 0LL, *(unsigned __int16 *)(a2 + 4));
      v35 = v80;
      v36 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 7;
      *(_DWORD *)(v36 + a2 + 1384) = 7;
      UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v20, (unsigned int)va, v35, v81);
      UsbhFlushPortChangeQueue(a1, a2);
      Log(a1, 16, 1886465325, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      v37 = *(_DWORD *)(a2 + 12);
      v38 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v38 + a2 + 1384) = v37;
      KeReleaseSpinLock(v7, v10);
      goto LABEL_88;
    case 8:
    case 10:
      Log(a1, 512, 1597272119, 0LL, *(unsigned __int16 *)(a2 + 4));
      UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v20, (unsigned int)va, v80, v81);
      v73 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 10;
      v68 = 0LL;
      *(_DWORD *)(v73 + a2 + 1384) = 10;
      break;
    case 9:
      Log(a1, 512, 1597272120, 0LL, *(unsigned __int16 *)(a2 + 4));
      UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v20, (unsigned int)va, v80, v81);
LABEL_83:
      v68 = 0LL;
      break;
    default:
      Log(a1, 512, 1597272152, 0LL, *(unsigned __int16 *)(a2 + 4));
      v74 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v74 + a2 + 1384) = 19;
      break;
  }
  UsbhUnlockPcqWithTag(a1, a2, v10, v68);
LABEL_88:
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (_UNKNOWN **)WPP_RECORDER_SF_dc(WPP_GLOBAL_Control->DeviceExtension, v39, v40, 26, v76, v20, v34);
  }
  return result;
}
