/*
 * XREFs of KeDebugWriteEnclaveMemory @ 0x14097163C
 * Callers:
 *     MiDbgReadWriteEnclave @ 0x140A3AF6C (MiDbgReadWriteEnclave.c)
 *     MiDbgReadWriteEnclaveUnaligned @ 0x140A3B05C (MiDbgReadWriteEnclaveUnaligned.c)
 * Callees:
 *     KiEncls @ 0x140417230 (KiEncls.c)
 */

__int64 __fastcall KeDebugWriteEnclaveMemory(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  *a4 = 0LL;
  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  while ( a3 )
  {
    KiEncls(5u);
    a1 += 8LL;
    a2 += 8LL;
    a3 -= 8LL;
    *a4 += 8LL;
  }
  return 0LL;
}
