/*
 * XREFs of ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C0002764
 * Callers:
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C00687FC (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     DxgkCddVerifyCddDevMode @ 0x1C016AE20 (DxgkCddVerifyCddDevMode.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C03BE870 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBitsPerPixel(enum _D3DDDIFORMAT a1)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  v1 = a1 - 20;
  if ( !v1 )
    return 24LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 32LL;
  v4 = v2 - 1;
  if ( !v4 )
    return 32LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 16LL;
  v6 = v5 - 9;
  if ( !v6 )
    return 32LL;
  if ( v6 == 9 )
    return 8LL;
  else
    return 0LL;
}
