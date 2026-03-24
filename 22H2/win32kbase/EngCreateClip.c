/*
 * XREFs of EngCreateClip @ 0x1C014C130
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C0142080 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C002C4A8 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C002CE60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0035D50 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     EngAllocMem @ 0x1C007BAC0 (EngAllocMem.c)
 *     EngDeleteClip @ 0x1C014C200 (EngDeleteClip.c)
 */

CLIPOBJ *EngCreateClip(void)
{
  CLIPOBJ *v0; // rbx
  __int64 v1; // r8
  REGION *v2; // rdi
  REGION *v4; // [rsp+20h] [rbp-20h] BYREF
  int v5; // [rsp+28h] [rbp-18h]
  struct _RECTL v6; // [rsp+30h] [rbp-10h] BYREF

  v0 = (CLIPOBJ *)EngAllocMem(1u, 0x98u, 0x76726447u);
  if ( !v0 )
    return v0;
  v4 = 0LL;
  v5 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v4, 112LL, v1);
  v2 = v4;
  if ( v4 )
  {
    *(_WORD *)&v0->iDComplexity = 256;
    v6.top = -134217728;
    v6.left = -134217728;
    v0->iMode = 0;
    v6.bottom = 0x7FFFFFF;
    v6.right = 0x7FFFFFF;
    *(_QWORD *)&v0[2].rclBounds.top = v2;
    RGNOBJ::vSet((struct _RECTL **)&v4, &v6);
    if ( v5 == 1 )
      REGION::vDeleteREGION(v2);
    return v0;
  }
  EngDeleteClip(v0);
  if ( v5 == 1 )
    REGION::vDeleteREGION(0LL);
  return 0LL;
}
