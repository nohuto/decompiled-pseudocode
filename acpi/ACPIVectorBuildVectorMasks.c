/*
 * XREFs of ACPIVectorBuildVectorMasks @ 0x1C0043D44
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x1C002BE44 (ACPIGpeBuildEventMasks.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C002C3F8 (ACPIGpeInstallRemoveIndex.c)
 */

void ACPIVectorBuildVectorMasks()
{
  unsigned int i; // ebx
  char *v1; // r10
  int v2; // edx

  for ( i = 0; i < GpeVectorTableSize; ++i )
  {
    v1 = (char *)*((_QWORD *)GpeVectorTable + 2 * i + 1);
    if ( v1
      && !ACPIGpeInstallRemoveIndex(*(unsigned int *)v1, *((_DWORD *)v1 + 7) == 0, 0, v1 + 25)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        14,
        10,
        (__int64)&WPP_7b0d4207db2a3169cd3bb4e871adee9d_Traceguids,
        i);
    }
  }
}
