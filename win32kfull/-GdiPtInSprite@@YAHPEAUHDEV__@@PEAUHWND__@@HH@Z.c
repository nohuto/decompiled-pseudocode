/*
 * XREFs of ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x1C027D22C
 * Callers:
 *     GrePtInSprite @ 0x1C00A307C (GrePtInSprite.c)
 * Callees:
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C010D764 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C0280F14 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x1C0281E68 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 */

__int64 __fastcall GdiPtInSprite(Gre::Base *a1, HWND a2, int a3, int a4)
{
  unsigned int v7; // ebx
  Gre::Base *v8; // rsi
  const struct _SPRITESTATE *v9; // rcx
  struct _METASPRITE *MetaSprite; // rbp
  int v11; // r10d
  unsigned int v12; // edi
  __int64 v13; // rax
  struct SPRITE *Sprite; // rax
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF
  Gre::Base *v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = a1;
  v7 = 0;
  Gre::Base::Globals(a1);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v16, (struct PDEVOBJ *)&v17);
  v8 = v17;
  v9 = (Gre::Base *)((char *)v17 + 80);
  if ( *((_DWORD *)v17 + 35) )
  {
    MetaSprite = pSpGetMetaSprite(v9, a2, 0LL, 0);
    if ( MetaSprite )
    {
      v12 = 0;
      if ( v11 )
      {
        while ( 1 )
        {
          v13 = *(_QWORD *)(*((_QWORD *)v8 + 18) + 8LL * v12);
          if ( (unsigned int)bSpPtInSprite(
                               *((struct SPRITE **)MetaSprite + v12 + 3),
                               a3 - *(_DWORD *)(v13 + 2560),
                               a4 - *(_DWORD *)(v13 + 2564)) )
            break;
          if ( ++v12 >= *((_DWORD *)v8 + 35) )
            goto LABEL_10;
        }
        v7 = 1;
      }
    }
  }
  else
  {
    Sprite = pSpGetSprite(v9, a2, 0LL);
    if ( Sprite )
      v7 = bSpPtInSprite(Sprite, a3, a4);
  }
LABEL_10:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v16);
  return v7;
}
