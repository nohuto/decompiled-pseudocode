/*
 * XREFs of ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C028246C
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00E5A90 (vSpDynamicModeChange.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C010C4F0 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C010D1FC (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C010E114 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0110C1C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C02811FC (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C02833FC (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

struct SPRITE *__fastcall pSpTransferSprite(HDEV a1, struct SPRITE *a2)
{
  HWND v2; // r8
  struct SPRITE *v3; // rbx
  struct SPRITE *Sprite; // rax
  __int64 v7; // rcx
  int v8; // r9d
  __int64 v9; // rax
  __int64 i; // rcx
  __int64 v12; // rax
  __int64 j; // rcx
  struct _POINTL v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (HWND)*((_QWORD *)a2 + 9);
  v3 = 0LL;
  if ( !v2 || (Sprite = pSpCreateSprite(a1, 0LL, v2, 0LL), (v3 = Sprite) == 0LL) )
  {
LABEL_5:
    v9 = *((_QWORD *)a2 + 1);
    if ( v9 )
    {
      *(_DWORD *)(v9 + 16) |= 4u;
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v9 + 20); i = (unsigned int)(i + 1) )
      {
        if ( *(struct SPRITE **)(v9 + 8 * i + 24) == a2 )
          *(_QWORD *)(v9 + 8 * i + 24) = 0LL;
      }
    }
    goto LABEL_10;
  }
  v14 = (struct _POINTL)*((_QWORD *)a2 + 14);
  v7 = **((_QWORD **)a2 + 2);
  v8 = *(_DWORD *)(v7 + 2564) - *((_DWORD *)a1 + 641);
  v14.x += *(_DWORD *)(v7 + 2560) - *((_DWORD *)a1 + 640);
  v14.y += v8;
  bSpTransferShape(Sprite, a2);
  *((_QWORD *)v3 + 24) = *((_QWORD *)a2 + 24);
  *((_QWORD *)a2 + 24) = 0LL;
  if ( !(unsigned int)bSpUpdatePosition(v3, &v14, 0, 0) )
  {
    vSpDeleteSprite(v3);
    v3 = 0LL;
    goto LABEL_5;
  }
  v12 = *((_QWORD *)a2 + 1);
  if ( v12 )
  {
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v12 + 20); j = (unsigned int)(j + 1) )
    {
      if ( *(struct SPRITE **)(v12 + 8 * j + 24) == a2 )
      {
        *(_QWORD *)(v12 + 8 * j + 24) = v3;
        *((_QWORD *)v3 + 1) = v12;
      }
    }
  }
LABEL_10:
  if ( (*(_DWORD *)a2 & 0x40) != 0 )
  {
    if ( v3 )
      pSpHintSpriteShape(v3, *((HSURF *)a2 + 30), 0);
    pSpHintSpriteShape(a2, 0LL, 0);
  }
  if ( (*(_DWORD *)a2 & 0x100) != 0 && v3 )
  {
    *(_DWORD *)v3 |= 0x100u;
    vSpCreateExMirror(**((HDEV **)v3 + 2));
  }
  vSpDeleteSprite(a2);
  return v3;
}
