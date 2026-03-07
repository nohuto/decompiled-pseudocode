__int64 __fastcall FxPkgGeneral::_CreateCompletionRoutine2(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *OriginalIrp,
        void *Context)
{
  __int64 v3; // r9
  FxRequest *v4; // r8
  FxIrp irp; // [rsp+38h] [rbp+10h] BYREF

  irp.m_Irp = OriginalIrp;
  FxIrp::PropagatePendingReturned(&irp);
  FxRequest::Complete(v4, *(_DWORD *)(v3 + 48));
  return 3221225494LL;
}
