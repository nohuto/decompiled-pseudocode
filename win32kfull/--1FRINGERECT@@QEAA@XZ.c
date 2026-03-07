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
