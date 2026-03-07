__int64 __fastcall bSpUpdateCursor(
        struct SPRITE *a1,
        SURFOBJ *psoSrc,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5)
{
  _QWORD *v5; // rax
  unsigned int v6; // edi
  struct _RECTL v8; // xmm0
  __int64 v11; // rbx
  struct Gre::Base::SESSION_GLOBALS *v12; // rax
  SURFOBJ *v13; // r14
  LONG cy; // eax
  __int64 v15; // r8
  _QWORD *v16; // rdx
  __int64 v18; // [rsp+60h] [rbp-51h] BYREF
  char v19; // [rsp+68h] [rbp-49h]
  int v20; // [rsp+6Ch] [rbp-45h]
  struct _POINTL v21; // [rsp+78h] [rbp-39h] BYREF
  struct _SURFOBJ *v22; // [rsp+80h] [rbp-31h]
  struct _XLATEOBJ *v23; // [rsp+88h] [rbp-29h]
  _QWORD *v24; // [rsp+90h] [rbp-21h]
  __int128 v25; // [rsp+98h] [rbp-19h] BYREF
  __int128 v26; // [rsp+A8h] [rbp-9h]
  RECTL prclDest; // [rsp+B8h] [rbp+7h] BYREF

  v5 = (_QWORD *)*((_QWORD *)a1 + 2);
  prclDest = 0LL;
  v6 = 0;
  v23 = a4;
  v25 = 0LL;
  v18 = 0LL;
  v8 = *a5;
  v19 = 0;
  v26 = 0LL;
  v20 = 0;
  v11 = *v5;
  *((struct _RECTL *)a1 + 6) = v8;
  v22 = a3;
  v24 = v5;
  v12 = Gre::Base::Globals(a1);
  v21 = 0LL;
  if ( !psoSrc )
  {
    *((_DWORD *)a1 + 1) = 2;
    *((_DWORD *)a1 + 50) = 33488896;
    bSpCreateShape(a1, &v21, a3, 0LL, a5, *((struct PALETTE **)v12 + 751), 6u, 1u, 0LL);
    LOBYTE(v6) = *((_QWORD *)a1 + 16) != 0LL;
    goto LABEL_16;
  }
  v13 = (SURFOBJ *)*((_QWORD *)a1 + 15);
  if ( !v13 )
  {
LABEL_8:
    DWORD1(v25) = psoSrc->sizlBitmap.cx;
    cy = psoSrc->sizlBitmap.cy;
    LODWORD(v25) = 1;
    DWORD2(v25) = cy;
    DWORD2(v26) = 1;
    *(_QWORD *)&v26 = 0LL;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v18, (struct _DEVBITMAPINFO *)&v25, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    {
      LOBYTE(v15) = 5;
      v19 |= 1u;
      v13 = (SURFOBJ *)((v18 + 24) & -(__int64)(v18 != 0));
      HmgSetOwner(*(_QWORD *)(v18 + 32), 0LL, v15);
    }
    *((_QWORD *)a1 + 15) = v13;
    if ( !v13 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( v13->sizlBitmap.cx != psoSrc->sizlBitmap.cx || v13->sizlBitmap.cy != psoSrc->sizlBitmap.cy )
  {
    bDeleteSurface(v13->hsurf);
    v13 = 0LL;
    goto LABEL_8;
  }
  *((_QWORD *)a1 + 15) = v13;
LABEL_11:
  prclDest = *a5;
  prclDest.bottom = (v13->sizlBitmap.cy >> 1) + _mm_srli_si128(*(__m128i *)&prclDest, 8).m128i_i32[1];
  EngCopyBits(v13, psoSrc, 0LL, 0LL, &prclDest, (POINTL *)&prclDest);
LABEL_12:
  if ( v22 )
  {
    bSpCreateShape(a1, &v21, v22, v23, a5, *(struct PALETTE **)(v11 + 1776), 0, 0, 0LL);
    LOBYTE(v6) = *((_QWORD *)a1 + 16) != 0LL;
  }
  else
  {
    vSpDeleteShape(a1);
    v6 = 1;
  }
  v16 = v24;
  *((_DWORD *)a1 + 1) = 0x1000000;
  *((_DWORD *)a1 + 39) = *((_DWORD *)v16 + 28);
  *((_DWORD *)a1 + 38) = *((_DWORD *)v16 + 27);
LABEL_16:
  SURFMEM::~SURFMEM((SURFMEM *)&v18);
  return v6;
}
