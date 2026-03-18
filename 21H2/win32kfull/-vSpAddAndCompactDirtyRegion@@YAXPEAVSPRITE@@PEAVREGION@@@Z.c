/*
 * XREFs of ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x1C0156544
 * Callers:
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00B6430 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0155F90 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C0157AA8 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0041E20 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall vSpAddAndCompactDirtyRegion(struct SPRITE *a1, struct REGION *a2)
{
  int v3; // edi
  __int64 v4; // rdx
  int v5; // esi
  __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  struct REGION *v7; // [rsp+28h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-40h] BYREF
  int v9; // [rsp+38h] [rbp-38h]
  _QWORD v10[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _RECTL v11; // [rsp+50h] [rbp-20h] BYREF

  while ( 1 )
  {
    v3 = 0;
    v7 = a2;
    v6 = 0LL;
    if ( !a2 )
      break;
    v6 = _InterlockedExchange64((volatile __int64 *)a1 + 24, 0LL);
    if ( v6 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v10);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v10);
      if ( v10[0] )
      {
        v5 = RGNOBJ::iComplexity((RGNOBJ *)&v6);
        if ( RGNOBJ::bMerge((RGNOBJ *)v10, (struct RGNOBJ *)&v6, (struct RGNOBJ *)&v7, 0xEu) )
        {
          RGNOBJ::vSwap((RGNOBJ *)v10, (struct RGNOBJ *)&v6);
          v3 = 1;
          if ( v5 == 3 && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v6) == 2 )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v8);
            if ( v8 )
            {
              v11 = *(struct _RECTL *)(v6 + 96);
              RGNOBJ::vSet((RGNOBJ *)&v8, &v11);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v6);
              v6 = v8;
            }
            if ( v9 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
          }
        }
      }
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v10);
      if ( !v3 )
        break;
      v4 = v6;
    }
    else
    {
      v4 = (__int64)v7;
      v6 = (__int64)v7;
    }
    if ( v4 )
    {
      a2 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, v4);
      v6 = 0LL;
      if ( a2 )
        continue;
    }
    break;
  }
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v6);
}
