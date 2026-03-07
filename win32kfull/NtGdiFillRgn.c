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
  __int64 v16; // rbx
  __int64 v17; // rdi
  struct ECLIPOBJ *v18; // rdx
  struct BRUSH *v19; // r14
  MIX mix; // eax
  DC *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  DC *v26[2]; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v27; // [rsp+50h] [rbp-B0h]
  REGION *v28[3]; // [rsp+58h] [rbp-A8h] BYREF
  struct BRUSH *v29[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v30[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v31[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v32; // [rsp+98h] [rbp-68h]
  DC **v33; // [rsp+A8h] [rbp-58h]
  _QWORD v34[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v35; // [rsp+C0h] [rbp-40h]
  __m128i rclBounds; // [rsp+110h] [rbp+10h] BYREF
  BRUSHOBJ pbo; // [rsp+120h] [rbp+20h] BYREF
  int v38; // [rsp+13Ch] [rbp+3Ch]
  __int64 v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  char *v41; // [rsp+158h] [rbp+58h]
  __int64 v42; // [rsp+178h] [rbp+78h]
  __int128 v43; // [rsp+180h] [rbp+80h]
  int v44; // [rsp+198h] [rbp+98h]
  struct _RECTL v45; // [rsp+1B0h] [rbp+B0h] BYREF
  CLIPOBJ pco; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v47; // [rsp+210h] [rbp+110h]
  int v48; // [rsp+218h] [rbp+118h]
  int v49; // [rsp+240h] [rbp+140h]
  __int64 v50; // [rsp+250h] [rbp+150h]

  v27 = 0;
  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v26, a1);
  v6 = v26[0];
  v7 = 0LL;
  if ( v26[0] )
  {
    if ( *((_WORD *)v26[0] + 6) != 1 )
    {
      v8 = *((_QWORD *)v26[0] + 6);
      if ( v8 )
        v9 = *(_DWORD *)(v8 + 40);
      else
        v9 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(21, v9, *((unsigned __int16 *)v26[0] + 6), 1LL, 0LL);
      EngSetLastError(0x57u);
      goto LABEL_7;
    }
    if ( (*((_DWORD *)v26[0] + 9) & 0x10000) != 0 )
      goto LABEL_49;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v30, (struct XDCOBJ *)v26, -2147483132);
    v11 = *(_DWORD *)(*((_QWORD *)v26[0] + 122) + 340LL) & 0x802;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v28, a2, 0, 0);
    if ( !v28[0] )
    {
LABEL_46:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v28);
      if ( v27 )
      {
        v25 = UserReferenceDwmApiPort(v23, v22, v24);
        DwmSyncFlushAndWaitForBatch(v25);
      }
      v6 = v26[0];
LABEL_49:
      if ( v6 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v26);
      return v5;
    }
    if ( v11 == 2050 )
    {
LABEL_16:
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v28) == 1 )
        goto LABEL_43;
      v45 = 0LL;
      v45 = *(struct _RECTL *)((char *)v28[0] + 56);
      if ( (*((_DWORD *)v26[0] + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)v26, (struct ERECTL *)&v45);
      v33 = v26;
      if ( !ERECTL::bEmpty((ERECTL *)&v45) )
        v27 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v31, &v45);
      if ( !*((_QWORD *)v26[0] + 62) )
      {
LABEL_43:
        v5 = 1;
      }
      else
      {
        v34[0] = 0LL;
        v34[1] = 0LL;
        v35 = 256;
        DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v31, (struct XDCOBJ *)v26, 0);
        v12 = v28[0];
        v13 = v26[0];
        if ( !v28[0] )
          *((_DWORD *)v26[0] + 9) |= 0x10u;
        *((_QWORD *)v13 + 141) = v12;
        v14 = *((_QWORD *)v26[0] + 62);
        if ( ((unsigned __int8)v33 & 1) != 0 && (unsigned int)DC::bTightenRao(v26[0]) )
        {
          ERECTL::bOffsetAdd((ERECTL *)&v45, (const struct _POINTL *)v26[0] + (*((_DWORD *)v26[0] + 10) & 1) + 127, 0);
          GreScaleValuesInternal(v26, &v45.left, 4u);
          v15 = XDCOBJ::prgnEffRao(v26);
          v47 = 0LL;
          v48 = 0;
          v49 = 1;
          v50 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v15, (struct ERECTL *)&v45, 0);
          if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
          {
            v5 = 1;
          }
          else
          {
            v16 = *(_QWORD *)(v14 + 128);
            v17 = *((_QWORD *)v26[0] + 11);
            v38 = -1;
            v42 = 0LL;
            v43 = 0LL;
            pbo.pvRbrush = 0LL;
            pbo.flColorType = 0;
            v39 = 0LL;
            v40 = 0LL;
            v44 = 0;
            BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v29, a3);
            v19 = 0LL;
            if ( v29[0] )
              v19 = v29[0];
            if ( v19 )
            {
              if ( (*((_DWORD *)v26[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v19 + 10) & 0x100) == 0 )
              {
                rclBounds = (__m128i)pco.rclBounds;
                XDCOBJ::vAccumulateTight((XDCOBJ *)v26, v18, &rclBounds);
              }
              bSyncBrushObj(v19);
              EBRUSHOBJ::vInitBrush(&pbo, v26[0], v19, v17, v16, v14, 1);
              v41 = (char *)v26[0] + 176;
              if ( (*((_DWORD *)v19 + 10) & 0x100) == 0 )
              {
                mix = EBRUSHOBJ::mixBest(
                        (EBRUSHOBJ *)&pbo,
                        *(_BYTE *)(*((_QWORD *)v26[0] + 122) + 212LL),
                        *(_BYTE *)(*((_QWORD *)v26[0] + 122) + 213LL));
                ++*(_DWORD *)(v14 + 92);
                EngPaint((SURFOBJ *)(v14 + 24), &pco, &pbo, (POINTL *)v26[0] + 149, mix);
                v5 = 1;
              }
              BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)v29);
            }
            BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v29);
            EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
          }
        }
        else
        {
          v5 = XDCOBJ::bFullScreen((XDCOBJ *)v26);
        }
        v21 = v26[0];
        *((_DWORD *)v26[0] + 9) |= 0x10u;
        *((_QWORD *)v21 + 141) = 0LL;
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v31);
        if ( v34[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v34);
      }
      if ( v11 != 2050 )
      {
        REGION::vDeleteREGION(v28[0]);
        v28[0] = v7;
      }
      goto LABEL_46;
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v31);
    if ( v32 )
    {
      if ( !v30[0] || !RGNOBJ::bCreate((RGNOBJ *)v28, (struct EPATHOBJ *)v31, (struct EXFORMOBJ *)v30) )
        goto LABEL_29;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v45, (struct EPATHOBJ *)v31, 1u, 0LL);
      if ( *(_QWORD *)&v45.left )
      {
        v7 = v28[0];
        v28[0] = *(REGION **)&v45.left;
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v31);
        goto LABEL_16;
      }
    }
    EngSetLastError(8u);
LABEL_29:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v31);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v28);
LABEL_7:
    DCOBJ::~DCOBJ((DCOBJ *)v26);
    return 0LL;
  }
  return v5;
}
