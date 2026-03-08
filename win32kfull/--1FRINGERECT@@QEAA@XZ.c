/*
 * XREFs of ??1FRINGERECT@@QEAA@XZ @ 0x1C0296028
 * Callers:
 *     EngTextOut @ 0x1C001A540 (EngTextOut.c)
 * Callees:
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C0088F60 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D4254 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00EA13C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C012FEE8 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C012FF64 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FRINGERECT::~FRINGERECT(FRINGERECT *this)
{
  int v2; // eax
  int v3; // eax
  SURFACE *v4; // rcx
  __int64 v5; // rsi
  char *v6; // rdi
  int (*i)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rbp
  _DWORD v8[4]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v9[80]; // [rsp+70h] [rbp-68h] BYREF

  if ( *((_QWORD *)this + 1) )
  {
    v2 = *((_DWORD *)this + 8) - 1;
    for ( *((_DWORD *)this + 8) = v2; v2 >= 0; *((_DWORD *)this + 8) = v2 )
    {
      vDIBSolidBlt(
        *(struct SURFACE **)this,
        (struct _RECTL *)((char *)this + 16 * v2 + 36),
        *((struct _CLIPOBJ **)this + 2),
        **((_DWORD **)this + 3),
        0);
      v2 = *((_DWORD *)this + 8) - 1;
    }
  }
  else
  {
    v3 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)v9,
      *(struct SURFACE **)this,
      *((struct _FONTOBJ **)this + 13),
      v3);
    v4 = *(SURFACE **)this;
    v8[0] = 0;
    v8[1] = 0;
    v5 = ((unsigned __int64)v4 + 24) & -(__int64)(v4 != 0LL);
    v6 = (char *)this + 36;
    for ( i = SURFACE::pfnBitBlt(v4); v6 < (char *)this + 16 * *((int *)this + 8) + 36; v6 += 16 )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, char *, _QWORD, _QWORD, _QWORD, _DWORD *, int))i)(
        v5,
        0LL,
        0LL,
        *((_QWORD *)this + 2),
        0LL,
        v6,
        0LL,
        0LL,
        *((_QWORD *)this + 3),
        v8,
        61680);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v9);
  }
}
