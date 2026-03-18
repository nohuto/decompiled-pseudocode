/*
 * XREFs of ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C027F464
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00B7500 (vSpDynamicModeChange.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00B56F4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C00B594C (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C00B604C (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00B7030 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C027EFEC (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0280798 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

struct SPRITE *__fastcall pSpConvertSpriteFromMeta(HDEV a1, _QWORD *a2, struct _METASPRITE *a3)
{
  HWND v3; // r11
  unsigned int v4; // edi
  struct SPRITE *v7; // rsi
  unsigned int v8; // eax
  int *v9; // r14
  unsigned int v10; // r8d
  char *v11; // r9
  __int64 v12; // r10
  struct SPRITE *Sprite; // rax
  struct SPRITE *v14; // rbp
  __int64 *v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  struct SPRITE *v18; // rcx
  __int64 v19; // rcx
  __int64 i; // rax
  struct _POINTL v22; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(HWND *)a3;
  v4 = 0;
  v7 = 0LL;
  if ( *(_QWORD *)a3 )
  {
    v8 = *((_DWORD *)a3 + 5);
    v9 = 0LL;
    v10 = 0;
    if ( v8 )
    {
      v11 = (char *)a3 + 24;
      v12 = v8;
      do
      {
        if ( *(_QWORD *)v11 && v10 < *(_DWORD *)(**(_QWORD **)(*(_QWORD *)v11 + 16LL) + 2076LL) )
        {
          v9 = *(int **)v11;
          v10 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)v11 + 16LL) + 2076LL);
        }
        v11 += 8;
        --v12;
      }
      while ( v12 );
      if ( v9 )
      {
        Sprite = pSpCreateSprite(a1, 0LL, v3, 0LL);
        v7 = Sprite;
        v14 = Sprite;
        if ( Sprite )
        {
          bSpTransferShape(Sprite, (struct SPRITE *)v9);
          *((_QWORD *)v14 + 24) = *((_QWORD *)v9 + 24);
          v15 = (__int64 *)*((_QWORD *)v9 + 2);
          *((_QWORD *)v9 + 24) = 0LL;
          v16 = *v15;
          v22.x = v9[28] + *(_DWORD *)(v16 + 2560);
          v22.y = v9[29] + *(_DWORD *)(v16 + 2564);
          if ( (unsigned int)bSpUpdatePosition(v14, &v22, 0, 0) )
          {
            v17 = *v9;
            if ( (*v9 & 0x40) != 0 )
            {
              pSpHintSpriteShape(v14, *((HSURF *)v9 + 30), 0);
              v17 = *v9;
            }
            if ( (v17 & 0x100) != 0 )
            {
              *(_DWORD *)v14 |= 0x100u;
              vSpCreateExMirror(**((HDEV **)v14 + 2));
            }
          }
          else
          {
            vSpDeleteSprite(v14);
            v7 = 0LL;
          }
        }
      }
    }
  }
  if ( *((_DWORD *)a3 + 5) )
  {
    do
    {
      v18 = (struct SPRITE *)*((_QWORD *)a3 + v4 + 3);
      if ( (*(_DWORD *)v18 & 0x40) != 0 )
      {
        pSpHintSpriteShape(v18, 0LL, 0);
        v18 = (struct SPRITE *)*((_QWORD *)a3 + v4 + 3);
      }
      vSpDeleteSprite(v18);
      ++v4;
    }
    while ( v4 < *((_DWORD *)a3 + 5) );
  }
  v19 = a2[19];
  if ( (struct _METASPRITE *)v19 == a3 )
  {
    a2[19] = *((_QWORD *)a3 + 1);
  }
  else
  {
    for ( i = *(_QWORD *)(v19 + 8); (struct _METASPRITE *)i != a3; i = *(_QWORD *)(i + 8) )
      v19 = i;
    *(_QWORD *)(v19 + 8) = *((_QWORD *)a3 + 1);
  }
  Win32FreePool(a3);
  return v7;
}
