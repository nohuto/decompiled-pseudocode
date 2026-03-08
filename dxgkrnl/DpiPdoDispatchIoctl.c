/*
 * XREFs of DpiPdoDispatchIoctl @ 0x1C01804E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0180684 (DpiReleaseCoreSyncAccessSafe.c)
 *     ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C0180A58 (-_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0180B30 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01AAC00 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z @ 0x1C039C734 (-DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z.c)
 */

__int64 __fastcall DpiPdoDispatchIoctl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v5; // rsi
  struct _IRP *MasterIrp; // r12
  unsigned int LowPart; // ebp
  struct _DEVICE_OBJECT *v8; // rcx
  unsigned int Length; // r13d
  PVOID DeviceExtension; // rdi
  int MonitorInstance; // ebx
  __int64 v12; // rbx
  __int64 v13; // rsi
  MONITOR_MGR *v14; // rdi
  unsigned int Options; // [rsp+80h] [rbp+8h]
  unsigned __int64 v17; // [rsp+88h] [rbp+10h] BYREF
  struct DXGMONITOR *v18; // [rsp+90h] [rbp+18h] BYREF

  v17 = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = *(_QWORD *)(a1 + 64);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v8 = *(struct _DEVICE_OBJECT **)(v5 + 32);
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  DeviceExtension = v8->DeviceExtension;
  if ( LowPart <= 0x230C18 )
  {
    if ( LowPart == 2296856
      || LowPart == 2296832
      || LowPart == 2296836
      || LowPart == 2296840
      || LowPart == 2296844
      || LowPart == 2296848
      || LowPart == 2296852 )
    {
      MonitorInstance = DpiBrightnessHandleIoctls(
                          v8,
                          *(_DWORD *)(v5 + 504),
                          LowPart,
                          CurrentStackLocation->Parameters.Create.Options,
                          MasterIrp,
                          Length,
                          MasterIrp,
                          &v17);
      goto LABEL_15;
    }
    goto LABEL_20;
  }
  if ( LowPart != 2297856
    && LowPart != 2297860
    && LowPart != 2297864
    && LowPart != 2298880
    && LowPart != 2298884
    && LowPart != 2298888 )
  {
LABEL_20:
    MonitorInstance = -1073741637;
    goto LABEL_15;
  }
  MonitorInstance = DpiAcquireCoreSyncAccessSafe(a1, 0LL);
  if ( MonitorInstance >= 0 )
  {
    v12 = *((_QWORD *)DeviceExtension + 489);
    if ( v12 )
    {
      v13 = *(unsigned int *)(v5 + 504);
      if ( (_DWORD)v13 != -1 )
      {
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)DeviceExtension + 489)) )
          WdLogSingleEntry0(1LL);
        if ( !*(_QWORD *)(v12 + 2920) )
          WdLogSingleEntry0(1LL);
        v14 = *(MONITOR_MGR **)(*(_QWORD *)(v12 + 2920) + 112LL);
        if ( v14 )
        {
          v18 = 0LL;
          MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v14, v13, 1u, &v18);
          if ( MonitorInstance < 0 )
            WdLogSingleEntry2(7LL, v13, v14);
          else
            MonitorInstance = DXGMONITOR::_DispatchIoctrls(v18, LowPart, Options, MasterIrp, Length, MasterIrp, &v17);
          goto LABEL_14;
        }
        WdLogSingleEntry1(2LL, v12);
      }
    }
    MonitorInstance = -1073741811;
LABEL_14:
    DpiReleaseCoreSyncAccessSafe(a1, 0LL);
  }
LABEL_15:
  a2->IoStatus.Information = v17;
  a2->IoStatus.Status = MonitorInstance;
  IofCompleteRequest(a2, 1);
  return (unsigned int)MonitorInstance;
}
