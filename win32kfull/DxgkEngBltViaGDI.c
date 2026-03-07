__int64 __fastcall DxgkEngBltViaGDI(
        __int64 a1,
        HDC a2,
        int *a3,
        __int64 a4,
        PVOID pvBits,
        LONG lWidth,
        unsigned int a7,
        unsigned int a8,
        char a9,
        char a10,
        int a11,
        __int64 a12,
        unsigned int (__fastcall *a13)(int *, __int128 *, __int64, __int64))
{
  unsigned int v13; // r12d
  HPALETTE v17; // rax
  HSURF Bitmap; // rax
  HPALETTE v19; // r14
  HSURF v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rbx
  char v26; // si
  __int64 DisplayDC; // rax
  __int64 v28; // r14
  DC *v29; // rcx
  int *v30; // rsi
  int v31; // ebx
  __int64 v32; // rax
  __int128 v33; // xmm0
  int v34; // eax
  __int128 v35; // xmm0
  int v36; // rax^4
  int v37; // edx
  int v38; // r9d
  int v39; // r8d
  int v40; // ebx
  int v41; // eax
  int v42; // edi
  int v43; // r8d
  int v44; // r15d
  int v45; // r10d
  int v46; // r14d
  unsigned int v47; // esi
  int v48; // r10d
  int v49; // r9d
  int v50; // r11d
  int v51; // ecx
  int v52; // edx
  int v53; // r8d
  int v54; // ecx
  int v55; // r9d
  int v56; // eax
  int v57; // r9d
  int v58; // r15d
  __int64 v59; // rcx
  int v60; // ebx
  unsigned int v61; // edi
  HDC v62; // r14
  void (__fastcall *v63)(int *, __int128 *, int *, int *, int, int); // r12
  int v64; // r9d
  unsigned int v65; // eax
  char v67[8]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int (__fastcall *v68)(int *, __int128 *, __int64, __int64); // [rsp+78h] [rbp-88h]
  int v69[4]; // [rsp+80h] [rbp-80h] BYREF
  SIZEL sizl; // [rsp+90h] [rbp-70h]
  DC *v71[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-58h]
  __int128 v73; // [rsp+B0h] [rbp-50h] BYREF
  struct _POINTL v74; // [rsp+C0h] [rbp-40h] BYREF
  struct _POINTL v75; // [rsp+C8h] [rbp-38h] BYREF
  HDC v76; // [rsp+D0h] [rbp-30h]
  HPALETTE hpal; // [rsp+D8h] [rbp-28h]
  unsigned int v78; // [rsp+E0h] [rbp-20h]
  unsigned int v79; // [rsp+E4h] [rbp-1Ch]
  __int64 v80; // [rsp+E8h] [rbp-18h]
  HSURF hsurf; // [rsp+F0h] [rbp-10h]
  __int128 v82; // [rsp+F8h] [rbp-8h] BYREF
  int v83; // [rsp+108h] [rbp+8h] BYREF
  int v84; // [rsp+10Ch] [rbp+Ch]
  unsigned int v85; // [rsp+110h] [rbp+10h]
  unsigned int v86; // [rsp+114h] [rbp+14h]
  int v87[4]; // [rsp+118h] [rbp+18h] BYREF
  int v88[4]; // [rsp+128h] [rbp+28h] BYREF

  v13 = 0;
  *(_QWORD *)v69 = a12;
  v68 = a13;
  v80 = a4;
  v76 = a2;
  if ( !a2 )
    return v13;
  DCOBJ::DCOBJ((DCOBJ *)v71, a2);
  if ( v71[0] )
  {
    v17 = a9
        ? EngCreatePalette(2u, 0, 0LL, 0xF800u, 0x7E0u, 0x1Fu)
        : EngCreatePalette(2u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu);
    hpal = v17;
    if ( v17 )
    {
      sizl = (SIZEL)__PAIR64__(a8, a7);
      Bitmap = (HSURF)EngCreateBitmap((SIZEL)__PAIR64__(a8, a7), lWidth, a9 != 0 ? 4 : 6, 1u, pvBits);
      v19 = hpal;
      v20 = Bitmap;
      hsurf = Bitmap;
      DxEngSetPaletteState(hpal, v21, v22);
      if ( !v20 )
      {
LABEL_71:
        EngDeletePalette(v19);
        goto LABEL_72;
      }
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v67);
      LOBYTE(v23) = 5;
      v24 = HmgShareLockCheckIgnoreStockBit(v20, v23);
      v25 = v24;
      if ( v24 )
      {
        v26 = 1;
        DxEngSelectPaletteToSurface((struct _SURFOBJ *)(v24 + 24), v19);
        *(_DWORD *)(v25 + 112) |= 0x104200u;
        DEC_SHARE_REF_CNT(v25);
      }
      else
      {
        v26 = 0;
      }
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v67);
      if ( !v26 )
      {
LABEL_70:
        EngDeleteSurface(hsurf);
        goto LABEL_71;
      }
      DisplayDC = GreCreateDisplayDC(*((_QWORD *)v71[0] + 6), 1LL);
      v72 = DisplayDC;
      v28 = DisplayDC;
      if ( !DisplayDC )
      {
LABEL_69:
        v19 = hpal;
        goto LABEL_70;
      }
      if ( !hbmSelectBitmap(DisplayDC, hsurf, 0LL, 1LL) )
      {
LABEL_68:
        GrepDeleteDC(v28, 20971520LL);
        goto LABEL_69;
      }
      v29 = v71[0];
      v30 = 0LL;
      sizl = 0LL;
      v82 = 0LL;
      v31 = 0;
      v32 = *((_QWORD *)v71[0] + 122);
      v73 = 0LL;
      v79 = *(_DWORD *)(v32 + 108);
      v78 = v79 & 7;
      if ( (v79 & 7) != 0 )
      {
        DC::dwSetLayout(v71[0], -1, 0);
        v29 = v71[0];
      }
      GreLockVisRgnShared(*((_QWORD *)v29 + 6));
      if ( a3 )
      {
        if ( *(_QWORD *)(a1 + 8) )
        {
          if ( _bittest((const signed __int32 *)v71[0] + 9, 0xEu) )
          {
            v31 = 1;
            goto LABEL_20;
          }
          if ( *(_QWORD *)(a1 + 8) )
          {
LABEL_20:
            v33 = *(_OWORD *)((char *)v71[0] + 1032);
            v74 = 0LL;
            v82 = v33;
            if ( _bittest((const signed __int32 *)v71[0] + 9, 0xEu) )
            {
              v75 = 0LL;
              if ( (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v75) )
                ERECTL::bOffsetAdd((ERECTL *)&v82, &v75, 0);
            }
            if ( v31 && (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v74) )
              ERECTL::bOffsetAdd((ERECTL *)&v82, &v74, 0);
            IntersectRect(&v73, (int *)&v82, a3);
            v34 = v82;
            if ( (_DWORD)v82 != (_DWORD)v73
              || *(_QWORD *)((char *)&v82 + 4) != *(_QWORD *)((char *)&v73 + 4)
              || HIDWORD(v82) != HIDWORD(v73) )
            {
              sizl = (SIZEL)a3;
              LODWORD(v73) = v73 - v82;
              DWORD2(v73) -= v82;
              DWORD1(v73) -= DWORD1(v82);
              HIDWORD(v73) -= DWORD1(v82);
              v30 = a3;
            }
LABEL_34:
            DWORD2(v82) -= v34;
            v36 = DWORD1(v82);
            v37 = *(_DWORD *)(a1 + 88);
            *(_QWORD *)&v82 = 0LL;
            v84 = 0;
            v83 = 0;
            HIDWORD(v82) -= v36;
            v85 = a7;
            v86 = a8;
            if ( v68(&v83, &v82, (a1 + 48) & -(__int64)((v37 & 0x80u) != 0), (a1 + 32) & -(__int64)((v37 & 0x40) != 0))
              && (v38 = DWORD2(v82)) != 0
              && (v39 = HIDWORD(v82)) != 0 )
            {
              if ( !a3 || *(_QWORD *)(a1 + 8) )
              {
                v42 = DWORD1(v82);
                v40 = v82;
              }
              else
              {
                v38 = *a3 + DWORD2(v82);
                v40 = *a3 + v82;
                DWORD2(v82) = v38;
                v41 = a3[1];
                v42 = v41 + DWORD1(v82);
                LODWORD(v82) = v40;
                v39 = v41 + HIDWORD(v82);
                DWORD1(v82) += v41;
                HIDWORD(v82) += v41;
              }
              v43 = v39 - v42;
              v44 = v84;
              v45 = v86 - v84;
              v46 = v83;
              if ( v43 == v86 - v84 && v38 - v40 == v85 - v83 )
              {
                v47 = 0;
                if ( *(_DWORD *)(a1 + 64) )
                {
                  while ( 1 )
                  {
                    *(_OWORD *)v69 = 0LL;
                    IntersectRect(v69, (int *)(v80 + 16LL * v47), &v83);
                    v48 = v69[0];
                    v49 = v40 - v46 + v69[2];
                    v50 = v69[1];
                    v69[2] = v49;
                    v51 = v42 - v44 + v69[3];
                    v69[3] = v51;
                    v52 = v69[0] + v40 - v46;
                    v69[0] = v52;
                    v53 = v69[1] + v42 - v44;
                    v69[1] = v53;
                    if ( sizl )
                    {
                      IntersectRect(v69, v69, (int *)&v73);
                      v52 = v69[0];
                      v53 = v69[1];
                      v51 = v69[3];
                      v49 = v69[2];
                      v48 = v46 + v69[0] - v40;
                      v50 = v44 + v69[1] - v42;
                    }
                    v28 = v72;
                    v54 = v51 - v53;
                    v55 = v49 - v52;
                    v56 = a10
                        ? NtGdiTransparentBlt(v76, v52, v53, v55, v54, v72, v48, v50, v55, v54, a11)
                        : NtGdiBitBltInternal(v76, v52, v53, v55, v54, v72, v48, v50, -2134114272, 0, 0);
                    ++v47;
                    LODWORD(v68) = v56;
                    if ( v47 >= *(_DWORD *)(a1 + 64) )
                      break;
                    v44 = v84;
                    v46 = v83;
                    v42 = DWORD1(v82);
                    v40 = v82;
                  }
                  v13 = (unsigned int)v68;
                  goto LABEL_66;
                }
              }
              else
              {
                v57 = v38 - v40;
                LODWORD(v68) = 0;
                v58 = 0;
                v59 = *((_QWORD *)v71[0] + 122);
                v67[0] = *(_BYTE *)(v59 + 215);
                v75.x = (v57 << 16) / (int)(v85 - v83);
                v74.x = (v43 << 16) / v45;
                if ( v30 )
                {
                  v58 = (int)((v85 - v83) << 16) / v57;
                  v60 = (v45 << 16) / v43;
                  LODWORD(v68) = v60;
                }
                else
                {
                  v60 = (int)v68;
                }
                v61 = 0;
                *(_BYTE *)(v59 + 215) = 3;
                if ( *(_DWORD *)(a1 + 64) )
                {
                  v62 = (HDC)v72;
                  do
                  {
                    *(_OWORD *)v87 = 0LL;
                    *(_OWORD *)v88 = 0LL;
                    IntersectRect(v88, (int *)(v80 + 16LL * v61), &v83);
                    v63 = *(void (__fastcall **)(int *, __int128 *, int *, int *, int, int))v69;
                    (*(void (__fastcall **)(__int128 *, int *, int *, int *, LONG, LONG))v69)(
                      &v82,
                      &v83,
                      v87,
                      v88,
                      v75.x,
                      v74.x);
                    if ( *(_QWORD *)&sizl && (unsigned int)IntersectRect(v87, v87, (int *)&v73) )
                      v63(&v83, &v82, v88, v87, v58, v60);
                    v64 = v87[2] - v87[0];
                    if ( a10 )
                      v65 = NtGdiTransparentBlt(
                              v76,
                              v87[0],
                              v87[1],
                              v64,
                              v87[3] - v87[1],
                              (__int64)v62,
                              v88[0],
                              v88[1],
                              v88[2] - v88[0],
                              v88[3] - v88[1],
                              a11);
                    else
                      v65 = GreStretchBltInternal(
                              v76,
                              v87[0],
                              v87[1],
                              v64,
                              v87[3] - v87[1],
                              v62,
                              v88[0],
                              v88[1],
                              v88[2] - v88[0],
                              v88[3] - v88[1],
                              -2134114272,
                              0,
                              0);
                    v60 = (int)v68;
                    ++v61;
                    v13 = v65;
                  }
                  while ( v61 < *(_DWORD *)(a1 + 64) );
                }
                *(_BYTE *)(*((_QWORD *)v71[0] + 122) + 215LL) = v67[0];
              }
              v28 = v72;
            }
            else
            {
              v13 = 1;
            }
LABEL_66:
            GreUnlockVisRgn(*((_QWORD *)v71[0] + 6));
            if ( v78 )
              DC::dwSetLayout(v71[0], -1, v79);
            goto LABEL_68;
          }
        }
        v35 = *(_OWORD *)a3;
      }
      else
      {
        v35 = *(_OWORD *)((char *)v71[0] + 1032);
      }
      v82 = v35;
      v34 = v35;
      goto LABEL_34;
    }
  }
LABEL_72:
  if ( v71[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v71);
  return v13;
}
