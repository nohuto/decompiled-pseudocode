/*
 * XREFs of DpiFdoSetAdapterPowerState @ 0x1C01E1E80
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01E1A70 (DpiFdoHandleDevicePower.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C03A3D4C (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C03A3ED8 (DpiLdaPowerUpAdapterInChain.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkReportAdapterPowerRapidHpdTrigerEvent @ 0x1C001A3FC (DxgkReportAdapterPowerRapidHpdTrigerEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DpiIsPowerRuntimeDStateTransition @ 0x1C0180CF0 (DpiIsPowerRuntimeDStateTransition.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C01E22D4 (DpiDxgkDdiSetPowerState.c)
 *     DpiRequestIoPowerState @ 0x1C01E2390 (DpiRequestIoPowerState.c)
 *     DpiFdoDetectPostDevice @ 0x1C01E7AF0 (DpiFdoDetectPostDevice.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C01E7D80 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C0398498 (DpiFdoRebootForSurpriseRemoval.c)
 */

__int64 __fastcall DpiFdoSetAdapterPowerState(PDEVICE_OBJECT DeviceObject, __int64 State, __int64 a3, int a4, int a5)
{
  char *DeviceExtension; // rdi
  POWER_STATE v6; // r12d
  int v8; // ebx
  __int64 v9; // rcx
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  _BYTE v18[4]; // [rsp+30h] [rbp-31h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-2Dh]
  int v20; // [rsp+38h] [rbp-29h]
  int v21; // [rsp+3Ch] [rbp-25h]
  PDEVICE_OBJECT v22; // [rsp+40h] [rbp-21h]
  int v23; // [rsp+48h] [rbp-19h] BYREF
  __int64 v24; // [rsp+50h] [rbp-11h]
  char v25; // [rsp+58h] [rbp-9h]
  _OWORD v26[2]; // [rsp+60h] [rbp-1h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v21 = a4;
  v6.SystemState = State;
  v20 = a3;
  v19 = 0;
  if ( (int)State > *((_DWORD *)DeviceExtension + 71) )
  {
    PoSetPowerState(DeviceObject, DevicePowerState, (POWER_STATE)State);
    if ( *((_QWORD *)DeviceExtension + 2) == 0x274727044LL )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3808), 1u);
      *((POWER_STATE *)DeviceExtension + 71) = v6;
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3808));
      KeLeaveCriticalRegion();
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      {
        DpiRequestIoPowerState(DeviceObject, 1LL);
        v13 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
                *((_QWORD *)DeviceExtension + 5),
                *((_QWORD *)DeviceExtension + 6),
                -1,
                (POWER_STATE)v6.SystemState,
                a5);
        ++*((_DWORD *)DeviceExtension + 1077);
        v19 = v13;
      }
      if ( v20 == 5 && (PDEVICE_OBJECT)qword_1C013B740 == DeviceObject && dword_1C013B7F0 == 3 )
      {
        byte_1C013B810 = 1;
        LOBYTE(v12) = 1;
        InbvNotifyDisplayOwnershipChange(v12, DpiEnterSystemDisplay);
      }
      return v19;
    }
    *((POWER_STATE *)DeviceExtension + 71) = v6;
    if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      return ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
               *((_QWORD *)DeviceExtension + 5),
               *((_QWORD *)DeviceExtension + 6),
               -1,
               (POWER_STATE)v6.SystemState,
               a5);
  }
  else if ( (int)State < *((_DWORD *)DeviceExtension + 71) )
  {
    v8 = a5;
    v20 = a5;
    if ( a5 == 3 )
    {
      if ( a4 == 2 || a4 == 3 || a4 == 4 )
      {
        v8 = 2;
        v20 = 2;
        WdLogSingleEntry1(4LL, DeviceObject);
      }
      else if ( a4 == 5 )
      {
        WdLogSingleEntry1(4LL, DeviceObject);
      }
      else
      {
        WdLogSingleEntry1(2LL, DeviceObject);
      }
    }
    if ( *((_QWORD *)DeviceExtension + 2) == 0x274727044LL )
    {
      v9 = *((unsigned int *)DeviceExtension + 59);
      v22 = 0LL;
      if ( ((_DWORD)v9 == 2
         || *((_DWORD *)DeviceExtension + 60) == 2 && (((_DWORD)v9 - 3) & 0xFFFFFFFC) == 0 && (_DWORD)v9 != 4)
        && *((_DWORD *)DeviceExtension + 921) )
      {
        DxgkReportAdapterPowerRapidHpdTrigerEvent((_QWORD *)DeviceExtension + 334);
      }
      if ( (PDEVICE_OBJECT)qword_1C013B740 == DeviceObject )
      {
        if ( byte_1C013B810 && dword_1C013B7F0 == 3 )
        {
          LOBYTE(State) = 1;
          DpiAcquirePostDisplayInfoFromBgfx(&xmmword_1C013B750, State, 0LL);
          byte_1C013B810 = 0;
          dword_1C013B83C = 1;
          v22 = DeviceObject;
        }
        if ( v21 == 5 )
        {
          if ( !byte_1C013B809 )
          {
            v14 = *((_QWORD *)DeviceExtension + 3);
            v18[0] = 0;
            if ( (int)DpiFdoDetectPostDevice(v14, v18) >= 0 && v18[0] != DeviceExtension[1152] )
              DpiFdoRebootForSurpriseRemoval(DeviceObject, 0LL);
          }
          v15 = *((_QWORD *)DeviceExtension + 489);
          if ( (!v15 || *(int *)(v15 + 2820) <= 1105) && byte_1C013B495 )
          {
            v23 = -1;
            v24 = 0LL;
            if ( (qword_1C013A870 & 2) != 0 )
            {
              v25 = 1;
              v23 = 8007;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerEnter, a3, 8007);
            }
            else
            {
              v25 = 0;
            }
            DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 8007);
            memset(v26, 0, sizeof(v26));
            LODWORD(v26[0]) = 18;
            x86BiosCall(16LL, v26);
            xmmword_1C013B760 = 0LL;
            DWORD2(xmmword_1C013B760) = -1;
            xmmword_1C013B750 = 0LL;
            memset(&xmmword_1C013B770, 0, 0x80uLL);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
            if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v23);
          }
        }
      }
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      {
        if ( *((_QWORD *)DeviceExtension + 3) == qword_1C013B740 )
        {
          qword_1C013B7F8 = (__int64)KeGetCurrentThread();
          qword_1C013B800 = (__int64)v22;
        }
        ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
          *((_QWORD *)DeviceExtension + 5),
          *((_QWORD *)DeviceExtension + 6),
          -1,
          (POWER_STATE)v6.SystemState,
          v20);
        ++*((_DWORD *)DeviceExtension + 1077);
        if ( (struct _KTHREAD *)qword_1C013B7F8 == KeGetCurrentThread() )
        {
          qword_1C013B800 = 0LL;
          qword_1C013B7F8 = 0LL;
        }
        if ( (PDEVICE_OBJECT)qword_1C013B740 == DeviceObject && dword_1C013B7F0 == 3 )
        {
          xmmword_1C013B760 = 0LL;
          DWORD2(xmmword_1C013B760) = -1;
          xmmword_1C013B750 = 0LL;
          memset(&xmmword_1C013B770, 0, 0x80uLL);
        }
        v19 = DpiRequestIoPowerState(DeviceObject, 2LL);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3808), 1u);
        *((POWER_STATE *)DeviceExtension + 71) = v6;
        ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3808));
        KeLeaveCriticalRegion();
        if ( DpiIsPowerRuntimeDStateTransition((__int64)DeviceExtension) )
        {
          if ( byte_1C013B499 )
          {
            DeviceExtension[3529] = 1;
          }
          else
          {
            WorkItem = IoAllocateWorkItem(DeviceObject);
            if ( WorkItem )
              IoQueueWorkItemEx(WorkItem, DpiFdoInvalidateChildWorkItem, DelayedWorkQueue, 0LL);
            else
              WdLogSingleEntry1(6LL, -1073741670LL);
          }
        }
        else
        {
          DeviceExtension[3529] = 1;
          _InterlockedAnd((volatile signed __int32 *)DeviceExtension + 915, 0xFFFFFFFE);
          IoInvalidateDeviceRelations(*((PDEVICE_OBJECT *)DeviceExtension + 19), BusRelations);
        }
      }
      else
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3808), 1u);
        *((POWER_STATE *)DeviceExtension + 71) = v6;
        ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3808));
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
        v19 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
                *((_QWORD *)DeviceExtension + 5),
                *((_QWORD *)DeviceExtension + 6),
                -1,
                (POWER_STATE)v6.SystemState,
                v8);
      *((POWER_STATE *)DeviceExtension + 71) = v6;
    }
    PoSetPowerState(DeviceObject, DevicePowerState, v6);
    return v19;
  }
  return 0LL;
}
