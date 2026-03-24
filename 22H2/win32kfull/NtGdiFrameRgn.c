/*
 * XREFs of NtGdiFrameRgn @ 0x1C013E790
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C013E2F0 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C0026620 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00266AC (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E920 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C0090784 (-bValid@RFONTOBJ@@QEBAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00AC9D8 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACA04 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2904 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00B297C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00B2D1C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B2D5C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B496C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C00B5990 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00B5E80 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B94F8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FD8F4 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C013F1FC (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0140D50 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C01419D8 (-vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C01468B0 (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C01470E0 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     EngPaint @ 0x1C0147890 (EngPaint.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C014793C (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C0147994 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C0147A10 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0169C4C (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiFrameRgn(HDC a1, HRGN a2, HBRUSH a3, int a4, int a5)
{
  unsigned int v6; // esi
  int v9; // r14d
  int v10; // r12d
  int v11; // ebx
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // ecx
  EPATHOBJ *v16; // rcx
  struct _RECTL v17; // xmm0
  __int64 v18; // r8
  __int64 v19; // rcx
  DC *v20; // rax
  DC *v21; // rax
  __int64 v22; // r13
  char *v23; // rcx
  struct REGION *v24; // rax
  DC *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdi
  struct ECLIPOBJ *v28; // rdx
  struct BRUSH *v29; // r15
  DC *v30; // rax
  DC *v31; // rcx
  DC *v32; // rcx
  MIX mix; // eax
  DC *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  DC *v38[6]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v39[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h] BYREF
  int v41; // [rsp+88h] [rbp-78h]
  _XFORMOBJ v42[2]; // [rsp+90h] [rbp-70h] BYREF
  int v43; // [rsp+9Ch] [rbp-64h]
  _LINEATTRS v44; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v45[16]; // [rsp+F0h] [rbp-10h] BYREF
  __m128i rclBounds; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v47[8]; // [rsp+110h] [rbp+10h] BYREF
  BRUSHOBJ pbo; // [rsp+150h] [rbp+50h] BYREF
  int v49; // [rsp+16Ch] [rbp+6Ch]
  __int64 v50; // [rsp+170h] [rbp+70h]
  __int64 v51; // [rsp+178h] [rbp+78h]
  char *v52; // [rsp+188h] [rbp+88h]
  __int64 v53; // [rsp+1A8h] [rbp+A8h]
  __int128 v54; // [rsp+1B0h] [rbp+B0h]
  int v55; // [rsp+1C8h] [rbp+C8h]
  _BYTE v56[32]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v57[2]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v58[64]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v59[8]; // [rsp+250h] [rbp+150h] BYREF
  __int64 v60; // [rsp+258h] [rbp+158h]
  _BYTE v61[8]; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v62; // [rsp+2D8h] [rbp+1D8h]
  struct _RECTL v63; // [rsp+350h] [rbp+250h] BYREF
  _OWORD v64[2]; // [rsp+360h] [rbp+260h] BYREF
  int v65; // [rsp+380h] [rbp+280h]
  CLIPOBJ pco; // [rsp+390h] [rbp+290h] BYREF
  __int64 v67; // [rsp+3C8h] [rbp+2C8h]
  __int64 v68; // [rsp+3E0h] [rbp+2E0h]
  int v69; // [rsp+3E8h] [rbp+2E8h]
  int v70; // [rsp+410h] [rbp+310h]
  __int64 v71; // [rsp+420h] [rbp+320h]

  v6 = 0;
  v9 = 0;
  v10 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v38, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v47, a2, 1, 0);
  v11 = abs32(a4);
  v12 = abs32(a5);
  if ( !RFONTOBJ::bValid((RFONTOBJ *)v38) )
    goto LABEL_60;
  v13 = *((unsigned __int16 *)v38[0] + 6);
  if ( (_WORD)v13 == 1 )
  {
    if ( (*((_DWORD *)v38[0] + 9) & 0x10000) != 0 || !v47[0] || v11 <= 0 || v12 <= 0 )
      goto LABEL_60;
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v47) == 1 )
    {
      v9 = 1;
LABEL_60:
      v6 = v9;
      goto LABEL_61;
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v59);
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v61);
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v45, (struct XDCOBJ *)v38, -2147483132);
    if ( !v60
      || !v62
      || !RGNOBJ::bCreate((RGNOBJ *)v47, (struct EPATHOBJ *)v59, (struct EXFORMOBJ *)v45)
      || (v43 = 0,
          v65 = 0,
          *(_QWORD *)&v42[0].ulReserved = v64,
          memset(&v44, 0, sizeof(v44)),
          memset(v64, 0, sizeof(v64)),
          EPATHOBJ::vWidenSetupForFrameRgn(v16, (struct XDCOBJ *)v38, v11, v12, (struct EXFORMOBJ *)v42, &v44),
          !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v61, (struct EPATHOBJ *)v59, v42, &v44))
      || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v61, (struct EPATHOBJ *)v59, v42, &v44) )
    {
LABEL_58:
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v61);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v59);
      if ( v10 )
      {
        v36 = UserReferenceDwmApiPort(v35);
        DwmSyncFlushAndWaitForBatch(v36);
      }
      goto LABEL_60;
    }
    v40 = 0LL;
    v41 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v40, (struct EPATHOBJ *)v61, 2u, 0LL);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v40);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v39);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v39);
    if ( !v40 || !v39[0] )
      goto LABEL_57;
    if ( (*(_DWORD *)(*((_QWORD *)v38[0] + 122) + 340LL) & 0x802) == 0x802 )
    {
      v9 = RGNOBJ::bMerge((RGNOBJ *)v39, (struct RGNOBJ *)&v40, (struct RGNOBJ *)v47, 8u);
    }
    else
    {
      *(_QWORD *)&v63.left = 0LL;
      v63.right = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v63, (struct EPATHOBJ *)v59, 1u, 0LL);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v63);
      if ( *(_QWORD *)&v63.left )
        v9 = RGNOBJ::bMerge((RGNOBJ *)v39, (struct RGNOBJ *)&v40, (struct RGNOBJ *)&v63, 8u) != 0;
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v63);
    }
    if ( !v9 )
      goto LABEL_57;
    v17 = *(struct _RECTL *)(v39[0] + 96LL);
    v44.pstyle = (PFLOAT_LONG)v38;
    v63 = v17;
    if ( !ERECTL::bEmpty((ERECTL *)&v63) )
      v10 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)&v44, &v63);
    if ( (*((_DWORD *)v38[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v38, (struct ERECTL *)&v63);
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v38) || !*(_QWORD *)(v18 + 496) )
    {
LABEL_57:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v39);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v40);
      goto LABEL_58;
    }
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v57);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v56, (struct XDCOBJ *)v38, 0);
    v19 = v39[0];
    v20 = v38[0];
    if ( !v39[0] )
      *((_DWORD *)v38[0] + 9) |= 0x10u;
    *((_QWORD *)v20 + 142) = v19;
    v21 = v38[0];
    v22 = *((_QWORD *)v38[0] + 62);
    if ( (v56[24] & 1) != 0 )
    {
      if ( (unsigned int)DC::bTightenRao(v38[0]) )
      {
        v23 = (char *)v38[0] + 1024;
        if ( (*((_DWORD *)v38[0] + 10) & 1) == 0 )
          v23 = (char *)v38[0] + 1016;
        v63.left += *(_DWORD *)v23;
        v63.right += *(_DWORD *)v23;
        v63.top += *((_DWORD *)v23 + 1);
        v63.bottom += *((_DWORD *)v23 + 1);
        GreScaleValuesInternal((struct XDCOBJ *)v38, &v63.left, 4u);
        v24 = XDCOBJ::prgnEffRao(v38);
        v67 = 0LL;
        v68 = 0LL;
        v69 = 0;
        v70 = 1;
        v71 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v24, (struct ERECTL *)&v63, 0);
        if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          v25 = v38[0];
          *((_DWORD *)v38[0] + 9) |= 0x10u;
          *((_QWORD *)v25 + 142) = 0LL;
        }
        else
        {
          v26 = *(_QWORD *)(v22 + 128);
          v27 = *((_QWORD *)v38[0] + 11);
          v49 = -1;
          v53 = 0LL;
          v54 = 0LL;
          pbo.pvRbrush = 0LL;
          pbo.flColorType = 0;
          v50 = 0LL;
          v51 = 0LL;
          v55 = 0;
          BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)&v44, a3);
          v29 = *(struct BRUSH **)&v44.fl;
          v9 = 0;
          if ( *(_QWORD *)&v44.fl )
          {
            v31 = v38[0];
            if ( (*((_DWORD *)v38[0] + 9) & 0xE0) != 0 && (*(_DWORD *)(*(_QWORD *)&v44.fl + 40LL) & 0x100) == 0 )
            {
              rclBounds = (__m128i)pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v38, v28, &rclBounds);
              v31 = v38[0];
            }
            if ( v29 )
            {
              bSyncBrushObj(v29);
              EBRUSHOBJ::vInitBrush(&pbo, v38[0], v29, v27, v26, v22, 1);
              v32 = v38[0];
              v52 = (char *)v38[0] + 176;
              if ( (*((_DWORD *)v29 + 10) & 0x100) != 0 )
              {
                *((_DWORD *)v38[0] + 9) |= 0x10u;
                *((_QWORD *)v32 + 142) = 0LL;
              }
              else
              {
                mix = EBRUSHOBJ::mixBest(
                        (EBRUSHOBJ *)&pbo,
                        *(_BYTE *)(*((_QWORD *)v38[0] + 122) + 212LL),
                        *(_BYTE *)(*((_QWORD *)v38[0] + 122) + 213LL));
                ++*(_DWORD *)(v22 + 92);
                EngPaint((SURFOBJ *)(v22 + 24), &pco, &pbo, (POINTL *)v38[0] + 150, mix);
                v34 = v38[0];
                v9 = 1;
                *((_DWORD *)v38[0] + 9) |= 0x10u;
                *((_QWORD *)v34 + 142) = 0LL;
              }
              BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)&v44);
            }
            else
            {
              *((_DWORD *)v31 + 9) |= 0x10u;
              *((_QWORD *)v31 + 142) = 0LL;
            }
          }
          else
          {
            v30 = v38[0];
            *((_DWORD *)v38[0] + 9) |= 0x10u;
            *((_QWORD *)v30 + 142) = 0LL;
          }
          BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)&v44);
          EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
        }
        goto LABEL_54;
      }
      v21 = v38[0];
    }
    *((_DWORD *)v21 + 9) |= 0x10u;
    *((_QWORD *)v21 + 142) = 0LL;
    v9 = XDCOBJ::bFullScreen((XDCOBJ *)v38);
LABEL_54:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v56);
    if ( v57[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v57);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v58);
    goto LABEL_57;
  }
  v14 = *((_QWORD *)v38[0] + 6);
  if ( v14 )
    v15 = *(_DWORD *)(v14 + 40);
  else
    v15 = 0;
  TraceLoggingWriteUnsupportedGdiUsage(21LL, v15, v13, 2LL, 0LL);
  EngSetLastError(0x57u);
LABEL_61:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v47);
  DCOBJ::~DCOBJ((DCOBJ *)v38);
  return v6;
}
