/*
 * XREFs of DxgkEngBltViaGDI @ 0x1C0276750
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018B60 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018E8C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1C0019108 (-DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z.c)
 *     ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1C001918C (-DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C004C3B0 (UserGetRedirectedWindowOrigin.c)
 *     IntersectRect @ 0x1C00750C0 (IntersectRect.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0082F38 (--1SURFREF@@QEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C0088600 (NtGdiBitBltInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreStretchBltInternal @ 0x1C00B49B0 (GreStretchBltInternal.c)
 *     NtGdiTransparentBlt @ 0x1C0155C50 (NtGdiTransparentBlt.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C015695C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026C9D0 (--0SURFREF@@QEAA@XZ.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C026CC04 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C02762F4 (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
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
        __int64 a12,
        unsigned int (__fastcall *a13)(__int64 *, __int128 *, __int64, __int64))
{
  unsigned int v13; // r15d
  HPALETTE v17; // rax
  HPALETTE v18; // rsi
  HSURF Bitmap; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  char v23; // bl
  DYNAMICMODECHANGESHARELOCK *v24; // rcx
  HDC DisplayDC; // rax
  HDC v26; // r14
  DC *v27; // rcx
  int *v28; // rsi
  int v29; // ebx
  __int128 v30; // xmm0
  __int128 v31; // xmm0
  int v32; // eax
  int v33; // edx
  int v34; // r9d
  int v35; // r8d
  int v36; // ebx
  int v37; // eax
  int v38; // edi
  int v39; // r8d
  int v40; // r15d
  int v41; // r10d
  int v42; // r14d
  unsigned int v43; // esi
  LONG v44; // r10d
  int v45; // r9d
  int v46; // r11d
  int v47; // ecx
  LONG v48; // edx
  LONG v49; // r8d
  int v50; // ecx
  int v51; // r9d
  unsigned int v52; // eax
  int v53; // r9d
  int v54; // r15d
  __int64 v55; // rcx
  int v56; // ebx
  unsigned int v57; // edi
  HDC v58; // r14
  int v59; // r9d
  unsigned int v60; // eax
  char v62[4]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v63; // [rsp+74h] [rbp-8Ch]
  int v64[4]; // [rsp+78h] [rbp-88h] BYREF
  SIZEL sizl; // [rsp+88h] [rbp-78h]
  unsigned int (__fastcall *v66)(__int64 *, __int128 *, __int64, __int64); // [rsp+90h] [rbp-70h]
  HDC v67; // [rsp+98h] [rbp-68h]
  __int128 v68; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL v69; // [rsp+B0h] [rbp-50h] BYREF
  struct _POINTL v70; // [rsp+B8h] [rbp-48h] BYREF
  HPALETTE hpal; // [rsp+C0h] [rbp-40h]
  unsigned int v72; // [rsp+C8h] [rbp-38h]
  unsigned int v73; // [rsp+CCh] [rbp-34h]
  __int64 v74; // [rsp+D0h] [rbp-30h]
  HSURF hsurf; // [rsp+D8h] [rbp-28h]
  DC *v76[2]; // [rsp+E0h] [rbp-20h] BYREF
  char v77[32]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v78[32]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v79; // [rsp+130h] [rbp+30h]
  __int128 v80; // [rsp+138h] [rbp+38h] BYREF
  __int64 v81; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v82; // [rsp+150h] [rbp+50h]
  unsigned int v83; // [rsp+154h] [rbp+54h]
  int v84[4]; // [rsp+158h] [rbp+58h] BYREF
  int v85[4]; // [rsp+168h] [rbp+68h] BYREF

  v13 = 0;
  *(_QWORD *)v64 = a12;
  v66 = a13;
  v74 = a4;
  v63 = 0;
  if ( a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v76, a2);
    if ( !v76[0] )
      goto LABEL_74;
    v17 = a9
        ? EngCreatePalette(2u, 0, 0LL, 0xF800u, 0x7E0u, 0x1Fu)
        : EngCreatePalette(2u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu);
    hpal = v17;
    if ( !v17 )
      goto LABEL_74;
    sizl = (SIZEL)__PAIR64__(a8, a7);
    v18 = hpal;
    Bitmap = (HSURF)EngCreateBitmap((SIZEL)__PAIR64__(a8, a7), lWidth, a9 != 0 ? 4 : 6, 1u, pvBits);
    hsurf = Bitmap;
    DxEngSetPaletteState(hpal, v20, v21);
    if ( !Bitmap )
    {
LABEL_73:
      EngDeletePalette(v18);
LABEL_74:
      MDCOBJ::~MDCOBJ((MDCOBJ *)v76);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v77);
      return v13;
    }
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v62);
    SURFREF::SURFREF((SURFREF *)v78);
    SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)v78, Bitmap);
    if ( SURFREF::bValid((SURFREF *)v78) )
    {
      v23 = 1;
      DxEngSelectPaletteToSurface((struct _SURFOBJ *)(v79 + 24), v18);
      *(_DWORD *)(v79 + 112) |= 0x100000u;
      *(_DWORD *)(v79 + 112) |= 0x4000u;
      *(_DWORD *)(v79 + 112) |= 0x200u;
    }
    else
    {
      v23 = 0;
    }
    SURFREF::~SURFREF((SURFREF *)v78, v22);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v24);
    if ( !v23
      || (DisplayDC = (HDC)GreCreateDisplayDC(*((_QWORD *)v76[0] + 6), 1LL), v67 = DisplayDC, (v26 = DisplayDC) == 0LL) )
    {
LABEL_72:
      EngDeleteSurface(hsurf);
      goto LABEL_73;
    }
    if ( !hbmSelectBitmap(DisplayDC, hsurf, 0LL, 1LL) )
    {
LABEL_71:
      bDeleteDCInternal(v26, 1LL, 0LL);
      goto LABEL_72;
    }
    v27 = v76[0];
    v68 = 0LL;
    v28 = 0LL;
    sizl = 0LL;
    v29 = 0;
    v73 = *(_DWORD *)(*((_QWORD *)v76[0] + 122) + 108LL);
    v72 = v73 & 7;
    if ( (v73 & 7) != 0 )
    {
      DC::dwSetLayout(v76[0], -1, 0);
      v27 = v76[0];
    }
    GreLockVisRgnShared(*((_QWORD *)v27 + 6));
    if ( a3 )
    {
      if ( *(_QWORD *)(a1 + 8) )
      {
        if ( (*((_DWORD *)v76[0] + 9) & 0x4000) != 0 )
          v29 = 1;
        v31 = *(_OWORD *)((char *)v76[0] + 1032);
        v69 = 0LL;
        v80 = v31;
        if ( (*((_DWORD *)v76[0] + 9) & 0x4000) != 0 )
        {
          v70 = 0LL;
          if ( (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v70) )
            ERECTL::bOffsetAdd((ERECTL *)&v80, &v70, 0);
        }
        if ( v29 && (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v69) )
          ERECTL::bOffsetAdd((ERECTL *)&v80, &v69, 0);
        IntersectRect(&v68, (int *)&v80, a3);
        v32 = v80;
        if ( (_DWORD)v80 != (_DWORD)v68
          || *(_QWORD *)((char *)&v80 + 4) != *(_QWORD *)((char *)&v68 + 4)
          || HIDWORD(v80) != HIDWORD(v68) )
        {
          sizl = (SIZEL)a3;
          LODWORD(v68) = v68 - v80;
          DWORD2(v68) -= v80;
          DWORD1(v68) -= DWORD1(v80);
          HIDWORD(v68) -= DWORD1(v80);
          v28 = a3;
        }
LABEL_34:
        DWORD2(v80) -= v32;
        v33 = *(_DWORD *)(a1 + 88);
        HIDWORD(v80) -= DWORD1(v80);
        v82 = a7;
        v83 = a8;
        *(_QWORD *)&v80 = 0LL;
        v81 = 0LL;
        if ( v66(&v81, &v80, (a1 + 48) & -(__int64)((v33 & 0x80u) != 0), (a1 + 32) & -(__int64)((v33 & 0x40) != 0))
          && (v34 = DWORD2(v80)) != 0
          && (v35 = HIDWORD(v80)) != 0 )
        {
          if ( !a3 || *(_QWORD *)(a1 + 8) )
          {
            v38 = DWORD1(v80);
            v36 = v80;
          }
          else
          {
            v34 = *a3 + DWORD2(v80);
            v36 = *a3 + v80;
            DWORD2(v80) = v34;
            v37 = a3[1];
            v38 = v37 + DWORD1(v80);
            LODWORD(v80) = v36;
            v35 = v37 + HIDWORD(v80);
            DWORD1(v80) += v37;
            HIDWORD(v80) += v37;
          }
          v39 = v35 - v38;
          v40 = HIDWORD(v81);
          v41 = v83 - HIDWORD(v81);
          v42 = v81;
          if ( v39 == v83 - HIDWORD(v81) && v34 - v36 == v82 - (_DWORD)v81 )
          {
            v43 = 0;
            if ( *(_DWORD *)(a1 + 64) )
            {
              while ( 1 )
              {
                *(_OWORD *)v64 = 0LL;
                IntersectRect(v64, (int *)(v74 + 16LL * v43), (int *)&v81);
                v44 = v64[0];
                v45 = v36 - v42 + v64[2];
                v46 = v64[1];
                v64[2] = v45;
                v47 = v38 - v40 + v64[3];
                v64[3] = v47;
                v48 = v64[0] + v36 - v42;
                v64[0] = v48;
                v49 = v64[1] + v38 - v40;
                v64[1] = v49;
                if ( sizl )
                {
                  IntersectRect(v64, v64, (int *)&v68);
                  v48 = v64[0];
                  v49 = v64[1];
                  v47 = v64[3];
                  v45 = v64[2];
                  v44 = v42 + v64[0] - v36;
                  v46 = v40 + v64[1] - v38;
                }
                v26 = v67;
                v50 = v47 - v49;
                v51 = v45 - v48;
                v52 = a10
                    ? NtGdiTransparentBlt(a2, v48, v49, v51, v50, v67, v44, v46, v51, v50, a11)
                    : NtGdiBitBltInternal(a2, v48, v49, v51, v50, v67, v44, v46, -2134114272, 0, 0);
                ++v43;
                v63 = v52;
                if ( v43 >= *(_DWORD *)(a1 + 64) )
                  break;
                v40 = HIDWORD(v81);
                v42 = v81;
                v38 = DWORD1(v80);
                v36 = v80;
              }
              v13 = v63;
              goto LABEL_68;
            }
            v13 = 0;
          }
          else
          {
            v53 = v34 - v36;
            v54 = 0;
            LODWORD(v66) = 0;
            v55 = *((_QWORD *)v76[0] + 122);
            v62[0] = *(_BYTE *)(v55 + 215);
            v70.x = (v53 << 16) / (int)(v82 - v81);
            v69.x = (v39 << 16) / v41;
            if ( v28 )
            {
              v54 = (int)((v82 - (_DWORD)v81) << 16) / v53;
              v56 = (v41 << 16) / v39;
              LODWORD(v66) = v56;
            }
            else
            {
              v56 = (int)v66;
            }
            v57 = 0;
            *(_BYTE *)(v55 + 215) = 3;
            if ( *(_DWORD *)(a1 + 64) )
            {
              v58 = v67;
              do
              {
                *(_OWORD *)v84 = 0LL;
                *(_OWORD *)v85 = 0LL;
                IntersectRect(v85, (int *)(v74 + 16LL * v57), (int *)&v81);
                (*(void (__fastcall **)(__int128 *, __int64 *, int *, int *, LONG, LONG))v64)(
                  &v80,
                  &v81,
                  v84,
                  v85,
                  v70.x,
                  v69.x);
                if ( *(_QWORD *)&sizl && (unsigned int)IntersectRect(v84, v84, (int *)&v68) )
                  (*(void (__fastcall **)(__int64 *, __int128 *, int *, int *, int, int))v64)(
                    &v81,
                    &v80,
                    v85,
                    v84,
                    v54,
                    v56);
                v59 = v84[2] - v84[0];
                if ( a10 )
                  v60 = NtGdiTransparentBlt(
                          a2,
                          v84[0],
                          v84[1],
                          v59,
                          v84[3] - v84[1],
                          v58,
                          v85[0],
                          v85[1],
                          v85[2] - v85[0],
                          v85[3] - v85[1],
                          a11);
                else
                  v60 = GreStretchBltInternal(
                          a2,
                          v84[0],
                          v84[1],
                          v59,
                          v84[3] - v84[1],
                          v58,
                          v85[0],
                          v85[1],
                          v85[2] - v85[0],
                          v85[3] - v85[1],
                          -2134114272,
                          0,
                          0);
                v56 = (int)v66;
                ++v57;
                v63 = v60;
              }
              while ( v57 < *(_DWORD *)(a1 + 64) );
            }
            v13 = v63;
            *(_BYTE *)(*((_QWORD *)v76[0] + 122) + 215LL) = v62[0];
          }
          v26 = v67;
        }
        else
        {
          v13 = 1;
        }
LABEL_68:
        GreUnlockVisRgn(*((_QWORD *)v76[0] + 6));
        if ( v72 )
          DC::dwSetLayout(v76[0], -1, v73);
        v18 = hpal;
        goto LABEL_71;
      }
      v30 = *(_OWORD *)a3;
    }
    else
    {
      v30 = *(_OWORD *)((char *)v76[0] + 1032);
    }
    v80 = v30;
    v32 = v30;
    goto LABEL_34;
  }
  return v13;
}
