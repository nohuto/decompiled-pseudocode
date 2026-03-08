/*
 * XREFs of ?VidMmiTickCountTo100ns@@YA_K_K@Z @ 0x1C00F1B08
 * Callers:
 *     ?DefragmentSegment@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00EC880 (-DefragmentSegment@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VidMmiTickCountTo100ns(__int64 a1)
{
  return (unsigned __int64)(10000000 * a1) / VIDMM_GLOBAL::_QpcFrequency.QuadPart;
}
