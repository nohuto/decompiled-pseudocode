/*
 * XREFs of ?HNSTIME_TO_FRAMES_DOUBLE_SAFE@@YAJ_JIPEAI@Z @ 0x140060B3C
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x140029200 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3PEAUICrossPr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HNSTIME_TO_FRAMES_DOUBLE_SAFE(int a1, int a2, unsigned int *a3)
{
  double v3; // xmm1_8

  v3 = (double)a1 * (double)a2 / 10000000.0 + 0.5;
  if ( v3 >= 4294967295.0 )
    return 2147942934LL;
  *a3 = (int)v3;
  return 0LL;
}
