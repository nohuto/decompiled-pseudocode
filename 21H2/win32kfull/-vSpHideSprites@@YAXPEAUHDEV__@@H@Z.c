/*
 * XREFs of ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C0119AE4
 * Callers:
 *     GreHideSprites @ 0x1C0119AA0 (GreHideSprites.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0085EEC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0085FE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00B7030 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00B793C (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0119B68 (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

void __fastcall vSpHideSprites(HDEV a1, int a2)
{
  HDEV v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  unsigned int v7; // edx
  struct _SPRITESTATE *v8[24]; // [rsp+20h] [rbp-C8h] BYREF
  HDEV v9; // [rsp+F0h] [rbp+8h] BYREF

  v9 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v8, (struct PDEVOBJ *)&v9);
  v3 = v9;
  v4 = *((_QWORD *)v9 + 11);
  if ( v4 )
  {
    do
    {
      v6 = *(_QWORD *)(v4 + 24);
      v7 = *(_DWORD *)v4 | 0x10;
      if ( !a2 )
        v7 = *(_DWORD *)v4 & 0xFFFFFFEF;
      *(_DWORD *)v4 = v7;
      bSpUpdatePosition((struct SPRITE *)v4, (struct _POINTL *)(v4 + 112), 0, 1);
      v4 = v6;
    }
    while ( v6 );
  }
  v5 = *((_DWORD *)v3 + 290);
  if ( a2 )
  {
    if ( v5 )
      vSpUnhook((struct _SPRITESTATE *)(v3 + 20));
  }
  else if ( !v5 )
  {
    vSpHook((struct _SPRITESTATE *)(v3 + 20));
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v8);
}
