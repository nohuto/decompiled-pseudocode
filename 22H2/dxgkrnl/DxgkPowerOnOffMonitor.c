/*
 * XREFs of DxgkPowerOnOffMonitor @ 0x1C0176CB4
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C012D8F0 (DpiGdoDispatchInternalIoctl.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025FCF4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1C029F900 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000983C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001FC54 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     DpiEnableD3Requests @ 0x1C00ECD4C (DpiEnableD3Requests.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C012E130 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C012E3AC (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoSetDevicePower @ 0x1C01755DC (DpiPdoSetDevicePower.c)
 *     MonitorEnableDisableMonitor @ 0x1C01772F4 (MonitorEnableDisableMonitor.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C01780D0 (DpiFdoInvalidateChildRelations.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x1C02D9F70 (DpiPdoSetMonitorDriverInterfaceState.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C02F4814 (MonitorRemovePhysicalMonitor.c)
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
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v7; // r13
  int *v8; // r12
  bool v9; // zf
  __int64 v10; // r14
  __int64 v11; // rdi
  unsigned int v12; // r15d
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // r12
  struct _KWAIT_BLOCK *v21; // rax
  _QWORD *v22; // r8
  _QWORD *v23; // r14
  unsigned int v24; // r13d
  _QWORD *v25; // r15
  struct _DEVICE_OBJECT *v26; // rcx
  int v27; // r14d
  union _LARGE_INTEGER v28; // rax
  __int64 v29; // r12
  unsigned int v30; // esi
  ULONG v31; // r15d
  NTSTATUS v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rsi
  _QWORD *v40; // r14
  PVOID v41; // r14
  unsigned int v42; // esi
  _QWORD *v43; // rbx
  __int64 v44; // rax
  __int64 DeviceExtension; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r12
  PIRP v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  _QWORD *v66; // rcx
  __int64 v67; // rax
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rax
  __int64 v73; // rax
  int WaitMode; // [rsp+20h] [rbp-A9h]
  unsigned int InputBuffer; // [rsp+50h] [rbp-79h] BYREF
  int *v76; // [rsp+58h] [rbp-71h]
  unsigned int v77; // [rsp+60h] [rbp-69h]
  PVOID P; // [rsp+68h] [rbp-61h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *QuadPart; // [rsp+70h] [rbp-59h]
  _DWORD *v80; // [rsp+78h] [rbp-51h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+80h] [rbp-49h]
  __int64 v82; // [rsp+88h] [rbp-41h]
  union _LARGE_INTEGER Timeout[2]; // [rsp+90h] [rbp-39h] BYREF
  struct _KEVENT Event; // [rsp+A0h] [rbp-29h] BYREF
  __int128 v85; // [rsp+B8h] [rbp-11h] BYREF

  v6 = *(_QWORD *)(a1 + 64);
  v7 = a6;
  v85 = 0LL;
  v8 = a4;
  v76 = a4;
  v9 = *(_DWORD *)(v6 + 3484) == -1;
  v80 = a3;
  v10 = a1;
  v77 = a2;
  LODWORD(v11) = 0;
  v82 = a1;
  v12 = 0;
  QuadPart = a6;
  InputBuffer = 0;
  P = 0LL;
  WaitBlockArray = 0LL;
  if ( !v9 )
    KeWaitForSingleObject(&::Event, Executive, 0, 0, 0LL);
  if ( *v8 <= 1 )
  {
    a5 = 1;
  }
  else
  {
    DisplayLogSetMonitorPowerStage(a6, 1LL, 0LL, &v85);
    LODWORD(v11) = DpiAcquireCoreSyncAccessSafe(v10, 1);
    if ( (int)v11 >= 0 )
    {
      MonitorEnableDisableMonitor(*(DXGADAPTER **)(v6 + 3896), WaitMode, 1LL, (__int64)a6);
      DpiReleaseCoreSyncAccessSafe(v10, 1);
    }
    DisplayLogSetMonitorPowerStage(a6, 2147483649LL, (unsigned int)v11, &v85);
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v6 + 484) )
    DpiCheckForOutstandingD3Requests(v6);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
  v14 = *(_DWORD *)(v6 + 236);
  if ( v14 == 2 || *(_DWORD *)(v6 + 240) == 2 && ((v14 - 3) & 0xFFFFFFFC) == 0 && v14 != 4 )
  {
    if ( *(_BYTE *)(v6 + 3513) && *v8 == 1 )
    {
      DisplayLogSetMonitorPowerStage(a6, 2LL, 0LL, &v85);
      DpiFdoInvalidateChildRelations(v10, 6LL, a6);
      DisplayLogSetMonitorPowerStage(a6, 2147483650LL, 0LL, &v85);
    }
    DisplayLogSetMonitorPowerStage(a6, 4LL, 0LL, &v85);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 3304), 1u);
    if ( a5 )
    {
      v15 = *(unsigned int *)(v6 + 3664);
      if ( (_DWORD)v15 )
      {
        P = ExAllocatePoolWithTag((POOL_TYPE)512, 56 * v15, 0x74727044u);
        v20 = (char *)P;
        if ( !P )
        {
          v57 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
          *(_QWORD *)(v57 + 24) = 0LL;
          WdLogEvent5_WdLowResource(v57);
        }
        v21 = (struct _KWAIT_BLOCK *)&v20[8 * *(unsigned int *)(v6 + 3664)];
        v8 = v76;
        WaitBlockArray = v21;
      }
    }
    v22 = (_QWORD *)(v6 + 3464);
    v23 = *(_QWORD **)(v6 + 3464);
    if ( v23 != (_QWORD *)(v6 + 3464) )
    {
      v24 = 0;
      do
      {
        v25 = v23 - 4;
        v23 = (_QWORD *)*v23;
        if ( *(_DWORD *)v25 == 1 )
        {
          if ( *v80 == -1 )
            goto LABEL_20;
          v58 = 0LL;
          if ( v77 )
          {
            do
            {
              if ( v80[v58] == *((_DWORD *)v25 + 6) )
                break;
              v58 = (unsigned int)(v58 + 1);
            }
            while ( (unsigned int)v58 < v77 );
            if ( (unsigned int)v58 < v77 )
            {
LABEL_20:
              v26 = (struct _DEVICE_OBJECT *)v25[6];
              if ( v26 )
              {
                DeviceExtension = (__int64)v26->DeviceExtension;
                AttachedDeviceReference = IoGetAttachedDeviceReference(v26);
                if ( AttachedDeviceReference )
                {
                  *(_OWORD *)&Timeout[0].LowPart = 0LL;
                  KeInitializeEvent(&Event, NotificationEvent, 0);
                  InputBuffer = *v76;
                  v50 = IoBuildDeviceIoControlRequest(
                          0x23242Fu,
                          AttachedDeviceReference,
                          &InputBuffer,
                          4u,
                          0LL,
                          0,
                          1u,
                          &Event,
                          (PIO_STATUS_BLOCK)Timeout);
                  if ( v50 )
                  {
                    v50->IoStatus.Status = -1073741637;
                    LODWORD(v11) = IofCallDriver(AttachedDeviceReference, v50);
                    if ( (_DWORD)v11 == 259 )
                    {
                      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                      LODWORD(v11) = Timeout[0].LowPart;
                    }
                    if ( (int)v11 < 0 )
                    {
                      KeEnterCriticalRegion();
                      if ( *(_BYTE *)(DeviceExtension + 484) )
                        DpiCheckForOutstandingD3Requests(DeviceExtension);
                      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
                      LODWORD(v11) = DpiPdoSetDevicePower(v25[6], *v76, 0);
                      if ( *(_BYTE *)(DeviceExtension + 484) )
                        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
                      ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
                      KeLeaveCriticalRegion();
                    }
                    else if ( P )
                    {
                      ObfReferenceObject(*(PVOID *)(DeviceExtension + 24));
                      v55 = 1008LL;
                      if ( *v76 != 1 )
                        v55 = 984LL;
                      v56 = v24++;
                      *((_QWORD *)P + v56) = DeviceExtension + v55;
                    }
                  }
                  else
                  {
                    LODWORD(v11) = -1073741670;
                    v59 = WdLogNewEntry5_WdLowResource(v52, v51, v53, v54);
                    *(_QWORD *)(v59 + 24) = -1073741670LL;
                    WdLogEvent5_WdLowResource(v59);
                  }
                  ObfDereferenceObject(AttachedDeviceReference);
                }
                else
                {
                  LODWORD(v11) = -1073741823;
                  v60 = WdLogNewEntry5_WdError(v48, v47);
                  *(_QWORD *)(v60 + 24) = -1073741823LL;
                  WdLogEvent5_WdError(v60);
                }
                v8 = v76;
                v22 = (_QWORD *)(v6 + 3464);
              }
              *((_DWORD *)v25 + 17) = *v8;
            }
          }
        }
      }
      while ( v23 != v22 );
      InputBuffer = v24;
      v7 = QuadPart;
      v12 = InputBuffer;
    }
    ExReleaseResourceLite((PERESOURCE)(v6 + 3304));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
    if ( v12 )
    {
      v27 = 10;
      v28.QuadPart = -1000000LL * v12;
      QuadPart = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v28.QuadPart;
      do
      {
        v29 = 0LL;
        v30 = v12;
        --v27;
        do
        {
          Timeout[0] = v28;
          v31 = v30;
          if ( v30 > 0x40 )
            v31 = 64;
          v32 = KeWaitForMultipleObjects(v31, (PVOID *)P + v29, WaitAll, Executive, 0, 0, Timeout, WaitBlockArray);
          v11 = v32;
          if ( v32 == 258 )
          {
            if ( v27 )
            {
              v61 = WdLogNewEntry5_WdWarning(v34, v33, v35);
              *(_QWORD *)(v61 + 24) = 258LL;
              WdLogEvent5_WdWarning(v61);
            }
            else
            {
              v62 = WdLogNewEntry5_WdError(v34, v33);
              *(_QWORD *)(v62 + 24) = 258LL;
              WdLogEvent5_WdError(v62);
            }
          }
          else if ( v32 )
          {
            DisplayLogSetMonitorPowerStage(v7, 2147483652LL, (unsigned int)v32, &v85);
            v65 = WdLogNewEntry5_WdError(v64, v63);
            *(_QWORD *)(v65 + 24) = v11;
            WdLogEvent5_WdError(v65);
            goto LABEL_48;
          }
          v28.QuadPart = (LONGLONG)QuadPart;
          v29 = v31 + (unsigned int)v29;
          v30 -= v31;
        }
        while ( v30 );
        if ( (_DWORD)v11 != 258 )
          break;
        v12 = InputBuffer;
      }
      while ( v27 );
    }
    DisplayLogSetMonitorPowerStage(v7, 2147483652LL, (unsigned int)v11, &v85);
    v8 = v76;
    v10 = v82;
  }
  else
  {
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
  }
  if ( *v8 == 1 )
  {
    DisplayLogSetMonitorPowerStage(v7, 8LL, 0LL, &v85);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiCheckForOutstandingD3Requests(v6);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 3304), 1u);
    v36 = DpiAcquireCoreSyncAccessSafe(v10, 1);
    v11 = v36;
    if ( v36 < 0 )
    {
      v73 = WdLogNewEntry5_WdEvent(v38, v37);
      *(_QWORD *)(v73 + 24) = v11;
      WdLogEvent5_WdEvent(v73);
    }
    else
    {
      v39 = *(_QWORD **)(v6 + 3464);
      if ( v39 != (_QWORD *)(v6 + 3464) )
      {
        do
        {
          v40 = v39;
          v39 = (_QWORD *)*v39;
          if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v40 - 7)) && !*((_BYTE *)v40 + 34) )
          {
            MonitorRemovePhysicalMonitor(*(void **)(v6 + 3896), *((_DWORD *)v40 - 2), 0, v7);
            v66 = (_QWORD *)v40[2];
            v67 = v66 ? v66[8] : 0LL;
            if ( v67 )
            {
              if ( *(_BYTE *)(v67 + 944) )
              {
                v68 = DpiPdoSetMonitorDriverInterfaceState(v66);
                v11 = v68;
                if ( v68 < 0 )
                {
                  v72 = WdLogNewEntry5_WdWarning(v70, v69, v71);
                  *(_QWORD *)(v72 + 24) = v11;
                  WdLogEvent5_WdWarning(v72);
                }
              }
            }
          }
        }
        while ( v39 != (_QWORD *)(v6 + 3464) );
        v10 = v82;
      }
      MonitorEnableDisableMonitor(*(DXGADAPTER **)(v6 + 3896), WaitMode, 0LL, (__int64)v7);
      DpiReleaseCoreSyncAccessSafe(v10, 1);
    }
    DisplayLogSetMonitorPowerStage(v7, 2147483656LL, (unsigned int)v11, &v85);
    ExReleaseResourceLite((PERESOURCE)(v6 + 3304));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
LABEL_48:
    v8 = v76;
  }
  v41 = P;
  if ( P )
  {
    v42 = InputBuffer;
    if ( InputBuffer )
    {
      v43 = (char *)P + 8 * InputBuffer;
      do
      {
        --v43;
        v44 = 1008LL;
        if ( *v8 != 1 )
          v44 = 984LL;
        ObfDereferenceObject(*(PVOID *)(*v43 - v44 + 24));
        --v42;
      }
      while ( v42 );
    }
    ExFreePoolWithTag(v41, 0);
  }
  return (unsigned int)v11;
}
