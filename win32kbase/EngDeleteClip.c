/*
 * XREFs of EngDeleteClip @ 0x1C0197C00
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C018B1D0 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x1C0197B70 (EngCreateClip.c)
 * Callees:
 *     EngFreeMem @ 0x1C002AE00 (EngFreeMem.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00558E0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __stdcall EngDeleteClip(CLIPOBJ *pco)
{
  unsigned __int64 v2; // rcx

  if ( pco )
  {
    v2 = *(_QWORD *)&pco[2].rclBounds.top;
    if ( v2 )
      REGION::vDeleteREGION(v2);
    EngFreeMem(pco);
  }
}
