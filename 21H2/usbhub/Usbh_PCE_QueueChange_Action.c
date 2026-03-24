/*
 * XREFs of Usbh_PCE_QueueChange_Action @ 0x1C000B0E0
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0007840 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C0002580 (UsbhFlushPortChangeQueue.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C000B870 (UsbhInsertQueuePortChangeObject.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C001518C (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhLogSignalDriverResetEvent @ 0x1C00180B8 (UsbhLogSignalDriverResetEvent.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002F194 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002F39C (WPP_RECORDER_SF_dq.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C003453C (UsbhFreePortChangeQueueTimeoutObject.c)
 *     UsbhSetPcqEventStatus @ 0x1C0035C24 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0035D2C (UsbhUnlockPcqWithTag.c)
 *     WPP_RECORDER_SF_dc @ 0x1C0036F08 (WPP_RECORDER_SF_dc.c)
 */

_UNKNOWN **Usbh_PCE_QueueChange_Action(__int64 a1, __int64 a2, char a3, ...)
{
  _DWORD *v6; // rdx
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // r8
  KIRQL v10; // r15
  unsigned __int16 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  KSPIN_LOCK *v17; // r14
  __int64 v18; // r12
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  KIRQL v24; // r15
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rbp
  int v29; // r14d
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r8
  int v38; // ecx
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  KIRQL v43; // bp
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rdx
  int v47; // edx
  int v48; // r8d
  _UNKNOWN **result; // rax
  int v50; // r9d
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // eax
  __int64 v55; // rdx
  __int16 v56; // r9
  __int64 v57; // r11
  void *v58; // r10
  PDEVICE_OBJECT v59; // rcx
  int v60; // r9d
  __int16 v61; // r9
  __int64 v62; // r11
  void *v63; // r10
  __int64 v64; // rax
  __int64 v65; // r9
  int v66; // r10d
  void *v67; // r11
  __int64 v68; // r9
  __int16 v69; // r9
  void *v70; // r10
  __int64 v71; // rax
  __int64 v72; // r9
  __int64 v73; // rax
  int v74; // edx
  __int64 v75; // r9
  char v76; // r10
  int v77; // [rsp+20h] [rbp-68h]
  int v78; // [rsp+40h] [rbp-48h]
  KIRQL v79; // [rsp+90h] [rbp+8h]
  __int64 v80; // [rsp+A8h] [rbp+20h] BYREF
  va_list va; // [rsp+A8h] [rbp+20h]
  __int64 v82; // [rsp+B0h] [rbp+28h]
  __int64 v83; // [rsp+B8h] [rbp+30h]
  va_list va1; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v80 = va_arg(va1, _QWORD);
  v82 = va_arg(va1, _QWORD);
  v83 = va_arg(va1, _QWORD);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    goto LABEL_97;
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v9 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v10 = v7;
  v11 = v9;
  v79 = v7;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v12 = *(_QWORD *)(v8 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v12 = 724267376;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 4LL;
      *(_QWORD *)(v12 + 24) = v9;
      v11 = *(_WORD *)(a2 + 4);
    }
  }
  v13 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v14 = *(_QWORD *)(v8 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v14 = 724267376;
      *(_QWORD *)(v14 + 24) = v11;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = v13;
    }
  }
  v15 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v15;
  v16 = a2 + 32 * (v15 + 43);
  *(_DWORD *)v16 = 4;
  *(_DWORD *)(v16 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v16 + 12) = v80;
  *(_DWORD *)(v16 + 8) = -1;
  *(_QWORD *)(v16 + 16) = 0LL;
  *(_QWORD *)(v16 + 24) = 0LL;
  v17 = (KSPIN_LOCK *)*(int *)(a2 + 12);
  v18 = *(unsigned __int16 *)(a2 + 4);
  v78 = *(_DWORD *)(a2 + 12);
  v19 = (unsigned __int16)v18;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v20 = *(_QWORD *)(v8 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v20 = 812659807;
      *(_QWORD *)(v20 + 8) = 0LL;
      *(_QWORD *)(v20 + 16) = v17;
      *(_QWORD *)(v20 + 24) = v18;
      v19 = *(unsigned __int16 *)(a2 + 4);
    }
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v21 = *(_QWORD *)(v8 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v21 = 812147537;
        *(_QWORD *)(v21 + 24) = (unsigned __int16)v19;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 16) = a2;
      }
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v8 = *(_QWORD *)(a1 + 64);
        if ( v8 )
        {
          v22 = *(_QWORD *)(v8 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
          *(_DWORD *)v22 = 812147537;
          *(_QWORD *)(v22 + 24) = (unsigned int)v80;
          *(_QWORD *)(v22 + 8) = 0LL;
          *(_QWORD *)(v22 + 16) = a2;
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      v19,
      19,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  if ( (v80 & 0x80000) != 0 )
  {
    v23 = *(_QWORD *)(a1 + 64);
    if ( v23 )
    {
      if ( *(_DWORD *)v23 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v17 = (KSPIN_LOCK *)(v23 + 4944);
      v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v23 + 4944));
      v25 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v26 = *(_QWORD *)(a1 + 64);
        if ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
          *(_DWORD *)v27 = 1836086128;
          *(_QWORD *)(v27 + 8) = 0LL;
          *(_QWORD *)(v27 + 16) = 0LL;
          *(_QWORD *)(v27 + 24) = v25;
        }
      }
      if ( KeReadStateEvent((PRKEVENT)(a2 + 800)) )
      {
        KeResetEvent((PRKEVENT)(a2 + 800));
        *(_QWORD *)(a2 + 792) = a2;
      }
      KeReleaseSpinLock(v17, v24);
      v10 = v79;
      LODWORD(v17) = v78;
      goto LABEL_31;
    }
