struct SPRITE *__fastcall GdiCreateSprite(Gre::Base *a1, HWND a2, struct _RECTL *a3)
{
  struct SPRITE *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  Gre::Base *v9; // rbp
  int v10; // eax
  unsigned int v12; // eax
  _QWORD *v13; // rdi
  unsigned int v14; // esi
  __int64 v15; // rcx
  struct _POINTL *v16; // r9
  HDEV v17; // rcx
  struct SPRITE *Sprite; // rax
  int v19; // eax
  _BYTE v20[56]; // [rsp+20h] [rbp-38h] BYREF
  struct _POINTL v21; // [rsp+60h] [rbp+8h] BYREF
  Gre::Base *v22; // [rsp+78h] [rbp+20h] BYREF

  v22 = a1;
  v6 = 0LL;
  Gre::Base::Globals(a1);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v20, (struct PDEVOBJ *)&v22);
  v9 = v22;
  v10 = *((_DWORD *)v22 + 35);
  if ( v10 )
  {
    v12 = 8 * v10 + 32;
    if ( v12 )
    {
      v13 = (_QWORD *)Win32AllocPool(v12, 1836086087LL, v7, v8);
      if ( v13 )
      {
        v14 = 0;
        if ( *((_DWORD *)v9 + 35) )
        {
          while ( 1 )
          {
            v15 = *((_QWORD *)v9 + 18);
            v16 = 0LL;
            v21 = 0LL;
            v17 = *(HDEV *)(v15 + 8LL * v14);
            if ( a3 )
            {
              v16 = &v21;
              v21.x = a3->left - *((_DWORD *)v17 + 640);
              v21.y = a3->top - *((_DWORD *)v17 + 641);
            }
            Sprite = pSpCreateSprite(v17, a3, a2, v16);
            if ( !Sprite )
              break;
            v13[v14++ + 3] = Sprite;
            *((_QWORD *)Sprite + 1) = v13;
            if ( v14 >= *((_DWORD *)v9 + 35) )
              goto LABEL_11;
          }
          while ( v14 )
            vSpDeleteSprite((struct SPRITE *)v13[--v14 + 3]);
          Win32FreePool(v13);
        }
        else
        {
LABEL_11:
          *v13 = a2;
          v19 = *((_DWORD *)v9 + 35);
          *((_DWORD *)v13 + 4) = 0;
          v6 = (struct SPRITE *)v13;
          *((_DWORD *)v13 + 5) = v19;
          v13[1] = *((_QWORD *)v9 + 19);
          *((_QWORD *)v9 + 19) = v13;
        }
      }
    }
  }
  else
  {
    v6 = pSpCreateSprite((HDEV)a1, a3, a2, 0LL);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v20);
  return v6;
}
