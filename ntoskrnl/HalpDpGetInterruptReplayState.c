/*
 * XREFs of HalpDpGetInterruptReplayState @ 0x140A942C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptSaveReplayState @ 0x140A94C7C (HalpInterruptSaveReplayState.c)
 */

__int64 __fastcall HalpDpGetInterruptReplayState(__int64 a1, _QWORD *a2)
{
  unsigned __int32 v3; // eax
  __int64 result; // rax
  __int64 v5; // rdi

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4), 1u);
  if ( v3 < *(_DWORD *)a1 )
  {
    v5 = *(_QWORD *)(a1 + 32) + *(_DWORD *)(a1 + 40) * v3;
    result = HalpInterruptSaveReplayState(v5);
    if ( (int)result >= 0 )
    {
      *a2 = v5;
      return 0LL;
    }
  }
  else
  {
    if ( a2 )
      *a2 = 0LL;
    return 3221225626LL;
  }
  return result;
}