LABEL_97:
    UsbhTrapFatal_Dbg(a1, 0LL);
  }
LABEL_31:
  if ( (_DWORD)v17 == 2 )
  {
    v28 = v83;
    v29 = v82;
    v30 = UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v18, (unsigned int)va, v82, v83);
    v31 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v32 = *(_QWORD *)(a1 + 64);
      if ( v32 )
      {
        v33 = *(_QWORD *)(v32 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
        *(_DWORD *)v33 = 846214239;
        *(_QWORD *)(v33 + 8) = 0LL;
        *(_QWORD *)(v33 + 16) = v30;
        *(_QWORD *)(v33 + 24) = v31;
      }
    }
    if ( v30 >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          20,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          v18);
      if ( (UsbhLogMask & 8) != 0 )
      {
        v34 = *(_QWORD *)(a1 + 64);
        if ( v34 )
        {
          v35 = *(_QWORD *)(v34 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
          *(_DWORD *)v35 = 827353457;
          *(_QWORD *)(v35 + 8) = 0LL;
          *(_QWORD *)(v35 + 16) = a2;
          *(_QWORD *)(v35 + 24) = v18;
        }
      }
      v36 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 4;
      *(_DWORD *)(v36 + a2 + 1384) = 4;
      v37 = *(int *)(a2 + 12);
      v38 = *(_DWORD *)(a2 + 12);
      v39 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v40 = *(_QWORD *)(a1 + 64);
        if ( v40 )
        {
          v41 = *(_QWORD *)(v40 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
          *(_DWORD *)v41 = 757952880;
          *(_QWORD *)(v41 + 8) = 0LL;
          *(_QWORD *)(v41 + 16) = v37;
          *(_QWORD *)(v41 + 24) = v39;
          v38 = *(_DWORD *)(a2 + 12);
        }
      }
      v42 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v42 + a2 + 1384) = v38;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
      v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 2448));
      if ( *(_DWORD *)(a2 + 2412) != 1 )
      {
        *(_DWORD *)(a2 + 2412) = 1;
        if ( (UsbhLogMask & 0x200) != 0 )
        {
          v44 = *(_QWORD *)(a2 + 16);
          if ( v44 )
          {
            v45 = *(_QWORD *)(v44 + 64);
            if ( v45 )
            {
              v46 = *(_QWORD *)(v45 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884));
              *(_DWORD *)v46 = 1464029265;
              *(_QWORD *)(v46 + 8) = 0LL;
              *(_QWORD *)(v46 + 16) = a2;
              *(_QWORD *)(v46 + 24) = 0LL;
            }
          }
        }
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 2440));
        IoQueueWorkItem(
          *(PIO_WORKITEM *)(a2 + 2456),
          (PIO_WORKITEM_ROUTINE)UsbhHubProcessChangeWorker,
          DelayedWorkQueue,
          (PVOID)a2);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 2448), v43);
      LOBYTE(v17) = v78;
      goto LABEL_52;
    }
    Log(a1, 8, 1902727218, a2, v18);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v74,
        1,
        21,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        v18,
        v76);
    if ( v29 == 1 )
    {
      Log(a1, 512, 1902735480, v28, *(unsigned __int16 *)(a2 + 4));
      UsbhSignalSyncDeviceResetPdo(a1, v28, 3221225473LL);
      if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
        UsbhSetPcqEventStatus(a1, a2, 3LL);
    }
    else if ( v29 == 2 )
    {
      LOBYTE(v75) = 1;
      UsbhFreePortChangeQueueTimeoutObject(a1, a2, v28, v75);
    }
    LOBYTE(v17) = v78;
  }
  else
  {
    switch ( (int)v17 )
    {
      case 1:
      case 18:
        Log(a1, 512, 1597272118, 0, *(unsigned __int16 *)(a2 + 4));
        if ( WPP_RECORDER_INITIALIZED == v70 )
          goto LABEL_81;
        v59 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) == v69 )
          goto LABEL_81;
        v60 = 25;
        goto LABEL_80;
      case 3:
      case 14:
        Log(a1, 512, 1597272116, 0, *(unsigned __int16 *)(a2 + 4));
        if ( WPP_RECORDER_INITIALIZED != v63 && LOWORD(WPP_GLOBAL_Control->DeviceType) != v61 )
          WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 23, v62, v18);
        UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v18, (unsigned int)va, v82, v83);
        v64 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 14;
        *(_DWORD *)(v64 + a2 + 1384) = 14;
        break;
      case 4:
        Log(a1, 512, 1597272115, 0, *(unsigned __int16 *)(a2 + 4));
        if ( WPP_RECORDER_INITIALIZED == v58 )
          goto LABEL_81;
        v59 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) == v56 )
          goto LABEL_81;
        v60 = 22;
