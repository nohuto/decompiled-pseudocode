/*
 * XREFs of GreGradientFill @ 0x1C00B6084
 * Callers:
 *     NtGdiGradientFill @ 0x1C00B7DE0 (NtGdiGradientFill.c)
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1C0159654 (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 * Callees:
 *     bCvtPts1 @ 0x1C0084C60 (bCvtPts1.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084E50 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C008AF30 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACA04 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B2D5C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B565C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00B56A0 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00B5E80 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z @ 0x1C00B7754 (-bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00B7948 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FD8F4 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C014580C (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreGradientFill(
        HDC a1,
        struct _TRIVERTEX *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned __int8 a6)
{
  unsigned int v7; // edi
  unsigned int *v9; // r14
  struct _TRIVERTEX *v10; // rsi
  int v11; // r8d
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // edx
  unsigned __int64 v16; // rbx
  unsigned int v17; // eax
  struct _TRIVERTEX *v18; // rax
  unsigned int v19; // r9d
  unsigned int *v20; // r8
  __int64 v21; // rdx
  signed __int64 v22; // rcx
  unsigned int v23; // r10d
  unsigned int v24; // ecx
  unsigned __int32 v25; // eax
  __int64 v26; // r11
  __int64 v27; // rbx
  __int64 v28; // rcx
  COLOR16 Alpha; // ax
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // r11d
  __int64 v33; // rax
  unsigned int v34; // r15d
  __int64 v35; // rdx
  SURFACE **v36; // r8
  ULONG v37; // ecx
  __int64 v38; // r10
  struct _TRIVERTEX *v39; // rbx
  __int32 x; // edx
  int v41; // eax
  __int32 y; // r9d
  char *v43; // rcx
  struct ECLIPOBJ *v44; // rdx
  SURFACE **v45; // r8
  int v46; // r14d
  struct REGION *v47; // rax
  DC *v48; // r15
  struct ECLIPOBJ *v49; // rdx
  __int64 v50; // r15
  __int64 v51; // rbx
  __int64 v52; // r8
  int inited; // eax
  char *v54; // rax
  __int64 v55; // rax
  BOOL (__stdcall *v56)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rax
  unsigned int v58; // [rsp+60h] [rbp-A0h]
  __int64 v59; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v60; // [rsp+70h] [rbp-90h]
  __m128i v61; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v62; // [rsp+90h] [rbp-70h]
  DC *v63[2]; // [rsp+98h] [rbp-68h] BYREF
  char v64[32]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v65[3]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v66[288]; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL si128; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v68[4]; // [rsp+210h] [rbp+110h] BYREF
  char v69[52]; // [rsp+214h] [rbp+114h] BYREF
  __int64 v70; // [rsp+248h] [rbp+148h]
  __int64 v71; // [rsp+260h] [rbp+160h]
  int v72; // [rsp+268h] [rbp+168h]
  int v73; // [rsp+290h] [rbp+190h]
  __int64 v74; // [rsp+2A0h] [rbp+1A0h]

  v62 = a4;
  v7 = 0;
  v58 = a6;
  v9 = a4;
  v10 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v63, a1);
  if ( !v63[0] || (*((_DWORD *)v63[0] + 9) & 0x10000) != 0 )
  {
    v46 = 0;
    goto LABEL_63;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v66);
  if ( DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v66, (struct XDCOBJ *)v63, v11) )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v65, (struct XDCOBJ *)v63, 0x204u);
    v12 = v65[0];
    if ( (*(_DWORD *)(v65[0] + 32) & 1) == 0 && a6 <= 1u )
    {
      v13 = 2LL * a5;
      if ( v13 > 0xFFFFFFFF
        || (v14 = 12LL * (unsigned int)v13, v14 > 0xFFFFFFFF)
        || (v15 = a3 + 2 * a5, v60 = 2 * a5, v15 < 2 * a5)
        || (v16 = 16LL * v15, v16 > 0xFFFFFFFF)
        || (v17 = v16 + v14, (int)v16 + (int)v14 < (unsigned int)v14) )
      {
        v37 = 534;
      }
      else
      {
        if ( v17 <= 0x2710000 )
        {
          v18 = (struct _TRIVERTEX *)PALLOCMEM2(v17, 1886221383LL, 0);
          v10 = v18;
          if ( v18 )
          {
            v19 = 0;
            v20 = (unsigned int *)((char *)v18 + (unsigned int)v16);
            if ( a3 )
            {
              v21 = a3;
              v22 = (char *)a2 - (char *)v18;
              v19 = a3;
              do
              {
                *v18 = *(struct _TRIVERTEX *)((char *)v18 + v22);
                ++v18;
                --v21;
              }
              while ( v21 );
            }
            v23 = 0;
            if ( a5 )
            {
              while ( 1 )
              {
                v24 = *v9;
                v25 = v9[1];
                LODWORD(v59) = v24;
                v61.m128i_i32[0] = v25;
                if ( v24 >= a3 || v25 >= a3 )
                  break;
                v26 = v19;
                v27 = v24;
                v28 = v19 + 1;
                v10[v26].x = a2[v25].x;
                v10[v26].y = a2[v27].y;
                v10[v28].x = a2[v27].x;
                v10[v28].y = a2[v25].y;
                if ( a6 == 1 )
                {
                  v10[v19].Red = a2[v27].Red;
                  v10[v19].Green = a2[v27].Green;
                  v10[v19].Blue = a2[v27].Blue;
                  v10[v19].Alpha = a2[v27].Alpha;
                  v10[v19 + 1].Red = a2[v25].Red;
                  v10[v19 + 1].Green = a2[v25].Green;
                  v10[v19 + 1].Blue = a2[v25].Blue;
                  Alpha = a2[v25].Alpha;
                }
                else
                {
                  v10[v19].Red = a2[v25].Red;
                  v10[v19].Green = a2[v25].Green;
                  v10[v19].Blue = a2[v25].Blue;
                  v10[v19].Alpha = a2[v25].Alpha;
                  v10[v19 + 1].Red = a2[v27].Red;
                  v10[v19 + 1].Green = a2[v27].Green;
                  v10[v19 + 1].Blue = a2[v27].Blue;
                  Alpha = a2[v27].Alpha;
                }
                v10[v19 + 1].Alpha = Alpha;
                v30 = 2 * v23;
                v31 = 3 * v30;
                v20[v31] = v59;
                v32 = v19 + 1;
                v20[v31 + 1] = v19;
                ++v23;
                v20[v31 + 2] = v19 + 1;
                LODWORD(v31) = v61.m128i_i32[0];
                v33 = 3LL * (unsigned int)(v30 + 1);
                v20[v33 + 1] = v19;
                v9 += 2;
                v19 += 2;
                v20[v33] = v31;
                v20[v33 + 2] = v32;
                if ( v23 >= a5 )
                  goto LABEL_23;
              }
              EngSetLastError(0x57u);
              Win32FreePool(v10);
              goto LABEL_28;
            }
LABEL_23:
            v12 = v65[0];
            v9 = v20;
            v34 = v60;
            a2 = v10;
            v62 = v20;
            a3 = v19;
            v58 = 2;
            goto LABEL_30;
          }
        }
        v37 = 8;
      }
      EngSetLastError(v37);
LABEL_28:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v66, v35, v36);
      goto LABEL_66;
    }
    v34 = a5;
    v60 = a5;
LABEL_30:
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
    if ( a3 )
    {
      v38 = a3;
      v39 = a2;
      v59 = a3;
      while ( 1 )
      {
        x = v39->x;
        v41 = *(_DWORD *)(v12 + 32) & 0x43;
        y = v39->y;
        v61.m128i_i32[0] = v39->x;
        v61.m128i_i32[1] = y;
        if ( (_BYTE)v41 != 67 )
        {
          bCvtPts1(v12, &v61, 1LL);
          y = v61.m128i_i32[1];
          x = v61.m128i_i32[0];
          v38 = v59;
        }
        if ( (*(_DWORD *)(*((_QWORD *)v63[0] + 122) + 108LL) & 1) != 0 )
          ++x;
        v43 = (char *)v63[0] + 1024;
        if ( (*((_DWORD *)v63[0] + 10) & 1) == 0 )
          v43 = (char *)v63[0] + 1016;
        v39->x = x + *(_DWORD *)v43;
        v39->y = y + *((_DWORD *)v63[0] + 2 * (*((_DWORD *)v63[0] + 10) & 1) + 255);
        ++v39;
        v59 = --v38;
        if ( !v38 )
          break;
        v12 = v65[0];
      }
    }
    v46 = bCalcMeshExtent(a2, a3, v9, v34, v58, &si128);
    if ( v46 )
    {
      v47 = XDCOBJ::prgnEffRao(v63);
      v70 = 0LL;
      v71 = 0LL;
      v72 = 0;
      v73 = 1;
      v74 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v68, v47, (struct ERECTL *)&si128, 0);
      if ( ERECTL::bEmpty((ERECTL *)v69) )
        goto LABEL_59;
      v48 = v63[0];
      if ( (*((_DWORD *)v63[0] + 9) & 0xE0) != 0 )
      {
        v61 = (__m128i)si128;
        XDCOBJ::vAccumulate((XDCOBJ *)v63, v44, (struct ERECTL *)&v61);
        XDCOBJ::vAccumulateTight((XDCOBJ *)v63, v49, &v61);
        v48 = v63[0];
      }
      v50 = *((_QWORD *)v48 + 62);
      if ( !v50 )
      {
LABEL_59:
        v46 = 1;
      }
      else
      {
        ++*(_DWORD *)(v50 + 92);
        v51 = *(_QWORD *)(v50 + 48);
        v59 = 0LL;
        if ( (*(_DWORD *)(v51 + 40) & 0x80u) != 0 || *(_DWORD *)(v50 + 96) <= 3u )
        {
          inited = EXLATEOBJ::bInitXlateObj(
                     &v59,
                     *(_QWORD *)(*((_QWORD *)v63[0] + 122) + 248LL),
                     *((_DWORD *)v63[0] + 30),
                     (__int64)gppalRGB,
                     *(_QWORD *)(v50 + 128),
                     *((_QWORD *)v63[0] + 11),
                     *((_QWORD *)v63[0] + 11),
                     *(_DWORD *)(*((_QWORD *)v63[0] + 122) + 184LL),
                     *(_DWORD *)(*((_QWORD *)v63[0] + 122) + 176LL),
                     0,
                     0);
          v52 = v59;
          v46 = inited;
        }
        else
        {
          v52 = 0LL;
        }
        v54 = (char *)v63[0] + 1024;
        if ( (*((_DWORD *)v63[0] + 10) & 1) == 0 )
          v54 = (char *)v63[0] + 1016;
        v55 = *(_QWORD *)v54;
        v61.m128i_i32[0] = -(int)v55;
        v61.m128i_i32[1] = -HIDWORD(v55);
        if ( *(_DWORD *)(v50 + 96) == 3 || (*(_DWORD *)(v50 + 112) & 0x20000) == 0 )
          v56 = EngGradientFill;
        else
          v56 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(v51 + 3232);
        if ( !v46
          || (v46 = 1,
              !((unsigned int (__fastcall *)(__int64, _BYTE *, __int64, struct _TRIVERTEX *, unsigned int, unsigned int *, unsigned int, struct _RECTL *, __m128i *, unsigned int))v56)(
                 v50 + 24,
                 v68,
                 v52,
                 a2,
                 a3,
                 v62,
                 v60,
                 &si128,
                 &v61,
                 v58)) )
        {
          v46 = 0;
        }
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v59, (__int64)v44);
      }
    }
    goto LABEL_61;
  }
  v46 = XDCOBJ::bFullScreen((XDCOBJ *)v63);
LABEL_61:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v66, (__int64)v44, v45);
LABEL_63:
  if ( v10 )
    Win32FreePool(v10);
  v7 = v46;
LABEL_66:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v63);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v64);
  return v7;
}
