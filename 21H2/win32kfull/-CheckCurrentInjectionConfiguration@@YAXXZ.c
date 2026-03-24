/*
 * XREFs of ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01DB4C4
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01DCDAC (xxxInjectTouchInput.c)
 *     NtUserInitializeTouchInjection @ 0x1C01FD9D0 (NtUserInitializeTouchInjection.c)
 * Callees:
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01DBB4C (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 */

void CheckCurrentInjectionConfiguration(void)
{
  int v0; // edx
  __int64 v1; // rcx
  __int64 v2; // rax

  v0 = 0;
  v1 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( gbPendRecreateTouchInjectionDevices == 1 || (v2 = *(_QWORD *)(v1 + 896)) != 0 && *(_DWORD *)(v2 + 52) )
  {
    if ( gbPendRecreateTouchInjectionDevices )
    {
      gbPendRecreateTouchInjectionDevices = 0;
      v0 = 1;
    }
    RealizePendingRecreateTouchInjectionDevices((struct tagPROCESSINFO *)v1, v0);
  }
}
