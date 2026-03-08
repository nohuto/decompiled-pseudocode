/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0291D14
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C02913F8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C0291AAC (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 * Callees:
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C00F39C4 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0291F78 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C0292088 (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     EngPlgBlt @ 0x1C0292140 (EngPlgBlt.c)
 */

__int64 __fastcall BLTRECORD::bRotate(BLTRECORD *this, struct SURFMEM *a2, ULONG a3)
{
  int v6; // esi
  int v7; // r14d
  int v8; // edx
  __int64 v9; // r15
  int v10; // esi
  int v11; // r14d
  struct SURFACE *v12; // rax
  __int64 v13; // rcx
  __int64 result; // rax
  POINTL pptlBrushOrg; // [rsp+60h] [rbp-39h] BYREF
  int v16; // [rsp+68h] [rbp-31h] BYREF
  int v17; // [rsp+6Ch] [rbp-2Dh]
  int v18; // [rsp+70h] [rbp-29h]
  int v19; // [rsp+74h] [rbp-25h]
  _DWORD v20[4]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v21; // [rsp+88h] [rbp-11h]
  int v22; // [rsp+90h] [rbp-9h]
  int v23; // [rsp+94h] [rbp-5h]
  POINTFIX pptfx; // [rsp+98h] [rbp-1h] BYREF
  int v25; // [rsp+A0h] [rbp+7h]
  int v26; // [rsp+A4h] [rbp+Bh]
  int v27; // [rsp+A8h] [rbp+Fh]
  int v28; // [rsp+ACh] [rbp+13h]
  int v29; // [rsp+B0h] [rbp+17h]
  int v30; // [rsp+B4h] [rbp+1Bh]

  BLTRECORD::vBound(this, (struct ERECTL *)&v16);
  v6 = v16;
  v7 = v17;
  v20[1] = v18 - v16;
  v20[3] = 0;
  v20[2] = v19 - v17;
  v23 = 0;
  v20[0] = 1;
  v21 = 0LL;
  v22 = *((_DWORD *)BLTRECORD::pSurfMskOut(this) + 28) & 0x40000;
  SURFMEM::bCreateDIB(a2, (struct _DEVBITMAPINFO *)v20, 0LL, 0LL, 0, 0LL, 0LL, 0, v8, 0, 0);
  v9 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
    return 0LL;
  v10 = 16 * v6;
  v11 = 16 * v7;
  pptfx.x = *((_DWORD *)this + 28) - v10;
  pptfx.y = *((_DWORD *)this + 29) - v11;
  v25 = *((_DWORD *)this + 30) - v10;
  v26 = *((_DWORD *)this + 31) - v11;
  v27 = *((_DWORD *)this + 32) - v10;
  v28 = *((_DWORD *)this + 33) - v11;
  v29 = *((_DWORD *)this + 34) - v10;
  v30 = *((_DWORD *)this + 35) - v11;
  BLTRECORD::vMirror(this, &pptfx);
  pptlBrushOrg = 0LL;
  v12 = BLTRECORD::pSurfMskOut(this);
  if ( !EngPlgBlt(
          (SURFOBJ *)(v9 + 24),
          (SURFOBJ *)(((unsigned __int64)v12 + 24) & -(__int64)(v12 != 0LL)),
          0LL,
          0LL,
          0LL,
          0LL,
          &pptlBrushOrg,
          &pptfx,
          (RECTL *)((char *)this + 184),
          0LL,
          a3) )
    return 0LL;
  *((_DWORD *)this + 53) &= ~0x20000u;
  v13 = *((_QWORD *)this + 10);
  if ( v13 )
    DEC_SHARE_REF_CNT(v13);
  result = 1LL;
  *((_QWORD *)this + 10) = *(_QWORD *)a2;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  return result;
}
