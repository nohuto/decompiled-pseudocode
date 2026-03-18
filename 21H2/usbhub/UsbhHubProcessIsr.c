/*
 * XREFs of UsbhHubProcessIsr @ 0x1C00083B0
 * Callers:
 *     UsbhHubIsrWorker @ 0x1C000DBD0 (UsbhHubIsrWorker.c)
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C0002868 (UsbhQueueWorkItemEx.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhEtwWrite @ 0x1C000CB00 (UsbhEtwWrite.c)
 *     UsbhGetPortData @ 0x1C000F370 (UsbhGetPortData.c)
 *     UsbhPostInterrupt @ 0x1C00104E0 (UsbhPostInterrupt.c)
 *     UsbhDecHubBusy @ 0x1C0010740 (UsbhDecHubBusy.c)
 *     UsbhHubAckPortChange @ 0x1C001A524 (UsbhHubAckPortChange.c)
 *     UsbhQueryChange @ 0x1C001A8AC (UsbhQueryChange.c)
 *     UsbhEtwGetHubInfo @ 0x1C001E0D8 (UsbhEtwGetHubInfo.c)
 *     UsbhPCE_HardwareWake @ 0x1C001E4CC (UsbhPCE_HardwareWake.c)
 *     UsbhPCE_QueueChange @ 0x1C001E628 (UsbhPCE_QueueChange.c)
 *     __security_check_cookie @ 0x1C001F330 (__security_check_cookie.c)
 *     Usb_Disconnected @ 0x1C0028F5C (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_HW_Stop @ 0x1C0033D98 (UsbhPCE_HW_Stop.c)
 *     UsbhQueuePauseChange @ 0x1C00344BC (UsbhQueuePauseChange.c)
 *     UsbhHubAckHubChange @ 0x1C0037F88 (UsbhHubAckHubChange.c)
 *     UsbhQueryHubState @ 0x1C00386EC (UsbhQueryHubState.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 */

