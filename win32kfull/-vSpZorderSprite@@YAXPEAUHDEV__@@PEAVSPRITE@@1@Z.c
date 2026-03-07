void __fastcall vSpZorderSprite(HDEV a1, struct SPRITE *a2, struct SPRITE *a3)
{
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rax
  __int64 v8; // rdx
  struct Gre::Base::SESSION_GLOBALS *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 *v14[24]; // [rsp+20h] [rbp-D8h] BYREF
  HDEV v15; // [rsp+100h] [rbp+8h] BYREF

  v15 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v14, (struct PDEVOBJ *)&v15);
  v7 = Gre::Base::Globals(v6);
  v8 = *((_QWORD *)a1 + 11);
  v9 = v7;
  if ( a2 && v8 )
  {
    if ( (struct SPRITE *)v8 == a2 )
    {
      *((_QWORD *)a1 + 11) = *(_QWORD *)(v8 + 24);
      v10 = *(_QWORD *)(v8 + 24);
      if ( v10 )
        *(_QWORD *)(v10 + 32) = 0LL;
      else
        *((_QWORD *)a1 + 12) = 0LL;
      *(_QWORD *)(v8 + 24) = 0LL;
      *(_QWORD *)(v8 + 32) = 0LL;
    }
    else
    {
      v12 = *((_QWORD *)a2 + 4);
      if ( *((struct SPRITE **)a1 + 12) == a2 )
        *((_QWORD *)a1 + 12) = v12;
      else
        *(_QWORD *)(*((_QWORD *)a2 + 3) + 32LL) = v12;
      *(_QWORD *)(*((_QWORD *)a2 + 4) + 24LL) = *((_QWORD *)a2 + 3);
      *((_QWORD *)a2 + 3) = 0LL;
      *((_QWORD *)a2 + 4) = 0LL;
    }
    if ( !*((_QWORD *)a2 + 3) && !*((_QWORD *)a2 + 4) )
    {
      if ( a3 )
      {
        *((_QWORD *)a2 + 3) = *((_QWORD *)a3 + 3);
        v13 = *((_QWORD *)a3 + 3);
        if ( v13 )
          *(_QWORD *)(v13 + 32) = a2;
        *((_QWORD *)a3 + 3) = a2;
        *((_QWORD *)a2 + 4) = a3;
        if ( *((struct SPRITE **)a1 + 12) == a3 )
          *((_QWORD *)a1 + 12) = a2;
      }
      else
      {
        *((_QWORD *)a2 + 3) = *((_QWORD *)a1 + 11);
        v11 = *((_QWORD *)a1 + 11);
        if ( v11 )
          *(_QWORD *)(v11 + 32) = a2;
        else
          *((_QWORD *)a1 + 12) = a2;
        *((_QWORD *)a1 + 11) = a2;
      }
      vSpRenumberZOrder((struct _SPRITESTATE *)(a1 + 20));
      vSpRemoveAllSpriteOverlapPresents(a1);
      ++*((_DWORD *)v9 + 1620);
      *((_DWORD *)a1 + 49) = 0;
      vSpComputeSpriteRanges((struct _SPRITESTATE *)(a1 + 20));
      vSpRedrawSprite(a2);
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v14);
}
