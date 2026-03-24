/*
 * XREFs of CitModerncoreProcessForegroundChange @ 0x1C01FEC20
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C004C738 (-CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagSHELL_INPUT_USAGE_DATA_.c)
 */

__int64 __fastcall CitModerncoreProcessForegroundChange(int a1, int a2)
{
  void *v2; // rbx
  struct tagPROCESSINFO *v3; // rsi
  struct tagPROCESSINFO *v4; // rdi
  NTSTATUS v5; // eax
  struct _KPROCESS *v6; // rcx
  NTSTATUS v7; // eax
  struct _KPROCESS *v8; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 result; // rax
  PEPROCESS v11; // [rsp+50h] [rbp+30h] BYREF
  PEPROCESS Process; // [rsp+58h] [rbp+38h] BYREF

  v2 = (void *)a2;
  Process = 0LL;
  v3 = 0LL;
  v11 = 0LL;
  v4 = 0LL;
  v5 = PsLookupProcessByProcessId((HANDLE)a1, &Process);
  v6 = Process;
  if ( v5 < 0 )
    v6 = 0LL;
  Process = v6;
  v7 = PsLookupProcessByProcessId(v2, &v11);
  v8 = v11;
  if ( v7 < 0 )
    v8 = 0LL;
  v11 = v8;
  if ( Process )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Process);
    v8 = v11;
    v3 = (struct tagPROCESSINFO *)ProcessWin32Process;
  }
  if ( v8 )
    v4 = (struct tagPROCESSINFO *)PsGetProcessWin32Process(v8);
  result = CitpProcessForegroundChange(v4, 0LL, v3, 0LL);
  if ( v11 )
    result = ObfDereferenceObject(v11);
  if ( Process )
    return ObfDereferenceObject(Process);
  return result;
}
