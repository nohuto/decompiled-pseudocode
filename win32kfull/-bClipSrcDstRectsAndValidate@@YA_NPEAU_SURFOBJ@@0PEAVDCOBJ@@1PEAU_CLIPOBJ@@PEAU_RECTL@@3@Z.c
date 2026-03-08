/*
 * XREFs of ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x1C02E00E4
 * Callers:
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C008D940 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _lambda_1cf76e2996e024a73989971e750c3c23_::operator() @ 0x1C02DFB0C (_lambda_1cf76e2996e024a73989971e750c3c23_--operator().c)
 *     _lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_::operator() @ 0x1C02DFB50 (_lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_--operator().c)
 *     ?bClipSrcDstRects@@YA_NQEAU_RECTL@@0PEAU1@1@Z @ 0x1C02E0018 (-bClipSrcDstRects@@YA_NQEAU_RECTL@@0PEAU1@1@Z.c)
 *     ?vGetSurfaceBoundsRect@@YAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02E0204 (-vGetSurfaceBoundsRect@@YAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

bool __fastcall bClipSrcDstRectsAndValidate(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        DC **a3,
        DC **a4,
        struct _CLIPOBJ *a5,
        struct _RECTL *a6,
        struct _RECTL *a7)
{
  struct _SURFOBJ *v9; // r11
  __int64 v10; // rcx
  __int64 v11; // rcx
  bool result; // al
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct _RECTL v15; // xmm1
  struct _RECTL v16; // [rsp+20h] [rbp-50h] BYREF
  struct _RECTL v17; // [rsp+30h] [rbp-40h] BYREF
  struct _RECTL v18; // [rsp+40h] [rbp-30h] BYREF
  struct _RECTL v19; // [rsp+50h] [rbp-20h] BYREF

  v19 = *a6;
  v18 = *a7;
  vGetSurfaceBoundsRect(a1, &v17);
  vGetSurfaceBoundsRect(v9, &v16);
  lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_::operator()(v10, a3, (__int64)&v17, (ERECTL *)&v19);
  lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_::operator()(v11, a4, (__int64)&v16, (ERECTL *)&v18);
  result = bClipSrcDstRects(&v17, &v16, (struct tagRECT *)&v19, (struct tagRECT *)&v18);
  if ( result )
  {
    lambda_1cf76e2996e024a73989971e750c3c23_::operator()(v13, a3);
    lambda_1cf76e2996e024a73989971e750c3c23_::operator()(v14, a4);
    result = 1;
    v15 = v19;
    *a7 = v18;
    *a6 = v15;
  }
  return result;
}