_UNKNOWN **__fastcall UsbhHubProcessIsr(struct _DEVICE_OBJECT *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  int v4; // edi
  struct _KEVENT *v6; // rdi
  struct _KEVENT *v7; // rsi
  char v8; // r9
  __int64 v9; // r14
  __int64 Pool2; // rax
  _LIST_ENTRY *v11; // rax
  _LIST_ENTRY *Blink; // rdx
  unsigned __int16 v13; // si
  int v14; // r9d
  int v15; // r15d
  __int64 v16; // r13
  __int64 v17; // rdx
  char v18; // r15
  _DWORD *v19; // rax
  int v20; // r9d
  __int16 v21; // ax
  __int16 v22; // r9
  _UNKNOWN **result; // rax
  int v24; // r9d
  int HubState; // esi
  __int64 v26; // r15
  char v27; // r9
  __int64 v28; // rdx
  __int16 v29; // r9
  int v30; // r9d
  __int64 v31; // r9
  __int64 v32; // rdx
  __int16 v33; // r9
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-89h]
  __int64 v35; // [rsp+28h] [rbp-81h]
  int *v36; // [rsp+30h] [rbp-79h]
  __int64 v37; // [rsp+38h] [rbp-71h]
  _WORD *v38; // [rsp+40h] [rbp-69h]
  int v39; // [rsp+48h] [rbp-61h]
  __int64 v40; // [rsp+50h] [rbp-59h]
  _WORD v41[2]; // [rsp+60h] [rbp-49h] BYREF
  int v42; // [rsp+64h] [rbp-45h] BYREF
  int v43[2]; // [rsp+68h] [rbp-41h] BYREF
  unsigned int v44; // [rsp+70h] [rbp-39h]
  unsigned int v45; // [rsp+78h] [rbp-31h] BYREF
  __int64 v46; // [rsp+80h] [rbp-29h] BYREF
  __int64 PortData; // [rsp+88h] [rbp-21h]
  int v48; // [rsp+90h] [rbp-19h]
  __int16 v49; // [rsp+94h] [rbp-15h]
  __int16 v50; // [rsp+96h] [rbp-13h]
  __int16 v51; // [rsp+98h] [rbp-11h]
  __int16 v52; // [rsp+9Ah] [rbp-Fh]
  _OWORD v53[2]; // [rsp+A0h] [rbp-9h] BYREF
  int v54; // [rsp+C0h] [rbp+17h]

  v3 = a2;
  v44 = a2;
  v4 = a3;
  v42 = 0;
  *(_QWORD *)v43 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 36, (__int64)"FKh&", a2);
  Log((_DWORD)a1, 4, 1769107799, v4, v3);
  v6 = (struct _KEVENT *)FdoExt((__int64)a1);
  v7 = (struct _KEVENT *)FdoExt((__int64)a1);
  v7[142].Header.Type = 1;
  KeWaitForSingleObject(&v7[139], Executive, 0, 0, 0LL);
  Log((_DWORD)a1, 0x10000, 1212771939, 0, v7[142].Header.Signalling);
  if ( v7[142].Header.Signalling == v8 )
  {
    KeSetEvent(v7 + 139, 0, 0);
    v9 = 0LL;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1112885333LL);
    v9 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1215918946;
      *(_QWORD *)(Pool2 + 24) = a1;
      *(_DWORD *)(Pool2 + 32) = 826438515;
      v11 = (_LIST_ENTRY *)(Pool2 + 8);
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
      v9 = 1936941672LL;
    }
    KeSetEvent(v7 + 139, 0, 0);
  }
  _InterlockedIncrement(&v6[114].Header.Lock);
  v13 = (unsigned __int8)v3;
  Log((_DWORD)a1, 4, 1769107831, (unsigned __int8)v3, 0LL);
  if ( (_BYTE)v3 )
  {
    PortData = UsbhGetPortData(a1, (unsigned __int8)v3);
    if ( !PortData )
    {
      Log((_DWORD)a1, 4, 1769437016, 0, -1073741811LL);
      UsbhException((int)a1, (unsigned __int8)v3, v14 + 1, v14, 0, -1073741811, 0, usbfile_bus_c, 3118, v14);
      KeSetEvent(v6 + 112, 0, 0);
LABEL_53:
      Log((_DWORD)a1, 4, 1769422386, 0, v6[114].Header.LockNV);
      _InterlockedDecrement(&v6[114].Header.Lock);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        && LOWORD(WPP_GLOBAL_Control->DeviceType) != v33 )
      {
        WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 39, (__int64)"FKh&", v3);
      }
      return (_UNKNOWN **)UsbhDecHubBusy(a1, v32, v9);
    }
    v41[0] = 0;
    v46 = 0LL;
    v15 = UsbhQueryChange((_DWORD)a1);
    v16 = v15;
    Log((_DWORD)a1, 4, 1364550504, v13, v15);
    if ( (v15 & 0xC0000000) != 0xC0000000 )
    {
      v18 = v44;
      v45 = v44;
      memset(v53, 0, sizeof(v53));
      v54 = 0;
      if ( dword_1C006A690 )
      {
        v19 = FdoExt((__int64)a1);
        v48 = v19[1298];
        v49 = *((_WORD *)v19 + 2598);
        v50 = v19[1300];
        v51 = *((_WORD *)v19 + 2614);
        v52 = *((_WORD *)v19 + 2615);
        UsbhEtwGetHubInfo(v19, v53);
        v40 = 0LL;
        v39 = 2;
        v38 = v41;
        v37 = 4LL;
        v36 = (int *)&v45;
        v35 = 36LL;
        Timeout = (PLARGE_INTEGER)v53;
        UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PORT_STATUS_CHANGE, 0LL);
      }
      if ( !v41[0] )
        goto LABEL_23;
      v15 = UsbhHubAckPortChange(a1, v13, v41, &v42, Timeout, v35, v36, v37, v38, v39, v40);
      v16 = v15;
      Log((_DWORD)a1, 4, 1097033831, v13, v15);
      if ( (v15 & 0xC0000000) != 0xC0000000 )
      {
        v21 = v41[0];
        if ( (v41[0] & 1) != 0 )
        {
          Log((_DWORD)a1, 4, 1112425259, v20, 0LL);
          _InterlockedIncrement((volatile signed __int32 *)(PortData + 404));
          v21 = v41[0];
        }
        LOWORD(v46) = v21;
        UsbhPCE_HardwareWake(a1, *(_QWORD *)v43, v13);
        UsbhPCE_QueueChange(a1, v13, v46, *(_QWORD *)v43);
        Log((_DWORD)a1, 4, 1365469287, v13, (__int64)&v46);
        v18 = v44;
LABEL_23:
        UsbhDecHubBusy(a1, v17, v9);
        _InterlockedDecrement(&v6[114].Header.Lock);
        UsbhPostInterrupt(a1);
        Log((_DWORD)a1, 4, 1769422385, 0, v6[114].Header.LockNV);
        result = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          && LOWORD(WPP_GLOBAL_Control->DeviceType) != v22 )
        {
          return (_UNKNOWN **)WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 37, (__int64)"FKh&", v18);
        }
        return result;
      }
    }
    KeSetEvent(v6 + 112, 0, 0);
    if ( (unsigned __int8)Usb_Disconnected((unsigned int)v15) )
    {
      Log((_DWORD)a1, 4, 1769436977, 0, v16);
      UsbhQueuePauseChange(a1, v13, *(_QWORD *)v43);
      UsbhPCE_HW_Stop(a1, v13, *(_QWORD *)v43);
    }
    else
    {
      Log((_DWORD)a1, 4, 1769436978, 0, v16);
      UsbhException((int)a1, v13, 1, v24, v24, v15, v42, usbfile_bus_c, 3213, 1);
    }
