/*
 * XREFs of ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1C01CC47C
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0154060 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C000A1E4 (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     GetDebugHookLParamSize @ 0x1C0205EA8 (GetDebugHookLParamSize.c)
 */

__int64 __fastcall NtUserfnHkINLPDEBUGHOOKSTRUCT(int a1, unsigned __int64 a2, struct tagDEBUGHOOKINFO *a3)
{
  unsigned int DebugHookLParamSize; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentProcessWow64Process; // rax
  volatile void *Address[2]; // [rsp+28h] [rbp-40h] BYREF
  __int128 v12; // [rsp+38h] [rbp-30h]

  *(_OWORD *)Address = 0LL;
  v12 = 0LL;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagDEBUGHOOKINFO *)MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)a3;
  v12 = *((_OWORD *)a3 + 1);
  DebugHookLParamSize = GetDebugHookLParamSize(a2, Address);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v7, v6, v8);
  ProbeForRead(Address[1], DebugHookLParamSize, CurrentProcessWow64Process != 0 ? 1 : 4);
  return xxxCallNextHookEx(a1, a2, (__int64)Address);
}
