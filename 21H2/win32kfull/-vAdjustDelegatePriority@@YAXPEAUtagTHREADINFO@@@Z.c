/*
 * XREFs of ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00AC7DC
 * Callers:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C00AC8D8 (AdjustPwndPtiPqForDelegation.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdjustDelegatePriority(struct tagTHREADINFO *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  HANDLE ThreadProcessId; // rbx
  HANDLE ThreadId; // rax
  _QWORD SystemInformation[2]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-14h]

  v11 = 0;
  v3 = *((_DWORD *)a1 + 314);
  if ( (v3 & 0x2000) != 0
    && (v3 & 0x4000) == 0
    && (PsGetCurrentProcess(a1, a2) == gpepCSRSS || (unsigned __int8)IsInputThread(gpepCSRSS, v4, v5, v6)) )
  {
    ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)a1);
    ThreadId = PsGetThreadId(*(PETHREAD *)a1);
    SystemInformation[0] = ThreadProcessId;
    SystemInformation[1] = ThreadId;
    v10 = 13;
    if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, SystemInformation, 0x18uLL) >= 0 )
      *((_DWORD *)a1 + 314) |= 0x4000u;
  }
}
