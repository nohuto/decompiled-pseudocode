/*
 * XREFs of ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C010C4F0
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00E5A90 (vSpDynamicModeChange.c)
 *     ?vSpDisableSprites@@YAXPEAUHDEV__@@@Z @ 0x1C00EF6B8 (-vSpDisableSprites@@YAXPEAUHDEV__@@@Z.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C010C748 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C010D158 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C027C92C (-GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027D338 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C0281980 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C0281B48 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x1C0281F18 (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0282054 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C028246C (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0065AF0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065E34 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C00EF824 (-vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C010C698 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpFreeClipResources@@YAXPEAVSPRITE@@@Z @ 0x1C010C6D0 (-vSpFreeClipResources@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C010C70C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0110C1C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 */

void __fastcall vSpDeleteSprite(struct SPRITE *a1)
{
  __int64 *v1; // rsi
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 *v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax
  HSURF v12; // rbx
  __int64 *v13[24]; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD *v14; // [rsp+100h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = (__int64 *)*((_QWORD *)a1 + 2);
    v14 = (_QWORD *)*v1;
    if ( !*((_DWORD *)Gre::Base::Globals(a1) + 798) )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v13, (struct PDEVOBJ *)&v14);
      bSpUpdatePosition(a1, 0LL, 0, 0);
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v13);
    }
    if ( (struct SPRITE *)v1[1] == a1 )
    {
      v1[1] = *((_QWORD *)a1 + 3);
      v11 = *((_QWORD *)a1 + 3);
      if ( v11 )
        *(_QWORD *)(v11 + 32) = 0LL;
      if ( !v1[1] )
        v1[2] = 0LL;
    }
    else
    {
      v3 = *((_QWORD *)a1 + 4);
      if ( (struct SPRITE *)v1[2] == a1 )
        v1[2] = v3;
      else
        *(_QWORD *)(*((_QWORD *)a1 + 3) + 32LL) = v3;
      *(_QWORD *)(*((_QWORD *)a1 + 4) + 24LL) = *((_QWORD *)a1 + 3);
    }
    v4 = *((_QWORD *)a1 + 5);
    v5 = *((_QWORD *)a1 + 6);
    if ( v4 )
      *(_QWORD *)(v4 + 48) = v5;
    if ( v5 )
      *(_QWORD *)(v5 + 40) = v4;
    else
      v1[3] = v4;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
      vSpDeleteExMirror((_QWORD *)*v1);
    vSpFreeClipResources(a1);
    REGION::vDeleteREGION(*((REGION **)a1 + 24));
    vSpDeleteShape(a1);
    vSpDeleteSurface(*((struct _SURFOBJ **)a1 + 20));
    v6 = *((_QWORD *)a1 + 15);
    if ( v6 )
    {
      bDeleteSurface(*(_QWORD *)(v6 + 8));
      *((_QWORD *)a1 + 15) = 0LL;
    }
    v7 = (void *)*((_QWORD *)a1 + 31);
    if ( v7 )
      Win32FreePool(v7);
    v8 = v1 + 19;
    v9 = 64LL;
    do
    {
      v10 = *v8;
      if ( *v8 )
      {
        *(_DWORD *)(v10 + 92) = 0;
        v12 = *(HSURF *)(v10 + 8);
        EngUnlockSurface((SURFOBJ *)v10);
        EngDeleteSurface(v12);
      }
      *v8++ = 0LL;
      --v9;
    }
    while ( v9 );
    RtlClearAllBits((PRTL_BITMAP)(v1 + 83));
    Win32FreePool(a1);
  }
}
