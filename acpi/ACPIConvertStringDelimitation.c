/*
 * XREFs of ACPIConvertStringDelimitation @ 0x1C0043964
 * Callers:
 *     ACPIBuildProcessDevicePhaseCid @ 0x1C000ED30 (ACPIBuildProcessDevicePhaseCid.c)
 *     IsPciBusAsyncWorker @ 0x1C0035350 (IsPciBusAsyncWorker.c)
 *     IsPciDeviceWorker @ 0x1C0035980 (IsPciDeviceWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIConvertStringDelimitation(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 )
  {
    v1 = -1LL;
    do
      ++v1;
    while ( *(_BYTE *)(a1 + v1) );
    while ( 1 )
    {
      v1 += a1;
      if ( !*(_BYTE *)(v1 + 1) )
        break;
      *(_BYTE *)v1 = 32;
      a1 = -1LL;
      do
        ++a1;
      while ( *(_BYTE *)(v1 + a1) );
    }
  }
}
