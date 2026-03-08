/*
 * XREFs of ?bIsCursorSprite@@YAHPEAVSPRITE@@@Z @ 0x1C027FF2C
 * Callers:
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C001CFDC (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0056EF0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?pSpFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C0281E04 (-pSpFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C0281FF4 (-pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIsCursorSprite(struct SPRITE *a1)
{
  __int64 i; // rdx

  for ( i = *(_QWORD *)(*((_QWORD *)a1 + 2) + 1120LL); ; i = *(_QWORD *)(i + 24) )
  {
    if ( !i )
      return 0LL;
    if ( (struct SPRITE *)i == a1 )
      break;
  }
  return 1LL;
}
