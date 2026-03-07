__int64 __fastcall UsbhFdoSetD0Cold(struct _DEVICE_OBJECT *a1, __int64 a2, char a3)
{
  __int16 v6; // r9
  unsigned __int16 v7; // si
  int v8; // r9d
  int v9; // eax
  unsigned int v10; // r12d
  unsigned int v11; // r9d
  unsigned __int16 v12; // di
  unsigned __int8 *DeviceExtension; // rdx
  __int64 v14; // rcx
  unsigned __int8 *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rbp
  void *v21; // rdx
  __int64 v22; // rcx
  KIRQL v23; // al
  __int64 v24; // rcx
  KIRQL v25; // r15
  void *v26; // rdx
  unsigned __int8 *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r8
  void *v31; // rdx
  __int64 v32; // rcx
  _DWORD *v33; // rdx
  signed int PortState; // eax
  __int64 v35; // r8
  void *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r13
  int v39; // r9d
  int v40; // eax
  char v41; // r9
  unsigned __int8 *v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rcx
  KIRQL v45; // bp
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
  _DWORD *v60; // rax
  _DWORD *v61; // rbp
  signed int v62; // eax
  unsigned int v63; // eax
  unsigned int v64; // edi
  int v65; // ecx
  int v66; // r9d
  unsigned __int16 v67; // di
  __int64 v68; // rax
  __int64 v69; // rbp
  _DWORD *v70; // r14
  unsigned int started; // [rsp+5Ch] [rbp-5Ch]
  _DWORD *v72; // [rsp+70h] [rbp-48h]

  v72 = FdoExt((__int64)a1);
  Log((__int64)a1, 16, 1668246628, 0LL, 0LL);
  v7 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) != v6 )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      27,
      (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids);
  UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_START);
  if ( a3 )
  {
    v63 = UsbhResetHubUpstreamPort(a1);
    v64 = v63;
    if ( (v63 & 0xC0000000) == 0xC0000000 )
    {
      if ( !(unsigned __int8)Usb_Disconnected(v63) )
        UsbhException((int)a1, 0, 54, 0, 0, v65, 0, usbfile_fdopwr_c, 3274, 0);
      UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE);
      return v64;
    }
  }
  FdoExt((__int64)a1);
  Log((__int64)a1, 2048, 1346458174, 0LL, 0LL);
  v9 = UsbhDispatch_BusEvent(a1, a2, (unsigned int)(v8 + 10));
  Log((__int64)a1, 2048, 1346458172, 0LL, v9);
  v10 = UsbhSyncPowerOnPorts((_DWORD)a1);
  started = v10;
  if ( (v10 & 0xC0000000) == 0xC0000000 )
  {
    if ( !(unsigned __int8)Usb_Disconnected(v10) )
      UsbhException((int)a1, 0, 53, 0, 0, v10, 0, usbfile_fdopwr_c, 3298, 0);
LABEL_83:
    UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE);
    return v10;
  }
  Log((__int64)a1, 8, 2002872692, 100LL, 0LL);
  UsbhRawWait(v11);
  v12 = 1;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  while ( 1 )
  {
    DeviceExtension = (unsigned __int8 *)a1->DeviceExtension;
    if ( !DeviceExtension )
LABEL_128:
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)DeviceExtension != 541218120 )
      UsbhTrapFatal_Dbg(a1, DeviceExtension);
    if ( v12 > DeviceExtension[2938] )
    {
      v38 = a2;
      goto LABEL_47;
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      v14 = *((_QWORD *)DeviceExtension + 111)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
      *(_DWORD *)v14 = 1413771367;
      *(_QWORD *)(v14 + 16) = v12;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 24) = 0LL;
    }
    if ( !v12 )
      goto LABEL_103;
    v15 = (unsigned __int8 *)a1->DeviceExtension;
    if ( !v15 )
      goto LABEL_128;
    if ( *(_DWORD *)v15 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v15);
    if ( v12 > v15[2938] )
      goto LABEL_103;
    v16 = *((_QWORD *)v15 + 382);
    if ( !v16 )
      goto LABEL_103;
    v17 = 2928LL * v12 - 2928;
    v18 = v16 + v17;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v19 = *((_QWORD *)v15 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v15 + 220) & *((_DWORD *)v15 + 221));
      *(_DWORD *)v19 = 1044672615;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = v12;
      *(_QWORD *)(v19 + 24) = v18;
    }
    if ( !v18 )
    {
      v10 = started;
      goto LABEL_103;
    }
    v20 = 0LL;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v21 = a1->DeviceExtension;
      if ( v21 )
      {
        v22 = *((_QWORD *)v21 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v21 + 220) & *((_DWORD *)v21 + 221));
        *(_DWORD *)v22 = 1329877100;
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)(v22 + 16) = v12;
        *(_QWORD *)(v22 + 24) = 1129270340LL;
      }
    }
    v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    v24 = (unsigned int)UsbhLogMask;
    v25 = v23;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v26 = a1->DeviceExtension;
      if ( v26 )
      {
        v24 = *((_QWORD *)v26 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v26 + 220) & *((_DWORD *)v26 + 221));
        *(_DWORD *)v24 = 1413771367;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = v12;
        *(_QWORD *)(v24 + 24) = 0LL;
      }
    }
    v27 = (unsigned __int8 *)a1->DeviceExtension;
    if ( !v27 )
      goto LABEL_128;
    if ( *(_DWORD *)v27 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v27);
    if ( v12 <= v27[2938] )
    {
      v28 = *((_QWORD *)v27 + 382);
      if ( v28 )
      {
        v29 = v17 + v28;
        if ( (UsbhLogMask & 8) != 0 )
        {
          v24 = *((_QWORD *)v27 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v27 + 220) & *((_DWORD *)v27 + 221));
          *(_DWORD *)v24 = 1044672615;
          *(_QWORD *)(v24 + 8) = 0LL;
          *(_QWORD *)(v24 + 16) = v12;
          *(_QWORD *)(v24 + 24) = v29;
        }
        if ( v29 )
        {
          v20 = *(_QWORD *)(v29 + 392);
          if ( v20 )
            v20 = UsbhRefPdo(v24, v20, 0LL, 1129270340);
        }
      }
    }
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v25);
    v30 = *(unsigned __int16 *)(v18 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v31 = a1->DeviceExtension;
      if ( v31 )
      {
        v32 = *((_QWORD *)v31 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v31 + 220) & *((_DWORD *)v31 + 221));
        *(_DWORD *)v32 = 828664931;
        *(_QWORD *)(v32 + 8) = 0LL;
        *(_QWORD *)(v32 + 16) = v30;
        *(_QWORD *)(v32 + 24) = v20;
      }
    }
    if ( !v20 )
      break;
    v38 = a2;
    started = UsbhFdoColdStartPdo((_DWORD)a1);
    v10 = started;
    if ( (started & 0xC0000000) == 0xC0000000 )
    {
      UsbhUnlatchPdo((__int64)a1, v20, 0LL, 0x434F4C44u);
      goto LABEL_47;
    }
    UsbhUnlatchPdo((__int64)a1, v20, 0LL, 0x434F4C44u);
