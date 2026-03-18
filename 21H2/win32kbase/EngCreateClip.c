/*
 * XREFs of EngCreateClip @ 0x1C0177EF0
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C016EC50 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025A8C (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0027BB0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     EngAllocMem @ 0x1C00887E0 (EngAllocMem.c)
 *     EngDeleteClip @ 0x1C0177FB0 (EngDeleteClip.c)
 */

CLIPOBJ *EngCreateClip(void)
{
  CLIPOBJ *v0; // rbx
  struct _SLIST_ENTRY *v1; // rdi
  PSLIST_ENTRY ListEntry; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]
  struct _RECTL v5; // [rsp+30h] [rbp-18h] BYREF

  v0 = (CLIPOBJ *)EngAllocMem(1u, 0x98u, 0x76726447u);
  if ( !v0 )
    return v0;
  v4 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&ListEntry, 0x70u);
  v1 = ListEntry;
  if ( ListEntry )
  {
    *(_WORD *)&v0->iDComplexity = 256;
    v5.top = -134217728;
    v5.left = -134217728;
    v0->iMode = 0;
    v5.bottom = 0x7FFFFFF;
    v5.right = 0x7FFFFFF;
    *(_QWORD *)&v0[2].rclBounds.top = v1;
    RGNOBJ::vSet((struct _RECTL **)&ListEntry, &v5);
    if ( v4 == 1 )
      REGION::vDeleteREGION(v1);
    return v0;
  }
  EngDeleteClip(v0);
  if ( v4 == 1 )
    REGION::vDeleteREGION(0LL);
  return 0LL;
}