LABEL_52:
    LOBYTE(v3) = v44;
    goto LABEL_53;
  }
  v43[0] = 0;
  HubState = UsbhQueryHubState((_DWORD)a1);
  v26 = HubState;
  Log((_DWORD)a1, 4, 1364551795, 0, HubState);
  Log((_DWORD)a1, 4, 1364551779, 0, 0LL);
  if ( HubState < 0 )
    goto LABEL_44;
  v6[127].Header.LockNV = 500;
  if ( (v43[0] & 0x10000) != 0 )
    LODWORD(v6[126].Header.WaitListHead.Flink) = 500;
  HubState = UsbhHubAckHubChange(a1, v43, &v42);
  v26 = HubState;
  Log((_DWORD)a1, 4, 1095263080, 0, HubState);
  if ( HubState < 0 || (v43[0] & 2) != 0 || BYTE1(v6[125].Header.WaitListHead.Flink) == v27 && (v43[0] & 0x20000) != 0 )
  {
LABEL_44:
    KeSetEvent(v6 + 112, 0, 0);
    if ( (v43[0] & 2) != 0 || !BYTE1(v6[125].Header.WaitListHead.Flink) && (v43[0] & 0x20000) != 0 )
    {
      Log((_DWORD)a1, 4, 1749512054, 0, v26);
      if ( BYTE2(v6[125].Header.WaitListHead.Flink) == (_BYTE)v31 )
      {
        BYTE2(v6[125].Header.WaitListHead.Flink) = 1;
        UsbhQueueWorkItemEx((__int64)a1, v31 + 1, (int)UsbhSetHubOvercurrentDetectedKey, v31, 0, 1666340431, 0LL);
      }
      UsbhException((int)a1, 0, 75, (int)v43, 4, HubState, v42, usbfile_bus_c, 3318, 0);
    }
    else if ( !(unsigned __int8)Usb_Disconnected((unsigned int)HubState) )
    {
      Log((_DWORD)a1, 4, 1769433138, 0, v26);
      UsbhException((int)a1, 0, v30 + 1, v30, 0, HubState, v42, usbfile_bus_c, 3331, 0);
    }
    goto LABEL_52;
  }
  if ( (v43[0] & 0x20000) != 0 )
  {
    UsbhException((int)a1, 0, 72, (int)v43, 4, HubState, v42, usbfile_bus_c, 3270, 0);
  }
  else if ( (v43[0] & 0x10000) != 0 )
  {
    UsbhException((int)a1, 0, 73, (int)v43, 4, HubState, v42, usbfile_bus_c, 3273, 0);
  }
  else
  {
    UsbhException((int)a1, 0, 74, (int)v43, 4, HubState, v42, usbfile_bus_c, 3277, 0);
  }
  _InterlockedDecrement(&v6[114].Header.Lock);
  UsbhDecHubBusy(a1, v28, v9);
  UsbhPostInterrupt(a1);
  Log((_DWORD)a1, 4, 1769422387, 0, v6[114].Header.LockNV);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) != v29 )
  {
    return (_UNKNOWN **)WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 38, (__int64)"FKh&");
  }
  return result;
}
