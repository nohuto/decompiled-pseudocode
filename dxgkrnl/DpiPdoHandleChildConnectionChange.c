/*
 * XREFs of DpiPdoHandleChildConnectionChange @ 0x1C02009DC
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C001BFA0 (DxgkQueryConnectionChanges.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C0397A98 (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A240 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiFdoGetChildDescriptor @ 0x1C0015614 (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     Feature_OnlyHandlingLidSwitchInBroker__private_ReportDeviceUsage @ 0x1C0026868 (Feature_OnlyHandlingLidSwitchInBroker__private_ReportDeviceUsage.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DxgkIsConsoleSessionDispBrokerEnabled @ 0x1C0171D70 (DxgkIsConsoleSessionDispBrokerEnabled.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C01FA828 (MonitorCreatePhysicalMonitor.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C01FB0DC (MonitorNotifyDeviceNodeReady.c)
 *     MonitorCancelSkippedDepartures @ 0x1C0200D8C (MonitorCancelSkippedDepartures.c)
 *     DpiPdoAddPdo @ 0x1C0201FA0 (DpiPdoAddPdo.c)
 *     DpiPdoRemovePdo @ 0x1C03A53EC (DpiPdoRemovePdo.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x1C03A577C (DpiPdoSetMonitorDriverInterfaceState.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C03BFFD0 (MonitorRemovePhysicalMonitor.c)
 */

