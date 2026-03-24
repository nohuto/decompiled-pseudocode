/*
 * XREFs of ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C00F0084
 * Callers:
 *     ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x1C00EFFB8 (-GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027E280 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C008BE40 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008C448 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00F0208 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00F02A4 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F04E0 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F099C (-vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall vSpZorderSprite(HDEV a1, struct SPRITE *a2, struct SPRITE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  char *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 *v13[24]; // [rsp+20h] [rbp-C8h] BYREF
  HDEV v14; // [rsp+F0h] [rbp+8h] BYREF

  v14 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v13, (struct PDEVOBJ *)&v14);
  v6 = *((_QWORD *)a1 + 12);
  if ( a2 && v6 )
  {
    if ( (struct SPRITE *)v6 == a2 )
    {
      *((_QWORD *)a1 + 12) = *(_QWORD *)(v6 + 24);
      v7 = *(_QWORD *)(v6 + 24);
      if ( v7 )
        *(_QWORD *)(v7 + 32) = 0LL;
      else
        *((_QWORD *)a1 + 13) = 0LL;
      *(_QWORD *)(v6 + 24) = 0LL;
      *(_QWORD *)(v6 + 32) = 0LL;
      v8 = (char *)a2 + 24;
      v9 = *((_QWORD *)a2 + 3);
    }
    else
    {
      v8 = (char *)a2 + 24;
      v11 = *((_QWORD *)a2 + 4);
      if ( *((struct SPRITE **)a1 + 13) == a2 )
        *((_QWORD *)a1 + 13) = v11;
      else
        *(_QWORD *)(*(_QWORD *)v8 + 32LL) = v11;
      *(_QWORD *)(*((_QWORD *)a2 + 4) + 24LL) = *(_QWORD *)v8;
      *(_QWORD *)v8 = 0LL;
      *((_QWORD *)a2 + 4) = 0LL;
      v9 = 0LL;
    }
    if ( !v9 && !*((_QWORD *)a2 + 4) )
    {
      if ( a3 )
      {
        *(_QWORD *)v8 = *((_QWORD *)a3 + 3);
        v12 = *((_QWORD *)a3 + 3);
        if ( v12 )
          *(_QWORD *)(v12 + 32) = a2;
        *((_QWORD *)a3 + 3) = a2;
        *((_QWORD *)a2 + 4) = a3;
        if ( *((struct SPRITE **)a1 + 13) == a3 )
          *((_QWORD *)a1 + 13) = a2;
      }
      else
      {
        *(_QWORD *)v8 = *((_QWORD *)a1 + 12);
        v10 = *((_QWORD *)a1 + 12);
        if ( v10 )
          *(_QWORD *)(v10 + 32) = a2;
        else
          *((_QWORD *)a1 + 13) = a2;
        *((_QWORD *)a1 + 12) = a2;
      }
      vSpRenumberZOrder((struct _SPRITESTATE *)(a1 + 22));
      vSpRemoveAllSpriteOverlapPresents(a1);
      ++giSpriteUniqueness;
      *((_DWORD *)a1 + 51) = 0;
      vSpComputeSpriteRanges((struct _SPRITESTATE *)(a1 + 22));
      vSpRedrawSprite(a2);
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v13);
}
