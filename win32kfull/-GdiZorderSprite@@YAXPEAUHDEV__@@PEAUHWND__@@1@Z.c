void __fastcall GdiZorderSprite(Gre::Base *a1, HWND a2, HWND a3)
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
  bool v16; // r9
  struct _METASPRITE *MetaSprite; // rax
  __int64 v18; // r10
  __int64 v19; // rdx
  struct _METASPRITE *v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  Gre::Base *v23; // [rsp+40h] [rbp+8h] BYREF
  char v24; // [rsp+58h] [rbp+20h] BYREF

  v23 = a1;
  v5 = (HDEV)((char *)a1 + 80);
  Gre::Base::Globals(a1);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v24, (struct PDEVOBJ *)&v23);
  if ( *((_DWORD *)v5 + 15) )
  {
    v10 = 0LL;
    do
    {
      pSpGetSprite((struct _SPRITESTATE *)(*(_QWORD *)(*((_QWORD *)v5 + 8) + 8 * v10) + 80LL), a3, 0LL);
      Sprite = pSpGetSprite(v11, a2, 0LL);
      vSpZorderSprite(v14, Sprite, v13);
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < *((_DWORD *)v5 + 15) );
    pSpGetMetaSprite((const struct _SPRITESTATE *)v5, a3, 0LL, 0);
    MetaSprite = pSpGetMetaSprite(v15, a2, 0LL, v16);
    v19 = *((_QWORD *)a1 + 19);
    v20 = MetaSprite;
    if ( MetaSprite && v19 )
    {
      if ( (struct _METASPRITE *)v19 == MetaSprite )
      {
        *((_QWORD *)a1 + 19) = *(_QWORD *)(v19 + 8);
      }
      else
      {
        v21 = 0LL;
        while ( 1 )
        {
          v22 = *(_QWORD *)(v19 + 8);
          if ( (struct _METASPRITE *)v19 == v20 )
            break;
          v21 = v19;
          v19 = *(_QWORD *)(v19 + 8);
          if ( !v22 )
            goto LABEL_16;
        }
        *(_QWORD *)(v21 + 8) = v22;
      }
      *(_QWORD *)(v19 + 8) = 0LL;
LABEL_16:
      if ( !*((_QWORD *)v20 + 1) )
      {
        if ( v18 )
        {
          *((_QWORD *)v20 + 1) = *(_QWORD *)(v18 + 8);
          *(_QWORD *)(v18 + 8) = v20;
        }
        else
        {
          *((_QWORD *)v20 + 1) = *((_QWORD *)a1 + 19);
          *((_QWORD *)a1 + 19) = v20;
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
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v24);
}
