/*
 * XREFs of DxgkEngBltViaGDI @ 0x1C0276D30
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018C00 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018F2C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1C00191A8 (-DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z.c)
 *     ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1C001922C (-DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C004C450 (UserGetRedirectedWindowOrigin.c)
 *     IntersectRect @ 0x1C0075160 (IntersectRect.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0082FC8 (--1SURFREF@@QEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C0088690 (NtGdiBitBltInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreStretchBltInternal @ 0x1C00B4D10 (GreStretchBltInternal.c)
 *     NtGdiTransparentBlt @ 0x1C0156210 (NtGdiTransparentBlt.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0156F1C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 *     Feature_895686970__private_IsEnabledDeviceUsage @ 0x1C016B250 (Feature_895686970__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026CF90 (--0SURFREF@@QEAA@XZ.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C026D1C4 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C02768D4 (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall DxgkEngBltViaGDI(
        __int64 a1,
        HDC a2,
        int *a3,
        __int64 a4,
        PVOID pvBits,
        unsigned int lWidth,
        unsigned int a7,
        unsigned int a8,
        char a9,
        char a10,
        unsigned int a11,
        __int64 a12,
        unsigned int (__fastcall *a13)(__int64 *, __int128 *, __int64, __int64))
{
  unsigned int v13; // r12d
  HPALETTE v17; // rax
  SURFOBJ *LockedBitmap; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  HBITMAP hsurf; // r14
  __int64 v22; // rdx
  char v23; // bl
  DYNAMICMODECHANGESHARELOCK *v24; // rcx
  HDC DisplayDC; // rax
  DC *v26; // rcx
  int v27; // ebx
  __int128 v28; // xmm0
  __int128 v29; // xmm0
  int v30; // eax
  int v31; // edx
  int v32; // r9d
  int v33; // r8d
  int v34; // ebx
  int v35; // eax
  int v36; // edi
  int v37; // r8d
  int v38; // r12d
  signed int v39; // r10d
  int v40; // r15d
  unsigned int v41; // r14d
  LONG v42; // r10d
  int v43; // r9d
  int v44; // r11d
  int v45; // ecx
  LONG v46; // edx
  LONG v47; // r8d
  int v48; // ecx
  int v49; // r9d
  unsigned int v50; // eax
  int v51; // r9d
  int v52; // r12d
  __int64 v53; // rcx
  int v54; // ebx
  unsigned int v55; // edi
  HDC v56; // r14
  int v57; // r9d
  unsigned int v58; // eax
  char v60[4]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v61; // [rsp+74h] [rbp-8Ch]
  int v62[4]; // [rsp+78h] [rbp-88h] BYREF
  SIZEL sizl; // [rsp+88h] [rbp-78h]
  unsigned int (__fastcall *v64)(__int64 *, __int128 *, __int64, __int64); // [rsp+90h] [rbp-70h]
  HBITMAP v65; // [rsp+98h] [rbp-68h]
  HDC v66; // [rsp+A0h] [rbp-60h]
  __int128 v67; // [rsp+A8h] [rbp-58h] BYREF
  struct _POINTL v68; // [rsp+B8h] [rbp-48h] BYREF
  struct _POINTL v69; // [rsp+C0h] [rbp-40h] BYREF
  HPALETTE hpal; // [rsp+C8h] [rbp-38h]
  unsigned int v71; // [rsp+D0h] [rbp-30h]
  unsigned int v72; // [rsp+D4h] [rbp-2Ch]
  __int64 v73; // [rsp+D8h] [rbp-28h]
  SURFOBJ *pso; // [rsp+E0h] [rbp-20h]
  DC *v75[2]; // [rsp+E8h] [rbp-18h] BYREF
  char v76[32]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v77[32]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v78; // [rsp+138h] [rbp+38h]
  __int128 v79; // [rsp+140h] [rbp+40h] BYREF
  HDC v80[2]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v81; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v82; // [rsp+168h] [rbp+68h]
  unsigned int v83; // [rsp+16Ch] [rbp+6Ch]
  int v84[4]; // [rsp+170h] [rbp+70h] BYREF

  v13 = 0;
  *(_QWORD *)v62 = a12;
  v64 = a13;
  v73 = a4;
  v80[0] = a2;
  v61 = 0;
  if ( a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v75, a2);
    if ( !v75[0] )
      goto LABEL_80;
    v17 = a9
        ? EngCreatePalette(2u, 0, 0LL, 0xF800u, 0x7E0u, 0x1Fu)
        : EngCreatePalette(2u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu);
    hpal = v17;
    if ( !v17 )
      goto LABEL_80;
    pso = 0LL;
    sizl = (SIZEL)__PAIR64__(a8, a7);
    if ( (unsigned int)Feature_895686970__private_IsEnabledDeviceUsage() )
    {
      LockedBitmap = (SURFOBJ *)EngCreateLockedBitmap(__PAIR64__(a8, a7), lWidth, a9 != 0 ? 4 : 6, 1LL, pvBits);
      pso = LockedBitmap;
      if ( LockedBitmap )
        hsurf = (HBITMAP)LockedBitmap->hsurf;
      else
        hsurf = 0LL;
    }
    else
    {
      hsurf = EngCreateBitmap((SIZEL)__PAIR64__(a8, a7), lWidth, a9 != 0 ? 4 : 6, 1u, pvBits);
    }
    v65 = hsurf;
    DxEngSetPaletteState(hpal, v19, v20);
    if ( !hsurf )
    {
LABEL_79:
      EngDeletePalette(hpal);
LABEL_80:
      MDCOBJ::~MDCOBJ((MDCOBJ *)v75);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v76);
      return v13;
    }
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v60);
    SURFREF::SURFREF((SURFREF *)v77);
    SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)v77, (HSURF)hsurf);
    if ( SURFREF::bValid((SURFREF *)v77) )
    {
      v23 = 1;
      DxEngSelectPaletteToSurface((struct _SURFOBJ *)(v78 + 24), hpal);
      *(_DWORD *)(v78 + 112) |= 0x100000u;
      *(_DWORD *)(v78 + 112) |= 0x4000u;
      *(_DWORD *)(v78 + 112) |= 0x200u;
    }
    else
    {
      v23 = 0;
    }
    SURFREF::~SURFREF((SURFREF *)v77, v22);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v24);
    if ( !v23 || (DisplayDC = (HDC)GreCreateDisplayDC(*((_QWORD *)v75[0] + 6), 1LL), (v66 = DisplayDC) == 0LL) )
    {
LABEL_76:
      if ( (unsigned int)Feature_895686970__private_IsEnabledDeviceUsage() )
        EngUnlockSurface(pso);
      EngDeleteSurface((HSURF)hsurf);
      goto LABEL_79;
    }
    if ( !hbmSelectBitmap(DisplayDC, hsurf, 0LL, 1LL) )
    {
LABEL_75:
      bDeleteDCInternal(v66, 1LL, 0LL);
      goto LABEL_76;
    }
    v26 = v75[0];
    v67 = 0LL;
    sizl = 0LL;
    v27 = 0;
    v72 = *(_DWORD *)(*((_QWORD *)v75[0] + 122) + 108LL);
    v71 = v72 & 7;
    if ( (v72 & 7) != 0 )
    {
      DC::dwSetLayout(v75[0], -1, 0);
      v26 = v75[0];
    }
    GreLockVisRgnShared(*((_QWORD *)v26 + 6));
    if ( a3 )
    {
      if ( *(_QWORD *)(a1 + 8) )
      {
        if ( (*((_DWORD *)v75[0] + 9) & 0x4000) != 0 )
          v27 = 1;
        v29 = *(_OWORD *)((char *)v75[0] + 1032);
        v68 = 0LL;
        v79 = v29;
        if ( (*((_DWORD *)v75[0] + 9) & 0x4000) != 0 )
        {
          v69 = 0LL;
          if ( (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v69) )
            ERECTL::bOffsetAdd((ERECTL *)&v79, &v69, 0);
        }
        if ( v27 && (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v68) )
          ERECTL::bOffsetAdd((ERECTL *)&v79, &v68, 0);
        IntersectRect(&v67, (int *)&v79, a3);
        v30 = v79;
        if ( (_DWORD)v79 != (_DWORD)v67
          || *(_QWORD *)((char *)&v79 + 4) != *(_QWORD *)((char *)&v67 + 4)
          || HIDWORD(v79) != HIDWORD(v67) )
        {
          sizl = (SIZEL)a3;
          LODWORD(v67) = v67 - v79;
          DWORD2(v67) -= v79;
          DWORD1(v67) -= DWORD1(v79);
          HIDWORD(v67) -= DWORD1(v79);
        }
        goto LABEL_39;
      }
      v28 = *(_OWORD *)a3;
    }
    else
    {
      v28 = *(_OWORD *)((char *)v75[0] + 1032);
    }
    v79 = v28;
    v30 = v28;
LABEL_39:
    DWORD2(v79) -= v30;
    v31 = *(_DWORD *)(a1 + 88);
    HIDWORD(v79) -= DWORD1(v79);
    v82 = a7;
    v83 = a8;
    *(_QWORD *)&v79 = 0LL;
    v81 = 0LL;
    if ( v64(&v81, &v79, (a1 + 48) & -(__int64)((v31 & 0x80u) != 0), (a1 + 32) & -(__int64)((v31 & 0x40) != 0))
      && (v32 = DWORD2(v79)) != 0
      && (v33 = HIDWORD(v79)) != 0 )
    {
      if ( !a3 || *(_QWORD *)(a1 + 8) )
      {
        v36 = DWORD1(v79);
        v34 = v79;
      }
      else
      {
        v32 = *a3 + DWORD2(v79);
        v34 = *a3 + v79;
        DWORD2(v79) = v32;
        v35 = a3[1];
        v36 = v35 + DWORD1(v79);
        LODWORD(v79) = v34;
        v33 = v35 + HIDWORD(v79);
        DWORD1(v79) += v35;
        HIDWORD(v79) += v35;
      }
      v37 = v33 - v36;
      v38 = HIDWORD(v81);
      v39 = v83 - HIDWORD(v81);
      v40 = v81;
      if ( v37 == v83 - HIDWORD(v81) && v32 - v34 == v82 - (_DWORD)v81 )
      {
        v41 = 0;
        if ( *(_DWORD *)(a1 + 64) )
        {
          while ( 1 )
          {
            *(_OWORD *)v62 = 0LL;
            IntersectRect(v62, (int *)(v73 + 16LL * v41), (int *)&v81);
            v42 = v62[0];
            v43 = v34 - v40 + v62[2];
            v44 = v62[1];
            v62[2] = v43;
            v45 = v36 - v38 + v62[3];
            v62[3] = v45;
            v46 = v62[0] + v34 - v40;
            v62[0] = v46;
            v47 = v62[1] + v36 - v38;
            v62[1] = v47;
            if ( sizl )
            {
              IntersectRect(v62, v62, (int *)&v67);
              v46 = v62[0];
              v47 = v62[1];
              v45 = v62[3];
              v43 = v62[2];
              v42 = v40 + v62[0] - v34;
              v44 = v38 + v62[1] - v36;
            }
            v48 = v45 - v47;
            v49 = v43 - v46;
            v50 = a10
                ? NtGdiTransparentBlt(v80[0], v46, v47, v49, v48, v66, v42, v44, v49, v48, a11)
                : NtGdiBitBltInternal(v80[0], v46, v47, v49, v48, v66, v42, v44, -2134114272, 0, 0);
            ++v41;
            v61 = v50;
            if ( v41 >= *(_DWORD *)(a1 + 64) )
              break;
            v38 = HIDWORD(v81);
            v40 = v81;
            v36 = DWORD1(v79);
            v34 = v79;
          }
        }
        hsurf = v65;
      }
      else
      {
        v51 = v32 - v34;
        v52 = 0;
        LODWORD(v64) = 0;
        v53 = *((_QWORD *)v75[0] + 122);
        v60[0] = *(_BYTE *)(v53 + 215);
        v69.x = (v51 << 16) / (int)(v82 - v81);
        v68.x = (v37 << 16) / v39;
        if ( sizl )
        {
          v52 = (int)((v82 - (_DWORD)v81) << 16) / v51;
          v54 = (v39 << 16) / v37;
          LODWORD(v64) = v54;
        }
        else
        {
          v54 = (int)v64;
        }
        v55 = 0;
        *(_BYTE *)(v53 + 215) = 3;
        if ( *(_DWORD *)(a1 + 64) )
        {
          v56 = v80[0];
          do
          {
            *(_OWORD *)v80 = 0LL;
            *(_OWORD *)v84 = 0LL;
            IntersectRect(v84, (int *)(v73 + 16LL * v55), (int *)&v81);
            (*(void (__fastcall **)(__int128 *, __int64 *, HDC *, int *, LONG, LONG))v62)(
              &v79,
              &v81,
              v80,
              v84,
              v69.x,
              v68.x);
            if ( *(_QWORD *)&sizl && (unsigned int)IntersectRect(v80, (int *)v80, (int *)&v67) )
              (*(void (__fastcall **)(__int64 *, __int128 *, int *, HDC *, int, int))v62)(
                &v81,
                &v79,
                v84,
                v80,
                v52,
                v54);
            v57 = LODWORD(v80[1]) - LODWORD(v80[0]);
            if ( a10 )
              v58 = NtGdiTransparentBlt(
                      v56,
                      (LONG)v80[0],
                      SHIDWORD(v80[0]),
                      v57,
                      HIDWORD(v80[1]) - HIDWORD(v80[0]),
                      v66,
                      v84[0],
                      v84[1],
                      v84[2] - v84[0],
                      v84[3] - v84[1],
                      a11);
            else
              v58 = GreStretchBltInternal(
                      v56,
                      (LONG)v80[0],
                      SHIDWORD(v80[0]),
                      v57,
                      HIDWORD(v80[1]) - HIDWORD(v80[0]),
                      v66,
                      v84[0],
                      v84[1],
                      v84[2] - v84[0],
                      v84[3] - v84[1],
                      -2134114272,
                      0,
                      0);
            v54 = (int)v64;
            ++v55;
            v61 = v58;
          }
          while ( v55 < *(_DWORD *)(a1 + 64) );
          hsurf = v65;
        }
        *(_BYTE *)(*((_QWORD *)v75[0] + 122) + 215LL) = v60[0];
      }
      v13 = v61;
    }
    else
    {
      v13 = 1;
    }
    GreUnlockVisRgn(*((_QWORD *)v75[0] + 6));
    if ( v71 )
      DC::dwSetLayout(v75[0], -1, v72);
    goto LABEL_75;
  }
  return v13;
}
