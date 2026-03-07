struct SPRITE *__fastcall pSpConvertSpriteFromMeta(HDEV a1, _QWORD *a2, struct _METASPRITE *a3)
{
  HWND v3; // r11
  unsigned int v4; // edi
  struct SPRITE *v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // r14
  unsigned int v10; // r8d
  char *v11; // rdx
  __int64 v12; // r10
  struct SPRITE *Sprite; // rax
  struct SPRITE *v14; // rbp
  __int64 *v15; // rcx
  __int64 v16; // rcx
  struct SPRITE *v17; // rcx
  __int64 v18; // rcx
  __int64 i; // rax
  struct _POINTL v21; // [rsp+48h] [rbp+10h] BYREF

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
          v9 = *(_QWORD *)v11;
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
          *((_QWORD *)v14 + 24) = *(_QWORD *)(v9 + 192);
          v15 = *(__int64 **)(v9 + 16);
          *(_QWORD *)(v9 + 192) = 0LL;
          v16 = *v15;
          v21.x = *(_DWORD *)(v9 + 112) + *(_DWORD *)(v16 + 2560);
          v21.y = *(_DWORD *)(v9 + 116) + *(_DWORD *)(v16 + 2564);
          if ( (unsigned int)bSpUpdatePosition(v14, &v21, 0, 0) )
          {
            if ( (*(_DWORD *)v9 & 0x40) != 0 )
              pSpHintSpriteShape(v14, *(HSURF *)(v9 + 240), 0);
            if ( (*(_DWORD *)v9 & 0x100) != 0 )
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
      v17 = (struct SPRITE *)*((_QWORD *)a3 + v4 + 3);
      if ( (*(_DWORD *)v17 & 0x40) != 0 )
        pSpHintSpriteShape(v17, 0LL, 0);
      vSpDeleteSprite(*((struct SPRITE **)a3 + v4++ + 3));
    }
    while ( v4 < *((_DWORD *)a3 + 5) );
  }
  v18 = a2[19];
  if ( (struct _METASPRITE *)v18 == a3 )
  {
    a2[19] = *((_QWORD *)a3 + 1);
  }
  else
  {
    for ( i = *(_QWORD *)(v18 + 8); (struct _METASPRITE *)i != a3; i = *(_QWORD *)(i + 8) )
      v18 = i;
    *(_QWORD *)(v18 + 8) = *((_QWORD *)a3 + 1);
  }
  Win32FreePool(a3);
  return v7;
}
