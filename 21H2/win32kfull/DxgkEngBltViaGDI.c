/*
 * XREFs of DxgkEngBltViaGDI @ 0x1C02745B0
 * Callers:
 *     <none>
 * Callees:
 *     UserGetRedirectedWindowOrigin @ 0x1C0020420 (UserGetRedirectedWindowOrigin.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreStretchBltInternal @ 0x1C002AF84 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1C009212C (-DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z.c)
 *     ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1C00921B0 (-DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0148400 (NtGdiTransparentBlt.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026AD30 (--0SURFREF@@QEAA@XZ.c)
 */

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
        unsigned int a11,
        void (__fastcall *a12)(__int128 *, __int64 *, int *, int *, int, int),
        __int64 a13)
{
  unsigned int v13; // r15d
  HPALETTE v17; // rax
  char v18; // bl
  HPALETTE v19; // rdi
  HBITMAP Bitmap; // r14
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 DisplayDC; // rax
  DC *v26; // rcx
  int v27; // r14d
  int v28; // ebx
  int v29; // edi
  int RedirectedWindowOrigin; // eax
  __int128 v31; // xmm0
  int v32; // edx
  int v33; // r9d
  int v34; // r8d
  int v35; // ebx
  int v36; // eax
  int v37; // edi
  int v38; // r8d
  int v39; // r15d
  int v40; // r10d
  int v41; // r14d
  unsigned int v42; // esi
  LONG v43; // r10d
  int v44; // r11d
  int v45; // r9d
  int v46; // ecx
  LONG v47; // edx
  LONG v48; // r8d
  int v49; // ecx
  int v50; // r9d
  unsigned int v51; // eax
  int v52; // r9d
  int v53; // r15d
  __int64 v54; // rcx
  int v55; // r14d
  int v56; // ebx
  unsigned int i; // edi
  int v58; // r9d
  unsigned int v59; // eax
  _BYTE v61[4]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v62; // [rsp+74h] [rbp-8Ch]
  __int64 v63; // [rsp+78h] [rbp-88h] BYREF
  SIZEL sizl; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+88h] [rbp-78h] BYREF
  __int64 v66; // [rsp+90h] [rbp-70h]
  __int128 v67; // [rsp+98h] [rbp-68h] BYREF
  HPALETTE hpal; // [rsp+A8h] [rbp-58h]
  unsigned int v69; // [rsp+B0h] [rbp-50h]
  unsigned int v70; // [rsp+B4h] [rbp-4Ch]
  __int64 v71; // [rsp+B8h] [rbp-48h]
  void (__fastcall *v72)(__int128 *, __int64 *, int *, int *, int, int); // [rsp+C0h] [rbp-40h]
  HBITMAP v73; // [rsp+C8h] [rbp-38h]
  DC *v74[2]; // [rsp+D0h] [rbp-30h] BYREF
  char v75[32]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v76[32]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v77; // [rsp+120h] [rbp+20h]
  __int128 v78; // [rsp+128h] [rbp+28h] BYREF
  int v79[4]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v80; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v81; // [rsp+150h] [rbp+50h]
  unsigned int v82; // [rsp+154h] [rbp+54h]
  int v83[4]; // [rsp+158h] [rbp+58h] BYREF

  v13 = 0;
  v72 = a12;
  *(_QWORD *)v79 = a13;
  v71 = a4;
  v62 = 0;
  if ( a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v74, a2);
    if ( !v74[0] )
      goto LABEL_71;
    v17 = a9
        ? EngCreatePalette(2u, 0, 0LL, 0xF800u, 0x7E0u, 0x1Fu)
        : EngCreatePalette(2u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu);
    hpal = v17;
    if ( !v17 )
      goto LABEL_71;
    sizl = (SIZEL)__PAIR64__(a8, a7);
    v18 = 1;
    v19 = hpal;
    Bitmap = EngCreateBitmap((SIZEL)__PAIR64__(a8, a7), lWidth, a9 != 0 ? 4 : 6, 1u, pvBits);
    v73 = Bitmap;
    DxEngSetPaletteState(hpal, v21, v22);
    if ( !Bitmap )
    {
LABEL_70:
      EngDeletePalette(v19);
LABEL_71:
      MDCOBJ::~MDCOBJ((MDCOBJ *)v74);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v75);
      return v13;
    }
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v61);
    SURFREF::SURFREF((SURFREF *)v76);
    LOBYTE(v23) = 5;
    v24 = HmgShareLockCheckIgnoreStockBit(Bitmap, v23);
    v77 = v24;
    if ( v24 )
    {
      DxEngSelectPaletteToSurface((struct _SURFOBJ *)(v24 + 24), v19);
      *(_DWORD *)(v77 + 112) |= 0x100000u;
      *(_DWORD *)(v77 + 112) |= 0x4000u;
      *(_DWORD *)(v77 + 112) |= 0x200u;
      if ( v77 )
        DEC_SHARE_REF_CNT(v77);
    }
    else
    {
      v18 = 0;
    }
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v76);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v61);
    if ( !v18 || (DisplayDC = GreCreateDisplayDC(*((_QWORD *)v74[0] + 6), 1LL), (v66 = DisplayDC) == 0) )
    {
LABEL_69:
      EngDeleteSurface((HSURF)Bitmap);
      goto LABEL_70;
    }
    if ( !hbmSelectBitmap(DisplayDC, Bitmap, 0LL, 1LL) )
    {
LABEL_68:
      bDeleteDCInternal(v66, 1LL, 0LL);
      goto LABEL_69;
    }
    v26 = v74[0];
    v67 = 0LL;
    sizl = 0LL;
    v70 = *(_DWORD *)(*((_QWORD *)v74[0] + 122) + 108LL);
    v69 = v70 & 7;
    if ( (v70 & 7) != 0 )
    {
      DC::dwSetLayout(v74[0], -1, 0);
      v26 = v74[0];
    }
    GreLockVisRgnShared(*((_QWORD *)v26 + 6));
    if ( a3 )
    {
      if ( *(_QWORD *)(a1 + 8) )
      {
        v63 = 0LL;
        v27 = _bittest((const signed __int32 *)v74[0] + 9, 0xEu);
        v78 = *(_OWORD *)((char *)v74[0] + 1032);
        if ( _bittest((const signed __int32 *)v74[0] + 9, 0xEu)
          && (v65 = 0LL, (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v65)) )
        {
          DWORD2(v78) += v65;
          v28 = v65 + v78;
          v29 = HIDWORD(v65) + DWORD1(v78);
          HIDWORD(v78) += HIDWORD(v65);
          DWORD1(v78) += HIDWORD(v65);
          LODWORD(v78) = v65 + v78;
        }
        else
        {
          v29 = DWORD1(v78);
          v28 = v78;
        }
        if ( v27 )
        {
          RedirectedWindowOrigin = UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v63);
          v28 = v78;
          v29 = DWORD1(v78);
          if ( RedirectedWindowOrigin )
          {
            DWORD2(v78) += v63;
            v28 = v63 + v78;
            v29 = HIDWORD(v63) + DWORD1(v78);
            HIDWORD(v78) += HIDWORD(v63);
            DWORD1(v78) += HIDWORD(v63);
            LODWORD(v78) = v63 + v78;
          }
        }
        IntersectRect(&v67, (int *)&v78, a3);
        if ( v28 != (_DWORD)v67
          || __PAIR64__(DWORD2(v78), v29) != *(_QWORD *)((char *)&v67 + 4)
          || HIDWORD(v78) != HIDWORD(v67) )
        {
          sizl = (SIZEL)a3;
          LODWORD(v67) = v67 - v28;
          DWORD2(v67) -= v28;
          DWORD1(v67) -= v29;
          HIDWORD(v67) -= v29;
        }
        goto LABEL_33;
      }
      v31 = *(_OWORD *)a3;
    }
    else
    {
      v31 = *(_OWORD *)((char *)v74[0] + 1032);
    }
    v78 = v31;
    v28 = v31;
