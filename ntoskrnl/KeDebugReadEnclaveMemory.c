/*
 * XREFs of KeDebugReadEnclaveMemory @ 0x1409715B4
 * Callers:
 *     MiDbgReadWriteEnclave @ 0x140A3AF6C (MiDbgReadWriteEnclave.c)
 *     MiDbgReadWriteEnclaveUnaligned @ 0x140A3B05C (MiDbgReadWriteEnclaveUnaligned.c)
 * Callees:
 *     KiEnclsDebugRead @ 0x140417250 (KiEnclsDebugRead.c)
 */

__int64 __fastcall KeDebugReadEnclaveMemory(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  *a4 = 0LL;
  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  while ( a3 )
  {
    *a2 = KiEnclsDebugRead(4LL, 0LL);
    a1 += 8LL;
    ++a2;
    a3 -= 8LL;
    *a4 += 8LL;
  }
  return 0LL;
}
