void CheckCurrentInjectionConfiguration(void)
{
  int v0; // edx
  __int64 v1; // rcx
  __int64 v2; // rax

  v0 = 0;
  v1 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( WPP_MAIN_CB.DeviceLock.Header.LockNV == 1 || (v2 = *(_QWORD *)(v1 + 880)) != 0 && *(_DWORD *)(v2 + 52) )
  {
    if ( WPP_MAIN_CB.DeviceLock.Header.LockNV )
    {
      WPP_MAIN_CB.DeviceLock.Header.LockNV = 0;
      v0 = 1;
    }
    RealizePendingRecreateTouchInjectionDevices((struct tagPROCESSINFO *)v1, v0);
  }
}
