/*
 * XREFs of ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C027E108
 * Callers:
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008BAB0 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0090090 (-vClearRendering@DC@@QEAAXXZ.c)
 * Callees:
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C00EE3A4 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpGetMetaSpriteDelayDelete@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C028177C (-pSpGetMetaSpriteDelayDelete@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C02817D8 (-pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GdiHintSpriteShapeDelayDelete(HDEV a1, HWND a2, HBITMAP a3, int a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // r12d
  HDEV v8; // r13
  int v9; // ebp
  const struct _SPRITESTATE *v10; // rcx
  int v11; // r9d
  struct _METASPRITE *v12; // r14
  __int64 v13; // rdi
  struct SPRITE *v14; // rcx
  unsigned int v15; // ecx
  struct SPRITE *v16; // rdi
  int v17; // ebx
  _BYTE v19[72]; // [rsp+20h] [rbp-48h] BYREF
  HDEV v20; // [rsp+70h] [rbp+8h] BYREF
  HBITMAP hsurf; // [rsp+80h] [rbp+18h]
  int v22; // [rsp+88h] [rbp+20h]

  v22 = a4;
  hsurf = a3;
  v20 = a1;
  v5 = 0;
  v6 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v19, (struct PDEVOBJ *)&v20);
  v8 = v20;
  v9 = 0;
  v10 = (const struct _SPRITESTATE *)(v20 + 22);
  if ( *((_DWORD *)v20 + 37) )
  {
    v12 = pSpGetMetaSpriteDelayDelete(v10, a2, 0LL);
    if ( v12 )
    {
      LODWORD(v13) = 0;
      if ( v11 )
      {
        do
        {
          v14 = (struct SPRITE *)*((_QWORD *)v12 + (unsigned int)v13 + 3);
          v22 = *(_DWORD *)v14 & 0x200;
          v6 = pSpHintSpriteShape(v14, (HSURF)hsurf, 0);
          if ( !v6 )
          {
            while ( (_DWORD)v13 )
            {
              v13 = (unsigned int)(v13 - 1);
              pSpHintSpriteShape(*((struct SPRITE **)v12 + v13 + 3), 0LL, 0);
            }
            goto LABEL_21;
          }
          if ( !v22 && (**((_DWORD **)v12 + (unsigned int)v13 + 3) & 0x200) != 0 )
            v9 = 1;
          LODWORD(v13) = v13 + 1;
        }
        while ( (unsigned int)v13 < *((_DWORD *)v8 + 37) );
        v15 = *((_DWORD *)v12 + 4) | 0x40;
        if ( !hsurf )
          v15 = *((_DWORD *)v12 + 4) & 0xFFFFFFBF;
        *((_DWORD *)v12 + 4) = v15;
        goto LABEL_18;
      }
    }
  }
  else
  {
    v16 = pSpGetSpriteDelayDelete(v10, a2, 0LL);
    v17 = *(_DWORD *)v16;
    v6 = pSpHintSpriteShape(v16, (HSURF)a3, 0);
    if ( (v17 & 0x200) == 0 && (*(_DWORD *)v16 & 0x200) != 0 )
    {
      v9 = 1;
LABEL_18:
      if ( v9 == 1 )
        _InterlockedAdd(&glDelayedHintShape, 1u);
    }
  }
  v5 = v6;
LABEL_21:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v19);
  return v5;
}
