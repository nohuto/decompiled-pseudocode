/*
 * XREFs of ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1C0104CFC
 * Callers:
 *     ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1C0103AD4 (-AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C0104134 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::GetBlockListHead(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx

  v2 = a2 - 1;
  if ( !v2 )
    return a1 + 192;
  v3 = v2 - 1;
  if ( !v3 )
    return a1 + 208;
  v4 = v3 - 1;
  if ( !v4 )
    return a1 + 224;
  v5 = v4 - 1;
  if ( !v5 )
    return a1 + 240;
  v6 = v5 - 1;
  if ( !v6 )
    return a1 + 256;
  if ( v6 == 1 )
    return a1 + 272;
  return 0LL;
}
