/*
 * XREFs of ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00C9DBC
 * Callers:
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00A34D4 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1C00C9FC0 (-EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0027C60 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0031B30 (--1SURFMEM@@QEAA@XZ.c)
 */

__int64 __fastcall CreateDriverSurfMem(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        void *a8)
{
  unsigned int v12; // edx
  unsigned __int64 v13; // rax
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // rcx
  char v18; // cl
  __int64 v20; // [rsp+68h] [rbp-19h] BYREF
  char v21; // [rsp+70h] [rbp-11h]
  int v22; // [rsp+74h] [rbp-Dh]
  unsigned int v23; // [rsp+78h] [rbp-9h] BYREF
  __int64 v24; // [rsp+7Ch] [rbp-5h]
  int v25; // [rsp+84h] [rbp+3h]
  __int64 v26; // [rsp+88h] [rbp+7h]
  int v27; // [rsp+90h] [rbp+Fh]
  int v28; // [rsp+94h] [rbp+13h]
  int v29; // [rsp+E4h] [rbp+63h]

  v29 = HIDWORD(a4);
  if ( (int)a4 < 0 || a4 < 0 )
    goto LABEL_32;
  v25 = 0;
  v28 = 0;
  v23 = a6 & 0xFFFF7FFF;
  v24 = a4;
  v26 = 0LL;
  v27 = a7;
  if ( !a8 )
    goto LABEL_19;
  v12 = a5;
  if ( !a5 )
    goto LABEL_19;
  switch ( a6 & 0xFFFF7FFF )
  {
    case 1u:
      v13 = 8LL * a5;
LABEL_17:
      if ( v13 <= 0xFFFFFFFF )
      {
        LODWORD(v24) = v13;
        break;
      }
LABEL_32:
      *(_QWORD *)a1 = 0LL;
      *(_BYTE *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 12) = 0;
      return a1;
    case 2u:
      v13 = 2LL * a5;
      goto LABEL_17;
    case 3u:
LABEL_12:
      LODWORD(v24) = v12;
      break;
    case 4u:
LABEL_14:
      v12 >>= 1;
      goto LABEL_12;
    case 5u:
      v12 = (2863311531u * (unsigned __int64)a5) >> 32;
      goto LABEL_14;
    case 6u:
      v12 = a5 >> 2;
      goto LABEL_12;
  }
LABEL_19:
  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  SURFMEM::bCreateDIB(
    (SURFMEM *)&v20,
    (struct _DEVBITMAPINFO *)&v23,
    a8,
    0LL,
    0,
    0LL,
    0LL,
    (a6 & 0x8000) == 0,
    a8 == 0LL,
    0,
    0);
  v16 = v20;
  if ( v20 )
  {
    if ( a2 == 3 )
    {
      *(_DWORD *)(v20 + 112) |= 0x400000u;
      v16 = v20;
    }
    if ( a2 )
    {
      *(_DWORD *)(v16 + 88) = 0;
      *(_QWORD *)(v20 + 80) = 0LL;
      *(_QWORD *)(v20 + 72) = 0LL;
      v16 = v20;
    }
    *(_DWORD *)(v16 + 112) |= 0x200000u;
    v17 = v20;
    if ( (int)a4 <= *(_DWORD *)(v20 + 56) && v29 <= *(_DWORD *)(v20 + 60) )
    {
      *(_QWORD *)(v20 + 56) = a4;
      v17 = v20;
    }
    *(_QWORD *)(v17 + 24) = a3;
    *(_WORD *)(v20 + 100) = a2;
    v18 = v21 | 1;
    v21 |= 1u;
    if ( (a6 & 0x8000) != 0 )
    {
      *(_DWORD *)(v20 + 112) |= 0x40000u;
      v18 = v21;
    }
    *(_QWORD *)a1 = v20;
    *(_DWORD *)(a1 + 12) = v22;
    v22 = 0;
    *(_BYTE *)(a1 + 8) = v18;
    v20 = 0LL;
    v21 = 0;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *(_BYTE *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v20, v14, v15);
  return a1;
}
