/*
 * XREFs of UsbhFdoSetD0Cold @ 0x1C000CF10
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C000DC30 (UsbhFdoD0Worker_Action.c)
 *     UsbhHardReset_Action @ 0x1C003DA18 (UsbhHardReset_Action.c)
 *     UsbhHubStart @ 0x1C0043F60 (UsbhHubStart.c)
 * Callees:
 *     UsbhRefPdo @ 0x1C0002310 (UsbhRefPdo.c)
 *     UsbhDispatch_BusEvent @ 0x1C0002AF0 (UsbhDispatch_BusEvent.c)
 *     UsbhQueryPortState @ 0x1C000A080 (UsbhQueryPortState.c)
 *     UsbhSyncPowerOnPorts @ 0x1C000BBF0 (UsbhSyncPowerOnPorts.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0012400 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C00162A8 (UsbhSyncResetDeviceInternal.c)
 *     UsbhLatchPdo @ 0x1C0016B5C (UsbhLatchPdo.c)
 *     UsbhUnlatchPdo @ 0x1C00171A0 (UsbhUnlatchPdo.c)
 *     UsbhRawWait @ 0x1C0018570 (UsbhRawWait.c)
 *     UsbhFdoColdStartPdo @ 0x1C001C580 (UsbhFdoColdStartPdo.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C002EEF4 (WPP_RECORDER_SF_.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0035938 (UsbhQueueSoftConnectChange.c)
 *     UsbhResetHubUpstreamPort @ 0x1C003DD90 (UsbhResetHubUpstreamPort.c)
 *     UsbhResetNotifyCompletion @ 0x1C003DE40 (UsbhResetNotifyCompletion.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoSetD0Cold(struct _DEVICE_OBJECT *a1, __int64 a2, char a3)
{
  __int64 v4; // r15
  __int16 v6; // r9
  unsigned __int16 v7; // r14
  int v8; // r9d
  int v9; // eax
  unsigned int v10; // eax
  unsigned int started; // r12d
  unsigned int v12; // r9d
  unsigned __int16 v13; // si
  unsigned __int8 *DeviceExtension; // rdx
  __int64 v15; // rcx
  unsigned __int8 *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rdi
  void *v22; // rdx
  __int64 v23; // rcx
  KIRQL v24; // al
  __int64 v25; // rcx
  KIRQL v26; // r12
  void *v27; // rdx
  unsigned __int8 *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r8
  void *v32; // rdx
  __int64 v33; // rcx
  _DWORD *v34; // rdx
  signed int v35; // eax
  __int64 v36; // r8
  void *v37; // rdx
  __int64 v38; // rcx
  int v39; // r9d
  int v40; // eax
  char v41; // r9
  unsigned __int8 *v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rcx
  KIRQL v45; // si
  void *v46; // rdx
  __int64 v47; // rcx
  unsigned __int8 *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  void *v51; // rdx
  __int64 v52; // rcx
  void *v53; // rdx
  __int64 v54; // rcx
  unsigned __int8 *v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rcx
  __int64 v60; // rax
  __int64 v61; // rsi
  signed int v62; // eax
  unsigned int v63; // eax
  unsigned int v64; // edi
  int v65; // ecx
  int v66; // r9d
  unsigned __int16 v67; // di
  __int64 v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rbp
  int v71; // [rsp+48h] [rbp-70h]
  int v72; // [rsp+64h] [rbp-54h] BYREF
  int v73; // [rsp+68h] [rbp-50h] BYREF
  __int64 v74; // [rsp+70h] [rbp-48h]

  v4 = a2;
  v74 = FdoExt(a1);
  Log((_DWORD)a1, 16, 1668246628, 0, 0LL);
  v7 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) != v6 )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      27,
      (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_START, 0, 0);
  if ( a3 )
  {
    v63 = UsbhResetHubUpstreamPort(a1);
    v64 = v63;
    if ( (v63 & 0xC0000000) == 0xC0000000 )
    {
      if ( !(unsigned __int8)Usb_Disconnected(v63) )
      {
        LOBYTE(v71) = 0;
        UsbhException((int)a1, 0, 54, 0, 0, v65, 0, usbfile_fdopwr_c, 3274, v71);
      }
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE, 0, v64);
      return v64;
    }
  }
  FdoExt(a1);
  Log((_DWORD)a1, 2048, 1346458174, 0, 0LL);
  v9 = UsbhDispatch_BusEvent(a1, v4, v8 + 10);
  Log((_DWORD)a1, 2048, 1346458172, 0, v9);
  v10 = UsbhSyncPowerOnPorts((__int64)a1);
  started = v10;
  if ( (v10 & 0xC0000000) == 0xC0000000 )
  {
    if ( !(unsigned __int8)Usb_Disconnected(v10) )
    {
      LOBYTE(v71) = 0;
      UsbhException((int)a1, 0, 53, 0, 0, started, 0, usbfile_fdopwr_c, 3298, v71);
    }
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE, 0, started);
    return started;
  }
  Log((_DWORD)a1, 8, 2002872692, 100, 0LL);
  UsbhRawWait(v12);
  v13 = 1;
  while ( 1 )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    DeviceExtension = (unsigned __int8 *)a1->DeviceExtension;
    if ( !DeviceExtension )
LABEL_133:
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)DeviceExtension != 541218120 )
      UsbhTrapFatal_Dbg(a1, DeviceExtension);
    if ( v13 > DeviceExtension[2938] )
      break;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v15 = *((_QWORD *)DeviceExtension + 111)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
      *(_DWORD *)v15 = 1413771367;
      *(_QWORD *)(v15 + 16) = v13;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 24) = 0LL;
    }
    if ( !v13 )
      goto LABEL_49;
    v16 = (unsigned __int8 *)a1->DeviceExtension;
    if ( !v16 )
      goto LABEL_133;
    if ( *(_DWORD *)v16 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v16);
    if ( v13 <= v16[2938] && (v17 = *((_QWORD *)v16 + 382)) != 0 )
    {
      v18 = 2928LL * v13 - 2928;
      v19 = v17 + v18;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v20 = *((_QWORD *)v16 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v16 + 220) & *((_DWORD *)v16 + 221));
        *(_DWORD *)v20 = 1044672615;
        *(_QWORD *)(v20 + 8) = 0LL;
        *(_QWORD *)(v20 + 16) = v13;
        *(_QWORD *)(v20 + 24) = v19;
      }
      if ( !v19 )
        goto LABEL_48;
      v21 = 0LL;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        v22 = a1->DeviceExtension;
        if ( v22 )
        {
          v23 = *((_QWORD *)v22 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v22 + 220) & *((_DWORD *)v22 + 221));
          *(_DWORD *)v23 = 1329877100;
          *(_QWORD *)(v23 + 8) = 0LL;
          *(_QWORD *)(v23 + 16) = v13;
          *(_QWORD *)(v23 + 24) = 1129270340LL;
        }
      }
      v24 = KeAcquireSpinLockRaiseToDpc(&HubG);
      v25 = (unsigned int)UsbhLogMask;
      v26 = v24;
      qword_1C006C500 = (__int64)&dword_1C006C508;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v27 = a1->DeviceExtension;
        if ( v27 )
        {
          v25 = *((_QWORD *)v27 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v27 + 220) & *((_DWORD *)v27 + 221));
          *(_DWORD *)v25 = 1413771367;
          *(_QWORD *)(v25 + 8) = 0LL;
          *(_QWORD *)(v25 + 16) = v13;
          *(_QWORD *)(v25 + 24) = 0LL;
        }
      }
      v28 = (unsigned __int8 *)a1->DeviceExtension;
      if ( !v28 )
        goto LABEL_133;
      if ( *(_DWORD *)v28 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v28);
      if ( v13 <= v28[2938] )
      {
        v29 = *((_QWORD *)v28 + 382);
        if ( v29 )
        {
          v30 = v29 + v18;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v25 = *((_QWORD *)v28 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v28 + 220) & *((_DWORD *)v28 + 221));
            *(_DWORD *)v25 = 1044672615;
            *(_QWORD *)(v25 + 8) = 0LL;
            *(_QWORD *)(v25 + 16) = v13;
            *(_QWORD *)(v25 + 24) = v30;
          }
          if ( v30 )
          {
            v21 = *(_QWORD *)(v30 + 392);
            if ( v21 )
              v21 = UsbhRefPdo(v25, v21, 0LL, 1129270340);
          }
        }
      }
      qword_1C006C500 = 0LL;
      KeReleaseSpinLock(&HubG, v26);
      v31 = *(unsigned __int16 *)(v19 + 4);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v32 = a1->DeviceExtension;
        if ( v32 )
        {
          v33 = *((_QWORD *)v32 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v32 + 220) & *((_DWORD *)v32 + 221));
          *(_DWORD *)v33 = 828664931;
          *(_QWORD *)(v33 + 8) = 0LL;
          *(_QWORD *)(v33 + 16) = v31;
          *(_QWORD *)(v33 + 24) = v21;
        }
      }
      if ( !v21 )
      {
        v34 = a1->DeviceExtension;
        v72 = 0;
        v73 = 0;
        if ( !v34 )
          UsbhTrapFatal_Dbg(a1, 0LL);
        if ( *v34 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v34);
        v35 = UsbhQueryPortState((__int64)a1, *(_WORD *)(v19 + 4), (__int64)&v72, &v73);
        v36 = *(unsigned __int16 *)(v19 + 4);
        started = v35;
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          v37 = a1->DeviceExtension;
          if ( v37 )
          {
            v38 = *((_QWORD *)v37 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v37 + 220) & *((_DWORD *)v37 + 221));
            *(_DWORD *)v38 = 826500195;
            *(_QWORD *)(v38 + 8) = 0LL;
            *(_QWORD *)(v38 + 16) = v36;
            *(_QWORD *)(v38 + 24) = v35;
          }
        }
        if ( (v35 & 0xC0000000) == 0xC0000000 )
        {
          Log((_DWORD)a1, 16, 1667515186, 0, v35);
          if ( (unsigned __int8)Usb_Disconnected(started) )
          {
            UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_HUB_DISCONNECT, 0, started);
            started = 0;
          }
          else
          {
            LOBYTE(v71) = v66;
            UsbhException(
              (int)a1,
              *(unsigned __int16 *)(v19 + 4),
              48,
              v66,
              v66,
              started,
              v73,
              usbfile_fdopwr_c,
              3004,
              v71);
          }
        }
        else if ( (v72 & 1) != 0 && (v72 & 0x10000) == 0 )
        {
          Log((_DWORD)a1, 16, 1667515187, 0, v35);
          UsbhEtwLogHubIrpEvent(
            a1,
            0LL,
            0LL,
            &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_CONNECT,
            *(unsigned __int16 *)(v19 + 4),
            started);
          *(_BYTE *)(v19 + 2841) = 1;
        }
        if ( (started & 0xC0000000) == 0xC0000000 )
        {
          v4 = a2;
          break;
        }
LABEL_48:
        v4 = a2;
        goto LABEL_49;
      }
      v4 = a2;
      started = UsbhFdoColdStartPdo((_DWORD)a1);
      if ( (started & 0xC0000000) == 0xC0000000 )
      {
        UsbhUnlatchPdo(a1, v21, 0LL, 1129270340LL);
        break;
      }
      UsbhUnlatchPdo(a1, v21, 0LL, 1129270340LL);
      ++v13;
    }
    else
    {
LABEL_49:
      ++v13;
    }
  }
  FdoExt(a1);
  Log((_DWORD)a1, 2048, 1346458174, 0, 0LL);
  v40 = UsbhDispatch_BusEvent(a1, v4, v39 + 8);
  Log((_DWORD)a1, 2048, 1346458172, 0, v40);
  if ( *(_BYTE *)(v74 + 5268) == v41 )
    goto LABEL_51;
  v67 = 1;
  while ( 2 )
  {
    if ( v67 > *(unsigned __int8 *)(FdoExt(a1) + 2938) )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_51:
          v42 = (unsigned __int8 *)a1->DeviceExtension;
          if ( !v42 )
            goto LABEL_133;
          if ( *(_DWORD *)v42 != 541218120 )
            UsbhTrapFatal_Dbg(a1, v42);
          if ( v7 > v42[2938] )
          {
            UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE, 0, started);
            return started;
          }
          v43 = 0LL;
          if ( (UsbhLogMask & 0x100) != 0 )
          {
            v44 = *((_QWORD *)v42 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v42 + 220) & *((_DWORD *)v42 + 221));
            *(_DWORD *)v44 = 1329877100;
            *(_QWORD *)(v44 + 16) = v7;
            *(_QWORD *)(v44 + 8) = 0LL;
            *(_QWORD *)(v44 + 24) = 1129071666LL;
          }
          v45 = KeAcquireSpinLockRaiseToDpc(&HubG);
          qword_1C006C500 = (__int64)&dword_1C006C508;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v46 = a1->DeviceExtension;
            if ( v46 )
            {
              v47 = *((_QWORD *)v46 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v46 + 220) & *((_DWORD *)v46 + 221));
              *(_DWORD *)v47 = 1413771367;
              *(_QWORD *)(v47 + 16) = v7;
              *(_QWORD *)(v47 + 8) = 0LL;
              *(_QWORD *)(v47 + 24) = 0LL;
            }
          }
          if ( v7 )
          {
            v48 = (unsigned __int8 *)a1->DeviceExtension;
            if ( !v48 )
              goto LABEL_133;
            if ( *(_DWORD *)v48 != 541218120 )
              UsbhTrapFatal_Dbg(a1, v48);
            if ( v7 <= v48[2938] )
            {
              v49 = *((_QWORD *)v48 + 382);
              if ( v49 )
              {
                v50 = 2928LL * v7 + v49 - 2928;
                if ( (UsbhLogMask & 8) != 0 )
                {
                  v49 = *((_QWORD *)v48 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v48 + 220) & *((_DWORD *)v48 + 221));
                  *(_DWORD *)v49 = 1044672615;
                  *(_QWORD *)(v49 + 8) = 0LL;
                  *(_QWORD *)(v49 + 16) = v7;
                  *(_QWORD *)(v49 + 24) = v50;
                }
                if ( v50 )
                {
                  v43 = *(_QWORD *)(v50 + 392);
                  if ( v43 )
                    v43 = UsbhRefPdo(v49, v43, 0LL, 1129071666);
                }
              }
            }
          }
          qword_1C006C500 = 0LL;
          KeReleaseSpinLock(&HubG, v45);
          if ( (UsbhLogMask & 0x10) != 0 )
          {
            v51 = a1->DeviceExtension;
            if ( v51 )
            {
              v52 = *((_QWORD *)v51 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v51 + 220) & *((_DWORD *)v51 + 221));
              *(_DWORD *)v52 = 829318514;
              *(_QWORD *)(v52 + 16) = v7;
              *(_QWORD *)(v52 + 8) = 0LL;
              *(_QWORD *)(v52 + 24) = v43;
            }
          }
          if ( v43 )
            break;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v53 = a1->DeviceExtension;
            if ( v53 )
            {
              v54 = *((_QWORD *)v53 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v53 + 220) & *((_DWORD *)v53 + 221));
              *(_DWORD *)v54 = 1413771367;
              *(_QWORD *)(v54 + 16) = v7;
              *(_QWORD *)(v54 + 8) = 0LL;
              *(_QWORD *)(v54 + 24) = 0LL;
            }
          }
          if ( v7 )
          {
            v55 = (unsigned __int8 *)a1->DeviceExtension;
            if ( !v55 )
              goto LABEL_133;
            if ( *(_DWORD *)v55 != 541218120 )
              UsbhTrapFatal_Dbg(a1, v55);
            if ( v7 > v55[2938] )
            {
              v57 = 0LL;
            }
            else
            {
              v56 = *((_QWORD *)v55 + 382);
              if ( v56 )
              {
                v57 = 2928LL * v7 + v56 - 2928;
                if ( (UsbhLogMask & 8) != 0 )
                {
                  v58 = *((_QWORD *)v55 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v55 + 220) & *((_DWORD *)v55 + 221));
                  *(_DWORD *)v58 = 1044672615;
                  *(_QWORD *)(v58 + 8) = 0LL;
                  *(_QWORD *)(v58 + 16) = v7;
                  *(_QWORD *)(v58 + 24) = v57;
                }
              }
              else
              {
                v57 = 0LL;
              }
            }
          }
          else
          {
            v57 = 0LL;
          }
          if ( *(_BYTE *)(v57 + 2841) )
          {
            *(_BYTE *)(v57 + 2841) = 0;
            UsbhQueueSoftConnectChange((_DWORD)a1);
          }
LABEL_85:
          ++v7;
        }
        v60 = PdoExt(v43);
        v61 = v60;
        if ( *(_BYTE *)(v60 + 2740) )
        {
          UsbhUnlatchPdo(a1, v43, 0LL, 1129071666LL);
          goto LABEL_85;
        }
        if ( (*(_DWORD *)(v60 + 1420) & 0x4000) != 0 )
        {
          Log((_DWORD)a1, 16, 1346654803, 0, 0LL);
          UsbhEtwLogHubIrpEvent(
            a1,
            0LL,
            0LL,
            &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_RESET,
            *(unsigned __int16 *)(v61 + 1428),
            0);
          v62 = UsbhSyncResetDeviceInternal(a1);
          started = v62;
          if ( (v62 & 0xC0000000) == 0xC0000000 )
          {
            Log((_DWORD)a1, 16, 1919249970, 0, v62);
            UsbhQueueSoftConnectChange((_DWORD)a1);
            *(_DWORD *)(v61 + 1420) &= ~0x4000u;
            LOBYTE(v71) = 0;
            UsbhException((int)a1, 0, 88, 0, 0, started, 0, usbfile_fdopwr_c, 3445, v71);
            started = 0;
          }
          else
          {
            *(_DWORD *)(v61 + 1420) &= ~0x4000u;
          }
        }
        UsbhUnlatchPdo(a1, v43, 0LL, 1129071666LL);
        ++v7;
      }
    }
    v68 = UsbhLatchPdo(a1, v67, 0LL, 1129071666LL);
    v69 = v68;
    if ( !v68 )
      goto LABEL_122;
    v70 = PdoExt(v68);
    if ( !*(_BYTE *)(v70 + 2740) )
      goto LABEL_121;
    started = UsbhSyncResetDeviceInternal(a1);
    if ( (started & 0x80000000) == 0 )
    {
      UsbhResetNotifyCompletion(*(_QWORD *)(v4 + 8));
LABEL_121:
      UsbhUnlatchPdo(a1, v69, 0LL, 1129071666LL);
LABEL_122:
      ++v67;
      continue;
    }
    break;
  }
  UsbhQueueSoftConnectChange((_DWORD)a1);
  *(_DWORD *)(v70 + 1420) &= ~0x4000u;
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE, 0, started);
  UsbhUnlatchPdo(a1, v69, 0LL, 1129071666LL);
  return started;
}
