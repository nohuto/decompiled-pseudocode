/*
 * XREFs of InitializeSideband @ 0x1C00086F8
 * Callers:
 *     DeviceStart @ 0x1C00228A0 (DeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     ??0CSidebandDevice@@QEAA@PEAU_KSDEVICE@@PEAUIUnknown@@@Z @ 0x1C00091F4 (--0CSidebandDevice@@QEAA@PEAU_KSDEVICE@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0013800 (memset.c)
 */

__int64 __fastcall InitializeSideband(struct _KSDEVICE *a1, __int64 a2)
{
  char *Context; // rbp
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  int v6; // edi
  __int64 v7; // rdx
  CSidebandDevice *PoolWithTag; // rax
  __int64 v9; // rdx
  CSidebandDevice *v10; // rdi
  struct IUnknown *v11; // r8
  CSidebandDevice *v12; // rbx
  __int64 v14; // [rsp+28h] [rbp-20h]

  Context = (char *)a1->Context;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0xAu,
      (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids);
  v4 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(Context + 712), 0LL, File, 1u, 0x20u);
  v6 = v4;
  if ( v4 >= 0 )
  {
    KeWaitForSingleObject(Context + 744, Executive, 0, 0, 0LL);
    PoolWithTag = (CSidebandDevice *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x108uLL, 0x32627845u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x108uLL);
      v12 = CSidebandDevice::CSidebandDevice(v10, a1, v11);
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12 )
    {
      (*(void (__fastcall **)(CSidebandDevice *))(*(_QWORD *)v12 + 8LL))(v12);
      v6 = (*(__int64 (__fastcall **)(CSidebandDevice *))(*(_QWORD *)v12 + 24LL))(v12);
      if ( v6 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(CSidebandDevice *))(*(_QWORD *)v12 + 48LL))(v12);
        if ( v6 < 0 )
          (*(void (__fastcall **)(CSidebandDevice *))(*(_QWORD *)v12 + 40LL))(v12);
      }
    }
    else
    {
      v6 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v9,
          9u,
          0xCu,
          (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids,
          -1073741670);
    }
    KeReleaseMutex((PRKMUTEX)(Context + 744), 0);
    if ( v6 < 0 )
    {
      if ( v12 )
        (*(void (__fastcall **)(CSidebandDevice *))(*(_QWORD *)v12 + 16LL))(v12);
      IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(Context + 712), 0LL, 0x20u);
    }
    else
    {
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(Context + 712), 0LL, 0x20u);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v6;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      9u,
      0xBu,
      (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids,
      v4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = v6;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      9u,
      0xDu,
      (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids,
      v14);
  }
  return (unsigned int)v6;
}
