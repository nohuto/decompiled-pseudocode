/*
 * XREFs of _lambda_1cf76e2996e024a73989971e750c3c23_::operator() @ 0x1C02DFB0C
 * Callers:
 *     ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x1C02E00E4 (-bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C00E90D4 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C0269834 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 */

void __fastcall lambda_1cf76e2996e024a73989971e750c3c23_::operator()(__int64 a1, DC **a2)
{
  __int64 v2; // rcx
  ERECTL *v3; // r8
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v4 = a1;
    if ( (unsigned int)DC::bDpiScaleTransform(*a2) )
    {
      v4 = *(_QWORD *)(v2 + 524);
      ERECTL::vScale(v3, (const struct POINTFL *)&v4);
    }
  }
}
