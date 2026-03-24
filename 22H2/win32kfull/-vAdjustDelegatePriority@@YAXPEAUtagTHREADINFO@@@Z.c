/*
 * XREFs of ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C004FBA4
 * Callers:
 *     AdjustPwndPtiPqForDelegation @ 0x1C004F480 (AdjustPwndPtiPqForDelegation.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004FBD0 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdjustDelegatePriority(struct tagTHREADINFO *a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  HANDLE ThreadId; // rax
  __int128 v6; // [rsp+20h] [rbp-38h]
  __int128 SystemInformation; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]

  v9 = 0;
  v4 = *((_DWORD *)a1 + 308);
  if ( (v4 & 0x2000) != 0
    && (v4 & 0x4000) == 0
    && (PsGetCurrentProcess(a1, a2, a3) == gpepCSRSS || (unsigned __int8)IsInputThread()) )
  {
    *(_QWORD *)&v6 = PsGetThreadProcessId(*(PETHREAD *)a1);
    ThreadId = PsGetThreadId(*(PETHREAD *)a1);
    v8 = 13;
    *((_QWORD *)&v6 + 1) = ThreadId;
    SystemInformation = v6;
    if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL) >= 0 )
      *((_DWORD *)a1 + 308) |= 0x4000u;
  }
}
