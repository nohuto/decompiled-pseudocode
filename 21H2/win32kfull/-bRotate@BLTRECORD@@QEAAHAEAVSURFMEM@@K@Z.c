/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C028C1F4
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028B878 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C028BF90 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 * Callees:
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C00B9090 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C028C458 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C028C56C (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     EngPlgBlt @ 0x1C028C5F0 (EngPlgBlt.c)
 */

__int64 __fastcall BLTRECORD::bRotate(RECTL *this, struct SURFMEM *a2, ULONG a3)
{
  unsigned int v6; // ebx
  int v7; // r14d
  int v8; // r15d
  int v9; // r14d
  int v10; // r15d
  struct SURFACE *v11; // rax
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  POINTL pptlBrushOrg; // [rsp+60h] [rbp-39h] BYREF
  int v18; // [rsp+68h] [rbp-31h] BYREF
  int v19; // [rsp+6Ch] [rbp-2Dh]
  int v20; // [rsp+70h] [rbp-29h]
  int v21; // [rsp+74h] [rbp-25h]
  _DWORD v22[4]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v23; // [rsp+88h] [rbp-11h]
  int v24; // [rsp+90h] [rbp-9h]
  int v25; // [rsp+94h] [rbp-5h]
  POINTFIX pptfx; // [rsp+98h] [rbp-1h] BYREF
  int v27; // [rsp+A0h] [rbp+7h]
  int v28; // [rsp+A4h] [rbp+Bh]
  int v29; // [rsp+A8h] [rbp+Fh]
  int v30; // [rsp+ACh] [rbp+13h]
  int v31; // [rsp+B0h] [rbp+17h]
  int v32; // [rsp+B4h] [rbp+1Bh]

  BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&v18);
  v6 = 0;
  v7 = v18;
  v8 = v19;
  v22[1] = v20 - v18;
  v22[3] = 0;
  v22[2] = v21 - v19;
  v25 = 0;
  v22[0] = 1;
  v23 = 0LL;
  v24 = *((_DWORD *)BLTRECORD::pSurfMskOut((BLTRECORD *)this) + 28) & 0x40000;
  SURFMEM::bCreateDIB(a2, (struct _DEVBITMAPINFO *)v22, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( *(_QWORD *)a2 )
  {
    v9 = 16 * v7;
    v10 = 16 * v8;
    pptfx.x = this[7].right - v9;
    pptfx.y = this[7].bottom - v10;
    v27 = this[8].left - v9;
    v28 = this[8].top - v10;
    v29 = this[8].right - v9;
    v30 = this[8].bottom - v10;
    v31 = this[9].left - v9;
    v32 = this[9].top - v10;
    BLTRECORD::vMirror((BLTRECORD *)this, &pptfx);
    pptlBrushOrg = 0LL;
    v11 = BLTRECORD::pSurfMskOut((BLTRECORD *)this);
    if ( EngPlgBlt(
           (SURFOBJ *)(v12 + 24),
           (SURFOBJ *)(((unsigned __int64)v11 + 24) & -(__int64)(v11 != 0LL)),
           0LL,
           0LL,
           0LL,
           0LL,
           &pptlBrushOrg,
           &pptfx,
           this + 12,
           0LL,
           a3) )
    {
      this[13].bottom &= ~0x20000u;
      v14 = *(_QWORD *)&this[5].left;
      if ( v14 )
        DEC_SHARE_REF_CNT(v14, v13);
      v15 = *(_QWORD *)a2;
      this[12].left = 0;
      this[12].top = 0;
      v6 = 1;
      *(_QWORD *)&this[5].left = v15;
    }
  }
  return v6;
}
