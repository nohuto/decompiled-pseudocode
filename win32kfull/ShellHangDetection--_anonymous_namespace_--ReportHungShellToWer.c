/*
 * XREFs of ShellHangDetection::_anonymous_namespace_::ReportHungShellToWer @ 0x1C02204C8
 * Callers:
 *     ?Execute@ShellHangDetection@@YAXXZ @ 0x1C000EDD4 (-Execute@ShellHangDetection@@YAXXZ.c)
 * Callees:
 *     IsShellProcess @ 0x1C009C278 (IsShellProcess.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall ShellHangDetection::_anonymous_namespace_::ReportHungShellToWer(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *StartContext; // rbx
  unsigned int ThreadId; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  void *ThreadHandle; // [rsp+80h] [rbp+8h] BYREF

  if ( !(unsigned int)IsShellProcess(*(_QWORD *)(a1 + 424)) )
  {
    LODWORD(ThreadHandle) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2152);
  }
  v2 = (_DWORD *)Win32AllocPoolNonPagedZInit(12LL, 1163359061LL);
  StartContext = v2;
  if ( v2 )
  {
    *v2 = *(_DWORD *)(*(_QWORD *)(a1 + 424) + 56LL);
    ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)a1);
    StartContext[2] = 1024;
    StartContext[1] = ThreadId;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ThreadHandle = 0LL;
    memset(&ObjectAttributes.RootDirectory, 0, 40);
    if ( PsCreateSystemThread(
           &ThreadHandle,
           0x1FFFFFu,
           &ObjectAttributes,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           0LL,
           (PKSTART_ROUTINE)lambda_ee4856d16542b31eb6609ee4cd7f16f7_::_lambda_invoker_cdecl_,
           StartContext) < 0 )
      Win32FreePool(StartContext);
    else
      ZwClose(ThreadHandle);
  }
}
