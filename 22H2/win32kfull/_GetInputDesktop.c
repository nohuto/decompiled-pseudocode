/*
 * XREFs of _GetInputDesktop @ 0x1C01E93C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInputDesktop(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  if ( (unsigned __int8)ObFindHandleForObject(CurrentProcess, grpdeskRitInput, 0LL, 0LL, &v5)
    && (unsigned int)SetHandleFlag(v5, 1LL, 1LL) )
  {
    return v5;
  }
  else
  {
    return 0LL;
  }
}
