/*
 * XREFs of ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0295E50
 * Callers:
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00912D0 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     EngStretchBlt @ 0x1C004DC80 (EngStretchBlt.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0091AD0 (-vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C00F39C4 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall BLTRECORD::bStretch(BLTRECORD *this, struct SURFMEM *a2, ULONG a3)
{
  int v6; // edx
  int v7; // ecx
  LONG v8; // edx
  LONG v9; // r8d
  struct SURFACE *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 result; // rax
  POINTL pptlHTOrg; // [rsp+60h] [rbp-9h] BYREF
  int v15; // [rsp+68h] [rbp-1h] BYREF
  __int64 v16; // [rsp+6Ch] [rbp+3h]
  int v17; // [rsp+74h] [rbp+Bh]
  __int64 v18; // [rsp+78h] [rbp+Fh]
  int v19; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+84h] [rbp+1Bh]
  RECTL prclDest; // [rsp+88h] [rbp+1Fh] BYREF

  v15 = 1;
  v16 = 0LL;
  v6 = *((_DWORD *)this + 39) - *((_DWORD *)this + 37);
  LODWORD(v16) = *((_DWORD *)this + 38) - *((_DWORD *)this + 36);
  HIDWORD(v16) = v6;
  v17 = 0;
  v20 = 0;
  v18 = 0LL;
  v7 = *((_DWORD *)BLTRECORD::pSurfMskOut(this) + 28) & 0x40000;
  prclDest.bottom = v8;
  v19 = v7;
  *(_QWORD *)&prclDest.left = 0LL;
  prclDest.right = v9;
  BLTRECORD::vMirror(this, (struct ERECTL *)&prclDest);
  SURFMEM::bCreateDIB(a2, (struct _DEVBITMAPINFO *)&v15, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( !*(_QWORD *)a2 )
    return 0LL;
  pptlHTOrg = 0LL;
  v10 = BLTRECORD::pSurfMskOut(this);
  if ( !EngStretchBlt(
          (SURFOBJ *)(v11 + 24),
          (SURFOBJ *)(((unsigned __int64)v10 + 24) & -(__int64)(v10 != 0LL)),
          0LL,
          0LL,
          0LL,
          0LL,
          &pptlHTOrg,
          &prclDest,
          (RECTL *)((char *)this + 184),
          0LL,
          a3) )
    return 0LL;
  *((_DWORD *)this + 53) &= ~0x20000u;
  v12 = *((_QWORD *)this + 10);
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  if ( v12 )
    DEC_SHARE_REF_CNT(v12);
  result = 1LL;
  *((_QWORD *)this + 10) = *(_QWORD *)a2;
  return result;
}
