/*
 * XREFs of ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01AFF24
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01B19B4 (xxxInjectTouchInput.c)
 *     NtUserInitializeTouchInjection @ 0x1C01D61A0 (NtUserInitializeTouchInjection.c)
 * Callees:
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01B05C0 (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 */

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