LABEL_103:
    ++v12;
  }
  v33 = a1->DeviceExtension;
  if ( !v33 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v33 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v33);
  PortState = UsbhQueryPortState((_DWORD)a1);
  v35 = *(unsigned __int16 *)(v18 + 4);
  v10 = PortState;
  started = PortState;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v36 = a1->DeviceExtension;
    if ( v36 )
    {
      v37 = *((_QWORD *)v36 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v36 + 220) & *((_DWORD *)v36 + 221));
      *(_DWORD *)v37 = 826500195;
      *(_QWORD *)(v37 + 8) = 0LL;
      *(_QWORD *)(v37 + 16) = v35;
      *(_QWORD *)(v37 + 24) = PortState;
    }
  }
  if ( (PortState & 0xC0000000) != 0xC0000000 )
    goto LABEL_103;
  Log((__int64)a1, 16, 1667515186, 0LL, PortState);
  if ( (unsigned __int8)Usb_Disconnected(v10) )
  {
    UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_HUB_DISCONNECT);
    v10 = 0;
    started = 0;
    goto LABEL_103;
  }
  UsbhException((int)a1, *(unsigned __int16 *)(v18 + 4), 48, v66, 0, v10, 0, usbfile_fdopwr_c, 3004, v66);
  v38 = a2;
