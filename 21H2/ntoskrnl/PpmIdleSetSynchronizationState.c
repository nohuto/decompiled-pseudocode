/*
 * XREFs of PpmIdleSetSynchronizationState @ 0x140567010
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402C6DB0 (PpmIdleExecuteTransition.c)
 *     PpmIdleSelectStates @ 0x1403956D0 (PpmIdleSelectStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleSetSynchronizationState(unsigned __int32 *a1, unsigned __int8 a2)
{
  unsigned __int32 v2; // eax
  unsigned __int32 v3; // r8d

  _m_prefetchw(a1);
  v2 = *a1;
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)a1, (a2 << 24) | v2 & 0xFFFFFF, v2);
  }
  while ( v2 != v3 );
  return HIBYTE(v2);
}
