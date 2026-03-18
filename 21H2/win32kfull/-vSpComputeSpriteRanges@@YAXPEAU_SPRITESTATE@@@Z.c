/*
 * XREFs of ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00B69FC
 * Callers:
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C00B62C0 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00B68CC (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vComputeUncoveredSpriteRegion@RGNOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00B6D90 (-vComputeUncoveredSpriteRegion@RGNOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00B7030 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00B793C (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 * Callees:
 *     ?bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z @ 0x1C00B6B50 (-bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z.c)
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00B6CA0 (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

void __fastcall vSpComputeSpriteRanges(struct _SPRITESTATE *a1)
{
  struct _SPRITESCAN *v2; // rax
  int v3; // r8d
  int v4; // ebp
  __int64 v5; // rdi
  struct SPRITE *v6; // rax
  struct SPRITE **v7; // rdx
  int v8; // ebx
  int v9; // eax
  int v10; // edx
  struct SPRITE **v11; // rcx
  struct SPRITE **v12; // r9
  int v13; // ecx
  unsigned __int64 v14; // [rsp+30h] [rbp-138h] BYREF
  struct _SPRITESCAN *v15; // [rsp+38h] [rbp-130h] BYREF
  struct SPRITE *v16[34]; // [rsp+40h] [rbp-128h] BYREF

  memset(v16, 0, sizeof(v16));
  v2 = (struct _SPRITESCAN *)*((_QWORD *)a1 + 17);
  v14 = 0LL;
  v3 = *((_DWORD *)a1 + 11);
  v4 = *((_DWORD *)a1 + 13);
  v5 = *((_QWORD *)a1 + 3);
  v15 = v2;
  while ( v5 && *(_DWORD *)(v5 + 92) <= v3 )
    v5 = *(_QWORD *)(v5 + 40);
  while ( 1 )
  {
    v6 = v16[7];
    v7 = v16;
    v8 = v4;
    while ( v6 )
    {
      v13 = *((_DWORD *)v6 + 23);
      if ( v13 == v3 )
      {
        v7[7] = (struct SPRITE *)*((_QWORD *)v6 + 7);
      }
      else
      {
        v7 = (struct SPRITE **)v6;
        if ( v13 > v8 )
          v13 = v8;
        v8 = v13;
      }
      v6 = v7[7];
    }
    while ( v5 )
    {
      v9 = *(_DWORD *)(v5 + 84);
      v10 = v8;
      if ( v9 != v3 )
      {
        if ( v9 <= v8 )
          v8 = *(_DWORD *)(v5 + 84);
        break;
      }
      v11 = v16;
      do
      {
        v12 = v11;
        v11 = (struct SPRITE **)v11[7];
      }
      while ( v11 && *((_DWORD *)v11 + 16) < *(_DWORD *)(v5 + 64) );
      v12[7] = (struct SPRITE *)v5;
      v8 = *(_DWORD *)(v5 + 92);
      *(_QWORD *)(v5 + 56) = v11;
      v5 = *(_QWORD *)(v5 + 40);
      if ( v8 > v10 )
        v8 = v10;
    }
    if ( !(unsigned int)bSpComputeScan(a1, v16[7], v3, v8, &v15, &v14) )
      break;
    v3 = v8;
    if ( v8 >= v4 )
    {
      *((_DWORD *)a1 + 29) = 1;
      vSpComputeUncoveredRegion(a1, 1);
      return;
    }
  }
}
