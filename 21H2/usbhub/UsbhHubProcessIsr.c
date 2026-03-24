/*
 * XREFs of UsbhHubProcessIsr @ 0x1C000F090
 * Callers:
 *     UsbhHubIsrWorker @ 0x1C001B9C0 (UsbhHubIsrWorker.c)
 * Callees:
 *     UsbhPostInterrupt @ 0x1C00033C0 (UsbhPostInterrupt.c)
 *     UsbhDecHubBusy @ 0x1C0003610 (UsbhDecHubBusy.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhEtwWrite @ 0x1C00125E0 (UsbhEtwWrite.c)
 *     UsbhQueryChange @ 0x1C00167EC (UsbhQueryChange.c)
 *     UsbhPCE_HardwareWake @ 0x1C0016910 (UsbhPCE_HardwareWake.c)
 *     UsbhPCE_QueueChange @ 0x1C00169C4 (UsbhPCE_QueueChange.c)
 *     UsbhGetPortData @ 0x1C0016CA0 (UsbhGetPortData.c)
 *     UsbhQueueWorkItemEx @ 0x1C0017B0C (UsbhQueueWorkItemEx.c)
 *     UsbhEtwGetHubInfo @ 0x1C001BAFC (UsbhEtwGetHubInfo.c)
 *     UsbhHubAckPortChange @ 0x1C001C03C (UsbhHubAckPortChange.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ @ 0x1C002EEF4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_HW_Stop @ 0x1C00350FC (UsbhPCE_HW_Stop.c)
 *     UsbhQueuePauseChange @ 0x1C0035820 (UsbhQueuePauseChange.c)
 *     UsbhHubAckHubChange @ 0x1C0039260 (UsbhHubAckHubChange.c)
 *     UsbhQueryHubState @ 0x1C00399BC (UsbhQueryHubState.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 */

