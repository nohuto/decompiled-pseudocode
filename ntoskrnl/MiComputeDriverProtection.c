/*
 * XREFs of MiComputeDriverProtection @ 0x14080A918
 * Callers:
 *     MiProtectLargeKernelHalRange @ 0x14080A3F0 (MiProtectLargeKernelHalRange.c)
 *     MiProtectSystemImage @ 0x14080A600 (MiProtectSystemImage.c)
 *     MiGetBootImagePageProtection @ 0x140B3BD78 (MiGetBootImagePageProtection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeDriverProtection(int a1, int a2)
{
  unsigned int v2; // r9d
  int v4; // r9d

  v2 = ((unsigned int)a2 >> 28) & 2 | 1;
  if ( (a2 & 0x40000000) == 0 )
    v2 = ((unsigned int)a2 >> 28) & 2;
  if ( a2 < 0 )
  {
    v4 = v2 & 2;
    if ( a1 != 1 )
      return v4 != 0 ? 6 : 4;
    v2 = v4 != 0 ? 7 : 5;
  }
  if ( !v2 )
    return 24;
  return v2;
}
