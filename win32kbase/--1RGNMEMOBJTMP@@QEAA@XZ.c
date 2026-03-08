/*
 * XREFs of ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0055304
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0019558 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x1C0019830 (GreExtCreateRegion.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C001B660 (-bCompute@DC@@QEAAHXZ.c)
 *     GreCombineRgn @ 0x1C0041BD0 (GreCombineRgn.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0042720 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C00434E0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00436C0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0056850 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0183370 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0184084 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0189A30 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C018BD80 (EngUpdateDeviceSurface.c)
 *     GreIntersectVisRect @ 0x1C0197D20 (GreIntersectVisRect.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C00453C0 (PopThreadGuardedObject.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00558E0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall RGNMEMOBJTMP::~RGNMEMOBJTMP(PVOID *this)
{
  _QWORD *v2; // rcx

  v2 = *this;
  if ( v2 )
    PopThreadGuardedObject(v2 + 11);
  REGION::vDeleteREGION(*this);
  *this = 0LL;
}
