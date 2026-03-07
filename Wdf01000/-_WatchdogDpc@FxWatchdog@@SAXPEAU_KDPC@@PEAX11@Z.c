void __fastcall __noreturn FxWatchdog::_WatchdogDpc(
        _KDPC *Dpc,
        void *Context,
        void *SystemArgument1,
        void *SystemArgument2)
{
  __int64 v5; // rdi
  _WDF_POWER_ROUTINE_TIMED_OUT_DATA data; // [rsp+30h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(*((_QWORD *)Context + 19) + 96LL);
  WPP_IFR_SF_(*(_FX_DRIVER_GLOBALS **)(v5 + 16), 2u, 0xCu, 0x4Fu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids);
  data.PowerState = *(_DWORD *)(v5 + 204);
  data.PowerPolicyState = *(_DWORD *)(v5 + 208);
  data.DeviceObject = *(_DEVICE_OBJECT **)(v5 + 144);
  data.Device = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked((FxObject *)v5);
  data.TimedOutThread = (_KTHREAD *)*((_QWORD *)Context + 20);
  FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v5 + 16), WDF_POWER_ROUTINE_TIMED_OUT, (ULONG_PTR)&data, 0LL);
}
