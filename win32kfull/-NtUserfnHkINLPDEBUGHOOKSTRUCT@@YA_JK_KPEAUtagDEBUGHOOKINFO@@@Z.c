/*
 * XREFs of ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1C01CD4D8
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0147340 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0009C64 (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     GetDebugHookLParamSize @ 0x1C0208A78 (GetDebugHookLParamSize.c)
 */

__int64 __fastcall NtUserfnHkINLPDEBUGHOOKSTRUCT(int a1, unsigned __int64 a2, struct tagDEBUGHOOKINFO *a3)
{
  unsigned int DebugHookLParamSize; // ebx
  __int64 v6; // rcx
  __int64 CurrentProcessWow64Process; // rax
  volatile void *Address[2]; // [rsp+28h] [rbp-40h] BYREF
  __int128 v10; // [rsp+38h] [rbp-30h]

  *(_OWORD *)Address = 0LL;
  v10 = 0LL;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagDEBUGHOOKINFO *)MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)a3;
  v10 = *((_OWORD *)a3 + 1);
  DebugHookLParamSize = GetDebugHookLParamSize(a2, Address);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6);
  ProbeForRead(Address[1], DebugHookLParamSize, CurrentProcessWow64Process != 0 ? 1 : 4);
  return xxxCallNextHookEx(a1, a2, (__int64)Address);
}