int __fastcall UsbhHubProcessIsr(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  int v4; // edi
  struct _KEVENT *v6; // r14
  struct _KEVENT *v7; // rsi
  int v8; // r9d
  char *PoolWithTag; // rax
  __int64 v10; // rdi
  _LIST_ENTRY *v11; // rax
  _LIST_ENTRY *Blink; // rdx
  unsigned __int16 v13; // si
  int v14; // r15d
  __int64 v15; // r13
  __int64 v16; // rdx
  char v17; // r15
  _DWORD *v18; // rax
  int v19; // ecx
  int v20; // r9d
  __int16 v21; // ax
  __int16 v22; // r9
  _UNKNOWN **v23; // rax
  int v24; // r9d
  int v25; // r9d
  int HubState; // esi
  __int64 v27; // r12
  char v28; // r9
  __int64 v29; // rdx
  __int16 v30; // r9
  int v31; // r9d
  int v32; // r9d
  __int64 v33; // rdx
  __int16 v34; // r9
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-99h]
  __int64 v37; // [rsp+28h] [rbp-91h]
  int *v38; // [rsp+30h] [rbp-89h]
  __int64 v39; // [rsp+38h] [rbp-81h]
  _WORD *v40; // [rsp+40h] [rbp-79h]
  int v41; // [rsp+48h] [rbp-71h]
  __int64 v42; // [rsp+50h] [rbp-69h]
  int v43; // [rsp+60h] [rbp-59h] BYREF
  _WORD v44[2]; // [rsp+64h] [rbp-55h] BYREF
  int v45; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v46; // [rsp+6Ch] [rbp-4Dh]
  unsigned int v47; // [rsp+70h] [rbp-49h] BYREF
  __int64 v48; // [rsp+78h] [rbp-41h] BYREF
  __int64 v49; // [rsp+80h] [rbp-39h]
  int v50; // [rsp+88h] [rbp-31h]
  __int64 PortData; // [rsp+90h] [rbp-29h]
  int v52; // [rsp+98h] [rbp-21h]
  __int16 v53; // [rsp+9Ch] [rbp-1Dh]
  __int16 v54; // [rsp+9Eh] [rbp-1Bh]
  __int16 v55; // [rsp+A0h] [rbp-19h]
  __int16 v56; // [rsp+A2h] [rbp-17h]
  _OWORD v57[2]; // [rsp+A8h] [rbp-11h] BYREF
  int v58; // [rsp+C8h] [rbp+Fh]

  v3 = a2;
  v46 = a2;
  v4 = a3;
  v45 = 0;
  v49 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 36, (__int64)"FKh&", a2);
  Log((_DWORD)DeviceObject, 4, 1769107799, v4, v3);
  v6 = (struct _KEVENT *)FdoExt((__int64)DeviceObject);
  v7 = (struct _KEVENT *)FdoExt((__int64)DeviceObject);
  v7[142].Header.Type = 1;
  KeWaitForSingleObject(&v7[139], Executive, 0, 0, 0LL);
  Log((_DWORD)DeviceObject, 0x10000, 1212771939, 0, v7[142].Header.Signalling);
  if ( v7[142].Header.Signalling == (_BYTE)v8 )
  {
    KeSetEvent(v7 + 139, 0, 0);
    v10 = 0LL;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(
                            SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory),
                            (unsigned int)(v8 + 40),
                            0x42554855u);
    v10 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)(PoolWithTag + 4) = 0LL;
      *(_QWORD *)(PoolWithTag + 12) = 0LL;
      *((_DWORD *)PoolWithTag + 5) = 0;
      *((_QWORD *)PoolWithTag + 4) = 826438515LL;
      *(_DWORD *)PoolWithTag = 1215918946;
      *((_QWORD *)PoolWithTag + 3) = DeviceObject;
      v11 = (_LIST_ENTRY *)(PoolWithTag + 8);
      Blink = v7[129].Header.WaitListHead.Blink;
      if ( Blink->Flink != &v7[129].Header.WaitListHead )
        __fastfail(3u);
      v11->Flink = &v7[129].Header.WaitListHead;
      v11->Blink = Blink;
      Blink->Flink = v11;
      v7[129].Header.WaitListHead.Blink = v11;
    }
    else
    {
      ++v7[130].Header.LockNV;
      v10 = 1936941672LL;
    }
    KeSetEvent(v7 + 139, 0, 0);
  }
  _InterlockedIncrement(&v6[114].Header.Lock);
  v13 = (unsigned __int8)v3;
  Log((_DWORD)DeviceObject, 4, 1769107831, (unsigned __int8)v3, 0LL);
  if ( (_BYTE)v3 )
  {
    PortData = UsbhGetPortData(DeviceObject, (unsigned __int8)v3);
    if ( PortData )
    {
      v44[0] = 0;
      v48 = 0LL;
      v14 = UsbhQueryChange((_DWORD)DeviceObject);
      v15 = v14;
      Log((_DWORD)DeviceObject, 4, 1364550504, v13, v14);
      if ( (v14 & 0xC0000000) != 0xC0000000 )
      {
        v17 = v46;
        v47 = v46;
        memset(v57, 0, sizeof(v57));
        v58 = 0;
        if ( dword_1C006C5F0 )
        {
          v18 = FdoExt((__int64)DeviceObject);
          v52 = v18[1298];
          v53 = *((_WORD *)v18 + 2598);
          v19 = v18[1300];
          v54 = v19;
          v50 = v19;
          v55 = *((_WORD *)v18 + 2614);
          v56 = *((_WORD *)v18 + 2615);
          UsbhEtwGetHubInfo(v18, v57);
          v42 = 0LL;
          v41 = 2;
          v40 = v44;
          v39 = 4LL;
          v38 = (int *)&v47;
          v37 = 36LL;
          Timeout = (PLARGE_INTEGER)v57;
          UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PORT_STATUS_CHANGE, 0LL);
        }
        if ( !v44[0] )
          goto LABEL_19;
        v14 = UsbhHubAckPortChange(DeviceObject, v13, v44, &v45, Timeout, v37, v38, v39, v40, v41, v42);
        v15 = v14;
        Log((_DWORD)DeviceObject, 4, 1097033831, v13, v14);
        if ( (v14 & 0xC0000000) != 0xC0000000 )
        {
          v21 = v44[0];
          if ( (v44[0] & 1) != 0 )
          {
            Log((_DWORD)DeviceObject, 4, 1112425259, v20, 0LL);
            _InterlockedIncrement((volatile signed __int32 *)(PortData + 404));
            v21 = v44[0];
          }
          LOWORD(v48) = v21;
          UsbhPCE_HardwareWake(DeviceObject, v49, v13);
          UsbhPCE_QueueChange(DeviceObject, v13, v48, v49);
          Log((_DWORD)DeviceObject, 4, 1365469287, v13, (__int64)&v48);
          v17 = v46;
LABEL_19:
          UsbhDecHubBusy((__int64)DeviceObject, v16, (_QWORD *)v10);
          _InterlockedDecrement(&v6[114].Header.Lock);
          UsbhPostInterrupt(DeviceObject);
          Log((_DWORD)DeviceObject, 4, 1769422385, 0, v6[114].Header.LockNV);
          v23 = &WPP_RECORDER_INITIALIZED;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) != v22 )
          {
            LODWORD(v23) = WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 37, (__int64)"FKh&", v17);
          }
          return (int)v23;
        }
      }
      KeSetEvent(v6 + 112, 0, 0);
      if ( (unsigned __int8)Usb_Disconnected((unsigned int)v14) )
      {
        Log((_DWORD)DeviceObject, 4, 1769436977, 0, v15);
        UsbhQueuePauseChange(DeviceObject, v13, v49);
        UsbhPCE_HW_Stop(DeviceObject, v13, v49);
      }
      else
      {
        Log((_DWORD)DeviceObject, 4, 1769436978, 0, v15);
        LOBYTE(v41) = 1;
        UsbhException((int)DeviceObject, v13, 1, v25, v25, v14, v45, usbfile_bus_c, 3213, v41);
      }
      LOBYTE(v3) = v46;
    }
    else
    {
      Log((_DWORD)DeviceObject, 4, 1769437016, 0, -1073741811LL);
      LOBYTE(v41) = v24;
      UsbhException((int)DeviceObject, (unsigned __int8)v3, v24 + 1, v24, 0, -1073741811, 0, usbfile_bus_c, 3118, v41);
      KeSetEvent(v6 + 112, 0, 0);
    }
    goto LABEL_54;
  }
  v43 = 0;
  HubState = UsbhQueryHubState((_DWORD)DeviceObject);
  v27 = HubState;
  Log((_DWORD)DeviceObject, 4, 1364551795, 0, HubState);
  Log((_DWORD)DeviceObject, 4, 1364551779, 0, 0LL);
  if ( HubState < 0 )
    goto LABEL_46;
  v6[127].Header.LockNV = 500;
  if ( (v43 & 0x10000) != 0 )
    LODWORD(v6[126].Header.WaitListHead.Flink) = 500;
  HubState = UsbhHubAckHubChange(DeviceObject, &v43, &v45);
  v27 = HubState;
  Log((_DWORD)DeviceObject, 4, 1095263080, 0, HubState);
  if ( HubState < 0 || (v43 & 2) != 0 || BYTE1(v6[125].Header.WaitListHead.Flink) == v28 && (v43 & 0x20000) != 0 )
  {
LABEL_46:
    KeSetEvent(v6 + 112, 0, 0);
    if ( (v43 & 2) != 0 || !BYTE1(v6[125].Header.WaitListHead.Flink) && (v43 & 0x20000) != 0 )
    {
      Log((_DWORD)DeviceObject, 4, 1749512054, 0, v27);
      if ( BYTE2(v6[125].Header.WaitListHead.Flink) == (_BYTE)v32 )
      {
        BYTE2(v6[125].Header.WaitListHead.Flink) = 1;
        UsbhQueueWorkItemEx(
          (_DWORD)DeviceObject,
          v32 + 1,
          (unsigned int)UsbhSetHubOvercurrentDetectedKey,
          v32,
          0,
          1666340431,
          0LL);
      }
      LOBYTE(v41) = 0;
      UsbhException((int)DeviceObject, 0, 75, (int)&v43, 4, HubState, v45, usbfile_bus_c, 3318, v41);
    }
    else if ( !(unsigned __int8)Usb_Disconnected((unsigned int)HubState) )
    {
      Log((_DWORD)DeviceObject, 4, 1769433138, 0, v27);
      LOBYTE(v41) = 0;
      UsbhException((int)DeviceObject, 0, v31 + 1, v31, 0, HubState, v45, usbfile_bus_c, 3331, v41);
    }
LABEL_54:
    Log((_DWORD)DeviceObject, 4, 1769422386, 0, v6[114].Header.LockNV);
    _InterlockedDecrement(&v6[114].Header.Lock);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      && LOWORD(WPP_GLOBAL_Control->DeviceType) != v34 )
    {
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 39, (__int64)"FKh&", v3);
    }
    LODWORD(v23) = UsbhDecHubBusy((__int64)DeviceObject, v33, (_QWORD *)v10);
    return (int)v23;
  }
  LOBYTE(v41) = 0;
  if ( (v43 & 0x20000) != 0 )
  {
    UsbhException((int)DeviceObject, 0, 72, (int)&v43, 4, HubState, v45, usbfile_bus_c, 3270, v41);
  }
  else if ( (v43 & 0x10000) != 0 )
  {
    UsbhException((int)DeviceObject, 0, 73, (int)&v43, 4, HubState, v45, usbfile_bus_c, 3273, v41);
  }
  else
  {
    UsbhException((int)DeviceObject, 0, 74, (int)&v43, 4, HubState, v45, usbfile_bus_c, 3277, v41);
  }
  _InterlockedDecrement(&v6[114].Header.Lock);
  UsbhDecHubBusy((__int64)DeviceObject, v29, (_QWORD *)v10);
  UsbhPostInterrupt(DeviceObject);
  Log((_DWORD)DeviceObject, 4, 1769422387, 0, v6[114].Header.LockNV);
  v23 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) != v30 )
  {
    LODWORD(v23) = WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 38, (__int64)"FKh&");
  }
  return (int)v23;
}
