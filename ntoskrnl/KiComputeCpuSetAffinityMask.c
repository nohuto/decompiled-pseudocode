/*
 * XREFs of KiComputeCpuSetAffinityMask @ 0x140574068
 * Callers:
 *     KiIntSteerComputeCpuSet @ 0x140577C28 (KiIntSteerComputeCpuSet.c)
 * Callees:
 *     RtlBeginReadTickLock @ 0x140236FBC (RtlBeginReadTickLock.c)
 */

__int64 __fastcall KiComputeCpuSetAffinityMask(__int64 a1, __int64 *a2, int a3, unsigned __int64 a4)
{
  __int64 TickLock; // rax
  __int64 v8; // r10
  __int64 v9; // r8
  unsigned __int64 i; // rbx
  unsigned __int64 v11; // rdx

  do
  {
    TickLock = RtlBeginReadTickLock(&KiCpuSetSequence);
    if ( v8 && *a2 == TickLock )
      return *(_QWORD *)v8;
    v9 = 0LL;
    for ( i = a4; i; i &= ~(1LL << v11) )
    {
      _BitScanForward64(&v11, i);
      v9 |= *((_QWORD *)KiCpuSetAffinities + (unsigned int)((a3 << 6) + v11));
    }
  }
  while ( KiCpuSetSequence != TickLock );
  *a2 = TickLock;
  if ( v8 )
    *(_QWORD *)v8 = v9;
  return v9;
}
