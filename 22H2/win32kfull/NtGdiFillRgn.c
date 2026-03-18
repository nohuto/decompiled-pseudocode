/*
 * XREFs of NtGdiFillRgn @ 0x1C02A8FD0
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C0220DE4 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001E590 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C001E5CC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00311EC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00AF004 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00AF0A4 (--1BRUSHSELOBJ@@QEAA@XZ.c)
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
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C02651F8 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0266478 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     EngPaint @ 0x1C028E980 (EngPaint.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C029A604 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C02A791C (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C02A8A2C (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C02AB848 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 */

__int64 __fastcall NtGdiFillRgn(HDC a1, HRGN a2, HBRUSH a3)
{
  unsigned int v5; // esi
  DC *v6; // rcx
  REGION *v7; // r13
  __int64 v8; // rax
  unsigned int v9; // ecx
  int v11; // r12d
  REGION *v12; // rcx
  DC *v13; // rax
  __int64 v14; // r15
  struct REGION *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rdi
  struct ECLIPOBJ *v21; // rdx
  struct BRUSH *v22; // r14
  MIX mix; // eax
  DC *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  BOOL v27; // [rsp+40h] [rbp-C0h]
  DC *v28[2]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v29[32]; // [rsp+58h] [rbp-A8h] BYREF
  REGION *v30[7]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v31[2]; // [rsp+B0h] [rbp-50h] BYREF
  __m128i rclBounds; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v33[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v34; // [rsp+D8h] [rbp-28h]
  char v35; // [rsp+E8h] [rbp-18h]
  _QWORD v36[2]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v37[80]; // [rsp+100h] [rbp+0h] BYREF
  BRUSHOBJ pbo; // [rsp+150h] [rbp+50h] BYREF
  int v39; // [rsp+16Ch] [rbp+6Ch]
  __int64 v40; // [rsp+170h] [rbp+70h]
  __int64 v41; // [rsp+178h] [rbp+78h]
  char *v42; // [rsp+188h] [rbp+88h]
  __int64 v43; // [rsp+1A8h] [rbp+A8h]
  __int128 v44; // [rsp+1B0h] [rbp+B0h]
  int v45; // [rsp+1C8h] [rbp+C8h]
  struct BRUSH *v46[10]; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _RECTL v47; // [rsp+230h] [rbp+130h] BYREF
  CLIPOBJ pco; // [rsp+240h] [rbp+140h] BYREF
  __int64 v49; // [rsp+278h] [rbp+178h]
  __int64 v50; // [rsp+290h] [rbp+190h]
  int v51; // [rsp+298h] [rbp+198h]
  int v52; // [rsp+2C0h] [rbp+1C0h]
  __int64 v53; // [rsp+2D0h] [rbp+1D0h]

  v27 = 0;
  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v28, a1);
  v6 = v28[0];
  v7 = 0LL;
  if ( v28[0] )
  {
    if ( *((_WORD *)v28[0] + 6) != 1 )
    {
      v8 = *((_QWORD *)v28[0] + 6);
      if ( v8 )
        v9 = *(_DWORD *)(v8 + 40);
      else
        v9 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(21, v9, *((unsigned __int16 *)v28[0] + 6), 1LL, 0LL);
      EngSetLastError(0x57u);
      goto LABEL_7;
    }
    if ( (*((_DWORD *)v28[0] + 9) & 0x10000) != 0 )
      goto LABEL_50;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v31, (struct XDCOBJ *)v28, -2147483132);
    v11 = *(_DWORD *)(*((_QWORD *)v28[0] + 122) + 340LL) & 0x802;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v30, a2, 0, 0);
    if ( !v30[0] )
    {
LABEL_47:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v30);
      if ( v27 )
      {
        v26 = UserReferenceDwmApiPort(v25);
        DwmSyncFlushAndWaitForBatch(v26);
      }
      v6 = v28[0];
