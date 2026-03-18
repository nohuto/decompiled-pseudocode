/*
 * XREFs of NtGdiFrameRgn @ 0x1C02A9590
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C0220DE4 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001E590 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C001E5CC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00311EC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00AF004 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00AF0A4 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00D5ED4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00DA0C8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00DA618 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00E0C40 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C00FE5E0 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C011BD38 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011BFB4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C015A776 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C015DC06 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C02651F8 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0266478 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     EngPaint @ 0x1C028E980 (EngPaint.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C029A604 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C02A791C (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C02A8A2C (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C02AB848 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C02F1580 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z.c)
 *     ?vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C02F363C (-vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
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
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  DC *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rdi
  struct ECLIPOBJ *v29; // rdx
  struct BRUSH *v30; // r14
  DC *v31; // rax
  DC *v32; // rcx
  MIX mix; // eax
  DC *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  DC *v39[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v40[32]; // [rsp+60h] [rbp-A0h] BYREF
  _XFORMOBJ v41[2]; // [rsp+80h] [rbp-80h] BYREF
  int v42; // [rsp+8Ch] [rbp-74h]
  struct _LINEATTRS v43; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v44[16]; // [rsp+E0h] [rbp-20h] BYREF
  __m128i rclBounds; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v46[8]; // [rsp+100h] [rbp+0h] BYREF
  BRUSHOBJ pbo; // [rsp+140h] [rbp+40h] BYREF
  int v48; // [rsp+15Ch] [rbp+5Ch]
  __int64 v49; // [rsp+160h] [rbp+60h]
  __int64 v50; // [rsp+168h] [rbp+68h]
  char *v51; // [rsp+178h] [rbp+78h]
  __int64 v52; // [rsp+198h] [rbp+98h]
  __int128 v53; // [rsp+1A0h] [rbp+A0h]
  int v54; // [rsp+1B8h] [rbp+B8h]
  _BYTE v55[32]; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v56[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v57[64]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v58[8]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v59; // [rsp+248h] [rbp+148h]
  _BYTE v60[8]; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v61; // [rsp+2C8h] [rbp+1C8h]
  struct _RECTL v62; // [rsp+340h] [rbp+240h] BYREF
  _OWORD v63[2]; // [rsp+350h] [rbp+250h] BYREF
  int v64; // [rsp+370h] [rbp+270h]
  CLIPOBJ pco; // [rsp+380h] [rbp+280h] BYREF
  __int64 v66; // [rsp+3B8h] [rbp+2B8h]
  __int64 v67; // [rsp+3D0h] [rbp+2D0h]
  int v68; // [rsp+3D8h] [rbp+2D8h]
  int v69; // [rsp+400h] [rbp+300h]
  __int64 v70; // [rsp+410h] [rbp+310h]

  v8 = 0;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v39, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v46, a2, 1, 0);
  v10 = abs32(a4);
  v11 = abs32(a5);
  if ( v39[0] )
  {
    if ( *((_WORD *)v39[0] + 6) != 1 )
    {
      v12 = *((_QWORD *)v39[0] + 6);
      if ( v12 )
        v13 = *(_DWORD *)(v12 + 40);
      else
        v13 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(21, v13, *((unsigned __int16 *)v39[0] + 6), 2LL, 0LL);
      EngSetLastError(0x57u);
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v46);
      DCOBJ::~DCOBJ((DCOBJ *)v39);
      return 0LL;
    }
    if ( (*((_DWORD *)v39[0] + 9) & 0x10000) == 0 && v46[0] && v10 > 0 && v11 > 0 )
    {
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v46) == 1 )
      {
        v8 = 1;
        goto LABEL_57;
      }
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v58);
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v60);
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v44, (struct XDCOBJ *)v39, -2147483132);
      if ( !v59
        || !v61
        || !RGNOBJ::bCreate((RGNOBJ *)v46, (struct EPATHOBJ *)v58, (struct EXFORMOBJ *)v44)
        || (v42 = 0,
            v64 = 0,
            *(_QWORD *)&v41[0].ulReserved = v63,
            memset(&v43, 0, sizeof(v43)),
            memset(v63, 0, sizeof(v63)),
            EPATHOBJ::vWidenSetupForFrameRgn(v15, (struct XDCOBJ *)v39, v10, v11, (struct EXFORMOBJ *)v41, &v43),
            !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v60, (struct EPATHOBJ *)v58, v41, &v43))
        || !EPATHOBJ::bWiden((EPATHOBJ *)v60, (struct EPATHOBJ *)v58, v41, &v43) )
      {
LABEL_55:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v60);
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v58);
        if ( v9 )
        {
          v36 = UserReferenceDwmApiPort(v35);
          DwmSyncFlushAndWaitForBatch(v36);
        }
        goto LABEL_57;
      }
      v38 = 0LL;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v38, (struct EPATHOBJ *)v60, 2u, 0LL);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v38);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v37);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v37);
      if ( !v38 || !v37 )
        goto LABEL_54;
      if ( (*(_DWORD *)(*((_QWORD *)v39[0] + 122) + 340LL) & 0x802) == 0x802 )
      {
        v8 = RGNOBJ::bMerge((RGNOBJ *)&v37, (struct RGNOBJ *)&v38, (struct RGNOBJ *)v46, 8u);
      }
      else
      {
        *(_QWORD *)&v62.left = 0LL;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v62, (struct EPATHOBJ *)v58, 1u, 0LL);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v62);
        if ( *(_QWORD *)&v62.left )
          v8 = RGNOBJ::bMerge((RGNOBJ *)&v37, (struct RGNOBJ *)&v38, (struct RGNOBJ *)&v62, 8u) != 0;
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v62);
      }
      if ( !v8 )
        goto LABEL_54;
      v62 = 0LL;
      v16 = *(struct _RECTL *)(v37 + 56);
      v43.pstyle = (PFLOAT_LONG)v39;
      v62 = v16;
      if ( !ERECTL::bEmpty((ERECTL *)&v62) )
        v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)&v43, &v62);
      if ( (*((_DWORD *)v39[0] + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)v39, (struct ERECTL *)&v62);
      if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v39) || !*(_QWORD *)(v17 + 496) )
      {
LABEL_54:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v37);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v38);
        goto LABEL_55;
      }
      DLODCOBJ::DLODCOBJ((DLODCOBJ *)v56);
      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v55, (struct XDCOBJ *)v39, 0);
      v18 = v37;
      v19 = v39[0];
      if ( !v37 )
        *((_DWORD *)v39[0] + 9) |= 0x10u;
      *((_QWORD *)v19 + 141) = v18;
      v20 = v39[0];
      v21 = *((_QWORD *)v39[0] + 62);
      if ( (v55[24] & 1) != 0 )
      {
        if ( (unsigned int)DC::bTightenRao(v39[0]) )
        {
          ERECTL::bOffsetAdd((ERECTL *)&v62, (const struct _POINTL *)v39[0] + (*((_DWORD *)v39[0] + 10) & 1) + 127, 0);
          GreScaleValuesInternal(v39, &v62.left, 4u);
          v22 = XDCOBJ::prgnEffRao(v39);
          v66 = 0LL;
          v67 = 0LL;
          v68 = 0;
          v69 = 1;
          v70 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v22, (struct ERECTL *)&v62, 0);
          if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
          {
            v26 = v39[0];
            *((_DWORD *)v39[0] + 9) |= 0x10u;
            *((_QWORD *)v26 + 141) = 0LL;
          }
          else
          {
            v27 = *(_QWORD *)(v21 + 128);
            v28 = *((_QWORD *)v39[0] + 11);
            v48 = -1;
            v52 = 0LL;
            v53 = 0LL;
            pbo.pvRbrush = 0LL;
            pbo.flColorType = 0;
            v49 = 0LL;
            v50 = 0LL;
            v54 = 0;
            BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)&v43, a3);
            v30 = *(struct BRUSH **)&v43.fl;
            v8 = 0;
            if ( *(_QWORD *)&v43.fl )
            {
              if ( (*((_DWORD *)v39[0] + 9) & 0xE0) != 0 && (*(_DWORD *)(*(_QWORD *)&v43.fl + 40LL) & 0x100) == 0 )
              {
                rclBounds = (__m128i)pco.rclBounds;
                XDCOBJ::vAccumulateTight((XDCOBJ *)v39, v29, &rclBounds);
              }
              bSyncBrushObj(v30);
              EBRUSHOBJ::vInitBrush(&pbo, v39[0], v30, v28, v27, v21, 1);
              v32 = v39[0];
              v51 = (char *)v39[0] + 176;
              if ( (*((_DWORD *)v30 + 10) & 0x100) != 0 )
              {
                *((_DWORD *)v39[0] + 9) |= 0x10u;
                *((_QWORD *)v32 + 141) = 0LL;
              }
              else
              {
                mix = EBRUSHOBJ::mixBest(
                        (EBRUSHOBJ *)&pbo,
                        *(_BYTE *)(*((_QWORD *)v39[0] + 122) + 212LL),
                        *(_BYTE *)(*((_QWORD *)v39[0] + 122) + 213LL));
                ++*(_DWORD *)(v21 + 92);
                EngPaint((SURFOBJ *)(v21 + 24), &pco, &pbo, (POINTL *)v39[0] + 149, mix);
                v34 = v39[0];
                v8 = 1;
                *((_DWORD *)v39[0] + 9) |= 0x10u;
                *((_QWORD *)v34 + 141) = 0LL;
              }
              BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)&v43);
            }
            else
            {
              v31 = v39[0];
              *((_DWORD *)v39[0] + 9) |= 0x10u;
              *((_QWORD *)v31 + 141) = 0LL;
            }
            BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)&v43);
            EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
          }
          goto LABEL_51;
        }
        v20 = v39[0];
      }
      *((_DWORD *)v20 + 9) |= 0x10u;
      *((_QWORD *)v20 + 141) = 0LL;
      v8 = XDCOBJ::bFullScreen((XDCOBJ *)v39);
LABEL_51:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v55, v23, v24, v25);
      if ( v56[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v56);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v57);
      goto LABEL_54;
    }
  }
LABEL_57:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v46);
  if ( v39[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v39);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v40);
  return v8;
}
