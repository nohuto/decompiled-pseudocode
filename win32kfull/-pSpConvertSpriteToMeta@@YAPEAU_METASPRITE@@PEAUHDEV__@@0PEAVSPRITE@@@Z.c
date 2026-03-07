struct _METASPRITE *__fastcall pSpConvertSpriteToMeta(_DWORD *a1, _DWORD *a2, struct SPRITE *a3, __int64 a4)
{
  unsigned int v4; // edi
  _QWORD *v7; // rbx
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // r15d
  struct SPRITE *Sprite; // rax
  struct SPRITE *v12; // r13
  HDEV v13; // rcx
  unsigned int i; // r15d
  _DWORD *v15; // rax
  __int64 *v17[30]; // [rsp+20h] [rbp-99h] BYREF
  HDEV v19; // [rsp+130h] [rbp+77h] BYREF
  struct _POINTL v20; // [rsp+138h] [rbp+7Fh] BYREF

  v4 = 0;
  v7 = 0LL;
  if ( *((_QWORD *)a3 + 9) )
  {
    v8 = a1[35];
    if ( v8 )
    {
      v9 = 8 * v8 + 32;
      if ( v9 )
      {
        v7 = (_QWORD *)Win32AllocPool(v9, 1836086087LL, a3, a4);
        if ( v7 )
        {
          v10 = 0;
          if ( a1[35] )
          {
            while ( 1 )
            {
              v19 = *(HDEV *)(*((_QWORD *)a1 + 18) + 8LL * v10);
              SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v17, (struct PDEVOBJ *)&v19);
              Sprite = pSpCreateSprite(v19, 0LL, *((HWND *)a3 + 9), 0LL);
              v12 = Sprite;
              if ( !Sprite )
                break;
              bSpTransferShape(Sprite, a3);
              *((_QWORD *)v12 + 24) = *((_QWORD *)a3 + 24);
              v13 = v19;
              *((_QWORD *)a3 + 24) = 0LL;
              v20.x = *((_DWORD *)a3 + 28) + a2[640] - *((_DWORD *)v13 + 640);
              v20.y = *((_DWORD *)a3 + 29) + a2[641] - *((_DWORD *)v13 + 641);
              if ( !(unsigned int)bSpUpdatePosition(v12, &v20, 0, 0) )
              {
                vSpDeleteSprite(v12);
                break;
              }
              v7[v10 + 3] = v12;
              *((_QWORD *)v12 + 1) = v7;
              SPRITEDDIACCESS::~SPRITEDDIACCESS(v17);
              if ( ++v10 >= a1[35] )
                goto LABEL_9;
            }
            SPRITEDDIACCESS::~SPRITEDDIACCESS(v17);
            while ( v10 )
              vSpDeleteSprite((struct SPRITE *)v7[--v10 + 3]);
            Win32FreePool(v7);
            v7 = 0LL;
          }
          else
          {
LABEL_9:
            *v7 = *((_QWORD *)a3 + 9);
            *((_DWORD *)v7 + 5) = a1[35];
            *((_DWORD *)v7 + 4) = 0;
            v7[1] = *((_QWORD *)a1 + 19);
            *((_QWORD *)a1 + 19) = v7;
            if ( (*(_DWORD *)a3 & 0x40) != 0 )
            {
              for ( i = 0; i < a1[35]; ++i )
                pSpHintSpriteShape((struct SPRITE *)v7[i + 3], *((HSURF *)a3 + 30), 0);
              *((_DWORD *)v7 + 4) |= 0x40u;
            }
            if ( (*(_DWORD *)a3 & 0x100) != 0 )
            {
              if ( a1[35] )
              {
                do
                {
                  v15 = (_DWORD *)v7[v4 + 3];
                  *v15 |= 0x100u;
                  vSpCreateExMirror(*(HDEV *)(*((_QWORD *)a1 + 18) + 8LL * v4++));
                }
                while ( v4 < a1[35] );
              }
              *((_DWORD *)v7 + 4) |= 0x100u;
            }
          }
        }
      }
    }
  }
  if ( (*(_DWORD *)a3 & 0x40) != 0 )
    pSpHintSpriteShape(a3, 0LL, 0);
  vSpDeleteSprite(a3);
  return (struct _METASPRITE *)v7;
}
