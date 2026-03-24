/*
 * XREFs of zzzShowFade @ 0x1C01E8784
 * Callers:
 *     zzzStartFade @ 0x1C01E87EC (zzzStartFade.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0236740 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 * Callees:
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01E7B44 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 */

__int64 zzzShowFade()
{
  __int64 result; // rax
  struct _BLENDFUNCTION v1; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v2; // [rsp+48h] [rbp+10h] BYREF

  result = LODWORD(gfade[6]);
  if ( (result & 4) == 0 )
  {
    v2 = 0LL;
    *(_WORD *)&v1.BlendOp = 0;
    v1.AlphaFormat = 0;
    v1.SourceConstantAlpha = (result & 1) != 0 ? 40 : -41;
    zzzUpdateFade((struct tagPOINT *)&gfade[3], (struct tagSIZE *)&gfade[4], (HDC)gfade[1], &v2, &v1);
    result = gfade[0];
    LODWORD(gfade[6]) |= 4u;
  }
  return result;
}
