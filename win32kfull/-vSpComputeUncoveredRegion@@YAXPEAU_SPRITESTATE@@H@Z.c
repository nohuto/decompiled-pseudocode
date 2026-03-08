/*
 * XREFs of ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C010DDB4
 * Callers:
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C010DBBC (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0271694 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vStamp@REGION@@QEAAXXZ @ 0x1C010DE80 (-vStamp@REGION@@QEAAXXZ.c)
 *     ?vComputeUncoveredSpriteRegion@RGNOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C010DEB4 (-vComputeUncoveredSpriteRegion@RGNOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 */

void __fastcall vSpComputeUncoveredRegion(struct _SPRITESTATE *a1, int a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+20h] BYREF
  __int64 v8; // [rsp+60h] [rbp+30h] BYREF
  __int64 v9; // [rsp+68h] [rbp+38h] BYREF

  v4 = *((_QWORD *)a1 + 87);
  v5 = *((_QWORD *)a1 + 18) - *((_QWORD *)a1 + 17) + 16LL;
  if ( *(unsigned int *)(v4 + 24) < v5 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v7, v5);
    if ( !v7 )
      return;
    v8 = v4;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
    v4 = v7;
    *((_QWORD *)a1 + 87) = v7;
  }
  v7 = *(_QWORD *)a1;
  v9 = v4;
  RGNOBJ::vComputeUncoveredSpriteRegion((RGNOBJ *)&v9, (struct PDEVOBJ *)&v7);
  RGNOBJ::vTighten((RGNOBJ *)&v9);
  if ( *((_QWORD *)a1 + 129) && a2 == 1 )
  {
    v6 = *((_QWORD *)a1 + 129);
    v8 = *((_QWORD *)a1 + 88);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v7);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v7);
    if ( v7 )
    {
      RGNOBJ::vSet((RGNOBJ *)&v8, (const struct _RECTL *const)((char *)a1 + 40));
      if ( !RGNOBJ::bMerge((RGNOBJ *)&v7, (struct RGNOBJ *)&v8, (struct RGNOBJ *)&v6, 4u) )
        RGNOBJ::vSet((RGNOBJ *)&v7);
      if ( !RGNOBJ::bMerge((RGNOBJ *)&v8, (struct RGNOBJ *)&v9, (struct RGNOBJ *)&v7, 0xEu) )
        RGNOBJ::vSet((RGNOBJ *)&v8);
      *((_QWORD *)a1 + 87) = v8;
      *((_QWORD *)a1 + 88) = v9;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v7);
  }
  REGION::vStamp(*((REGION **)a1 + 87));
}
