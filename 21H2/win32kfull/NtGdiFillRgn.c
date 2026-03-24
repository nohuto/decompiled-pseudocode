/*
 * XREFs of NtGdiFillRgn @ 0x1C0146850
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C013E7D0 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00266C0 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C002674C (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C0090814 (-bValid@RFONTOBJ@@QEBAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACD0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B1630 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00B2CDC (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00B307C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B30BC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B4CCC (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C00B5CF0 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00B61E0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FDC44 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C0146E60 (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C0147690 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     EngPaint @ 0x1C0147E40 (EngPaint.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C0147EEC (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C0147F44 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C0147FC0 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C016A4AC (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiFillRgn(HDC a1, HRGN a2, HBRUSH a3)
{
  unsigned int v4; // esi
  int v6; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  int v11; // r12d
  REGION *v12; // rcx
  DC *v13; // rax
  __int64 v14; // r13
  char *v15; // rcx
  struct REGION *v16; // rax
  DC *v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rdi
  struct ECLIPOBJ *v20; // rdx
  struct BRUSH *v21; // r15
  MIX mix; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v26; // [rsp+40h] [rbp-C0h]
  DC *v27[6]; // [rsp+48h] [rbp-B8h] BYREF
  REGION *v28; // [rsp+78h] [rbp-88h]
  REGION *v29[7]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v30[2]; // [rsp+B8h] [rbp-48h] BYREF
  __m128i rclBounds; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v32[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v33; // [rsp+E8h] [rbp-18h]
  char v34; // [rsp+F8h] [rbp-8h]
  _QWORD v35[2]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v36[80]; // [rsp+110h] [rbp+10h] BYREF
  BRUSHOBJ pbo; // [rsp+160h] [rbp+60h] BYREF
  int v38; // [rsp+17Ch] [rbp+7Ch]
  __int64 v39; // [rsp+180h] [rbp+80h]
  __int64 v40; // [rsp+188h] [rbp+88h]
  char *v41; // [rsp+198h] [rbp+98h]
  __int64 v42; // [rsp+1B8h] [rbp+B8h]
  __int128 v43; // [rsp+1C0h] [rbp+C0h]
  int v44; // [rsp+1D8h] [rbp+D8h]
  struct BRUSH *v45[10]; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _RECTL v46; // [rsp+240h] [rbp+140h] BYREF
  CLIPOBJ pco; // [rsp+250h] [rbp+150h] BYREF
  __int64 v48; // [rsp+288h] [rbp+188h]
  __int64 v49; // [rsp+2A0h] [rbp+1A0h]
  int v50; // [rsp+2A8h] [rbp+1A8h]
  int v51; // [rsp+2D0h] [rbp+1D0h]
  __int64 v52; // [rsp+2E0h] [rbp+1E0h]

  v4 = 0;
  v26 = 0;
  v6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  v28 = 0LL;
  if ( !RFONTOBJ::bValid((RFONTOBJ *)v27) )
    goto LABEL_56;
  v8 = *((unsigned __int16 *)v27[0] + 6);
  if ( (_WORD)v8 == 1 )
  {
    if ( (*((_DWORD *)v27[0] + 9) & 0x10000) == 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v30, (struct XDCOBJ *)v27, -2147483132);
      v11 = *(_DWORD *)(*((_QWORD *)v27[0] + 122) + 340LL) & 0x802;
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v29, a2, 0, 0);
      if ( !v29[0] )
      {
LABEL_54:
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v29);
        if ( v26 )
        {
          v24 = UserReferenceDwmApiPort(v23);
          DwmSyncFlushAndWaitForBatch(v24);
        }
        goto LABEL_56;
      }
      if ( v11 != 2050 )
      {
        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v32);
        if ( !v33 )
        {
          EngSetLastError(8u);
LABEL_12:
          PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v32);
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v29);
          goto LABEL_57;
        }
        if ( !v30[0] || !RGNOBJ::bCreate((RGNOBJ *)v29, (struct EPATHOBJ *)v32, (struct EXFORMOBJ *)v30) )
          goto LABEL_12;
        *(_QWORD *)&v46.left = 0LL;
        v46.right = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v46, (struct EPATHOBJ *)v32, 1u, 0LL);
        if ( !*(_QWORD *)&v46.left )
        {
          EngSetLastError(8u);
          if ( v46.right == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v46);
          goto LABEL_12;
        }
        v28 = v29[0];
        v29[0] = *(REGION **)&v46.left;
        if ( v46.right == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v46);
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v32);
      }
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v29) == 1 )
        goto LABEL_51;
      v46 = (struct _RECTL)*((_OWORD *)v29[0] + 6);
      if ( (*((_DWORD *)v27[0] + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)v27, (struct ERECTL *)&v46);
      v45[3] = (struct BRUSH *)v27;
      if ( !ERECTL::bEmpty((ERECTL *)&v46) )
        v26 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v45, &v46);
      if ( !*((_QWORD *)v27[0] + 62) )
      {
LABEL_51:
        v6 = 1;
LABEL_52:
        if ( v11 != 2050 )
        {
          REGION::vDeleteREGION(v29[0]);
          v29[0] = v28;
        }
        goto LABEL_54;
      }
      DLODCOBJ::DLODCOBJ((DLODCOBJ *)v35);
      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v32, (struct XDCOBJ *)v27, 0);
      v12 = v29[0];
      v13 = v27[0];
      if ( !v29[0] )
        *((_DWORD *)v27[0] + 9) |= 0x10u;
      *((_QWORD *)v13 + 142) = v12;
      v14 = *((_QWORD *)v27[0] + 62);
      if ( (v34 & 1) == 0 || !(unsigned int)DC::bTightenRao(v27[0]) )
      {
        v6 = XDCOBJ::bFullScreen((XDCOBJ *)v27);
        goto LABEL_48;
      }
      v15 = (char *)v27[0] + 1024;
      if ( (*((_DWORD *)v27[0] + 10) & 1) == 0 )
        v15 = (char *)v27[0] + 1016;
      v46.left += *(_DWORD *)v15;
      v46.right += *(_DWORD *)v15;
      v46.top += *((_DWORD *)v15 + 1);
      v46.bottom += *((_DWORD *)v15 + 1);
      GreScaleValuesInternal((struct XDCOBJ *)v27, &v46.left, 4u);
      v16 = XDCOBJ::prgnEffRao(v27);
      v48 = 0LL;
      v49 = 0LL;
      v50 = 0;
      v51 = 1;
      v52 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v16, (struct ERECTL *)&v46, 0);
      if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
      {
        v6 = 1;
LABEL_35:
        v17 = v27[0];
LABEL_48:
        *((_DWORD *)v17 + 9) |= 0x10u;
        *((_QWORD *)v17 + 142) = 0LL;
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v32);
        if ( v35[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v35);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v36);
        goto LABEL_52;
      }
      v18 = *(_QWORD *)(v14 + 128);
      v19 = *((_QWORD *)v27[0] + 11);
      v38 = -1;
      v42 = 0LL;
      v43 = 0LL;
      pbo.pvRbrush = 0LL;
      pbo.flColorType = 0;
      v39 = 0LL;
      v40 = 0LL;
      v44 = 0;
      BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v45, a3);
      v21 = 0LL;
      if ( v45[0] )
        v21 = v45[0];
      if ( (*((_DWORD *)v27[0] + 9) & 0xE0) != 0 )
      {
        if ( !v21 )
        {
LABEL_46:
          BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v45);
          EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
          goto LABEL_35;
        }
        if ( (*((_DWORD *)v21 + 10) & 0x100) == 0 )
        {
          rclBounds = (__m128i)pco.rclBounds;
          XDCOBJ::vAccumulateTight((XDCOBJ *)v27, v20, &rclBounds);
        }
      }
      if ( v21 )
      {
        bSyncBrushObj(v21);
        EBRUSHOBJ::vInitBrush(&pbo, v27[0], v21, v19, v18, v14, 1);
        v41 = (char *)v27[0] + 176;
        if ( (*((_DWORD *)v21 + 10) & 0x100) == 0 )
        {
          mix = EBRUSHOBJ::mixBest(
                  (EBRUSHOBJ *)&pbo,
                  *(_BYTE *)(*((_QWORD *)v27[0] + 122) + 212LL),
                  *(_BYTE *)(*((_QWORD *)v27[0] + 122) + 213LL));
          ++*(_DWORD *)(v14 + 92);
          EngPaint((SURFOBJ *)(v14 + 24), &pco, &pbo, (POINTL *)v27[0] + 150, mix);
          v6 = 1;
        }
        BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)v45);
      }
      goto LABEL_46;
    }
LABEL_56:
    v4 = v6;
    goto LABEL_57;
  }
  v9 = *((_QWORD *)v27[0] + 6);
  if ( v9 )
    v10 = *(_DWORD *)(v9 + 40);
  else
    v10 = 0;
  TraceLoggingWriteUnsupportedGdiUsage(21LL, v10, v8, 1LL, 0LL);
  EngSetLastError(0x57u);
LABEL_57:
  DCOBJ::~DCOBJ((DCOBJ *)v27);
  return v4;
}
