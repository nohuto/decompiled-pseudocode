/*
 * XREFs of NtGdiFrameRgn @ 0x1C02ABB30
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C0223AF4 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00508E4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C0059100 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007FBDC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008219C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00821D8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008C1D8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C008C950 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00E8C20 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00E8CA0 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C014D92E (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C0150DA6 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0268F1C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C02910AC (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     EngPaint @ 0x1C0291240 (EngPaint.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C029CDB4 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C02A9FFC (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C02AB040 (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C02ADD64 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C02F3370 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z.c)
 *     ?vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C02F542C (-vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 */

__int64 __fastcall NtGdiFrameRgn(HDC a1, HRGN a2, HBRUSH a3, int a4, int a5)
{
  unsigned int v8; // esi
  BOOL v9; // r12d
  int v10; // ebx
  int v11; // edi
  __int64 v12; // rcx
  unsigned int v13; // eax
  EPATHOBJ *v15; // rcx
  struct _RECTL v16; // xmm1
  __int64 v17; // r8
  __int64 v18; // rcx
  DC *v19; // rax
  DC *v20; // rax
  __int64 v21; // r15
  struct REGION *v22; // rax
  DC *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rdi
  struct ECLIPOBJ *v26; // rdx
  struct BRUSH *v27; // r14
  DC *v28; // rax
  DC *v29; // rcx
  DC *v30; // rcx
  MIX mix; // eax
  DC *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  DC *v37[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+58h] [rbp-A8h] BYREF
  _XFORMOBJ v40[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v41; // [rsp+6Ch] [rbp-94h]
  _QWORD v42[3]; // [rsp+70h] [rbp-90h] BYREF
  struct BRUSH *v43[3]; // [rsp+88h] [rbp-78h] BYREF
  struct _LINEATTRS v44; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-38h]
  __int16 v46; // [rsp+D0h] [rbp-30h]
  _BYTE v47[16]; // [rsp+F0h] [rbp-10h] BYREF
  __m128i rclBounds; // [rsp+100h] [rbp+0h] BYREF
  BRUSHOBJ pbo; // [rsp+110h] [rbp+10h] BYREF
  int v50; // [rsp+12Ch] [rbp+2Ch]
  __int64 v51; // [rsp+130h] [rbp+30h]
  __int64 v52; // [rsp+138h] [rbp+38h]
  char *v53; // [rsp+148h] [rbp+48h]
  __int64 v54; // [rsp+168h] [rbp+68h]
  __int128 v55; // [rsp+170h] [rbp+70h]
  int v56; // [rsp+188h] [rbp+88h]
  _BYTE v57[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v58; // [rsp+1A8h] [rbp+A8h]
  _BYTE v59[8]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v60; // [rsp+228h] [rbp+128h]
  struct _RECTL v61; // [rsp+2A0h] [rbp+1A0h] BYREF
  _OWORD v62[2]; // [rsp+2B0h] [rbp+1B0h] BYREF
  int v63; // [rsp+2D0h] [rbp+1D0h]
  CLIPOBJ pco; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 v65; // [rsp+330h] [rbp+230h]
  int v66; // [rsp+338h] [rbp+238h]
  int v67; // [rsp+360h] [rbp+260h]
  __int64 v68; // [rsp+370h] [rbp+270h]

  v8 = 0;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v37, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v42, a2, 1, 0);
  v10 = abs32(a4);
  v11 = abs32(a5);
  if ( v37[0] )
  {
    if ( *((_WORD *)v37[0] + 6) != 1 )
    {
      v12 = *((_QWORD *)v37[0] + 6);
      if ( v12 )
        v13 = *(_DWORD *)(v12 + 40);
      else
        v13 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(21, v13, *((unsigned __int16 *)v37[0] + 6), 2LL, 0LL);
      EngSetLastError(0x57u);
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v42);
      DCOBJ::~DCOBJ((DCOBJ *)v37);
      return 0LL;
    }
    if ( (*((_DWORD *)v37[0] + 9) & 0x10000) == 0 && v42[0] && v10 > 0 && v11 > 0 )
    {
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v42) == 1 )
      {
        v8 = 1;
        goto LABEL_57;
      }
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v57);
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v59);
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v47, (struct XDCOBJ *)v37, -2147483132);
      if ( !v58
        || !v60
        || !RGNOBJ::bCreate((RGNOBJ *)v42, (struct EPATHOBJ *)v57, (struct EXFORMOBJ *)v47)
        || (v41 = 0,
            v63 = 0,
            *(_QWORD *)&v40[0].ulReserved = v62,
            memset(&v44, 0, sizeof(v44)),
            memset(v62, 0, sizeof(v62)),
            EPATHOBJ::vWidenSetupForFrameRgn(v15, (struct XDCOBJ *)v37, v10, v11, (struct EXFORMOBJ *)v40, &v44),
            !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v59, (struct EPATHOBJ *)v57, v40, &v44))
        || !EPATHOBJ::bWiden((EPATHOBJ *)v59, (struct EPATHOBJ *)v57, v40, &v44) )
      {
LABEL_55:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v59);
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v57);
        if ( v9 )
        {
          v36 = UserReferenceDwmApiPort(v34, v33, v35);
          DwmSyncFlushAndWaitForBatch(v36);
        }
        goto LABEL_57;
      }
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v39, (struct EPATHOBJ *)v59, 2u, 0LL);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v39);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v38);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v38);
      if ( !v39 || !v38 )
        goto LABEL_54;
      if ( (*(_DWORD *)(*((_QWORD *)v37[0] + 122) + 340LL) & 0x802) == 0x802 )
      {
        v8 = RGNOBJ::bMerge((RGNOBJ *)&v38, (struct RGNOBJ *)&v39, (struct RGNOBJ *)v42, 8u);
      }
      else
      {
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v61, (struct EPATHOBJ *)v57, 1u, 0LL);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v61);
        if ( *(_QWORD *)&v61.left )
          v8 = RGNOBJ::bMerge((RGNOBJ *)&v38, (struct RGNOBJ *)&v39, (struct RGNOBJ *)&v61, 8u) != 0;
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v61);
      }
      if ( !v8 )
        goto LABEL_54;
      v61 = 0LL;
      v16 = *(struct _RECTL *)(v38 + 56);
      v44.pstyle = (PFLOAT_LONG)v37;
      v61 = v16;
      if ( !ERECTL::bEmpty((ERECTL *)&v61) )
        v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)&v44, &v61);
      if ( (*((_DWORD *)v37[0] + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)v37, (struct ERECTL *)&v61);
      if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v37) || !*(_QWORD *)(v17 + 496) )
      {
LABEL_54:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v38);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v39);
        goto LABEL_55;
      }
      *(_QWORD *)&v44.elStyleState.e = 0LL;
      v45 = 0LL;
      v46 = 256;
      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v44, (struct XDCOBJ *)v37, 0);
      v18 = v38;
      v19 = v37[0];
      if ( !v38 )
        *((_DWORD *)v37[0] + 9) |= 0x10u;
      *((_QWORD *)v19 + 141) = v18;
      v20 = v37[0];
      v21 = *((_QWORD *)v37[0] + 62);
      if ( ((__int64)v44.pstyle & 1) != 0 )
      {
        if ( (unsigned int)DC::bTightenRao(v37[0]) )
        {
          ERECTL::bOffsetAdd((ERECTL *)&v61, (const struct _POINTL *)v37[0] + (*((_DWORD *)v37[0] + 10) & 1) + 127, 0);
          GreScaleValuesInternal(v37, &v61.left, 4u);
          v22 = XDCOBJ::prgnEffRao(v37);
          v65 = 0LL;
          v66 = 0;
          v67 = 1;
          v68 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v22, (struct ERECTL *)&v61, 0);
          if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
          {
            v23 = v37[0];
            *((_DWORD *)v37[0] + 9) |= 0x10u;
            *((_QWORD *)v23 + 141) = 0LL;
          }
          else
          {
            v24 = *(_QWORD *)(v21 + 128);
            v25 = *((_QWORD *)v37[0] + 11);
            v50 = -1;
            v54 = 0LL;
            v55 = 0LL;
            pbo.pvRbrush = 0LL;
            pbo.flColorType = 0;
            v51 = 0LL;
            v52 = 0LL;
            v56 = 0;
            BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v43, a3);
            v27 = v43[0];
            v8 = 0;
            if ( v43[0] )
            {
              v29 = v37[0];
              if ( (*((_DWORD *)v37[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v43[0] + 10) & 0x100) == 0 )
              {
                rclBounds = (__m128i)pco.rclBounds;
                XDCOBJ::vAccumulateTight((XDCOBJ *)v37, v26, &rclBounds);
                v29 = v37[0];
              }
              if ( v27 )
              {
                bSyncBrushObj(v27);
                EBRUSHOBJ::vInitBrush(&pbo, v37[0], v27, v25, v24, v21, 1);
                v30 = v37[0];
                v53 = (char *)v37[0] + 176;
                if ( (*((_DWORD *)v27 + 10) & 0x100) != 0 )
                {
                  *((_DWORD *)v37[0] + 9) |= 0x10u;
                  *((_QWORD *)v30 + 141) = 0LL;
                }
                else
                {
                  mix = EBRUSHOBJ::mixBest(
                          (EBRUSHOBJ *)&pbo,
                          *(_BYTE *)(*((_QWORD *)v37[0] + 122) + 212LL),
                          *(_BYTE *)(*((_QWORD *)v37[0] + 122) + 213LL));
                  ++*(_DWORD *)(v21 + 92);
                  EngPaint((SURFOBJ *)(v21 + 24), &pco, &pbo, (POINTL *)v37[0] + 149, mix);
                  v32 = v37[0];
                  v8 = 1;
                  *((_DWORD *)v37[0] + 9) |= 0x10u;
                  *((_QWORD *)v32 + 141) = 0LL;
                }
                BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)v43);
              }
              else
              {
                *((_DWORD *)v29 + 9) |= 0x10u;
                *((_QWORD *)v29 + 141) = 0LL;
              }
            }
            else
            {
              v28 = v37[0];
              *((_DWORD *)v37[0] + 9) |= 0x10u;
              *((_QWORD *)v28 + 141) = 0LL;
            }
            BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v43);
            EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
          }
          goto LABEL_52;
        }
        v20 = v37[0];
      }
      *((_DWORD *)v20 + 9) |= 0x10u;
      *((_QWORD *)v20 + 141) = 0LL;
      v8 = XDCOBJ::bFullScreen((XDCOBJ *)v37);
LABEL_52:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v44);
      if ( *(_QWORD *)&v44.elStyleState.e )
        DLODCOBJ::vUnlock((DLODCOBJ *)&v44.elStyleState);
      goto LABEL_54;
    }
  }
LABEL_57:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v42);
  if ( v37[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v37);
  return v8;
}
