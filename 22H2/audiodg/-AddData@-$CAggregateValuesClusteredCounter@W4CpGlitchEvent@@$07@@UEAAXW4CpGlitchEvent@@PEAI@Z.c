/*
 * XREFs of ?AddData@?$CAggregateValuesClusteredCounter@W4CpGlitchEvent@@$07@@UEAAXW4CpGlitchEvent@@PEAI@Z @ 0x140061E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAggregateValuesClusteredCounter<enum CpGlitchEvent,8>::AddData(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3)
{
  __int64 result; // rax

  if ( a3 )
    return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4LL * a2 + 48), *a3);
  return result;
}
