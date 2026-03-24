/*
 * XREFs of ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x1C00EFFB8
 * Callers:
 *     GreZorderSprite @ 0x1C00BDEB4 (GreZorderSprite.c)
 * Callees:
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C00F0050 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C00F0084 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0281748 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 */

void __fastcall GdiZorderSprite(_QWORD *a1, HWND a2, HWND a3)
{
  HDEV v5; // rdi
  struct _SPRITESTATE *v7; // rcx
  struct SPRITE *v8; // rax
  struct SPRITE *v9; // r9
  __int64 v10; // r14
  struct _SPRITESTATE *v11; // rcx
  struct SPRITE *Sprite; // rax
  struct SPRITE *v13; // r9
  HDEV v14; // r10
  const struct _SPRITESTATE *v15; // rcx
  struct _METASPRITE *MetaSprite; // rax
  __int64 v17; // r10
  __int64 v18; // rdx
  struct _METASPRITE *v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // [rsp+40h] [rbp+8h] BYREF
  char v23; // [rsp+58h] [rbp+20h] BYREF

  v22 = a1;
  v5 = (HDEV)(a1 + 11);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v23, (struct PDEVOBJ *)&v22);
  if ( *((_DWORD *)v5 + 15) )
  {
    v10 = 0LL;
    do
    {
      pSpGetSprite((struct _SPRITESTATE *)(*(_QWORD *)(*((_QWORD *)v5 + 8) + 8 * v10) + 88LL), a3, 0LL);
      Sprite = pSpGetSprite(v11, a2, 0LL);
      vSpZorderSprite(v14, Sprite, v13);
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < *((_DWORD *)v5 + 15) );
    pSpGetMetaSprite((const struct _SPRITESTATE *)v5, a3, 0LL);
    MetaSprite = pSpGetMetaSprite(v15, a2, 0LL);
    v18 = a1[20];
    v19 = MetaSprite;
    if ( MetaSprite && v18 )
    {
      if ( (struct _METASPRITE *)v18 == MetaSprite )
      {
        a1[20] = *(_QWORD *)(v18 + 8);
      }
      else
      {
        v20 = 0LL;
        while ( 1 )
        {
          v21 = *(_QWORD *)(v18 + 8);
          if ( (struct _METASPRITE *)v18 == v19 )
            break;
          v20 = v18;
          v18 = *(_QWORD *)(v18 + 8);
          if ( !v21 )
            goto LABEL_16;
        }
        *(_QWORD *)(v20 + 8) = v21;
      }
      *(_QWORD *)(v18 + 8) = 0LL;
LABEL_16:
      if ( !*((_QWORD *)v19 + 1) )
      {
        if ( v17 )
        {
          *((_QWORD *)v19 + 1) = *(_QWORD *)(v17 + 8);
          *(_QWORD *)(v17 + 8) = v19;
        }
        else
        {
          *((_QWORD *)v19 + 1) = a1[20];
          a1[20] = v19;
        }
      }
    }
  }
  else
  {
    pSpGetSprite((struct _SPRITESTATE *)v5, a3, 0LL);
    v8 = pSpGetSprite(v7, a2, 0LL);
    vSpZorderSprite(*(HDEV *)v5, v8, v9);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v23);
}
