/*
 * XREFs of ??0CWatchdogTimer@@QEAA@XZ @ 0x180027574
 * Callers:
 *     ??0CDwmRenderThreadWatchdog@@QEAA@XZ @ 0x180027490 (--0CDwmRenderThreadWatchdog@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180030E04 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

CWatchdogTimer *__fastcall CWatchdogTimer::CWatchdogTimer(CWatchdogTimer *this)
{
  char *v1; // rdi
  char *WaitableTimerW; // rax
  char v5; // [rsp+20h] [rbp-18h] BYREF

  v1 = (char *)this + 16;
  *(_QWORD *)this = &CWatchdogTimer::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_WORD *)this + 12) = 0;
  *((_BYTE *)this + 26) = 0;
  WaitableTimerW = (char *)CreateWaitableTimerW(0LL, 0, 0LL);
  if ( v1 != &v5 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v1,
      WaitableTimerW);
    WaitableTimerW = 0LL;
  }
  if ( (unsigned __int64)(WaitableTimerW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(WaitableTimerW);
  return this;
}
