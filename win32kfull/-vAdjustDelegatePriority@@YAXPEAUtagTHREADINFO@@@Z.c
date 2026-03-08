/*
 * XREFs of ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0047028
 * Callers:
 *     EditionPostMouseMoveToQ @ 0x1C0037070 (EditionPostMouseMoveToQ.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     NtUserScheduleDispatchNotification @ 0x1C0046B90 (NtUserScheduleDispatchNotification.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C009FA68 (AdjustPwndPtiPqForDelegation.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdjustDelegatePriority(struct tagTHREADINFO *a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  HANDLE ThreadProcessId; // rbx
  HANDLE ThreadId; // rax
  _QWORD SystemInformation[2]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-14h]

  v11 = 0;
  v4 = *((_DWORD *)a1 + 318);
  if ( (v4 & 0x2000) != 0
    && (v4 & 0x4000) == 0
    && (PsGetCurrentProcess(a1, a2, a3) == gpepCSRSS
     || (unsigned __int8)IsInputThread(gpepCSRSS, v5, v6)
     || a1 == (struct tagTHREADINFO *)gptiManipulationThread) )
  {
    ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)a1);
    ThreadId = PsGetThreadId(*(PETHREAD *)a1);
    SystemInformation[0] = ThreadProcessId;
    SystemInformation[1] = ThreadId;
    v10 = 13;
    if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, SystemInformation, 0x18uLL) >= 0 )
      *((_DWORD *)a1 + 318) |= 0x4000u;
  }
}