LABEL_47:
  FdoExt((__int64)a1);
  Log((__int64)a1, 2048, 1346458174, 0LL, 0LL);
  v40 = UsbhDispatch_BusEvent(a1, v38, (unsigned int)(v39 + 8));
  Log((__int64)a1, 2048, 1346458172, 0LL, v40);
  if ( *((_BYTE *)v72 + 5268) == v41 )
    goto LABEL_48;
  v67 = 1;
  while ( 2 )
  {
    if ( v67 > *((unsigned __int8 *)FdoExt((__int64)a1) + 2938) )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_48:
          v42 = (unsigned __int8 *)a1->DeviceExtension;
          if ( !v42 )
            goto LABEL_128;
          if ( *(_DWORD *)v42 != 541218120 )
            UsbhTrapFatal_Dbg(a1, v42);
          if ( v7 > v42[2938] )
            goto LABEL_83;
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
          v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
          WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
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
              goto LABEL_128;
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
          WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v45);
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
              goto LABEL_128;
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
LABEL_82:
          ++v7;
        }
        v60 = PdoExt(v43);
        v61 = v60;
        if ( *((_BYTE *)v60 + 2740) )
        {
          UsbhUnlatchPdo((__int64)a1, v43, 0LL, 0x434C4432u);
          goto LABEL_82;
        }
        if ( (v60[355] & 0x4000) != 0 )
        {
          Log((__int64)a1, 16, 1346654803, 0LL, 0LL);
          UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_RESET);
          v62 = UsbhSyncResetDeviceInternal(a1);
          v10 = v62;
          if ( (v62 & 0xC0000000) == 0xC0000000 )
          {
            Log((__int64)a1, 16, 1919249970, 0LL, v62);
            UsbhQueueSoftConnectChange((_DWORD)a1);
            v61[355] &= ~0x4000u;
            UsbhException((int)a1, 0, 88, 0, 0, v10, 0, usbfile_fdopwr_c, 3445, 0);
            v10 = 0;
          }
          else
          {
            v61[355] &= ~0x4000u;
          }
        }
        UsbhUnlatchPdo((__int64)a1, v43, 0LL, 0x434C4432u);
        ++v7;
      }
    }
    v68 = UsbhLatchPdo(a1, v67, 0LL, 1129071666LL);
    v69 = v68;
    if ( !v68 )
      goto LABEL_116;
    v70 = PdoExt(v68);
    if ( !*((_BYTE *)v70 + 2740) )
      goto LABEL_115;
    v10 = UsbhSyncResetDeviceInternal(a1);
    if ( (v10 & 0x80000000) == 0 )
    {
      UsbhResetNotifyCompletion(*(_QWORD *)(v38 + 8));
LABEL_115:
      UsbhUnlatchPdo((__int64)a1, v69, 0LL, 0x434C4432u);
LABEL_116:
      ++v67;
      continue;
    }
    break;
  }
  UsbhQueueSoftConnectChange((_DWORD)a1);
  v70[355] &= ~0x4000u;
  UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE);
  UsbhUnlatchPdo((__int64)a1, v69, 0LL, 0x434C4432u);
  return v10;
}
