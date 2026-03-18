/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C0289C18
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C02894C8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0289E9C (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C028A100 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C028A214 (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     EngPlgBlt @ 0x1C028A2A0 (EngPlgBlt.c)
 */

__int64 __fastcall BLTRECORD::bRotate(
        RECTL *this,
        struct DCOBJ *a2,
        struct SURFMEM *a3,
        struct SURFMEM *a4,
        unsigned int a5,
        ULONG iMode)
{
  unsigned int v6; // ebx
  __int64 result; // rax
  __int64 v11; // rcx
  LONG x; // r15d
  LONG y; // r12d
  int v14; // r15d
  int v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  POINTL pptlBrushOrg; // [rsp+60h] [rbp-49h] BYREF
  int v22; // [rsp+68h] [rbp-41h]
  int v23; // [rsp+6Ch] [rbp-3Dh]
  int v24; // [rsp+70h] [rbp-39h] BYREF
  int v25; // [rsp+74h] [rbp-35h]
  int v26; // [rsp+78h] [rbp-31h]
  int v27; // [rsp+7Ch] [rbp-2Dh]
  __int64 v28; // [rsp+80h] [rbp-29h]
  int v29; // [rsp+88h] [rbp-21h]
  int v30; // [rsp+8Ch] [rbp-1Dh]
  POINTFIX pptfx; // [rsp+90h] [rbp-19h] BYREF
  int v32; // [rsp+98h] [rbp-11h]
  int v33; // [rsp+9Ch] [rbp-Dh]
  int v34; // [rsp+A0h] [rbp-9h]
  int v35; // [rsp+A4h] [rbp-5h]
  int v36; // [rsp+A8h] [rbp-1h]
  int v37; // [rsp+ACh] [rbp+3h]

  v6 = 0;
  if ( (a5 & 0x10000) == 0 || (result = BLTRECORD::bRotate((BLTRECORD *)this, a4, iMode), (_DWORD)result) )
  {
    BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&pptlBrushOrg);
    v11 = *(_QWORD *)&this[4].right;
    x = pptlBrushOrg.x;
    y = pptlBrushOrg.y;
    v25 = v22 - pptlBrushOrg.x;
    v26 = v23 - pptlBrushOrg.y;
    v27 = 0;
    v30 = 0;
    v28 = 0LL;
    v24 = *(_DWORD *)(v11 + 96);
    v29 = *(_DWORD *)(v11 + 112) & 0x40000;
    SURFMEM::bCreateDIB(a3, (struct _DEVBITMAPINFO *)&v24, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( *(_QWORD *)a3 )
    {
      v14 = 16 * x;
      v15 = 16 * y;
      pptfx.x = this[7].right - v14;
      pptfx.y = this[7].bottom - v15;
      v32 = this[8].left - v14;
      v33 = this[8].top - v15;
      v34 = this[8].right - v14;
      v35 = this[8].bottom - v15;
      v36 = this[9].left - v14;
      v37 = this[9].top - v15;
      BLTRECORD::vMirror((BLTRECORD *)this, &pptfx);
      v16 = *(_QWORD *)a2;
      v17 = *(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1;
      this[11].left += *(_DWORD *)(*(_QWORD *)a2 + 8 * v17 + 1016);
      this[11].right += *(_DWORD *)(v16 + 8 * v17 + 1016);
      this[11].top += *(_DWORD *)(v16 + 8 * v17 + 1020);
      this[11].bottom += *(_DWORD *)(v16 + 8 * v17 + 1020);
      v18 = *(_QWORD *)&this[4].right;
      v19 = *(_QWORD *)a3;
      pptlBrushOrg = 0LL;
      if ( EngPlgBlt(
             (SURFOBJ *)((v19 + 24) & -(__int64)(v19 != 0)),
             (SURFOBJ *)((v18 + 24) & -(__int64)(v18 != 0)),
             0LL,
             0LL,
             0LL,
             0LL,
             &pptlBrushOrg,
             &pptfx,
             this + 11,
             0LL,
             iMode) )
      {
        v6 = 1;
        *(_QWORD *)&this[4].right = *(_QWORD *)a3;
        this[11].left = -*(_DWORD *)(*(_QWORD *)a2 + 8LL * (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) + 1016);
        v20 = v25;
        this[11].top = -*(_DWORD *)(*(_QWORD *)a2 + 8LL * (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) + 1020);
        this[11].right = v20 - *(_DWORD *)(*(_QWORD *)a2 + 8LL * (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) + 1016);
        this[11].bottom = v26 - *(_DWORD *)(*(_QWORD *)a2 + 8LL * (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) + 1020);
      }
    }
    return v6;
  }
  return result;
}
