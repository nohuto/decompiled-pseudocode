/*
 * XREFs of ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C0281AD0
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00EE000 (vSpDynamicModeChange.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C008BED0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008C4D8 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     PALLOCMEM2 @ 0x1C009FE48 (PALLOCMEM2.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00ED954 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C00EDE44 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C00EE6F4 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00F0D0C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C0281378 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0282F9C (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

struct _METASPRITE *__fastcall pSpConvertSpriteToMeta(_DWORD *a1, _DWORD *a2, struct SPRITE *a3)
{
  unsigned int v3; // edi
  _QWORD *v6; // rbx
  int v7; // ecx
  unsigned int v8; // r15d
  struct SPRITE *Sprite; // rax
  struct SPRITE *v10; // r13
  HDEV v11; // rcx
  unsigned int i; // r15d
  _DWORD *v13; // rax
  __int64 *v15[30]; // [rsp+20h] [rbp-99h] BYREF
  HDEV v17; // [rsp+130h] [rbp+77h] BYREF
  struct _POINTL v18; // [rsp+138h] [rbp+7Fh] BYREF

  v3 = 0;
  v6 = 0LL;
  if ( *((_QWORD *)a3 + 9) )
  {
    v7 = a1[37];
    if ( v7 )
    {
      v6 = PALLOCMEM2((unsigned int)(8 * v7 + 32), 1836086087LL, 0);
      if ( v6 )
      {
        v8 = 0;
        if ( a1[37] )
        {
          while ( 1 )
          {
            v17 = *(HDEV *)(*((_QWORD *)a1 + 19) + 8LL * v8);
            SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v15, (struct PDEVOBJ *)&v17);
            Sprite = pSpCreateSprite(v17, 0LL, *((HWND *)a3 + 9), 0LL);
            v10 = Sprite;
            if ( !Sprite )
              break;
            bSpTransferShape(Sprite, a3);
            *((_QWORD *)v10 + 24) = *((_QWORD *)a3 + 24);
            v11 = v17;
            *((_QWORD *)a3 + 24) = 0LL;
            v18.x = *((_DWORD *)a3 + 28) + a2[646] - *((_DWORD *)v11 + 646);
            v18.y = *((_DWORD *)a3 + 29) + a2[647] - *((_DWORD *)v11 + 647);
            if ( !(unsigned int)bSpUpdatePosition(v10, &v18, 0, 0) )
            {
              vSpDeleteSprite(v10);
              break;
            }
            v6[v8 + 3] = v10;
            *((_QWORD *)v10 + 1) = v6;
            SPRITEDDIACCESS::~SPRITEDDIACCESS(v15);
            if ( ++v8 >= a1[37] )
              goto LABEL_8;
          }
          SPRITEDDIACCESS::~SPRITEDDIACCESS(v15);
          while ( v8 )
            vSpDeleteSprite((struct SPRITE *)v6[--v8 + 3]);
          Win32FreePool(v6);
          v6 = 0LL;
        }
        else
        {
LABEL_8:
          *v6 = *((_QWORD *)a3 + 9);
          *((_DWORD *)v6 + 5) = a1[37];
          *((_DWORD *)v6 + 4) = 0;
          v6[1] = *((_QWORD *)a1 + 20);
          *((_QWORD *)a1 + 20) = v6;
          if ( (*(_DWORD *)a3 & 0x40) != 0 )
          {
            for ( i = 0; i < a1[37]; ++i )
              pSpHintSpriteShape((struct SPRITE *)v6[i + 3], *((HSURF *)a3 + 30), 0);
            *((_DWORD *)v6 + 4) |= 0x40u;
          }
          if ( (*(_DWORD *)a3 & 0x100) != 0 )
          {
            if ( a1[37] )
            {
              do
              {
                v13 = (_DWORD *)v6[v3 + 3];
                *v13 |= 0x100u;
                vSpCreateExMirror(*(HDEV *)(*((_QWORD *)a1 + 19) + 8LL * v3++));
              }
              while ( v3 < a1[37] );
            }
            *((_DWORD *)v6 + 4) |= 0x100u;
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
