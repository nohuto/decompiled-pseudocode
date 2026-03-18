/*
 * XREFs of PoSetUserPresent @ 0x14058DE50
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EFC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     PopSetSystemState @ 0x14058DFAC (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PoSetUserPresent(unsigned int a1)
{
  char v2; // bl
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]

  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    PopAcquirePolicyLock(a1);
    v2 = 1;
  }
  if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
  {
    v4 = 0LL;
    v5 = 0;
    v6 = 0;
    EtwTraceKernelEvent((int)&v4, 1, 0x80008000, 4673, 4200450);
  }
  result = PopSetSystemState(4LL, a1);
  if ( v2 )
    return PopReleasePolicyLock();
  return result;
}
