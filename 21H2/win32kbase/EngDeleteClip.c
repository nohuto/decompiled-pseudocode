/*
 * XREFs of EngDeleteClip @ 0x1C0177FB0
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C016E370 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x1C0177EF0 (EngCreateClip.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     EngFreeMem @ 0x1C00486B0 (EngFreeMem.c)
 */

void __stdcall EngDeleteClip(CLIPOBJ *pco)
{
  struct _SLIST_ENTRY *v2; // rcx

  if ( pco )
  {
    v2 = *(struct _SLIST_ENTRY **)&pco[2].rclBounds.top;
    if ( v2 )
      REGION::vDeleteREGION(v2);
    EngFreeMem(pco);
  }
}