LABEL_33:
    v32 = *(_DWORD *)(a1 + 88);
    DWORD2(v78) -= v28;
    HIDWORD(v78) -= DWORD1(v78);
    v81 = a7;
    v82 = a8;
    *(_QWORD *)&v78 = 0LL;
    v80 = 0LL;
    if ( (*(unsigned int (__fastcall **)(__int64 *, __int128 *, __int64, __int64))v79)(
           &v80,
           &v78,
           (a1 + 48) & -(__int64)((v32 & 0x80u) != 0),
           (a1 + 32) & -(__int64)((v32 & 0x40) != 0))
      && (v33 = DWORD2(v78)) != 0
      && (v34 = HIDWORD(v78)) != 0 )
    {
      if ( !a3 || *(_QWORD *)(a1 + 8) )
      {
        v37 = DWORD1(v78);
        v35 = v78;
      }
      else
      {
        v33 = *a3 + DWORD2(v78);
        v35 = *a3 + v78;
        v36 = a3[1];
        v37 = v36 + DWORD1(v78);
        v34 = v36 + HIDWORD(v78);
        LODWORD(v78) = v35;
        HIDWORD(v78) += v36;
        DWORD2(v78) = v33;
        DWORD1(v78) += v36;
      }
      v38 = v34 - v37;
      v39 = HIDWORD(v80);
      v40 = v82 - HIDWORD(v80);
      v41 = v80;
      if ( v38 == v82 - HIDWORD(v80) && v33 - v35 == v81 - (_DWORD)v80 )
      {
        v42 = 0;
        if ( *(_DWORD *)(a1 + 64) )
        {
          while ( 1 )
          {
            *(_OWORD *)v79 = 0LL;
            IntersectRect(v79, (int *)(v71 + 16LL * v42), (int *)&v80);
            v43 = v79[0];
            v44 = v79[1];
            v45 = v35 - v41 + v79[2];
            v79[2] = v45;
            v46 = v37 - v39 + v79[3];
            v79[3] = v46;
            v47 = v35 + v79[0] - v41;
            v79[0] = v47;
            v48 = v37 + v79[1] - v39;
            v79[1] = v48;
            if ( sizl )
            {
              IntersectRect(v79, v79, (int *)&v67);
              v47 = v79[0];
              v48 = v79[1];
              v46 = v79[3];
              v45 = v79[2];
              v43 = v41 + v79[0] - v35;
              v44 = v39 + v79[1] - v37;
            }
            v49 = v46 - v48;
            v50 = v45 - v47;
            v51 = a10
                ? NtGdiTransparentBlt(a2, v47, v48, v50, v49, (HDC)v66, v43, v44, v50, v49, a11)
                : NtGdiBitBltInternal(a2, v47, v48, v50, v49, (HDC)v66, v43, v44, -2134114272, 0, 0);
            v62 = v51;
            if ( ++v42 >= *(_DWORD *)(a1 + 64) )
              break;
            v39 = HIDWORD(v80);
            v41 = v80;
            v37 = DWORD1(v78);
            v35 = v78;
          }
          v13 = v62;
        }
        else
        {
          v13 = 0;
        }
      }
      else
      {
        v52 = v33 - v35;
        v53 = 0;
        LODWORD(v63) = 0;
        v54 = *((_QWORD *)v74[0] + 122);
        v61[0] = *(_BYTE *)(v54 + 215);
        v55 = (v52 << 16) / (int)(v81 - v80);
        LODWORD(v65) = (v38 << 16) / v40;
        if ( sizl )
        {
          v53 = (int)((v81 - (_DWORD)v80) << 16) / v52;
          v56 = (v40 << 16) / v38;
          LODWORD(v63) = v56;
        }
        else
        {
          v56 = 0;
        }
        *(_BYTE *)(v54 + 215) = 3;
        for ( i = 0; i < *(_DWORD *)(a1 + 64); v62 = v59 )
        {
          *(_OWORD *)v79 = 0LL;
          *(_OWORD *)v83 = 0LL;
          IntersectRect(v83, (int *)(v71 + 16LL * i), (int *)&v80);
          v72(&v78, &v80, v79, v83, v55, v65);
          if ( *(_QWORD *)&sizl && (unsigned int)IntersectRect(v79, v79, (int *)&v67) )
            v72((__int128 *)&v80, (__int64 *)&v78, v83, v79, v53, v56);
          v58 = v79[2] - v79[0];
          if ( a10 )
            v59 = NtGdiTransparentBlt(
                    a2,
                    v79[0],
                    v79[1],
                    v58,
                    v79[3] - v79[1],
                    (HDC)v66,
                    v83[0],
                    v83[1],
                    v83[2] - v83[0],
                    v83[3] - v83[1],
                    a11);
          else
            v59 = GreStretchBltInternal(
                    a2,
                    v79[0],
                    v79[1],
                    v58,
                    v79[3] - v79[1],
                    (HDC)v66,
                    v83[0],
                    v83[1],
                    v83[2] - v83[0],
                    v83[3] - v83[1],
                    -2134114272,
                    0,
                    0);
          v56 = v63;
          ++i;
        }
        v13 = v62;
        *(_BYTE *)(*((_QWORD *)v74[0] + 122) + 215LL) = v61[0];
      }
    }
    else
    {
      v13 = 1;
    }
    GreUnlockVisRgn(*((_QWORD *)v74[0] + 6));
    if ( v69 )
      DC::dwSetLayout(v74[0], -1, v70);
    Bitmap = v73;
    v19 = hpal;
    goto LABEL_68;
  }
  return v13;
}
