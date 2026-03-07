void __fastcall vSpDynamicModeChange(HDEV a1, HDEV a2)
{
  HDEV v2; // rbx
  HDEV v4; // rax
  HDEV v5; // r15
  HDEV v6; // r14
  int v7; // ecx
  __int64 v8; // rcx
  HDEV v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  HDEV v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rdi
  struct _METASPRITE *v16; // rax
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rdi
  __int64 v20; // rdi
  struct SPRITE *v21; // rax
  __int64 v22; // rbx
  HDEV v23; // rdi
  __int64 v24; // rsi
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rsi
  struct _METASPRITE *v29; // rax
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rsi
  __int64 v33; // r8
  __int64 v34; // rbx
  _BYTE Src[1392]; // [rsp+20h] [rbp-E0h] BYREF
  HDEV v36; // [rsp+5A0h] [rbp+4A0h] BYREF
  HDEV v37; // [rsp+5A8h] [rbp+4A8h] BYREF
  char v38; // [rsp+5B0h] [rbp+4B0h] BYREF
  char v39; // [rsp+5B8h] [rbp+4B8h] BYREF

  v37 = a1;
  v36 = a2;
  v2 = a2;
  v4 = a2;
  if ( ((_DWORD)a1[10] & 0x20000) == 0 )
  {
    vSpRemoveAllSpriteOverlapPresents(a1);
    v4 = v36;
  }
  if ( ((_DWORD)v4[10] & 0x20000) == 0 )
  {
    vSpRemoveAllSpriteOverlapPresents(v4);
    v4 = v36;
  }
  v5 = v37 + 20;
  v6 = v4 + 20;
  memmove(Src, v37 + 20, 0x540uLL);
  memmove(v5, v6, 0x540uLL);
  memmove(v6, Src, 0x540uLL);
  v7 = *((_DWORD *)v5 + 292);
  v5[292] = v6[292];
  *((_DWORD *)v6 + 292) = v7;
  RtlInitializeBitMap((PRTL_BITMAP)(v5 + 166), (PULONG)v5 + 170, 0x40u);
  RtlInitializeBitMap((PRTL_BITMAP)(v6 + 166), (PULONG)v6 + 170, 0x40u);
  vSpCorrectHdevReferences((struct _SPRITESTATE *)v5, a1);
  vSpCorrectHdevReferences((struct _SPRITESTATE *)v6, v2);
  MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)&v39, (struct PDEVOBJ *)&v37);
  MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)&v38, (struct PDEVOBJ *)&v36);
  v8 = *((_QWORD *)v5 + 140);
  *((_QWORD *)v5 + 140) = 0LL;
  *((_QWORD *)v5 + 139) = 0LL;
  *((_DWORD *)v5 + 271) = 0;
  if ( v8 )
  {
    do
    {
      v12 = *(_QWORD *)(v8 + 24);
      vSpDeleteSprite((struct SPRITE *)v8);
      v8 = v12;
    }
    while ( v12 );
  }
  v9 = (HDEV)*((_QWORD *)v6 + 140);
  *((_QWORD *)v6 + 140) = 0LL;
  *((_QWORD *)v6 + 139) = 0LL;
  *((_DWORD *)v6 + 271) = 0;
  if ( v9 )
  {
    do
    {
      v13 = (HDEV)*((_QWORD *)v9 + 3);
      vSpDeleteSprite((struct SPRITE *)v9);
      v9 = v13;
    }
    while ( v13 );
  }
  if ( ((_DWORD)v37[10] & 0x20000) != 0 )
  {
    if ( ((_DWORD)v36[10] & 0x20000) != 0 )
    {
      v14 = *((_QWORD *)v5 + 9);
      if ( v14 )
      {
        do
        {
          v15 = *(_QWORD *)(v14 + 8);
          v16 = pSpTransferMetaSprite(v2, a1, (struct _METASPRITE *)v14);
          if ( v16 )
            *((_DWORD *)v16 + 4) |= 2u;
          v14 = v15;
        }
        while ( v15 );
      }
      v17 = *((_QWORD *)v6 + 9);
      if ( v17 )
      {
        do
        {
          v18 = *(_DWORD *)(v17 + 16);
          v19 = *(_QWORD *)(v17 + 8);
          if ( (v18 & 2) != 0 )
            *(_DWORD *)(v17 + 16) = v18 & 0xFFFFFFFD;
          else
            pSpTransferMetaSprite(a1, v2, (struct _METASPRITE *)v17);
          v17 = v19;
        }
        while ( v19 );
      }
      goto LABEL_11;
    }
  }
  else if ( ((_DWORD)v36[10] & 0x20000) == 0 )
  {
    v10 = *((_QWORD *)v5 + 1);
    if ( v10 )
    {
      do
      {
        v20 = *(_QWORD *)(v10 + 24);
        v21 = pSpTransferSprite(v2, (struct SPRITE *)v10);
        if ( v21 )
          *(_DWORD *)v21 |= 2u;
        v10 = v20;
      }
      while ( v20 );
    }
    v11 = *((_QWORD *)v6 + 1);
    if ( v11 )
    {
      do
      {
        v22 = *(_QWORD *)(v11 + 24);
        if ( (*(_DWORD *)v11 & 2) != 0 )
          *(_DWORD *)v11 &= ~2u;
        else
          pSpTransferSprite(a1, (struct SPRITE *)v11);
        v11 = v22;
      }
      while ( v22 );
    }
LABEL_11:
    if ( ((_DWORD)v37[10] & 0x20000) != 0 )
      vFixupMetaSpriteList((struct PDEVOBJ *)&v37);
    if ( ((_DWORD)v36[10] & 0x20000) != 0 )
      vFixupMetaSpriteList((struct PDEVOBJ *)&v36);
    goto LABEL_15;
  }
  v23 = a1;
  if ( ((_DWORD)v37[10] & 0x20000) == 0 )
  {
    v23 = v2;
    v2 = a1;
  }
  v24 = 0LL;
  v25 = *((_DWORD *)v23 + 35);
  if ( !v25 )
  {
LABEL_46:
    v27 = *((_QWORD *)v2 + 11);
    if ( v27 )
    {
      do
      {
        v28 = *(_QWORD *)(v27 + 24);
        v29 = pSpConvertSpriteToMeta(v23, v2, (struct SPRITE *)v27);
        if ( v29 )
          *((_DWORD *)v29 + 4) |= 2u;
        v27 = v28;
      }
      while ( v28 );
    }
    v30 = *((_QWORD *)v23 + 19);
    if ( v30 )
    {
      do
      {
        v31 = *(_DWORD *)(v30 + 16);
        v32 = *(_QWORD *)(v30 + 8);
        if ( (v31 & 2) != 0 )
          *(_DWORD *)(v30 + 16) = v31 & 0xFFFFFFFD;
        else
          pSpConvertSpriteFromMeta(v2, v23, (struct _METASPRITE *)v30);
        v30 = v32;
      }
      while ( v32 );
    }
    goto LABEL_11;
  }
  v26 = *((_QWORD *)v23 + 18);
  while ( *(HDEV *)(v26 + 8 * v24) != v23 )
  {
    v24 = (unsigned int)(v24 + 1);
    if ( (unsigned int)v24 >= v25 )
      goto LABEL_46;
  }
  *(_QWORD *)(v26 + 8 * v24) = v2;
  v33 = *((_QWORD *)v23 + 19);
  if ( v33 )
  {
    do
    {
      v34 = *(_QWORD *)(v33 + 8);
      pSpMoveSpriteFromMeta(v9, v23, (struct _METASPRITE *)v33, v24);
      v33 = v34;
    }
    while ( v34 );
  }
LABEL_15:
  MULTISPRITEDDIACCESS::~MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)&v38);
  MULTISPRITEDDIACCESS::~MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)&v39);
}
