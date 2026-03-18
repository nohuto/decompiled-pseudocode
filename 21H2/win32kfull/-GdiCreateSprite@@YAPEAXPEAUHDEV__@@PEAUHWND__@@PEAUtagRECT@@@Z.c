/*
 * XREFs of ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C00B53EC
 * Callers:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C0083498 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C0097BB8 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00B56F4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C00B594C (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 */

struct SPRITE *__fastcall GdiCreateSprite(HDEV a1, HWND a2, struct _RECTL *a3)
{
  struct SPRITE *v6; // rbx
  HDEV v7; // rbp
  int v8; // eax
  unsigned int v10; // eax
  __int64 v11; // rdi
  unsigned int v12; // esi
  __int64 v13; // rcx
  struct _POINTL *v14; // r9
  HDEV v15; // rcx
  struct SPRITE *Sprite; // rax
  int v17; // eax
  _BYTE v18[56]; // [rsp+20h] [rbp-38h] BYREF
  struct _POINTL v19; // [rsp+60h] [rbp+8h] BYREF
  HDEV v20; // [rsp+78h] [rbp+20h] BYREF

  v20 = a1;
  v6 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v18, (struct PDEVOBJ *)&v20);
  v7 = v20;
  v8 = *((_DWORD *)v20 + 35);
  if ( v8 )
  {
    v10 = 8 * v8 + 32;
    if ( v10 )
    {
      v11 = Win32AllocPool(v10, 1836086087LL);
      if ( v11 )
      {
        v12 = 0;
        if ( *((_DWORD *)v7 + 35) )
        {
          while ( 1 )
          {
            v13 = *((_QWORD *)v7 + 18);
            v14 = 0LL;
            v19 = 0LL;
            v15 = *(HDEV *)(v13 + 8LL * v12);
            if ( a3 )
            {
              v14 = &v19;
              v19.x = a3->left - *((_DWORD *)v15 + 640);
              v19.y = a3->top - *((_DWORD *)v15 + 641);
            }
            Sprite = pSpCreateSprite(v15, a3, a2, v14);
            if ( !Sprite )
              break;
            *(_QWORD *)(v11 + 8LL * v12++ + 24) = Sprite;
            *((_QWORD *)Sprite + 1) = v11;
            if ( v12 >= *((_DWORD *)v7 + 35) )
              goto LABEL_11;
          }
          while ( v12 )
            vSpDeleteSprite(*(struct SPRITE **)(v11 + 8LL * --v12 + 24));
          Win32FreePool(v11);
        }
        else
        {
LABEL_11:
          *(_QWORD *)v11 = a2;
          v17 = *((_DWORD *)v7 + 35);
          *(_DWORD *)(v11 + 16) = 0;
          v6 = (struct SPRITE *)v11;
          *(_DWORD *)(v11 + 20) = v17;
          *(_QWORD *)(v11 + 8) = *((_QWORD *)v7 + 19);
          *((_QWORD *)v7 + 19) = v11;
        }
      }
    }
  }
  else
  {
    v6 = pSpCreateSprite(a1, a3, a2, 0LL);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v18);
  return v6;
}
