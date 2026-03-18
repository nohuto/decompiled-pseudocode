/*
 * XREFs of _lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_::operator() @ 0x1C00310FC
 * Callers:
 *     ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x1C0030EE4 (-bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z.c)
 * Callees:
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C026C90C (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 */

void __fastcall lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_::operator()(__int64 a1, __int64 *a2, ERECTL *a3, ERECTL *a4)
{
  __int64 v4; // rcx
  int v6; // eax
  __int64 v7; // xmm0_8
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v8 = a1;
    v4 = *a2;
    v6 = *(_DWORD *)(*a2 + 520);
    if ( (v6 & 1) != 0 && (v6 & 2) == 0 )
    {
      v7 = *(_QWORD *)(v4 + 524);
      *((float *)&v8 + 1) = 1.0 / *(float *)(v4 + 528);
      *(float *)&v8 = 1.0 / *(float *)&v7;
      ERECTL::vScale(a3, (const struct POINTFL *)&v8);
      ERECTL::vScale(a4, (const struct POINTFL *)&v8);
    }
  }
}
