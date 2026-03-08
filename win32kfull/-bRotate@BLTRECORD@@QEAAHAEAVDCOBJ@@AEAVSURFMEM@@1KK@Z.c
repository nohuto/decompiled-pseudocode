/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C0291AAC
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C02913F8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0268F1C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0291D14 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0291F78 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C0292088 (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     EngPlgBlt @ 0x1C0292140 (EngPlgBlt.c)
 */

__int64 __fastcall BLTRECORD::bRotate(
        BLTRECORD *this,
        struct DCOBJ *a2,
        struct SURFMEM *a3,
        struct SURFMEM *a4,
        unsigned int a5,
        ULONG iMode)
{
  __int64 v9; // rcx
  LONG x; // r14d
  LONG y; // r15d
  int v12; // r14d
  int v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 result; // rax
  POINTL pptlBrushOrg; // [rsp+60h] [rbp-59h] BYREF
  int v18; // [rsp+68h] [rbp-51h]
  int v19; // [rsp+6Ch] [rbp-4Dh]
  int v20; // [rsp+70h] [rbp-49h] BYREF
  int v21; // [rsp+74h] [rbp-45h]
  int v22; // [rsp+78h] [rbp-41h]
  int v23; // [rsp+7Ch] [rbp-3Dh]
  __int64 v24; // [rsp+80h] [rbp-39h]
  int v25; // [rsp+88h] [rbp-31h]
  int v26; // [rsp+8Ch] [rbp-2Dh]
  POINTFIX pptfx; // [rsp+90h] [rbp-29h] BYREF
  int v28; // [rsp+98h] [rbp-21h]
  int v29; // [rsp+9Ch] [rbp-1Dh]
  int v30; // [rsp+A0h] [rbp-19h]
  int v31; // [rsp+A4h] [rbp-15h]
  int v32; // [rsp+A8h] [rbp-11h]
  int v33; // [rsp+ACh] [rbp-Dh]

  if ( (a5 & 0x10000) != 0 && !(unsigned int)BLTRECORD::bRotate(this, a4, iMode) )
    return 0LL;
  BLTRECORD::vBound(this, (struct ERECTL *)&pptlBrushOrg);
  v9 = *((_QWORD *)this + 9);
  x = pptlBrushOrg.x;
  y = pptlBrushOrg.y;
  v21 = v18 - pptlBrushOrg.x;
  v22 = v19 - pptlBrushOrg.y;
  v23 = 0;
  v26 = 0;
  v24 = 0LL;
  v20 = *(_DWORD *)(v9 + 96);
  v25 = *(_DWORD *)(v9 + 112) & 0x40000;
  SURFMEM::bCreateDIB(a3, (struct _DEVBITMAPINFO *)&v20, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( !*(_QWORD *)a3 )
    return 0LL;
  v12 = 16 * x;
  v13 = 16 * y;
  pptfx.x = *((_DWORD *)this + 28) - v12;
  pptfx.y = *((_DWORD *)this + 29) - v13;
  v28 = *((_DWORD *)this + 30) - v12;
  v29 = *((_DWORD *)this + 31) - v13;
  v30 = *((_DWORD *)this + 32) - v12;
  v31 = *((_DWORD *)this + 33) - v13;
  v32 = *((_DWORD *)this + 34) - v12;
  v33 = *((_DWORD *)this + 35) - v13;
  BLTRECORD::vMirror(this, &pptfx);
  ERECTL::bOffsetAdd(
    (BLTRECORD *)((char *)this + 168),
    (const struct _POINTL *)(*(_QWORD *)a2 + 8 * ((*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) + 127LL)),
    0);
  v14 = *((_QWORD *)this + 9);
  v15 = *(_QWORD *)a3;
  pptlBrushOrg = 0LL;
  if ( !EngPlgBlt(
          (SURFOBJ *)((v15 + 24) & -(__int64)(v15 != 0)),
          (SURFOBJ *)((v14 + 24) & -(__int64)(v14 != 0)),
          0LL,
          0LL,
          0LL,
          0LL,
          &pptlBrushOrg,
          &pptfx,
          (RECTL *)((char *)this + 168),
          0LL,
          iMode) )
    return 0LL;
  *((_QWORD *)this + 9) = *(_QWORD *)a3;
  *((_DWORD *)this + 42) = -*(_DWORD *)(*(_QWORD *)a2 + 8LL * (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) + 1016);
  result = 1LL;
  *((_DWORD *)this + 43) = -*(_DWORD *)(*(_QWORD *)a2 + 8LL * (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) + 1020);
  *((_DWORD *)this + 44) = v21 - *(_DWORD *)(*(_QWORD *)a2 + 8LL * (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) + 1016);
  *((_DWORD *)this + 45) = v22 - *(_DWORD *)(*(_QWORD *)a2 + 8LL * (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) + 1020);
  return result;
}
