/*
 * XREFs of DxgkEngBltViaGDI @ 0x1C026F280
 * Callers:
 *     <none>
 * Callees:
 *     ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1C0007458 (-DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z.c)
 *     ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1C00074DC (-DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z.c)
 *     IntersectRect @ 0x1C00D0330 (IntersectRect.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E13F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E1440 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreStretchBltInternal @ 0x1C00FF3A0 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0118F90 (UserGetRedirectedWindowOrigin.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264DB0 (--0SURFREF@@QEAA@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0266478 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0297970 (NtGdiTransparentBlt.c)
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
        int a11,
        __int64 a12,
        unsigned int (__fastcall *a13)(int *, __int128 *, __int64, __int64))
{
  unsigned int v13; // r12d
  HPALETTE v17; // rax
  HPALETTE v18; // rsi
  HSURF Bitmap; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  char v24; // bl
  __int64 DisplayDC; // rax
  __int64 v26; // r14
  DC *v27; // rcx
  int *v28; // rsi
  int v29; // ebx
  __int64 v30; // rax
  __int128 v31; // xmm0
  int v32; // eax
  __int128 v33; // xmm0
  int v34; // rax^4
  int v35; // edx
  int v36; // r9d
  int v37; // r8d
  int v38; // ebx
  int v39; // eax
  int v40; // edi
  int v41; // r8d
  int v42; // r15d
  int v43; // r10d
  int v44; // r14d
  unsigned int v45; // esi
  int v46; // r10d
  int v47; // r11d
  int v48; // r9d
  int v49; // ecx
  int v50; // edx
  int v51; // r8d
  int v52; // ecx
  int v53; // r9d
  int v54; // eax
  int v55; // r9d
  int v56; // r15d
  __int64 v57; // rcx
  int v58; // ebx
  unsigned int v59; // edi
  HDC v60; // r14
  void (__fastcall *v61)(int *, __int128 *, int *, int *, int, int); // r12
  int v62; // r9d
  unsigned int v63; // eax
  char v65[8]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int (__fastcall *v66)(int *, __int128 *, __int64, __int64); // [rsp+78h] [rbp-88h]
  int v67[4]; // [rsp+80h] [rbp-80h] BYREF
  SIZEL sizl; // [rsp+90h] [rbp-70h]
  __int64 v69; // [rsp+98h] [rbp-68h]
  __int128 v70; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL v71; // [rsp+B0h] [rbp-50h] BYREF
  struct _POINTL v72; // [rsp+B8h] [rbp-48h] BYREF
  HDC v73; // [rsp+C0h] [rbp-40h]
  HPALETTE hpal; // [rsp+C8h] [rbp-38h]
  unsigned int v75; // [rsp+D0h] [rbp-30h]
  unsigned int v76; // [rsp+D4h] [rbp-2Ch]
  __int64 v77; // [rsp+D8h] [rbp-28h]
  HSURF hsurf; // [rsp+E0h] [rbp-20h]
  DC *v79[2]; // [rsp+E8h] [rbp-18h] BYREF
  char v80[32]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v81[32]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v82; // [rsp+138h] [rbp+38h]
  __int128 v83; // [rsp+140h] [rbp+40h] BYREF
  int v84; // [rsp+150h] [rbp+50h] BYREF
  int v85; // [rsp+154h] [rbp+54h]
  unsigned int v86; // [rsp+158h] [rbp+58h]
  unsigned int v87; // [rsp+15Ch] [rbp+5Ch]
  int v88[4]; // [rsp+160h] [rbp+60h] BYREF
  int v89[4]; // [rsp+170h] [rbp+70h] BYREF

  v13 = 0;
  *(_QWORD *)v67 = a12;
  v66 = a13;
  v77 = a4;
  v73 = a2;
  if ( !a2 )
    return v13;
  DCOBJ::DCOBJ((DCOBJ *)v79, a2);
  if ( v79[0] )
  {
    v17 = a9
        ? EngCreatePalette(2u, 0, 0LL, 0xF800u, 0x7E0u, 0x1Fu)
        : EngCreatePalette(2u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu);
    hpal = v17;
    if ( v17 )
    {
      sizl = (SIZEL)__PAIR64__(a8, a7);
      v18 = hpal;
      Bitmap = (HSURF)EngCreateBitmap((SIZEL)__PAIR64__(a8, a7), lWidth, a9 != 0 ? 4 : 6, 1u, pvBits);
      hsurf = Bitmap;
      DxEngSetPaletteState(hpal, v20, v21);
      if ( !Bitmap )
      {
LABEL_73:
        EngDeletePalette(v18);
        goto LABEL_74;
      }
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v65);
      SURFREF::SURFREF((SURFREF *)v81);
      LOBYTE(v22) = 5;
      v23 = HmgShareLockCheckIgnoreStockBit(Bitmap, v22);
      v82 = v23;
      if ( v23 )
      {
        v24 = 1;
        DxEngSelectPaletteToSurface((struct _SURFOBJ *)(v23 + 24), v18);
        *(_DWORD *)(v82 + 112) |= 0x100000u;
        *(_DWORD *)(v82 + 112) |= 0x4000u;
        *(_DWORD *)(v82 + 112) |= 0x200u;
        v23 = v82;
      }
      else
      {
        v24 = 0;
      }
      if ( v23 )
        DEC_SHARE_REF_CNT(v23);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v81);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v65);
      if ( !v24
        || (DisplayDC = GreCreateDisplayDC(*((_QWORD *)v79[0] + 6), 1LL), v69 = DisplayDC, (v26 = DisplayDC) == 0) )
      {
LABEL_72:
        EngDeleteSurface(hsurf);
        goto LABEL_73;
      }
      if ( !hbmSelectBitmap(DisplayDC, hsurf, 0LL, 1LL) )
      {
LABEL_71:
        GrepDeleteDC(v26, 20971520LL);
        goto LABEL_72;
      }
      v27 = v79[0];
      v28 = 0LL;
      sizl = 0LL;
      v83 = 0LL;
      v29 = 0;
      v30 = *((_QWORD *)v79[0] + 122);
      v70 = 0LL;
      v76 = *(_DWORD *)(v30 + 108);
      v75 = v76 & 7;
      if ( (v76 & 7) != 0 )
      {
        DC::dwSetLayout(v79[0], -1, 0);
        v27 = v79[0];
      }
      GreLockVisRgnShared(*((_QWORD *)v27 + 6));
      if ( a3 )
      {
        if ( *(_QWORD *)(a1 + 8) )
        {
          if ( (*((_DWORD *)v79[0] + 9) & 0x4000) != 0 )
          {
            v29 = 1;
            goto LABEL_22;
          }
          if ( *(_QWORD *)(a1 + 8) )
          {
LABEL_22:
            v31 = *(_OWORD *)((char *)v79[0] + 1032);
            v71 = 0LL;
            v83 = v31;
            if ( (*((_DWORD *)v79[0] + 9) & 0x4000) != 0 )
            {
              v72 = 0LL;
              if ( (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v72) )
                ERECTL::bOffsetAdd((ERECTL *)&v83, &v72, 0);
            }
            if ( v29 && (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v71) )
              ERECTL::bOffsetAdd((ERECTL *)&v83, &v71, 0);
            IntersectRect(&v70, (int *)&v83, a3);
            v32 = v83;
            if ( (_DWORD)v83 != (_DWORD)v70
              || *(_QWORD *)((char *)&v83 + 4) != *(_QWORD *)((char *)&v70 + 4)
              || HIDWORD(v83) != HIDWORD(v70) )
            {
              sizl = (SIZEL)a3;
              LODWORD(v70) = v70 - v83;
              DWORD2(v70) -= v83;
              DWORD1(v70) -= DWORD1(v83);
              HIDWORD(v70) -= DWORD1(v83);
              v28 = a3;
            }
LABEL_36:
            DWORD2(v83) -= v32;
            v34 = DWORD1(v83);
            v35 = *(_DWORD *)(a1 + 88);
            *(_QWORD *)&v83 = 0LL;
            v85 = 0;
            v84 = 0;
            HIDWORD(v83) -= v34;
            v86 = a7;
            v87 = a8;
            if ( v66(&v84, &v83, (a1 + 48) & -(__int64)((v35 & 0x80u) != 0), (a1 + 32) & -(__int64)((v35 & 0x40) != 0))
              && (v36 = DWORD2(v83)) != 0
              && (v37 = HIDWORD(v83)) != 0 )
            {
              if ( !a3 || *(_QWORD *)(a1 + 8) )
              {
                v40 = DWORD1(v83);
                v38 = v83;
              }
              else
              {
                v36 = *a3 + DWORD2(v83);
                v38 = *a3 + v83;
                DWORD2(v83) = v36;
                v39 = a3[1];
                v40 = v39 + DWORD1(v83);
                LODWORD(v83) = v38;
                v37 = v39 + HIDWORD(v83);
                DWORD1(v83) += v39;
                HIDWORD(v83) += v39;
              }
              v41 = v37 - v40;
              v42 = v85;
              v43 = v87 - v85;
              v44 = v84;
              if ( v41 == v87 - v85 && v36 - v38 == v86 - v84 )
              {
                v45 = 0;
                if ( *(_DWORD *)(a1 + 64) )
                {
                  while ( 1 )
                  {
                    *(_OWORD *)v67 = 0LL;
                    IntersectRect(v67, (int *)(v77 + 16LL * v45), &v84);
                    v46 = v67[0];
                    v47 = v67[1];
                    v48 = v38 - v44 + v67[2];
                    v67[2] = v48;
                    v49 = v40 - v42 + v67[3];
                    v67[3] = v49;
                    v50 = v38 + v67[0] - v44;
                    v67[0] = v50;
                    v51 = v40 + v67[1] - v42;
                    v67[1] = v51;
                    if ( sizl )
                    {
                      IntersectRect(v67, v67, (int *)&v70);
                      v50 = v67[0];
                      v51 = v67[1];
                      v49 = v67[3];
                      v48 = v67[2];
                      v46 = v44 + v67[0] - v38;
                      v47 = v42 + v67[1] - v40;
                    }
                    v26 = v69;
                    v52 = v49 - v51;
                    v53 = v48 - v50;
                    v54 = a10
                        ? NtGdiTransparentBlt(v73, v50, v51, v53, v52, v69, v46, v47, v53, v52, a11)
                        : NtGdiBitBltInternal((__int64)v73, v50, v51, v53, v52, (HDC)v69, v46, v47, -2134114272, 0, 0);
                    ++v45;
                    LODWORD(v66) = v54;
                    if ( v45 >= *(_DWORD *)(a1 + 64) )
                      break;
                    v42 = v85;
                    v44 = v84;
                    v40 = DWORD1(v83);
                    v38 = v83;
                  }
                  v13 = (unsigned int)v66;
                  goto LABEL_68;
                }
              }
              else
              {
                v55 = v36 - v38;
                LODWORD(v66) = 0;
                v56 = 0;
                v57 = *((_QWORD *)v79[0] + 122);
                v65[0] = *(_BYTE *)(v57 + 215);
                v72.x = (v55 << 16) / (int)(v86 - v84);
                v71.x = (v41 << 16) / v43;
                if ( v28 )
                {
                  v56 = (int)((v86 - v84) << 16) / v55;
                  v58 = (v43 << 16) / v41;
                  LODWORD(v66) = v58;
                }
                else
                {
                  v58 = (int)v66;
                }
                v59 = 0;
                *(_BYTE *)(v57 + 215) = 3;
                if ( *(_DWORD *)(a1 + 64) )
                {
                  v60 = (HDC)v69;
                  do
                  {
                    *(_OWORD *)v88 = 0LL;
                    *(_OWORD *)v89 = 0LL;
                    IntersectRect(v89, (int *)(v77 + 16LL * v59), &v84);
                    v61 = *(void (__fastcall **)(int *, __int128 *, int *, int *, int, int))v67;
                    (*(void (__fastcall **)(__int128 *, int *, int *, int *, LONG, LONG))v67)(
                      &v83,
                      &v84,
                      v88,
                      v89,
                      v72.x,
                      v71.x);
                    if ( *(_QWORD *)&sizl && (unsigned int)IntersectRect(v88, v88, (int *)&v70) )
                      v61(&v84, &v83, v89, v88, v56, v58);
                    v62 = v88[2] - v88[0];
                    if ( a10 )
                      v63 = NtGdiTransparentBlt(
                              v73,
                              v88[0],
                              v88[1],
                              v62,
                              v88[3] - v88[1],
                              (__int64)v60,
                              v89[0],
                              v89[1],
                              v89[2] - v89[0],
                              v89[3] - v89[1],
                              a11);
                    else
                      v63 = GreStretchBltInternal(
                              v73,
                              v88[0],
                              v88[1],
                              v62,
                              v88[3] - v88[1],
                              v60,
                              v89[0],
                              v89[1],
                              v89[2] - v89[0],
                              v89[3] - v89[1],
                              -2134114272,
                              0,
                              0);
                    v58 = (int)v66;
                    ++v59;
                    v13 = v63;
                  }
                  while ( v59 < *(_DWORD *)(a1 + 64) );
                }
                *(_BYTE *)(*((_QWORD *)v79[0] + 122) + 215LL) = v65[0];
              }
              v26 = v69;
            }
            else
            {
              v13 = 1;
            }
LABEL_68:
            GreUnlockVisRgn(*((_QWORD *)v79[0] + 6));
            if ( v75 )
              DC::dwSetLayout(v79[0], -1, v76);
            v18 = hpal;
            goto LABEL_71;
          }
        }
        v33 = *(_OWORD *)a3;
      }
      else
      {
        v33 = *(_OWORD *)((char *)v79[0] + 1032);
      }
      v83 = v33;
      v32 = v33;
      goto LABEL_36;
    }
  }
LABEL_74:
  if ( v79[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v79);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v80);
  return v13;
}
