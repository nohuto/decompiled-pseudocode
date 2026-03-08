/*
 * XREFs of DxgkPowerOnOffMonitor @ 0x1C01E1214
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C01A7070 (DpiGdoDispatchInternalIoctl.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C030302C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1C0351080 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z.c)
 * Callees:
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0004750 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C00048E4 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A240 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DxgkReportMonitorPowerRapidHpdTrigerEvent @ 0x1C001A28C (DxgkReportMonitorPowerRapidHpdTrigerEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0180684 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0180B30 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoSetDevicePower @ 0x1C01E1140 (DpiPdoSetDevicePower.c)
 *     MonitorEnableDisableMonitor @ 0x1C01E18AC (MonitorEnableDisableMonitor.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C01E67E0 (DpiFdoInvalidateChildRelations.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x1C03A577C (DpiPdoSetMonitorDriverInterfaceState.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C03BFFD0 (MonitorRemovePhysicalMonitor.c)
 */

__int64 __fastcall DxgkPowerOnOffMonitor(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        int *a4,
        char a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v6; // rbx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *QuadPart; // r15
  int *v8; // r13
  bool v9; // zf
  struct _DEVICE_OBJECT *v11; // rdi
  unsigned int v12; // r12d
  int v14; // ecx
  __int64 v15; // rax
  char *v16; // r13
  _QWORD **v17; // rsi
  _QWORD *v18; // r14
  _QWORD *v19; // r15
  _QWORD *v20; // r13
  struct _DEVICE_OBJECT *v21; // rcx
  struct _ERESOURCE *v22; // r14
  int v23; // r14d
  union _LARGE_INTEGER v24; // rax
  __int64 v25; // r13
  unsigned int v26; // esi
  ULONG v27; // r12d
  NTSTATUS v28; // eax
  int v29; // eax
  _QWORD *v30; // rsi
  _QWORD *v31; // r14
  PVOID v32; // r14
  unsigned int v33; // esi
  _QWORD *v34; // rbx
  PVOID *v35; // rcx
  __int64 DeviceExtension; // rsi
  PIRP v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  _DWORD *i; // rsi
  __int64 v42; // rcx
  __int64 v43; // rcx
  _QWORD *v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  char WaitMode; // [rsp+20h] [rbp-B9h]
  unsigned int InputBuffer; // [rsp+50h] [rbp-89h] BYREF
  PVOID Object; // [rsp+58h] [rbp-81h] BYREF
  int *v50; // [rsp+60h] [rbp-79h]
  unsigned int v51; // [rsp+68h] [rbp-71h]
  PVOID P; // [rsp+70h] [rbp-69h]
  _DWORD *v53; // [rsp+78h] [rbp-61h]
  __int64 v54; // [rsp+80h] [rbp-59h]
  union _LARGE_INTEGER Timeout; // [rsp+88h] [rbp-51h] BYREF
  PKWAIT_BLOCK WaitBlockArray; // [rsp+90h] [rbp-49h]
  struct _KEVENT Event; // [rsp+98h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v59; // [rsp+C0h] [rbp-19h] BYREF

  v6 = *(_QWORD *)(a1 + 64);
  QuadPart = a6;
  v59 = 0LL;
  v8 = a4;
  v50 = a4;
  v9 = *(_DWORD *)(v6 + 3500) == -1;
  v53 = a3;
  v51 = a2;
  LODWORD(v11) = 0;
  v54 = a1;
  v12 = 0;
  Timeout.QuadPart = (LONGLONG)a6;
  InputBuffer = 0;
  P = 0LL;
  WaitBlockArray = 0LL;
  if ( !v9 )
    KeWaitForSingleObject(&::Event, Executive, 0, 0, 0LL);
  if ( *v8 <= 1 )
  {
    for ( i = MONITOR_MGR::_pUsb4Manager; ; KeWaitForSingleObject(i + 32, Executive, 0, 0, 0LL) )
    {
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&Object, (struct DXGFASTMUTEX *)(i + 20));
      if ( !i[18] )
        break;
      MUTEX_LOCK::~MUTEX_LOCK((DXGFASTMUTEX **)&Object);
    }
    MUTEX_LOCK::~MUTEX_LOCK((DXGFASTMUTEX **)&Object);
    a5 = 1;
  }
  else
  {
    DisplayLogSetMonitorPowerStage(a6, 1LL, 0LL, &v59);
    LODWORD(v11) = DpiAcquireCoreSyncAccessSafe(a1, 1);
    if ( (int)v11 >= 0 )
    {
      DxgkReportMonitorPowerRapidHpdTrigerEvent(*(_QWORD *)(v6 + 3912), 1u);
      MonitorEnableDisableMonitor(*(struct DXGADAPTER **)(v6 + 3912), WaitMode, 1LL, a6);
      DpiReleaseCoreSyncAccessSafe(a1, 1);
    }
    DisplayLogSetMonitorPowerStage(a6, 2147483649LL, (unsigned int)v11, &v59);
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v6 + 484) )
    DpiCheckForOutstandingD3Requests(v6);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
  v14 = *(_DWORD *)(v6 + 236);
  if ( v14 == 2 || *(_DWORD *)(v6 + 240) == 2 && ((v14 - 3) & 0xFFFFFFFC) == 0 && v14 != 4 )
  {
    if ( *(_BYTE *)(v6 + 3529) && *v8 == 1 )
    {
      DisplayLogSetMonitorPowerStage(a6, 2LL, 0LL, &v59);
      DpiFdoInvalidateChildRelations(a1, 6LL, a6);
      DisplayLogSetMonitorPowerStage(a6, 2147483650LL, 0LL, &v59);
    }
    DisplayLogSetMonitorPowerStage(a6, 4LL, 0LL, &v59);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 3320), 1u);
    if ( a5 )
    {
      v15 = *(unsigned int *)(v6 + 3680);
      if ( (_DWORD)v15 )
      {
        P = (PVOID)ExAllocatePool2(64LL, 56 * v15, 1953656900LL);
        v16 = (char *)P;
        if ( !P )
          WdLogSingleEntry1(6LL, 0LL);
        WaitBlockArray = (PKWAIT_BLOCK)&v16[8 * *(unsigned int *)(v6 + 3680)];
      }
    }
    v17 = (_QWORD **)(v6 + 3480);
    v18 = *(_QWORD **)(v6 + 3480);
    if ( v18 != (_QWORD *)(v6 + 3480) )
    {
      v19 = P;
      do
      {
        v20 = v18 - 4;
        v18 = (_QWORD *)*v18;
        if ( *(_DWORD *)v20 == 1 )
        {
          if ( *v53 == -1 )
            goto LABEL_20;
          v42 = 0LL;
          if ( v51 )
          {
            do
            {
              if ( v53[v42] == *((_DWORD *)v20 + 6) )
                break;
              v42 = (unsigned int)(v42 + 1);
            }
            while ( (unsigned int)v42 < v51 );
            if ( (unsigned int)v42 < v51 )
            {
LABEL_20:
              v21 = (struct _DEVICE_OBJECT *)v20[6];
              if ( v21 )
              {
                DeviceExtension = (__int64)v21->DeviceExtension;
                Object = IoGetAttachedDeviceReference(v21);
                v11 = (struct _DEVICE_OBJECT *)Object;
                if ( Object )
                {
                  memset(&Event, 0, sizeof(Event));
                  IoStatusBlock = 0LL;
                  KeInitializeEvent(&Event, NotificationEvent, 0);
                  InputBuffer = *v50;
                  v38 = IoBuildDeviceIoControlRequest(
                          0x23242Fu,
                          v11,
                          &InputBuffer,
                          4u,
                          0LL,
                          0,
                          1u,
                          &Event,
                          &IoStatusBlock);
                  if ( v38 )
                  {
                    v38->IoStatus.Status = -1073741637;
                    LODWORD(v11) = IofCallDriver(v11, v38);
                    if ( (_DWORD)v11 == 259 )
                    {
                      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                      LODWORD(v11) = IoStatusBlock.Status;
                    }
                    if ( (int)v11 < 0 )
                    {
                      KeEnterCriticalRegion();
                      if ( *(_BYTE *)(DeviceExtension + 484) )
                        DpiCheckForOutstandingD3Requests(DeviceExtension);
                      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
                      LODWORD(v11) = DpiPdoSetDevicePower(v20[6], *v50, 0);
                      if ( *(_BYTE *)(DeviceExtension + 484) )
                        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
                      ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
                      KeLeaveCriticalRegion();
                    }
                    else if ( v19 )
                    {
                      ObfReferenceObject(*(PVOID *)(DeviceExtension + 24));
                      v39 = 1008LL;
                      v40 = v12;
                      if ( *v50 != 1 )
                        v39 = 984LL;
                      ++v12;
                      v19[v40] = DeviceExtension + v39;
                    }
                  }
                  else
                  {
                    LODWORD(v11) = -1073741670;
                    WdLogSingleEntry1(6LL, -1073741670LL);
                  }
                  ObfDereferenceObject(Object);
                }
                else
                {
                  LODWORD(v11) = -1073741823;
                  WdLogSingleEntry1(2LL, -1073741823LL);
                }
                v17 = (_QWORD **)(v6 + 3480);
              }
              *((_DWORD *)v20 + 17) = *v50;
            }
          }
        }
      }
      while ( v18 != v17 );
      QuadPart = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)Timeout.QuadPart;
      InputBuffer = v12;
    }
    v22 = (struct _ERESOURCE *)(v6 + 3320);
    ExReleaseResourceLite((PERESOURCE)(v6 + 3320));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
    if ( v12 )
    {
      v23 = 10;
      v24.QuadPart = -1000000LL * v12;
      Object = (PVOID)v24.QuadPart;
LABEL_28:
      v25 = 0LL;
      v26 = v12;
      --v23;
      while ( 1 )
      {
        Timeout = v24;
        v27 = v26;
        if ( v26 > 0x40 )
          v27 = 64;
        v28 = KeWaitForMultipleObjects(v27, (PVOID *)P + v25, WaitAll, Executive, 0, 0, &Timeout, WaitBlockArray);
        v11 = (struct _DEVICE_OBJECT *)v28;
        if ( v28 == 258 )
        {
          v43 = 3LL;
          if ( !v23 )
            v43 = 2LL;
          WdLogSingleEntry1(v43, 258LL);
        }
        else if ( v28 )
        {
          DisplayLogSetMonitorPowerStage(QuadPart, 2147483652LL, (unsigned int)v28, &v59);
          WdLogSingleEntry1(2LL, v11);
          v8 = v50;
          goto LABEL_49;
        }
        v24.QuadPart = (LONGLONG)Object;
        v25 = v27 + (unsigned int)v25;
        v26 -= v27;
        if ( !v26 )
        {
          if ( (_DWORD)v11 != 258 || (v12 = InputBuffer, !v23) )
          {
            v22 = (struct _ERESOURCE *)(v6 + 3320);
            v17 = (_QWORD **)(v6 + 3480);
            break;
          }
          goto LABEL_28;
        }
      }
    }
    DisplayLogSetMonitorPowerStage(QuadPart, 2147483652LL, (unsigned int)v11, &v59);
    v8 = v50;
  }
  else
  {
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
    v22 = (struct _ERESOURCE *)(v6 + 3320);
    v17 = (_QWORD **)(v6 + 3480);
  }
  if ( *v8 == 1 )
  {
    DisplayLogSetMonitorPowerStage(QuadPart, 8LL, 0LL, &v59);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiCheckForOutstandingD3Requests(v6);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v22, 1u);
    v29 = DpiAcquireCoreSyncAccessSafe(v54, 1);
    LODWORD(v11) = v29;
    if ( v29 < 0 )
    {
      WdLogSingleEntry1(4LL, v29);
    }
    else
    {
      v30 = *v17;
      if ( v30 != (_QWORD *)(v6 + 3480) )
      {
        do
        {
          v31 = v30;
          v30 = (_QWORD *)*v30;
          if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v31 - 7)) && !*((_BYTE *)v31 + 34) )
          {
            MonitorRemovePhysicalMonitor(*(void **)(v6 + 3912), *((_DWORD *)v31 - 2), (__int64)QuadPart);
            v44 = (_QWORD *)v31[2];
            if ( v44 )
            {
              v45 = v44[8];
              if ( v45 )
              {
                if ( *(_BYTE *)(v45 + 944) )
                {
                  v46 = DpiPdoSetMonitorDriverInterfaceState(v44);
                  LODWORD(v11) = v46;
                  if ( v46 < 0 )
                    WdLogSingleEntry1(3LL, v46);
                }
              }
            }
          }
        }
        while ( v30 != (_QWORD *)(v6 + 3480) );
        v22 = (struct _ERESOURCE *)(v6 + 3320);
      }
      DxgkReportMonitorPowerRapidHpdTrigerEvent(*(_QWORD *)(v6 + 3912), 0);
      MonitorEnableDisableMonitor(*(struct DXGADAPTER **)(v6 + 3912), WaitMode, 0LL, QuadPart);
      DpiReleaseCoreSyncAccessSafe(v54, 1);
    }
    DisplayLogSetMonitorPowerStage(QuadPart, 2147483656LL, (unsigned int)v11, &v59);
    ExReleaseResourceLite(v22);
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
  }
LABEL_49:
  v32 = P;
  if ( P )
  {
    v33 = InputBuffer;
    if ( InputBuffer )
    {
      v34 = (char *)P + 8 * InputBuffer;
      do
      {
        v35 = (PVOID *)(*--v34 - 984LL);
        if ( *v8 != 1 )
          v35 = (PVOID *)(*v34 - 960LL);
        ObfDereferenceObject(*v35);
        --v33;
      }
      while ( v33 );
    }
    ExFreePoolWithTag(v32, 0);
  }
  return (unsigned int)v11;
}
