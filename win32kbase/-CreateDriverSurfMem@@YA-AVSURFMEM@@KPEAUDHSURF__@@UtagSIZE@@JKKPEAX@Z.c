/*
 * XREFs of ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C005AD80
 * Callers:
 *     ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1C000A360 (-EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C005B3C4 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0055BB0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0057B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
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
  __int64 v13; // rax
  __int64 v14; // rcx
  char v15; // cl
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+68h] [rbp-19h] BYREF
  char v19; // [rsp+70h] [rbp-11h]
  int v20; // [rsp+74h] [rbp-Dh]
  unsigned int v21; // [rsp+78h] [rbp-9h] BYREF
  __int64 v22; // [rsp+7Ch] [rbp-5h]
  int v23; // [rsp+84h] [rbp+3h]
  __int64 v24; // [rsp+88h] [rbp+7h]
  int v25; // [rsp+90h] [rbp+Fh]
  int v26; // [rsp+94h] [rbp+13h]
  int v27; // [rsp+E4h] [rbp+63h]

  v27 = HIDWORD(a4);
  if ( (int)a4 < 0 || a4 < 0 )
    goto LABEL_34;
  v23 = 0;
  v26 = 0;
  v21 = a6 & 0xFFFF7FFF;
  v22 = a4;
  v24 = 0LL;
  v25 = a7;
  if ( a8 )
  {
    v12 = a5;
    if ( a5 )
    {
      if ( (a6 & 0xFFFF7FFF) == 1 )
      {
        v17 = 8LL * a5;
      }
      else
      {
        if ( (a6 & 0xFFFF7FFF) != 2 )
        {
          if ( (a6 & 0xFFFF7FFF) != 3 )
          {
            if ( (a6 & 0xFFFF7FFF) != 4 )
            {
              if ( (a6 & 0xFFFF7FFF) != 5 )
              {
                if ( (a6 & 0xFFFF7FFF) != 6 )
                  goto LABEL_13;
                v12 = a5 >> 2;
                goto LABEL_12;
              }
              v12 = (2863311531u * (unsigned __int64)a5) >> 32;
            }
            v12 >>= 1;
          }
LABEL_12:
          LODWORD(v22) = v12;
          goto LABEL_13;
        }
        v17 = 2LL * a5;
      }
      if ( v17 <= 0xFFFFFFFF )
      {
        LODWORD(v22) = v17;
        goto LABEL_13;
      }
LABEL_34:
      *(_QWORD *)a1 = 0LL;
      *(_BYTE *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 12) = 0;
      return a1;
    }
  }
LABEL_13:
  v18 = 0LL;
  v19 = 0;
  v20 = 0;
  SURFMEM::bCreateDIB(
    (unsigned __int64)&v18,
    (struct _DEVBITMAPINFO *)&v21,
    a8,
    0LL,
    0,
    0LL,
    0LL,
    (a6 & 0x8000) == 0,
    a8 == 0LL,
    0,
    0);
  v13 = v18;
  if ( v18 )
  {
    if ( a2 == 3 )
    {
      *(_DWORD *)(v18 + 112) |= 0x400000u;
      v13 = v18;
    }
    else if ( !a2 )
    {
LABEL_19:
      *(_DWORD *)(v13 + 112) |= 0x200000u;
      v14 = v18;
      if ( (int)a4 <= *(_DWORD *)(v18 + 56) && v27 <= *(_DWORD *)(v18 + 60) )
      {
        *(_QWORD *)(v18 + 56) = a4;
        v14 = v18;
      }
      *(_QWORD *)(v14 + 24) = a3;
      *(_WORD *)(v18 + 100) = a2;
      v15 = v19 | 1;
      v19 |= 1u;
      if ( (a6 & 0x8000) != 0 )
      {
        *(_DWORD *)(v18 + 112) |= 0x40000u;
        v15 = v19;
      }
      *(_QWORD *)a1 = v18;
      *(_DWORD *)(a1 + 12) = v20;
      v20 = 0;
      *(_BYTE *)(a1 + 8) = v15;
      v18 = 0LL;
      v19 = 0;
      goto LABEL_25;
    }
    *(_DWORD *)(v13 + 88) = 0;
    *(_QWORD *)(v18 + 80) = 0LL;
    *(_QWORD *)(v18 + 72) = 0LL;
    v13 = v18;
    goto LABEL_19;
  }
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
LABEL_25:
  SURFMEM::~SURFMEM((SURFMEM *)&v18);
  return a1;
}
