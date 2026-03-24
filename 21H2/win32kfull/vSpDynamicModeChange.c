/*
 * XREFs of vSpDynamicModeChange @ 0x1C00EE000
 * Callers:
 *     <none>
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00ED954 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00EE220 (--0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1MULTISPRITEDDIACCESS@@QEAA@XZ @ 0x1C00EE2C0 (--1MULTISPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpCorrectHdevReferences@@YAXPEAU_SPRITESTATE@@PEAUHDEV__@@@Z @ 0x1C00EE5B8 (-vSpCorrectHdevReferences@@YAXPEAU_SPRITESTATE@@PEAUHDEV__@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00F05F4 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C0281908 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C0281AD0 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x1C0281E3C (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0281F18 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C0282300 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 *     ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x1C0282470 (-vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z.c)
 */

void __fastcall vSpDynamicModeChange(HDEV a1, HDEV a2)
{
  HDEV v2; // rbx
  HDEV v4; // rax
  HDEV v5; // r15
  HDEV v6; // r14
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdi
  struct _METASPRITE *v17; // rax
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rdi
  __int64 v21; // rdi
  struct SPRITE *v22; // rax
  __int64 v23; // rbx
  HDEV v24; // rdi
  __int64 v25; // rsi
  unsigned int v26; // edx
  HDEV v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rsi
  struct _METASPRITE *v30; // rax
  __int64 v31; // rax
  int v32; // ecx
  __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // rbx
  _BYTE Src[1392]; // [rsp+20h] [rbp-E0h] BYREF
  HDEV v37; // [rsp+5A0h] [rbp+4A0h] BYREF
  HDEV v38; // [rsp+5A8h] [rbp+4A8h] BYREF
  char v39; // [rsp+5B0h] [rbp+4B0h] BYREF
  char v40; // [rsp+5B8h] [rbp+4B8h] BYREF

  v38 = a1;
  v37 = a2;
  v2 = a2;
  v4 = a2;
  if ( ((_DWORD)a1[10] & 0x20000) == 0 )
  {
    vSpRemoveAllSpriteOverlapPresents(a1);
    v4 = v37;
  }
  if ( ((_DWORD)v4[10] & 0x20000) == 0 )
  {
    vSpRemoveAllSpriteOverlapPresents(v4);
    v4 = v37;
  }
  v5 = v38 + 22;
  v6 = v4 + 22;
  memmove(Src, v38 + 22, 0x540uLL);
  memmove(v5, v6, 0x540uLL);
  memmove(v6, Src, 0x540uLL);
  v7 = *((_DWORD *)v5 + 292);
  v5[292] = v6[292];
  *((_DWORD *)v6 + 292) = v7;
  RtlInitializeBitMap((PRTL_BITMAP)(v5 + 166), (PULONG)v5 + 170, 0x40u);
  RtlInitializeBitMap((PRTL_BITMAP)(v6 + 166), (PULONG)v6 + 170, 0x40u);
  vSpCorrectHdevReferences((struct _SPRITESTATE *)v5, a1);
  vSpCorrectHdevReferences((struct _SPRITESTATE *)v6, v2);
  MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)&v40, (struct PDEVOBJ *)&v38);
  MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)&v39, (struct PDEVOBJ *)&v37);
  v8 = *((_QWORD *)v5 + 140);
  *((_QWORD *)v5 + 140) = 0LL;
  *((_QWORD *)v5 + 139) = 0LL;
  *((_DWORD *)v5 + 271) = 0;
  if ( v8 )
  {
    do
    {
      v13 = *(_QWORD *)(v8 + 24);
      vSpDeleteSprite((struct SPRITE *)v8);
      v8 = v13;
    }
    while ( v13 );
  }
  v9 = *((_QWORD *)v6 + 140);
  *((_QWORD *)v6 + 140) = 0LL;
  *((_QWORD *)v6 + 139) = 0LL;
  *((_DWORD *)v6 + 271) = 0;
  if ( v9 )
  {
    do
    {
      v14 = *(_QWORD *)(v9 + 24);
      vSpDeleteSprite((struct SPRITE *)v9);
      v9 = v14;
    }
    while ( v14 );
  }
  v10 = (_DWORD)v38[10] & 0x20000;
  if ( v10 && ((_DWORD)v37[10] & 0x20000) != 0 )
  {
    v15 = *((_QWORD *)v5 + 9);
    if ( v15 )
    {
      do
      {
        v16 = *(_QWORD *)(v15 + 8);
        v17 = pSpTransferMetaSprite(v2, a1, (struct _METASPRITE *)v15);
        if ( v17 )
          *((_DWORD *)v17 + 4) |= 2u;
        v15 = v16;
      }
      while ( v16 );
    }
    v18 = *((_QWORD *)v6 + 9);
    if ( v18 )
    {
      do
      {
        v19 = *(_DWORD *)(v18 + 16);
        v20 = *(_QWORD *)(v18 + 8);
        if ( (v19 & 2) != 0 )
          *(_DWORD *)(v18 + 16) = v19 & 0xFFFFFFFD;
        else
          pSpTransferMetaSprite(a1, v2, (struct _METASPRITE *)v18);
        v18 = v20;
      }
      while ( v20 );
    }
LABEL_12:
    if ( ((_DWORD)v38[10] & 0x20000) != 0 )
      vFixupMetaSpriteList((struct PDEVOBJ *)&v38);
    if ( ((_DWORD)v37[10] & 0x20000) != 0 )
      vFixupMetaSpriteList((struct PDEVOBJ *)&v37);
    goto LABEL_16;
  }
  if ( !v10 && ((_DWORD)v37[10] & 0x20000) == 0 )
  {
    v11 = *((_QWORD *)v5 + 1);
    if ( v11 )
    {
      do
      {
        v21 = *(_QWORD *)(v11 + 24);
        v22 = pSpTransferSprite(v2, (struct SPRITE *)v11);
        if ( v22 )
          *(_DWORD *)v22 |= 2u;
        v11 = v21;
      }
      while ( v21 );
    }
    v12 = *((_QWORD *)v6 + 1);
    if ( v12 )
    {
      do
      {
        v23 = *(_QWORD *)(v12 + 24);
        if ( (*(_DWORD *)v12 & 2) != 0 )
          *(_DWORD *)v12 &= ~2u;
        else
          pSpTransferSprite(a1, (struct SPRITE *)v12);
        v12 = v23;
      }
      while ( v23 );
    }
    goto LABEL_12;
  }
  v24 = a1;
  if ( !v10 )
  {
    v24 = v2;
    v2 = a1;
  }
  v25 = 0LL;
  v26 = *((_DWORD *)v24 + 37);
  if ( !v26 )
  {
LABEL_47:
    v28 = *((_QWORD *)v2 + 12);
    if ( v28 )
    {
      do
      {
        v29 = *(_QWORD *)(v28 + 24);
        v30 = pSpConvertSpriteToMeta(v24, v2, (struct SPRITE *)v28);
        if ( v30 )
          *((_DWORD *)v30 + 4) |= 2u;
        v28 = v29;
      }
      while ( v29 );
    }
    v31 = *((_QWORD *)v24 + 20);
    if ( v31 )
    {
      do
      {
        v32 = *(_DWORD *)(v31 + 16);
        v33 = *(_QWORD *)(v31 + 8);
        if ( (v32 & 2) != 0 )
          *(_DWORD *)(v31 + 16) = v32 & 0xFFFFFFFD;
        else
          pSpConvertSpriteFromMeta(v2, v24, (struct _METASPRITE *)v31);
        v31 = v33;
      }
      while ( v33 );
    }
    goto LABEL_12;
  }
  v27 = (HDEV)*((_QWORD *)v24 + 19);
  while ( *((HDEV *)v27 + v25) != v24 )
  {
    v25 = (unsigned int)(v25 + 1);
    if ( (unsigned int)v25 >= v26 )
      goto LABEL_47;
  }
  *((_QWORD *)v27 + v25) = v2;
  v34 = *((_QWORD *)v24 + 20);
  if ( v34 )
  {
    do
    {
      v35 = *(_QWORD *)(v34 + 8);
      pSpMoveSpriteFromMeta(v27, v24, (struct _METASPRITE *)v34, v25);
      v34 = v35;
    }
    while ( v35 );
  }
LABEL_16:
  MULTISPRITEDDIACCESS::~MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)&v39);
  MULTISPRITEDDIACCESS::~MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)&v40);
}
