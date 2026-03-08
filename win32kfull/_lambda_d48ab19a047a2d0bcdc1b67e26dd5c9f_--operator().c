/*
 * XREFs of _lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_::operator() @ 0x1C02DFB50
 * Callers:
 *     ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x1C02E00E4 (-bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C00E90D4 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C0269834 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 */

void __fastcall lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_::operator()(__int64 a1, DC **a2, __int64 a3, ERECTL *a4)
{
  __int64 v5; // rcx
  ERECTL *v6; // r8
  __int64 v7; // xmm0_8
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v8 = a1;
    if ( (unsigned int)DC::bDpiScaleTransform(*a2) )
    {
      v7 = *(_QWORD *)(v5 + 524);
      *((float *)&v8 + 1) = 1.0 / *(float *)(v5 + 528);
      *(float *)&v8 = 1.0 / *(float *)&v7;
      ERECTL::vScale(v6, (const struct POINTFL *)&v8);
      ERECTL::vScale(a4, (const struct POINTFL *)&v8);
    }
  }
}
