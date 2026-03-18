/*
 * XREFs of ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C027FA4C
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

struct _METASPRITE *__fastcall pSpTransferMetaSprite(_DWORD *a1, HDEV a2, struct _METASPRITE *a3)
{
  int v3; // r12d
  HDEV v4; // rsi
  __int64 v5; // rbx
  HDEV v7; // r15
  __int64 v8; // rcx
  HBITMAP v9; // r14
  unsigned int v10; // r11d
  int v11; // r12d
  __int64 v12; // r9
  char v13; // r13
  int v14; // r12d
  int v15; // r13d
  __int64 v16; // r8
  struct SPRITE *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  __int64 v22; // r15
  struct SPRITE *Sprite; // r14
  __int64 v24; // rax
  HDEV v25; // rcx
  int v26; // r9d
  __int64 v27; // r14
  HBITMAP v28; // r15
  struct SPRITE *v29; // rcx
  __int64 j; // r14
  __int64 k; // rsi
  struct SPRITE *v32; // rcx
  __int64 v33; // rcx
  __int64 m; // rax
  __int64 n; // rsi
  struct SPRITE *v36; // rcx
  HDEV v38; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v39; // [rsp+28h] [rbp-D8h]
  __int64 v40; // [rsp+30h] [rbp-D0h] BYREF
  struct _POINTL v41; // [rsp+38h] [rbp-C8h] BYREF
  HBITMAP hsurf; // [rsp+40h] [rbp-C0h]
  struct _SPRITESTATE *v43[24]; // [rsp+50h] [rbp-B0h] BYREF
  struct _SPRITESTATE *v44[32]; // [rsp+110h] [rbp+10h] BYREF
  int v45; // [rsp+220h] [rbp+120h]
  int i; // [rsp+230h] [rbp+130h]
  struct SPRITE *v48; // [rsp+238h] [rbp+138h]

  v3 = 0;
  v4 = (HDEV)(a1 + 20);
  v5 = 0LL;
  v45 = 0;
  v7 = a2;
  if ( *(_QWORD *)a3 )
  {
    v8 = (unsigned int)(8 * a1[35] + 32);
    if ( (*((_DWORD *)a3 + 4) & 4) == 0 )
    {
      if ( (_DWORD)v8 )
      {
        v5 = Win32AllocPoolZInit(v8, 1836086087LL);
        if ( v5 )
        {
          v48 = 0LL;
          v9 = 0LL;
          v39 = 0LL;
          v10 = 0;
          v11 = *((_DWORD *)a3 + 4);
          v12 = 0LL;
          v13 = v11;
          hsurf = 0LL;
          v14 = v11 & 0x100;
          v15 = v13 & 0x40;
          for ( i = v14; (unsigned int)v12 < *((_DWORD *)v4 + 15); v12 = (unsigned int)(v12 + 1) )
          {
            v16 = 0LL;
            if ( *((_DWORD *)a3 + 5) )
            {
              do
              {
                v17 = (struct SPRITE *)*((_QWORD *)a3 + v16 + 3);
                if ( v17 )
                {
                  if ( v15 && !v9 )
                    v9 = (HBITMAP)*((_QWORD *)v17 + 30);
                  v18 = (_QWORD *)*((_QWORD *)v17 + 2);
                  v19 = *v18;
                  if ( v4 == (HDEV)v18 )
                  {
                    *(_QWORD *)(v5 + 8 * v12 + 24) = v17;
                    *((_QWORD *)a3 + v16 + 3) = 0LL;
                    *((_QWORD *)v17 + 1) = v5;
                  }
                  if ( v10 < *(_DWORD *)(v19 + 2076) )
                  {
                    v48 = v17;
                    v10 = *(_DWORD *)(v19 + 2076);
                    v39 = v19;
                  }
                }
                v16 = (unsigned int)(v16 + 1);
              }
              while ( (unsigned int)v16 < *((_DWORD *)a3 + 5) );
              hsurf = v9;
            }
          }
          *(_QWORD *)v5 = *(_QWORD *)a3;
          v20 = *((_DWORD *)v4 + 15);
          *(_DWORD *)(v5 + 20) = v20;
          v21 = v15 != 0 ? 0x40 : 0;
          *(_DWORD *)(v5 + 16) = v21;
          if ( v14 )
            *(_DWORD *)(v5 + 16) = v21 | 0x100;
          v22 = 0LL;
          if ( v20 )
          {
            while ( 1 )
            {
              if ( !*(_QWORD *)(v5 + 8 * v22 + 24) )
              {
                v38 = *(HDEV *)(*((_QWORD *)v4 + 8) + 8 * v22);
                SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v44, (struct PDEVOBJ *)&v38);
                Sprite = pSpCreateSprite(v38, 0LL, *(HWND *)a3, 0LL);
                if ( Sprite )
                {
                  v40 = v39;
                  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v43, (struct PDEVOBJ *)&v40);
                  bSpTransferShape(Sprite, v48);
                  v24 = v40;
                  *((_QWORD *)Sprite + 24) = *((_QWORD *)v48 + 24);
                  v25 = v38;
                  *((_QWORD *)v48 + 24) = 0LL;
                  v26 = *(_DWORD *)(v24 + 2564);
                  v41.x = *((_DWORD *)v48 + 28) + *(_DWORD *)(v24 + 2560) - *((_DWORD *)v25 + 640);
                  v41.y = v26 + *((_DWORD *)v48 + 29) - *((_DWORD *)v25 + 641);
                  if ( (unsigned int)bSpUpdatePosition(Sprite, &v41, 0, 0) )
                  {
                    v3 = v45;
                    *(_QWORD *)(v5 + 8 * v22 + 24) = Sprite;
                    *((_QWORD *)Sprite + 1) = v5;
                  }
                  else
                  {
                    vSpDeleteSprite(Sprite);
                    v3 = 1;
                    v45 = 1;
                  }
                  SPRITEDDIACCESS::~SPRITEDDIACCESS(v43);
                }
                else
                {
                  v3 = 1;
                  v45 = 1;
                }
                SPRITEDDIACCESS::~SPRITEDDIACCESS(v44);
                if ( v3 )
                  break;
              }
              v22 = (unsigned int)(v22 + 1);
              if ( (unsigned int)v22 >= *(_DWORD *)(v5 + 20) )
              {
                v14 = i;
                goto LABEL_31;
              }
            }
          }
          else
          {
LABEL_31:
            *(_QWORD *)(v5 + 8) = *((_QWORD *)v4 + 9);
            *((_QWORD *)v4 + 9) = v5;
            if ( v15 )
            {
              v27 = 0LL;
              if ( *(_DWORD *)(v5 + 20) )
              {
                v28 = hsurf;
                do
                {
                  v29 = *(struct SPRITE **)(v5 + 8 * v27 + 24);
                  if ( (*(_DWORD *)v29 & 0x40) == 0 )
                    pSpHintSpriteShape(v29, (HSURF)v28, 0);
                  v27 = (unsigned int)(v27 + 1);
                }
                while ( (unsigned int)v27 < *(_DWORD *)(v5 + 20) );
              }
            }
            if ( v14 )
            {
              for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v5 + 20); j = (unsigned int)(j + 1) )
              {
                if ( (**(_DWORD **)(v5 + 8 * j + 24) & 0x100) == 0 )
                {
                  vSpCreateExMirror(*(HDEV *)v4);
                  **(_DWORD **)(v5 + 8 * j + 24) |= 0x100u;
                }
              }
            }
            v3 = v45;
          }
          v7 = a2;
        }
      }
    }
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)a3 + 5); k = (unsigned int)(k + 1) )
  {
    v32 = (struct SPRITE *)*((_QWORD *)a3 + k + 3);
    if ( v32 )
    {
      if ( (*(_DWORD *)v32 & 0x40) != 0 )
      {
        pSpHintSpriteShape(v32, 0LL, 0);
        v32 = (struct SPRITE *)*((_QWORD *)a3 + k + 3);
      }
      vSpDeleteSprite(v32);
    }
  }
  v33 = *((_QWORD *)v7 + 19);
  if ( (struct _METASPRITE *)v33 == a3 )
  {
    *((_QWORD *)v7 + 19) = *((_QWORD *)a3 + 1);
  }
  else
  {
    for ( m = *(_QWORD *)(v33 + 8); (struct _METASPRITE *)m != a3; m = *(_QWORD *)(m + 8) )
      v33 = m;
    *(_QWORD *)(v33 + 8) = *((_QWORD *)a3 + 1);
  }
  if ( v3 )
  {
    for ( n = 0LL; (unsigned int)n < *(_DWORD *)(v5 + 20); n = (unsigned int)(n + 1) )
    {
      v36 = *(struct SPRITE **)(v5 + 8 * n + 24);
      if ( v36 )
      {
        if ( (*(_DWORD *)v36 & 0x40) != 0 )
        {
          pSpHintSpriteShape(v36, 0LL, 0);
          v36 = *(struct SPRITE **)(v5 + 8 * n + 24);
        }
        vSpDeleteSprite(v36);
      }
    }
    Win32FreePool(v5);
    v5 = 0LL;
  }
  Win32FreePool(a3);
  return (struct _METASPRITE *)v5;
}
