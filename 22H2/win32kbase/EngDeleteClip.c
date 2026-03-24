/*
 * XREFs of EngDeleteClip @ 0x1C014C200
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C0141800 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x1C014C130 (EngCreateClip.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C002CE60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     EngFreeMem @ 0x1C007E1D0 (EngFreeMem.c)
 */

void __stdcall EngDeleteClip(CLIPOBJ *pco)
{
  REGION *v2; // rcx

  v2 = *(REGION **)&pco[2].rclBounds.top;
  if ( v2 )
    REGION::vDeleteREGION(v2);
  EngFreeMem(pco);
}
