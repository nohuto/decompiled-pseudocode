struct SPRITE *__fastcall pSpCreateSprite(HDEV a1, struct _RECTL *a2, HWND a3, struct _RECTL *a4)
{
  _DWORD *v4; // rbx
  Gre::Base *v8; // rcx
  HDEV v9; // rdi
  _DWORD *v10; // rax
  struct _RECTL *v11; // rax
  LONG top; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  _BYTE v16[16]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 *v17[24]; // [rsp+30h] [rbp-D8h] BYREF
  HDEV v18; // [rsp+110h] [rbp+8h] BYREF

  v4 = 0LL;
  v18 = a1;
  if ( ((_DWORD)a1[10] & 1) != 0 )
  {
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)v16, (struct PDEVOBJ *)&v18);
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v17, (struct PDEVOBJ *)&v18);
    Gre::Base::Globals(v8);
    v9 = v18 + 20;
    v10 = (_DWORD *)Win32AllocPoolZInit(272LL, 544240455LL);
    v4 = v10;
    if ( v10 )
    {
      if ( a2 )
      {
        v10[44] = a2->right - a2->left;
        v10[45] = a2->bottom - a2->top;
        v11 = a4;
        if ( !a4 )
          v11 = a2;
        v4[28] = v11->left;
        if ( a4 )
          top = a4->top;
        else
          top = a2->top;
      }
      else
      {
        v10[44] = 0;
        v10[45] = 0;
        v10[28] = 0x80000000;
        top = 0x80000000;
      }
      v4[29] = top;
      *v4 = 0;
      *((_QWORD *)v4 + 2) = v9;
      v4[1] = 4;
      v4[21] = 0x80000000;
      v4[20] = 0x80000000;
      v4[23] = 0x80000000;
      v4[22] = 0x80000000;
      v13 = *((_QWORD *)v9 + 140);
      if ( *((_QWORD *)v9 + 1) == v13 )
      {
        *((_QWORD *)v4 + 3) = v13;
        if ( v13 )
          *(_QWORD *)(v13 + 32) = v4;
        else
          *((_QWORD *)v9 + 2) = v4;
        *((_QWORD *)v9 + 1) = v4;
      }
      else if ( v13 )
      {
        *(_QWORD *)(*(_QWORD *)(v13 + 32) + 24LL) = v4;
        *((_QWORD *)v4 + 4) = *(_QWORD *)(v13 + 32);
        *((_QWORD *)v4 + 3) = v13;
        *(_QWORD *)(v13 + 32) = v4;
      }
      else
      {
        *((_QWORD *)v4 + 4) = *((_QWORD *)v9 + 2);
        *(_QWORD *)(*((_QWORD *)v9 + 2) + 24LL) = v4;
        *((_QWORD *)v9 + 2) = v4;
      }
      vSpRenumberZOrder((struct _SPRITESTATE *)v9);
      v14 = *((_QWORD *)v9 + 3);
      *((_QWORD *)v9 + 3) = v4;
      *((_QWORD *)v4 + 5) = v14;
      if ( v14 )
        *(_QWORD *)(v14 + 48) = v4;
      *((_QWORD *)v4 + 9) = a3;
      vSpOrderInY((struct SPRITE *)v4);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v17);
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v16);
  }
  return (struct SPRITE *)v4;
}
