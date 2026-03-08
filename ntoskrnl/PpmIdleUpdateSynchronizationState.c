/*
 * XREFs of PpmIdleUpdateSynchronizationState @ 0x140583360
 * Callers:
 *     PoInitiateProcessorWake @ 0x140581880 (PoInitiateProcessorWake.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleUpdateSynchronizationState(unsigned __int32 *a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned __int32 v3; // eax
  int v4; // r10d
  int v5; // r8d
  unsigned __int32 v6; // edx

  _m_prefetchw(a1);
  v3 = *a1;
  v4 = a3;
  if ( HIBYTE(*a1) == a3 )
  {
    v5 = a2 << 24;
    do
    {
      v6 = v3;
      v3 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v5 | v3 & 0xFFFFFF, v3);
    }
    while ( v3 != v6 && HIBYTE(v3) == v4 );
  }
  return HIBYTE(v3);
}
