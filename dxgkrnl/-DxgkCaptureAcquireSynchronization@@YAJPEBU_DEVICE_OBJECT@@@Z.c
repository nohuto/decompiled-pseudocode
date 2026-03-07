__int64 __fastcall DxgkCaptureAcquireSynchronization(struct _DEVICE_OBJECT *a1)
{
  int DxgAdapterFromChild; // eax
  __int64 v2; // rcx
  __int64 v3; // rdi
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v6; // rdi
  char *v7; // rbx

  DxgAdapterFromChild = DpiGetDxgAdapterFromChild(a1);
  v3 = DxgAdapterFromChild;
  if ( DxgAdapterFromChild >= 0 )
  {
    Current = DXGPROCESS::GetCurrent(v2);
    v6 = (struct _KTHREAD **)Current;
    if ( Current )
    {
      v7 = (char *)Current + 216;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v7, 0LL);
      *((_QWORD *)v7 + 1) = KeGetCurrentThread();
      DXGPROCESS::AcquireDeviceLockForAllDevices(v6, 0LL);
      DXGADAPTER::AcquireCoreSync(0LL, 1);
      DXGADAPTER::AcquireDdiSync(0LL, 1);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid process context, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, DxgAdapterFromChild);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DpiGetDxgAdapterFromChild failed in DxgkCaptureSynchronize, returning 0x%I64x",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v3;
  }
}
