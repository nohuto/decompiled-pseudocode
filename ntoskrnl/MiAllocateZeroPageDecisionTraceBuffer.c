/*
 * XREFs of MiAllocateZeroPageDecisionTraceBuffer @ 0x1403AE45C
 * Callers:
 *     MiAbsorbPossibleEngineChanges @ 0x1402A87C4 (MiAbsorbPossibleEngineChanges.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14034C1AC (ExAllocatePoolMm.c)
 */

_DWORD *__fastcall MiAllocateZeroPageDecisionTraceBuffer(__int64 a1, unsigned int a2)
{
  _DWORD *v2; // r9
  unsigned __int64 v3; // rbx
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 *v6; // rcx
  _QWORD *v7; // r8
  unsigned __int64 v8; // rbx
  _DWORD *PoolMm; // rax

  v2 = 0LL;
  v3 = 0LL;
  v4 = 2LL;
  v5 = *(_QWORD *)(a1 + 16) + 25408LL * a2;
  v6 = MiLargePageSizes;
  v7 = (_QWORD *)(v5 + 8);
  do
  {
    if ( *v7 )
      v3 += *v6 * *v7;
    v7 += 134;
    ++v6;
    --v4;
  }
  while ( v4 );
  v8 = v3 >> 12;
  if ( (unsigned int)v8 < 0x100 )
    LODWORD(v8) = 256;
  if ( 16LL * (unsigned int)v8 )
  {
    PoolMm = ExAllocatePoolMm(64, 16LL * (unsigned int)v8, 0x695A694Du, a2 | 0x80000000);
    v2 = PoolMm;
    if ( PoolMm )
    {
      PoolMm[1] = 0;
      *PoolMm = v8;
      PoolMm[2] = 1;
    }
  }
  return v2;
}
