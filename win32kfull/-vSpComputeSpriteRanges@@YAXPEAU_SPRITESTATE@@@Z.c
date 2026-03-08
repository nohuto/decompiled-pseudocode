/*
 * XREFs of ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C010DBBC
 * Callers:
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0018714 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C010D79C (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C010DA60 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vComputeUncoveredSpriteRegion@RGNOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C010DEB4 (-vComputeUncoveredSpriteRegion@RGNOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0110C1C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z @ 0x1C010DCC4 (-bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z.c)
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C010DDB4 (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

void __fastcall vSpComputeSpriteRanges(struct _SPRITESTATE *a1)
{
  Gre::Base *v2; // rcx
  struct _SPRITESCAN *v3; // rax
  int v4; // r8d
  int v5; // ebp
  __int64 v6; // rdi
  struct SPRITE *v7; // rax
  struct SPRITE *v8; // rdx
  int v9; // ebx
  int v10; // ecx
  int v11; // eax
  _BYTE *v12; // rcx
  _QWORD *v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // [rsp+30h] [rbp-138h] BYREF
  struct _SPRITESCAN *v16; // [rsp+38h] [rbp-130h] BYREF
  _BYTE v17[56]; // [rsp+40h] [rbp-128h] BYREF
  struct SPRITE *v18; // [rsp+78h] [rbp-F0h]

  memset_0(v17, 0, 0x110uLL);
  Gre::Base::Globals(v2);
  v3 = (struct _SPRITESCAN *)*((_QWORD *)a1 + 17);
  v15 = 0LL;
  v4 = *((_DWORD *)a1 + 11);
  v5 = *((_DWORD *)a1 + 13);
  v6 = *((_QWORD *)a1 + 3);
  v16 = v3;
  while ( v6 && *(_DWORD *)(v6 + 92) <= v4 )
    v6 = *(_QWORD *)(v6 + 40);
  while ( 1 )
  {
    v7 = v18;
    v8 = (struct SPRITE *)v17;
    v9 = v5;
    while ( v7 )
    {
      v10 = *((_DWORD *)v7 + 23);
      if ( v10 == v4 )
      {
        *((_QWORD *)v8 + 7) = *((_QWORD *)v7 + 7);
      }
      else
      {
        v8 = v7;
        if ( v10 > v9 )
          v10 = v9;
        v9 = v10;
      }
      v7 = (struct SPRITE *)*((_QWORD *)v8 + 7);
    }
    while ( v6 )
    {
      v11 = *(_DWORD *)(v6 + 84);
      if ( v11 != v4 )
      {
        if ( v11 <= v9 )
          v9 = *(_DWORD *)(v6 + 84);
        break;
      }
      v12 = v17;
      do
      {
        v13 = v12 + 56;
        v12 = (_BYTE *)*((_QWORD *)v12 + 7);
      }
      while ( v12 && *((_DWORD *)v12 + 16) < *(_DWORD *)(v6 + 64) );
      *v13 = v6;
      v14 = *(_DWORD *)(v6 + 92);
      *(_QWORD *)(v6 + 56) = v12;
      v6 = *(_QWORD *)(v6 + 40);
      if ( v14 > v9 )
        v14 = v9;
      v9 = v14;
    }
    if ( !(unsigned int)bSpComputeScan(a1, v18, v4, v9, &v16, &v15) )
      break;
    v4 = v9;
    if ( v9 >= v5 )
    {
      *((_DWORD *)a1 + 29) = 1;
      vSpComputeUncoveredRegion(a1, 1);
      return;
    }
  }
}
