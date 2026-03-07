__int64 __fastcall bSpDwmUpdateMaskCursor(
        Gre::Base *a1,
        struct DWMSPRITE *a2,
        struct SFMLOGICALSURFACE *a3,
        struct _SURFOBJ *a4,
        SURFOBJ *psoSrc,
        struct _RECTL *a6,
        unsigned int *a7,
        struct SFMLOGICALSURFACE **a8)
{
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  struct Gre::Base::SESSION_GLOBALS *v10; // rdi
  unsigned int DIB; // r14d
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // r15
  struct _SURFOBJ *v16; // r12
  int inited; // eax
  SURFOBJ *v18; // rbx
  struct DWMSPRITE *v19; // rdx
  struct SFMLOGICALSURFACE *v20; // r8
  Gre::Base *v21; // rcx
  int v23; // [rsp+60h] [rbp-A0h] BYREF
  XLATEOBJ *pxlo; // [rsp+68h] [rbp-98h] BYREF
  XLATEOBJ *v25; // [rsp+70h] [rbp-90h] BYREF
  SURFOBJ *v26; // [rsp+78h] [rbp-88h]
  __int64 v27; // [rsp+80h] [rbp-80h] BYREF
  char v28; // [rsp+88h] [rbp-78h]
  int v29; // [rsp+8Ch] [rbp-74h]
  __int64 v30; // [rsp+90h] [rbp-70h] BYREF
  char v31; // [rsp+98h] [rbp-68h]
  int v32; // [rsp+9Ch] [rbp-64h]
  _DWORD v33[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v34; // [rsp+A8h] [rbp-58h]
  int v35; // [rsp+ACh] [rbp-54h]
  __int64 v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  struct DWMSPRITE *v38; // [rsp+C0h] [rbp-40h]
  struct SFMLOGICALSURFACE **v39; // [rsp+C8h] [rbp-38h]
  struct SFMLOGICALSURFACE *v40; // [rsp+D0h] [rbp-30h]
  HDEV v41; // [rsp+D8h] [rbp-28h]
  RECTL prclDest; // [rsp+E0h] [rbp-20h] BYREF

  v26 = a4;
  v39 = a8;
  v40 = a3;
  v38 = a2;
  v41 = (HDEV)a1;
  v9 = Gre::Base::Globals(a1);
  v33[1] = a4->sizlBitmap.cx;
  v10 = v9;
  LODWORD(v9) = a4->sizlBitmap.cy;
  v35 = 0;
  v37 = 1LL;
  v30 = 0LL;
  v31 = 0;
  v32 = 0;
  v27 = 0LL;
  v28 = 0;
  v29 = 0;
  v33[0] = 6;
  v34 = (unsigned int)v9;
  v36 = 0LL;
  DIB = SURFMEM::bCreateDIB((SURFMEM *)&v30, (struct _DEVBITMAPINFO *)v33, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( DIB )
  {
    if ( !psoSrc
      || (v34 >>= 1,
          (DIB = SURFMEM::bCreateDIB((SURFMEM *)&v27, (struct _DEVBITMAPINFO *)v33, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)) != 0) )
    {
      v12 = *((_QWORD *)v10 + 754);
      v13 = *((_QWORD *)v10 + 750);
      v14 = *((_QWORD *)v10 + 751);
      v15 = (v30 + 24) & -(__int64)(v30 != 0);
      prclDest = *a6;
      v16 = (struct _SURFOBJ *)((v27 + 24) & -(__int64)(v27 != 0));
      v25 = 0LL;
      pxlo = 0LL;
      if ( v27
        && (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (Gre::Base *)&pxlo,
                           0LL,
                           0,
                           (__int64)psoSrc[1].hdev,
                           v14,
                           v13,
                           v13,
                           0,
                           0xFFFFFF,
                           0,
                           0) )
      {
        DIB = EngCopyBits(v16, psoSrc, 0LL, pxlo, &prclDest, (POINTL *)&prclDest);
      }
      inited = EXLATEOBJ::bInitXlateObj((Gre::Base *)&v25, 0LL, 0, v12, v14, v13, v13, 0, 0xFFFFFF, 0, 0);
      v18 = v26;
      if ( inited )
      {
        prclDest.bottom += v26->sizlBitmap.cy >> 1;
        DIB = EngCopyBits((SURFOBJ *)v15, v26, 0LL, v25, &prclDest, (POINTL *)&prclDest);
      }
      if ( DIB )
      {
        v23 = 0;
        vSpDwmMaskToARGB((struct _SURFOBJ *)v15, v16, &v23);
        v19 = v38;
        v20 = v40;
        v21 = (Gre::Base *)v41;
        *((_DWORD *)v38 + 35) = (v23 != 0 ? 4 : 0) | *((_DWORD *)v38 + 35) & 0xFFFFFFFB;
        prclDest.top += v18->sizlBitmap.cy >> 1;
        DIB = bSpDwmUpdateSpriteShape(
                v21,
                v19,
                v20,
                (struct _SURFOBJ *)v15,
                &prclDest,
                *(struct PALETTE **)(v15 + 104),
                a7,
                0LL,
                v39);
      }
      EXLATEOBJ::vAltUnlock((Gre::Base **)&pxlo);
      EXLATEOBJ::vAltUnlock((Gre::Base **)&v25);
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v27);
  SURFMEM::~SURFMEM((SURFMEM *)&v30);
  return DIB;
}
