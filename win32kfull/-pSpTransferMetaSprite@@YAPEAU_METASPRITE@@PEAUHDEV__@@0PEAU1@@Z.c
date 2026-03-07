struct _METASPRITE *__fastcall pSpTransferMetaSprite(_DWORD *a1, HDEV a2, struct _METASPRITE *a3)
{
  int v3; // r12d
  HDEV v4; // r14
  _QWORD *v5; // rbx
  HDEV v7; // r15
  __int64 v8; // rcx
  HBITMAP v9; // rcx
  __int64 v10; // r10
  int v11; // r12d
  int v12; // r13d
  unsigned int v13; // r11d
  unsigned int v14; // r12d
  __int64 v15; // r9
  unsigned int v16; // esi
  struct SPRITE *v17; // r8
  unsigned int v18; // edx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  int v21; // edx
  int v22; // ecx
  __int64 v23; // r15
  struct SPRITE *Sprite; // rsi
  __int64 v25; // rax
  HDEV v26; // rcx
  int v27; // r9d
  __int64 i; // rsi
  struct SPRITE *v29; // rcx
  __int64 j; // rsi
  __int64 k; // rsi
  struct SPRITE *v32; // rcx
  __int64 v33; // rcx
  __int64 m; // rax
  __int64 n; // rsi
  struct SPRITE *v36; // rcx
  HBITMAP hsurf; // [rsp+20h] [rbp-E0h]
  struct SPRITE *v39; // [rsp+28h] [rbp-D8h]
  __int64 v40; // [rsp+30h] [rbp-D0h]
  __int64 v41; // [rsp+38h] [rbp-C8h] BYREF
  struct _POINTL v42; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v43[24]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v44[32]; // [rsp+110h] [rbp+10h] BYREF
  int v45; // [rsp+220h] [rbp+120h]
  int v47; // [rsp+230h] [rbp+130h]
  HDEV v48; // [rsp+238h] [rbp+138h] BYREF

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
        v5 = (_QWORD *)Win32AllocPoolZInit(v8, 1836086087LL);
        if ( v5 )
        {
          v39 = 0LL;
          v9 = 0LL;
          v40 = 0LL;
          v10 = 0LL;
          LODWORD(v48) = 0;
          v11 = *((_DWORD *)a3 + 4) & 0x100;
          hsurf = 0LL;
          v12 = *((_DWORD *)a3 + 4) & 0x40;
          v47 = v11;
          if ( *((_DWORD *)v4 + 15) )
          {
            v13 = *((_DWORD *)a3 + 5);
            v14 = (unsigned int)v48;
            do
            {
              v15 = 0LL;
              if ( v13 )
              {
                v16 = v13;
                do
                {
                  v17 = (struct SPRITE *)*((_QWORD *)a3 + v15 + 3);
                  v18 = v16;
                  if ( v17 )
                  {
                    if ( v12 && !v9 )
                      hsurf = (HBITMAP)*((_QWORD *)v17 + 30);
                    v19 = (_QWORD *)*((_QWORD *)v17 + 2);
                    v20 = *v19;
                    if ( v4 == (HDEV)v19 )
                    {
                      v5[v10 + 3] = v17;
                      *((_QWORD *)a3 + v15 + 3) = 0LL;
                      *((_QWORD *)v17 + 1) = v5;
                      v13 = *((_DWORD *)a3 + 5);
                      v18 = v13;
                    }
                    if ( v14 < *(_DWORD *)(v20 + 2076) )
                    {
                      v39 = v17;
                      v14 = *(_DWORD *)(v20 + 2076);
                      v40 = v20;
                    }
                    v9 = hsurf;
                  }
                  v15 = (unsigned int)(v15 + 1);
                  v16 = v18;
                }
                while ( (unsigned int)v15 < v18 );
              }
              v10 = (unsigned int)(v10 + 1);
            }
            while ( (unsigned int)v10 < *((_DWORD *)v4 + 15) );
            v11 = v47;
          }
          *v5 = *(_QWORD *)a3;
          v21 = *((_DWORD *)v4 + 15);
          *((_DWORD *)v5 + 5) = v21;
          v22 = v12 != 0 ? 0x40 : 0;
          *((_DWORD *)v5 + 4) = v22;
          if ( v11 )
            *((_DWORD *)v5 + 4) = v22 | 0x100;
          v23 = 0LL;
          if ( v21 )
          {
            while ( 1 )
            {
              if ( !v5[v23 + 3] )
              {
                v48 = *(HDEV *)(*((_QWORD *)v4 + 8) + 8 * v23);
                SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v44, (struct PDEVOBJ *)&v48);
                Sprite = pSpCreateSprite(v48, 0LL, *(HWND *)a3, 0LL);
                if ( Sprite )
                {
                  v41 = v40;
                  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v43, (struct PDEVOBJ *)&v41);
                  bSpTransferShape(Sprite, v39);
                  v25 = v41;
                  *((_QWORD *)Sprite + 24) = *((_QWORD *)v39 + 24);
                  v26 = v48;
                  *((_QWORD *)v39 + 24) = 0LL;
                  v27 = *(_DWORD *)(v25 + 2564);
                  v42.x = *((_DWORD *)v39 + 28) + *(_DWORD *)(v25 + 2560) - *((_DWORD *)v26 + 640);
                  v42.y = v27 + *((_DWORD *)v39 + 29) - *((_DWORD *)v26 + 641);
                  if ( (unsigned int)bSpUpdatePosition(Sprite, &v42, 0, 0) )
                  {
                    v3 = v45;
                    v5[v23 + 3] = Sprite;
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
              v23 = (unsigned int)(v23 + 1);
              if ( (unsigned int)v23 >= *((_DWORD *)v5 + 5) )
              {
                v11 = v47;
                goto LABEL_34;
              }
            }
          }
          else
          {
LABEL_34:
            v5[1] = *((_QWORD *)v4 + 9);
            *((_QWORD *)v4 + 9) = v5;
            if ( v12 )
            {
              for ( i = 0LL; (unsigned int)i < *((_DWORD *)v5 + 5); i = (unsigned int)(i + 1) )
              {
                v29 = (struct SPRITE *)v5[i + 3];
                if ( (*(_DWORD *)v29 & 0x40) == 0 )
                  pSpHintSpriteShape(v29, (HSURF)hsurf, 0);
              }
            }
            if ( v11 )
            {
              for ( j = 0LL; (unsigned int)j < *((_DWORD *)v5 + 5); j = (unsigned int)(j + 1) )
              {
                if ( (*(_DWORD *)v5[j + 3] & 0x100) == 0 )
                {
                  vSpCreateExMirror(*(HDEV *)v4);
                  *(_DWORD *)v5[j + 3] |= 0x100u;
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
        pSpHintSpriteShape(v32, 0LL, 0);
      vSpDeleteSprite(*((struct SPRITE **)a3 + k + 3));
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
    for ( n = 0LL; (unsigned int)n < *((_DWORD *)v5 + 5); n = (unsigned int)(n + 1) )
    {
      v36 = (struct SPRITE *)v5[n + 3];
      if ( v36 )
      {
        if ( (*(_DWORD *)v36 & 0x40) != 0 )
          pSpHintSpriteShape(v36, 0LL, 0);
        vSpDeleteSprite((struct SPRITE *)v5[n + 3]);
      }
    }
    Win32FreePool(v5);
    v5 = 0LL;
  }
  Win32FreePool(a3);
  return (struct _METASPRITE *)v5;
}
