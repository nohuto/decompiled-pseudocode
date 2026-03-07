void __fastcall UsbhUninitialize(__int64 a1)
{
  _DWORD *v2; // rbx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rdi

  v2 = FdoExt(a1);
  Log(a1, 8, 1750421065, 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      43,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  UsbhDisarmHubForWakeDetect(a1);
  UsbhUnregisterPowerCallback(a1);
  v3 = (void *)*((_QWORD *)v2 + 377);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *((_QWORD *)v2 + 377) = 0LL;
  }
  v4 = (void *)*((_QWORD *)v2 + 378);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *((_QWORD *)v2 + 378) = 0LL;
  }
  v5 = (void *)_InterlockedExchange64((volatile __int64 *)v2 + 152, 0LL);
  Log(a1, 8, 1752519238, 0LL, (__int64)v5);
  if ( v5 )
  {
    UsbhReferenceListRemove(a1, (__int64)v5);
    ObfDereferenceObject(v5);
  }
  Log(a1, 8, 1752525118, 0LL, 0LL);
}
