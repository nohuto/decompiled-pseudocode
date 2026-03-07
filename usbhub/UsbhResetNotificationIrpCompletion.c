__int64 __fastcall UsbhResetNotificationIrpCompletion(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        struct _DEVICE_OBJECT *Context)
{
  __int64 v5; // rdx
  _DWORD *v6; // rsi
  __int64 v7; // r14
  _DWORD *v8; // rax
  IRP *v9; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax

  v6 = FdoExt((__int64)Context);
  v7 = *(_QWORD *)(*((_QWORD *)v6 + 659) + 184LL);
  if ( LODWORD(Irp->IoStatus.Information) == 1 )
  {
    UsbhResetNotifyDownstreamHub(Context);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v5,
        3u,
        0x17u,
        (__int64)&WPP_9b0a5a2624623ceb7c2c6a1dede7f127_Traceguids,
        Context);
    if ( v6[702] == 2 )
    {
      if ( KeGetCurrentIrql() )
      {
        UsbhException((int)Context, 0, 62, 0, 0, -1073741823, -1073704960, usbfile_pnp_c, 3716, 1);
      }
      else
      {
        v8 = FdoExt((__int64)Context);
        UsbhDispatch_HardResetEvent((__int64)Context, (__int64)(v8 + 566), 3);
      }
    }
  }
  IoReuseIrp(*((PIRP *)v6 + 659), 0);
  *(_BYTE *)(v7 - 72) = 15;
  *(_DWORD *)(v7 - 48) = 2232235;
  *(_DWORD *)(v7 - 56) = 0;
  *(_DWORD *)(v7 - 64) = 0;
  *(_QWORD *)(*((_QWORD *)v6 + 659) + 56LL) = 0LL;
  v9 = (IRP *)*((_QWORD *)v6 + 659);
  if ( IoSetCompletionRoutineEx(Context, v9, UsbhResetNotificationIrpCompletion, Context, 1u, 1u, 1u) < 0 )
  {
    CurrentStackLocation = v9->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhResetNotificationIrpCompletion;
    CurrentStackLocation[-1].Context = Context;
    CurrentStackLocation[-1].Control = -32;
  }
  IofCallDriver(*((PDEVICE_OBJECT *)v6 + 151), *((PIRP *)v6 + 659));
  return 3221225494LL;
}