LABEL_50:
      if ( v6 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v28);
      goto LABEL_52;
    }
    if ( v11 == 2050 )
    {
LABEL_16:
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v30) == 1 )
        goto LABEL_44;
      v47 = 0LL;
      v47 = *(struct _RECTL *)((char *)v30[0] + 56);
      if ( (*((_DWORD *)v28[0] + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)v28, (struct ERECTL *)&v47);
      v46[3] = (struct BRUSH *)v28;
      if ( !ERECTL::bEmpty((ERECTL *)&v47) )
        v27 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v46, &v47);
      if ( !*((_QWORD *)v28[0] + 62) )
      {
LABEL_44:
        v5 = 1;
      }
      else
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v36);
        DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v33, (struct XDCOBJ *)v28, 0);
        v12 = v30[0];
        v13 = v28[0];
        if ( !v30[0] )
          *((_DWORD *)v28[0] + 9) |= 0x10u;
        *((_QWORD *)v13 + 141) = v12;
        v14 = *((_QWORD *)v28[0] + 62);
        if ( (v35 & 1) != 0 && (unsigned int)DC::bTightenRao(v28[0]) )
        {
          ERECTL::bOffsetAdd((ERECTL *)&v47, (const struct _POINTL *)v28[0] + (*((_DWORD *)v28[0] + 10) & 1) + 127, 0);
          GreScaleValuesInternal(v28, &v47.left, 4u);
          v15 = XDCOBJ::prgnEffRao(v28);
          v49 = 0LL;
          v50 = 0LL;
          v51 = 0;
          v52 = 1;
          v53 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v15, (struct ERECTL *)&v47, 0);
          if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
          {
            v5 = 1;
          }
          else
          {
            v19 = *(_QWORD *)(v14 + 128);
            v20 = *((_QWORD *)v28[0] + 11);
            v39 = -1;
            v43 = 0LL;
            v44 = 0LL;
            pbo.pvRbrush = 0LL;
            pbo.flColorType = 0;
            v40 = 0LL;
            v41 = 0LL;
            v45 = 0;
            BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v46, a3);
            v22 = 0LL;
            if ( v46[0] )
              v22 = v46[0];
            if ( v22 )
            {
              if ( (*((_DWORD *)v28[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v22 + 10) & 0x100) == 0 )
              {
                rclBounds = (__m128i)pco.rclBounds;
                XDCOBJ::vAccumulateTight((XDCOBJ *)v28, v21, &rclBounds);
              }
              bSyncBrushObj(v22);
              EBRUSHOBJ::vInitBrush(&pbo, v28[0], v22, v20, v19, v14, 1);
              v42 = (char *)v28[0] + 176;
              if ( (*((_DWORD *)v22 + 10) & 0x100) == 0 )
              {
                mix = EBRUSHOBJ::mixBest(
                        (EBRUSHOBJ *)&pbo,
                        *(_BYTE *)(*((_QWORD *)v28[0] + 122) + 212LL),
                        *(_BYTE *)(*((_QWORD *)v28[0] + 122) + 213LL));
                ++*(_DWORD *)(v14 + 92);
                EngPaint((SURFOBJ *)(v14 + 24), &pco, &pbo, (POINTL *)v28[0] + 149, mix);
                v5 = 1;
              }
              BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)v46);
            }
            BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v46);
            EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
          }
        }
        else
        {
          v5 = XDCOBJ::bFullScreen((XDCOBJ *)v28);
        }
        v24 = v28[0];
        *((_DWORD *)v28[0] + 9) |= 0x10u;
        *((_QWORD *)v24 + 141) = 0LL;
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v33, v16, v17, v18);
        if ( v36[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v36);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v37);
      }
      if ( v11 != 2050 )
      {
        REGION::vDeleteREGION(v30[0]);
        v30[0] = v7;
      }
      goto LABEL_47;
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v33);
    if ( v34 )
    {
      if ( !v31[0] || !RGNOBJ::bCreate((RGNOBJ *)v30, (struct EPATHOBJ *)v33, (struct EXFORMOBJ *)v31) )
        goto LABEL_29;
      *(_QWORD *)&v47.left = 0LL;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v47, (struct EPATHOBJ *)v33, 1u, 0LL);
      if ( *(_QWORD *)&v47.left )
      {
        v7 = v30[0];
        v30[0] = *(REGION **)&v47.left;
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v33);
        goto LABEL_16;
      }
    }
    EngSetLastError(8u);
LABEL_29:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v33);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v30);
LABEL_7:
    DCOBJ::~DCOBJ((DCOBJ *)v28);
    return 0LL;
  }
LABEL_52:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v29);
  return v5;
}
