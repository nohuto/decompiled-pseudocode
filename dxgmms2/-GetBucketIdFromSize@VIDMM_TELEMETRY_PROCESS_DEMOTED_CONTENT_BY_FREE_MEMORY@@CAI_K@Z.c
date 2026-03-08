/*
 * XREFs of ?GetBucketIdFromSize@VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_FREE_MEMORY@@CAI_K@Z @ 0x1C00F4070
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C008B300 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_FREE_MEMORY::GetBucketIdFromSize(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx

  if ( a1 >= 0xA00000 )
  {
    if ( a1 >= 0x6400000 )
    {
      if ( a1 >= 0x3E800000 )
      {
        LODWORD(v1) = 28;
        return (unsigned int)v1;
      }
      LODWORD(v1) = (a1 - 104857600) / 0x6400000 + 19;
    }
    else
    {
      LODWORD(v1) = (a1 - 10485760) / 0xA00000 + 10;
    }
  }
  else
  {
    v1 = a1 >> 20;
  }
  if ( (unsigned int)v1 >= 0x1D && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  }
  return (unsigned int)v1;
}