__int64 __fastcall DpiPdoHandleChildConnectionChange(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        BOOLEAN a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // r15
  __int64 v13; // r13
  __int64 v14; // rdi
  char v15; // bl
  int v16; // eax
  __int64 v17; // rdx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *ChildDescriptor; // rax
  __int64 v19; // r8
  int v20; // r9d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v21; // rsi
  __int64 v22; // rbx
  char v23; // r14
  __int64 v24; // rdx
  __int64 v25; // r13
  bool v26; // r15
  __int64 v27; // r9
  NTSTATUS v28; // eax
  char *v29; // rcx
  int PhysicalMonitor; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  bool v36; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int8 v37; // [rsp+52h] [rbp-AEh]
  __int64 v38; // [rsp+58h] [rbp-A8h]
  int v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+68h] [rbp-98h]
  int v41[2]; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  _DWORD v43[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-60h]
  int v45; // [rsp+A8h] [rbp-58h]
  int v46; // [rsp+ACh] [rbp-54h]
  int v47; // [rsp+B0h] [rbp-50h]
  int v48; // [rsp+B4h] [rbp-4Ch]
  unsigned int v49; // [rsp+B8h] [rbp-48h]
  int v50; // [rsp+BCh] [rbp-44h]
  __int64 v51; // [rsp+C0h] [rbp-40h]
  _DWORD OutputBuffer[60]; // [rsp+D0h] [rbp-30h] BYREF

  v11 = a10;
  v13 = a11;
  *(_QWORD *)v41 = a1;
  v14 = *(_QWORD *)(a1 + 64);
  v15 = a4;
  v39 = a3;
  v37 = a4;
  v42 = a9;
  v38 = a10;
  v40 = a11;
  if ( !a8 )
  {
    v46 = 0;
    v45 = 0;
    v44 = 0LL;
    v16 = *(_DWORD *)(v14 + 24) & 0xFFFF00;
    v49 = a2;
    v17 = *(_QWORD *)(v14 + 5744);
    v48 = v16 | 1;
    v51 = *(_QWORD *)(v14 + 2672);
    v43[0] = 30;
    v43[1] = 72;
    memset(&v43[2], 0, 24);
    v47 = 39;
    v50 = a4;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v43, v17);
  }
  ChildDescriptor = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)DpiFdoGetChildDescriptor(v14, a2);
  v21 = ChildDescriptor;
  if ( !ChildDescriptor )
  {
    v22 = -1073741810LL;
LABEL_5:
    WdLogSingleEntry1(2LL, v22);
    return (unsigned int)v22;
  }
  if ( !*((_QWORD *)ChildDescriptor + 6) )
  {
    v23 = 0;
    goto LABEL_31;
  }
  v23 = 1;
  if ( IsInternalVideoOutput(ChildDescriptor[1]) )
  {
    v25 = *(_QWORD *)(v24 + 64);
    if ( *((_BYTE *)v21 + 66) == v15 )
    {
LABEL_29:
      v13 = v40;
      v15 = 1;
      goto LABEL_31;
    }
    v26 = 0;
    v36 = 0;
    Feature_OnlyHandlingLidSwitchInBroker__private_ReportDeviceUsage();
    if ( (int)DxgkIsConsoleSessionDispBrokerEnabled(&v36) >= 0 )
    {
      if ( !v36 )
        goto LABEL_13;
      v26 = 1;
    }
    if ( v36 )
    {
LABEL_16:
      v29 = *(char **)(v14 + 3912);
      if ( v15 )
      {
        v11 = v38;
        LOBYTE(v27) = 1;
        PhysicalMonitor = MonitorCreatePhysicalMonitor(
                            v29,
                            a2,
                            *((struct _DEVICE_OBJECT **)v21 + 6),
                            v27,
                            v15,
                            0LL,
                            (bool *)v38,
                            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v40);
        v22 = PhysicalMonitor;
        if ( PhysicalMonitor < 0 )
          goto LABEL_5;
        if ( *(_BYTE *)(v25 + 944) )
        {
          MonitorNotifyDeviceNodeReady(*(PERESOURCE **)(v14 + 3912), a2, *((_QWORD *)v21 + 6));
          v31 = DpiPdoSetMonitorDriverInterfaceState(*((PVOID *)v21 + 6));
          if ( v31 < 0 )
            WdLogSingleEntry1(3LL, v31);
        }
      }
      else
      {
        v32 = MonitorRemovePhysicalMonitor(v29, a2, v40);
        v22 = v32;
        if ( v32 < 0 )
          goto LABEL_5;
        if ( !v26 )
        {
          if ( *(_BYTE *)(v25 + 944) )
          {
            v33 = DpiPdoSetMonitorDriverInterfaceState(*((PVOID *)v21 + 6));
            if ( v33 < 0 )
              WdLogSingleEntry1(3LL, v33);
          }
        }
        v11 = v38;
      }
      v23 = 1;
      goto LABEL_29;
    }
LABEL_13:
    memset(OutputBuffer, 0, 0xE8uLL);
    v28 = ZwPowerInformation(SystemPowerPolicyCurrent, 0LL, 0, OutputBuffer, 0xE8u);
    if ( v28 < 0 )
    {
      v26 = 0;
      WdLogSingleEntry1(2LL, v28);
    }
    else
    {
      v26 = OutputBuffer[7] != 0;
    }
    goto LABEL_16;
  }
LABEL_31:
  *((_BYTE *)v21 + 66) = v37;
  if ( v15 )
    MonitorCancelSkippedDepartures(*(DXGADAPTER **)(v14 + 3912), a2);
  if ( v23 != v15 || v15 && a6 )
  {
    *((_BYTE *)v21 + 65) = v15;
    if ( v15 )
    {
      LOBYTE(v20) = a5;
      v34 = DpiPdoAddPdo(v41[0], (int)v21, v39, v20, a6, a7, v42, v11, v13);
    }
    else
    {
      LOBYTE(v19) = 1;
      v34 = DpiPdoRemovePdo(*(_QWORD *)v41, v21, v19, v11, v13);
    }
    LODWORD(v22) = v34;
    if ( v34 >= 0 && v34 != 0x40000000 && v34 != 128 )
    {
      _m_prefetchw((const void *)(v14 + 3660));
      if ( (_InterlockedOr((volatile signed __int32 *)(v14 + 3660), 1u) & 1) == 0 )
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v14 + 152), BusRelations);
    }
  }
  else
  {
    LODWORD(v22) = 0;
  }
  return (unsigned int)v22;
}