LABEL_80:
        WPP_RECORDER_SF_d(v59->DeviceExtension, 0, 1, v60, v57, v18);
LABEL_81:
        UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v18, (unsigned int)va, v82, v83);
        break;
      case 5:
      case 6:
      case 11:
      case 12:
      case 13:
      case 15:
      case 16:
      case 17:
      case 20:
        Log(a1, 512, 1597272117, v82, *(unsigned __int16 *)(a2 + 4));
        if ( v66 == 1 )
        {
          Log(a1, 512, 1597272184, v83, *(unsigned __int16 *)(a2 + 4));
          UsbhSignalSyncDeviceResetPdo(a1, v68, 3221225473LL);
          if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
            UsbhSetPcqEventStatus(a1, a2, 3LL);
        }
        else
        {
          if ( v66 != 2 )
            goto LABEL_74;
          LOBYTE(v65) = 1;
          UsbhFreePortChangeQueueTimeoutObject(a1, a2, v83, v65);
        }
        v67 = &WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids;
LABEL_74:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 24, (__int64)v67, v18);
        break;
      case 7:
        Log(a1, 512, 1597272113, 0, *(unsigned __int16 *)(a2 + 4));
        v50 = v82;
        v51 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 7;
        *(_DWORD *)(v51 + a2 + 1384) = 7;
        UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v18, (unsigned int)va, v50, v83);
        UsbhFlushPortChangeQueue(a1, a2, v52, v53);
        Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
        v54 = *(_DWORD *)(a2 + 12);
        v55 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v55 + a2 + 1384) = v54;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
        goto LABEL_52;
      case 8:
      case 10:
        Log(a1, 512, 1597272119, 0, *(unsigned __int16 *)(a2 + 4));
        UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v18, (unsigned int)va, v82, v83);
        v71 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 10;
        *(_DWORD *)(v71 + a2 + 1384) = 10;
        break;
      case 9:
        Log(a1, 512, 1597272120, 0, *(unsigned __int16 *)(a2 + 4));
        UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v18, (unsigned int)va, v82, v83);
        break;
      default:
        Log(a1, 512, 1597272152, 0, *(unsigned __int16 *)(a2 + 4));
        v73 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v73 + a2 + 1384) = 19;
        goto LABEL_96;
    }
  }
  v72 = 0LL;
LABEL_96:
  UsbhUnlockPcqWithTag(a1, a2, v10, v72);
LABEL_52:
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (_UNKNOWN **)WPP_RECORDER_SF_dc(WPP_GLOBAL_Control->DeviceExtension, v47, v48, 26, v77, v18, (char)v17);
  }
  return result;
}
