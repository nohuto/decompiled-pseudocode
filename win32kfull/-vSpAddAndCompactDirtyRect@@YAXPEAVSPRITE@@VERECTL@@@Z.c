/*
 * XREFs of ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C012B694
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0056EF0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C010D390 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C008C950 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x1C012B3A0 (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall vSpAddAndCompactDirtyRect(volatile __int64 *a1, const struct _RECTL *a2)
{
  int v4; // esi
  _DWORD *v5; // rdx
  struct REGION *v6; // rdx
  __int64 v7; // rdx
  int v8; // edi
  _DWORD *v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+28h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+38h] [rbp-28h] BYREF
  _DWORD *v13; // [rsp+40h] [rbp-20h] BYREF
  struct _RECTL v14; // [rsp+48h] [rbp-18h] BYREF

  Gre::Base::Globals((Gre::Base *)a1);
  v4 = 0;
  v5 = (_DWORD *)_InterlockedExchange64(a1 + 24, 0LL);
  v9 = v5;
  if ( v5 )
  {
    if ( v5[12] == 56 && v5[14] <= a2->left && v5[16] >= a2->right && v5[15] <= a2->top && v5[17] >= a2->bottom )
    {
      v6 = (struct REGION *)_InterlockedExchange64(a1 + 24, (__int64)v5);
      v9 = 0LL;
      goto LABEL_8;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v11);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v11);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v10);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v10);
    if ( v11 )
    {
      if ( v10 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v10, a2);
        v8 = RGNOBJ::iComplexity((RGNOBJ *)&v9);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v11, (struct RGNOBJ *)&v9, (struct RGNOBJ *)&v10, 0xEu) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v11, (struct RGNOBJ *)&v9);
          v4 = 1;
          if ( v8 == 3 && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v9) == 2 )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13);
            if ( v13 )
            {
              v14 = 0LL;
              v14 = *(struct _RECTL *)(v9 + 14);
              RGNOBJ::vSet((RGNOBJ *)&v13, &v14);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
              v9 = v13;
            }
          }
        }
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
    v7 = (__int64)v9;
  }
  else
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12);
    if ( !v12 )
      goto LABEL_10;
    RGNOBJ::vSet((RGNOBJ *)&v12, a2);
    v7 = v12;
    v4 = 1;
    v9 = (_DWORD *)v12;
  }
  if ( !v4 || !v7 )
    goto LABEL_10;
  v6 = (struct REGION *)_InterlockedExchange64(a1 + 24, v7);
  v9 = 0LL;
LABEL_8:
  if ( v6 )
    vSpAddAndCompactDirtyRegion((struct SPRITE *)a1, v6);
LABEL_10:
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
}
