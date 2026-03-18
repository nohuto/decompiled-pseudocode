/*
 * XREFs of CitModerncoreProcessForegroundChange @ 0x1C0240944
 * Callers:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1C0091630 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 * Callees:
 *     ?CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C004CBF8 (-CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagSHELL_INPUT_USAGE_DATA_.c)
 */

__int64 __fastcall CitModerncoreProcessForegroundChange(int a1, int a2)
{
  struct tagPROCESSINFO *v2; // rbx
  void *v3; // rdi
  struct tagPROCESSINFO *ProcessWin32Process; // rsi
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF
  PEPROCESS Process; // [rsp+48h] [rbp+20h] BYREF

  v2 = 0LL;
  v3 = (void *)a2;
  Object = 0LL;
  ProcessWin32Process = 0LL;
  Process = 0LL;
  if ( a1 && PsLookupProcessByProcessId((HANDLE)a1, (PEPROCESS *)&Object) >= 0 )
  {
    ProcessWin32Process = (struct tagPROCESSINFO *)PsGetProcessWin32Process(Object);
    ObfDereferenceObject(Object);
  }
  if ( (_DWORD)v3 && PsLookupProcessByProcessId(v3, &Process) >= 0 )
  {
    v2 = (struct tagPROCESSINFO *)PsGetProcessWin32Process(Process);
    ObfDereferenceObject(Process);
  }
  return CitpProcessForegroundChange(v2, 0LL, ProcessWin32Process, 0LL);
}
