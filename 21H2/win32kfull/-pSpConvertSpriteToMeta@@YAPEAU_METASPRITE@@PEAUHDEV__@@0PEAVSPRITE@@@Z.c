/*
 * XREFs of ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C027F62C
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00B7500 (vSpDynamicModeChange.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0085EEC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0085FE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00B56F4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C00B594C (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C00B604C (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00B7030 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C027EFEC (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0280798 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

struct _METASPRITE *__fastcall pSpConvertSpriteToMeta(_DWORD *a1, _DWORD *a2, struct SPRITE *a3)
{
  unsigned int v3; // edi
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // r15d
  struct SPRITE *Sprite; // rax
  struct SPRITE *v11; // r13
  HDEV v12; // rcx
  unsigned int i; // r15d
  _DWORD *v14; // rax
  struct _SPRITESTATE *v16[30]; // [rsp+20h] [rbp-99h] BYREF
  HDEV v18; // [rsp+130h] [rbp+77h] BYREF
  struct _POINTL v19; // [rsp+138h] [rbp+7Fh] BYREF

  v3 = 0;
  v6 = 0LL;
  if ( *((_QWORD *)a3 + 9) )
  {
    v7 = a1[35];
    if ( v7 )
    {
      v8 = 8 * v7 + 32;
      if ( v8 )
      {
        v6 = Win32AllocPool(v8, 1836086087LL);
        if ( v6 )
        {
          v9 = 0;
          if ( a1[35] )
          {
            while ( 1 )
            {
              v18 = *(HDEV *)(*((_QWORD *)a1 + 18) + 8LL * v9);
              SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v16, (struct PDEVOBJ *)&v18);
              Sprite = pSpCreateSprite(v18, 0LL, *((HWND *)a3 + 9), 0LL);
              v11 = Sprite;
              if ( !Sprite )
                break;
              bSpTransferShape(Sprite, a3);
              *((_QWORD *)v11 + 24) = *((_QWORD *)a3 + 24);
              v12 = v18;
              *((_QWORD *)a3 + 24) = 0LL;
              v19.x = *((_DWORD *)a3 + 28) + a2[640] - *((_DWORD *)v12 + 640);
              v19.y = *((_DWORD *)a3 + 29) + a2[641] - *((_DWORD *)v12 + 641);
              if ( !(unsigned int)bSpUpdatePosition(v11, &v19, 0, 0) )
              {
                vSpDeleteSprite(v11);
                break;
              }
              *(_QWORD *)(v6 + 8LL * v9 + 24) = v11;
              *((_QWORD *)v11 + 1) = v6;
              SPRITEDDIACCESS::~SPRITEDDIACCESS(v16);
              if ( ++v9 >= a1[35] )
                goto LABEL_9;
            }
            SPRITEDDIACCESS::~SPRITEDDIACCESS(v16);
            while ( v9 )
              vSpDeleteSprite(*(struct SPRITE **)(v6 + 8LL * --v9 + 24));
            Win32FreePool(v6);
            v6 = 0LL;
          }
          else
          {
LABEL_9:
            *(_QWORD *)v6 = *((_QWORD *)a3 + 9);
            *(_DWORD *)(v6 + 20) = a1[35];
            *(_DWORD *)(v6 + 16) = 0;
            *(_QWORD *)(v6 + 8) = *((_QWORD *)a1 + 19);
            *((_QWORD *)a1 + 19) = v6;
            if ( (*(_DWORD *)a3 & 0x40) != 0 )
            {
              for ( i = 0; i < a1[35]; ++i )
                pSpHintSpriteShape(*(struct SPRITE **)(v6 + 8LL * i + 24), *((HSURF *)a3 + 30), 0);
              *(_DWORD *)(v6 + 16) |= 0x40u;
            }
            if ( (*(_DWORD *)a3 & 0x100) != 0 )
            {
              if ( a1[35] )
              {
                do
                {
                  v14 = *(_DWORD **)(v6 + 8LL * v3 + 24);
                  *v14 |= 0x100u;
                  vSpCreateExMirror(*(HDEV *)(*((_QWORD *)a1 + 18) + 8LL * v3++));
                }
                while ( v3 < a1[35] );
              }
              *(_DWORD *)(v6 + 16) |= 0x100u;
            }
          }
        }
      }
    }
  }
  if ( (*(_DWORD *)a3 & 0x40) != 0 )
    pSpHintSpriteShape(a3, 0LL, 0);
  vSpDeleteSprite(a3);
  return (struct _METASPRITE *)v6;
}
