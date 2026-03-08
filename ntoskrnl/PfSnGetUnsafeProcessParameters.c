/*
 * XREFs of PfSnGetUnsafeProcessParameters @ 0x1407E4FFC
 * Callers:
 *     PfSnScanCommandLine @ 0x1407E4F40 (PfSnScanCommandLine.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 PfSnGetUnsafeProcessParameters()
{
  unsigned __int64 v0; // rdx
  __int64 result; // rax

  v0 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[24];
  result = 0LL;
  if ( v0 )
  {
    if ( (*(_QWORD *)(v0 + 32) & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    return *(_QWORD *)(v0 + 32);
  }
  return result;
}
