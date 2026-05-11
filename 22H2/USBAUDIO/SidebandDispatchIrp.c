/*
 * XREFs of SidebandDispatchIrp @ 0x1C0008D38
 * Callers:
 *     UsbAudioIrpDispatcher @ 0x1C00238A0 (UsbAudioIrpDispatcher.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SidebandDispatchIrp(PDEVICE_OBJECT FunctionalDeviceObject, PIRP Irp)
{
  int v3; // r12d
  void *v5; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  PKSDEVICE DeviceForDeviceObject; // rax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  char *Context; // rbx
  struct _KMUTANT *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // r14
  struct _IO_REMOVE_LOCK *v14; // r15
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v19; // [rsp+28h] [rbp-30h]

  v3 = 0;
  v5 = &WPP_44af59a87f893648f64c3513847e50b7_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids,
      9u,
      0x13u,
      (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids);
    v5 = &WPP_44af59a87f893648f64c3513847e50b7_Traceguids;
  }
  if ( !Irp->RequestorMode )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    if ( (CurrentStackLocation->Flags & 1) == 0 )
    {
      DeviceForDeviceObject = KsGetDeviceForDeviceObject(FunctionalDeviceObject);
      if ( !DeviceForDeviceObject )
      {
        v9 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v8,
            9u,
            0x15u,
            (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids,
            -1073741811);
        goto LABEL_33;
      }
      Context = (char *)DeviceForDeviceObject->Context;
      v11 = (struct _KMUTANT *)(Context + 744);
      KeWaitForSingleObject(Context + 744, Executive, 0, 0, 0LL);
      v13 = *((_QWORD *)Context + 107);
      if ( !v13 )
      {
        v9 = -1073741437;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v12,
            9u,
            0x17u,
            (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids,
            -1073741437);
        goto LABEL_12;
      }
      if ( CurrentStackLocation->MajorFunction == 2 )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, PDEVICE_OBJECT, PIRP))(*(_QWORD *)v13 + 72LL))(
               *((_QWORD *)Context + 107),
               FunctionalDeviceObject,
               Irp);
LABEL_12:
        KeReleaseMutex(v11, 0);
        goto LABEL_32;
      }
      v14 = (struct _IO_REMOVE_LOCK *)(Context + 712);
      v15 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(Context + 712), 0LL, File, 1u, 0x20u);
      v9 = v15;
      if ( v15 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v16,
            9u,
            0x16u,
            (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids,
            v15);
        goto LABEL_12;
      }
      if ( CurrentStackLocation->MajorFunction )
      {
        if ( CurrentStackLocation->MajorFunction == 14 )
        {
          v17 = (*(__int64 (__fastcall **)(__int64, PDEVICE_OBJECT, PIRP))(*(_QWORD *)v13 + 88LL))(
                  v13,
                  FunctionalDeviceObject,
                  Irp);
        }
        else
        {
          if ( CurrentStackLocation->MajorFunction != 15 )
          {
            v9 = -1073741811;
LABEL_23:
            IoReleaseRemoveLockEx(v14, 0LL, 0x20u);
            goto LABEL_12;
          }
          v17 = (*(__int64 (__fastcall **)(__int64, PDEVICE_OBJECT, PIRP))(*(_QWORD *)v13 + 96LL))(
                  v13,
                  FunctionalDeviceObject,
                  Irp);
        }
        v3 = 1;
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(__int64, PDEVICE_OBJECT, PIRP))(*(_QWORD *)v13 + 80LL))(
                v13,
                FunctionalDeviceObject,
                Irp);
      }
      v9 = v17;
      goto LABEL_23;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids,
      9u,
      0x14u,
      (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids);
  v9 = -1073741790;
LABEL_32:
  if ( !v3 )
  {
LABEL_33:
    Irp->IoStatus.Status = v9;
    IofCompleteRequest(Irp, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v19) = v9;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v5,
      9u,
      0x18u,
      (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids,
      v19);
  }
  return v9;
}
