/*
 * XREFs of ACPIBusIrpDeviceUsageNotification @ 0x1C007E820
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C000153C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00015BC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C008822C (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIBusIrpDeviceUsageNotification(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  char v3; // di
  int v4; // ebp
  __int64 DeviceExtension; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  struct _DEVICE_OBJECT *v10; // rcx
  unsigned __int8 Lock; // al
  __int64 v12; // rcx
  char *IrpText; // rax
  const char *v14; // r8
  const char *v15; // r10

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v4 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v8 = DeviceExtension;
  if ( CurrentStackLocation->Parameters.Create.Options == 5 )
  {
    if ( !CurrentStackLocation->Parameters.SetLock.Lock && (*(_DWORD *)(DeviceExtension + 1008) & 0x40000) != 0 )
    {
      v4 = -1073741811;
      goto LABEL_26;
    }
LABEL_9:
    Lock = CurrentStackLocation->Parameters.SetLock.Lock;
    if ( CurrentStackLocation->Parameters.Create.Options == 2 )
    {
      if ( Lock )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 736));
      else
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 736));
    }
    if ( CurrentStackLocation->Parameters.Create.Options == 1 )
    {
      if ( CurrentStackLocation->Parameters.SetLock.Lock )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 740));
      else
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 740));
    }
    if ( CurrentStackLocation->Parameters.Create.Options == 3 )
    {
      if ( CurrentStackLocation->Parameters.SetLock.Lock )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 744));
      else
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 744));
    }
    if ( CurrentStackLocation->Parameters.Create.Options == 5 )
    {
      *(_QWORD *)(v8 + 1008) = *(_QWORD *)(v8 + 1008) & 0xFFFFFFFFFFFBFFFFuLL | (CurrentStackLocation->Parameters.SetLock.Lock != 0
                                                                               ? 0x40000
                                                                               : 0);
    }
    else if ( Lock )
    {
      PhysicalDeviceObject->Flags &= ~0x2000u;
    }
    IoInvalidateDeviceState(PhysicalDeviceObject);
    goto LABEL_26;
  }
  v9 = *(_QWORD *)(DeviceExtension + 792);
  if ( !v9 )
    goto LABEL_9;
  v10 = *(struct _DEVICE_OBJECT **)(v9 + 768);
  if ( !v10 )
  {
    v4 = -1073741810;
    goto LABEL_26;
  }
  v4 = ACPIInternalSendSynchronousIrp(v10);
  if ( v4 >= 0 )
    goto LABEL_9;
LABEL_26:
  Irp->IoStatus.Status = v4;
  Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(Irp, 0);
  if ( v8 )
    v3 = v8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v12, 0x16u);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x1Eu,
      (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
      (char)Irp,
      (__int64)IrpText,
      v4,
      v3,
      v14,
      v15);
  }
  return (unsigned int)v4;
}
