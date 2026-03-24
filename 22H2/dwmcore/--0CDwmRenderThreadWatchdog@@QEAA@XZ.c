/*
 * XREFs of ??0CDwmRenderThreadWatchdog@@QEAA@XZ @ 0x180027490
 * Callers:
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x180027134 (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 * Callees:
 *     ??0CWatchdogTimer@@QEAA@XZ @ 0x180027574 (--0CWatchdogTimer@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180030E04 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

CDwmRenderThreadWatchdog *__fastcall CDwmRenderThreadWatchdog::CDwmRenderThreadWatchdog(CDwmRenderThreadWatchdog *this)
{
  HANDLE CurrentProcess; // rdi
  HANDLE CurrentThread; // rbx
  HANDLE v4; // rax
  BOOL v5; // ebx
  signed int LastError; // eax
  bool v8; // sf
  HANDLE TargetHandle; // [rsp+48h] [rbp-20h] BYREF
  char v10; // [rsp+50h] [rbp-18h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  CWatchdogTimer::CWatchdogTimer(this);
  TargetHandle = 0LL;
  *(_QWORD *)this = &CDwmRenderThreadWatchdog::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = CCommonRegistryData::InitialWatchdogTelemetryTimeoutMilliseconds;
  *((_DWORD *)this + 13) = CCommonRegistryData::RecurringWatchdogTelemetryTimeoutMilliseconds;
  v10 = 1;
  CurrentProcess = GetCurrentProcess();
  CurrentThread = GetCurrentThread();
  v4 = GetCurrentProcess();
  v5 = DuplicateHandle(v4, CurrentThread, CurrentProcess, &TargetHandle, 0, 0, 2u);
  if ( v10 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (char *)this + 32,
      TargetHandle);
  if ( !v5 )
  {
    LastError = GetLastError();
    v8 = LastError < 0;
    if ( LastError > 0 )
    {
      LastError = (unsigned __int16)LastError | 0x80070000;
      v8 = LastError < 0;
    }
    if ( v8 )
      ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
  }
  return this;
}
