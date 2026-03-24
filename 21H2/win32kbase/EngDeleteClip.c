/*
 * XREFs of EngDeleteClip @ 0x1C014BF10
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C01414B0 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x1C014BE40 (EngCreateClip.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C002B9F0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     EngFreeMem @ 0x1C007CAF0 (EngFreeMem.c)
 */

void __stdcall EngDeleteClip(CLIPOBJ *pco)
{
  REGION *v2; // rcx

  v2 = *(REGION **)&pco[2].rclBounds.top;
  if ( v2 )
    REGION::vDeleteREGION(v2);
  EngFreeMem(pco);
}
