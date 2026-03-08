/*
 * XREFs of GreEnableMirrorRendering @ 0x1C02861C4
 * Callers:
 *     NtUserSetMirrorRendering @ 0x1C01DD3A0 (NtUserSetMirrorRendering.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C00EF824 (-vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C010D764 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x1C0281E68 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 */

__int64 __fastcall GreEnableMirrorRendering(Gre::Base *a1, HWND a2)
{
  unsigned int v3; // edi
  Gre::Base *v4; // rsi
  const struct _SPRITESTATE *v5; // rcx
  struct _METASPRITE *MetaSprite; // rax
  struct _METASPRITE *v7; // r14
  __int64 v8; // rbx
  struct SPRITE *Sprite; // rbx
  Gre::Base *v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v11 = a1;
  v3 = 0;
  v13 = *((_QWORD *)Gre::Base::Globals(a1) + 15);
  GreAcquireSemaphore(v13);
  if ( v11 )
  {
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v12, (struct PDEVOBJ *)&v11);
    v4 = v11;
    v5 = (Gre::Base *)((char *)v11 + 80);
    if ( *((_DWORD *)v11 + 35) )
    {
      MetaSprite = pSpGetMetaSprite(v5, a2, 0LL, 0);
      v7 = MetaSprite;
      if ( MetaSprite )
      {
        *((_DWORD *)MetaSprite + 4) &= ~0x100u;
        if ( *((_DWORD *)v4 + 35) )
        {
          do
          {
            v8 = v3;
            vSpDeleteExMirror(*(_QWORD **)(*((_QWORD *)v4 + 18) + 8LL * v3++));
            **((_DWORD **)v7 + v8 + 3) &= ~0x100u;
            *(_DWORD *)(*((_QWORD *)v7 + v8 + 3) + 224LL) &= ~0x10000000u;
          }
          while ( v3 < *((_DWORD *)v4 + 35) );
        }
        goto LABEL_9;
      }
    }
    else
    {
      Sprite = pSpGetSprite(v5, a2, 0LL);
      if ( Sprite )
      {
        vSpDeleteExMirror(*((_QWORD **)v4 + 10));
        *(_DWORD *)Sprite &= ~0x100u;
        *((_DWORD *)Sprite + 56) &= ~0x10000000u;
LABEL_9:
        v3 = 1;
      }
    }
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v12);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  return v3;
}
