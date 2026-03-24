/*
 * XREFs of GreGetTextExtentW @ 0x1C00E36CC
 * Callers:
 *     GetCharDimensions @ 0x1C00E33C8 (GetCharDimensions.c)
 *     xxxDrawCaptionTemp @ 0x1C01590D4 (xxxDrawCaptionTemp.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0223290 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C0242D6C (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C024BFE4 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024E8C0 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     xxxPSMTextOut @ 0x1C025306C (xxxPSMTextOut.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C025E6C8 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C025EA6C (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C02607E4 (xxxPSMGetTextExtent.c)
 *     NtGdiGetTextExtent @ 0x1C02AF250 (NtGdiGetTextExtent.c)
 *     GreGetCharacterPlacementW @ 0x1C02BC4D0 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093AC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0095270 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AF04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C009E9A4 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C00A0958 (-bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C00E3A64 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00FD8FC (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FDC44 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bUseMetaPtoD@DC@@QEBAHXZ @ 0x1C011F6A8 (-bUseMetaPtoD@DC@@QEBAHXZ.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C014047C (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C016BDB8 (--1ESTROBJ@@QEAA@XZ.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C016E188 (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall GreGetTextExtentW(HDC a1, unsigned __int16 *a2, unsigned int a3, struct tagSIZE *a4, char a5)
{
  unsigned int v8; // ebx
  _DWORD *v9; // r11
  int v10; // esi
  float cy; // xmm1_4
  __m128i v12; // xmm0
  __int64 v14; // [rsp+98h] [rbp-80h] BYREF
  float cx; // [rsp+A0h] [rbp-78h] BYREF
  float v16; // [rsp+A4h] [rbp-74h] BYREF
  float *v17[2]; // [rsp+A8h] [rbp-70h] BYREF
  DC *v18[2]; // [rsp+B8h] [rbp-60h] BYREF
  _BYTE v19[32]; // [rsp+C8h] [rbp-50h] BYREF
  int v20; // [rsp+E8h] [rbp-30h] BYREF
  __int128 v21; // [rsp+ECh] [rbp-2Ch] BYREF
  __int128 v22; // [rsp+FCh] [rbp-1Ch]
  _BYTE v23[320]; // [rsp+118h] [rbp+0h] BYREF

  v8 = 0;
  if ( a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v18, a1);
    if ( v18[0] )
    {
      v14 = 0LL;
      if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v14, (struct XDCOBJ *)v18, 0, (a5 & 2) != 0 ? 4 : 2) )
        GreAcquireSemaphore(*(_QWORD *)(v14 + 504));
      v9 = (_DWORD *)v14;
      if ( v14 )
      {
        if ( (*(_DWORD *)(v14 + 84) & 4) != 0 )
          RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v14, a2, a3);
        v10 = *((_DWORD *)v18[0] + 441);
        if ( v10 == v9[98] || v9[52] == 1 && (v9[179] & 4) == 0 )
        {
          v8 = RFONTOBJ::bTextExtent(
                 (RFONTOBJ *)&v14,
                 (struct XDCOBJ *)v18,
                 a2,
                 a3,
                 v10,
                 *(_DWORD *)(*((_QWORD *)v18[0] + 122) + 280LL),
                 *(_DWORD *)(*((_QWORD *)v18[0] + 122) + 284LL),
                 *(_DWORD *)(*((_QWORD *)v18[0] + 122) + 288LL),
                 a5,
                 a4);
          if ( v8
            && v10
            && *(_DWORD *)(*((_QWORD *)v18[0] + 122) + 208LL) == 1
            && !(unsigned int)DC::bUseMetaPtoD(v18[0])
            && (*(_DWORD *)(v14 + 716) & 4) != 0 )
          {
            cy = (float)a4->cy;
            cx = (float)a4->cx;
            v12 = (__m128i)COERCE_UNSIGNED_INT((float)v10);
            v16 = cy;
            *(float *)v12.m128i_i32 = *(float *)v12.m128i_i32 / 10.0;
            v21 = 0LL;
            v22 = 0LL;
            v20 = efCos((unsigned int)_mm_cvtsi128_si32(v12));
            EFLOAT::vAbs((EFLOAT *)&v20);
            DWORD2(v21) = v20;
            LODWORD(v21) = efSin((unsigned int)_mm_cvtsi128_si32(v12));
            EFLOAT::vAbs((EFLOAT *)&v21);
            HIDWORD(v21) = 0;
            LODWORD(v22) = 0;
            DWORD1(v21) = v21;
            EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v17, (struct MATRIX *)&v20, 0x21u);
            v8 = 1;
            if ( ((_DWORD)v17[0][8] & 2) == 0 )
              v8 = EXFORMOBJ::bXform((EXFORMOBJ *)v17, (struct VECTORFL *)&cx, (struct VECTORFL *)&cx, 1uLL);
            if ( v8 )
            {
              EFLOAT::vAbs((EFLOAT *)&cx);
              EFLOAT::vAbs((EFLOAT *)&v16);
              v8 = EPOINTFL::bToPOINTL((EPOINTFL *)&cx, (struct _POINTL *)a4);
            }
          }
        }
        else
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v17, (struct XDCOBJ *)v18, 0x204u);
          ESTROBJ::vInit(
            (ESTROBJ *)v23,
            a2,
            a3,
            (struct XDCOBJ *)v18,
            (struct RFONTOBJ *)&v14,
            v17,
            0LL,
            0,
            v10,
            *(_DWORD *)(*((_QWORD *)v18[0] + 122) + 280LL),
            *(_DWORD *)(*((_QWORD *)v18[0] + 122) + 284LL),
            *(_DWORD *)(*((_QWORD *)v18[0] + 122) + 288LL),
            0,
            0,
            0,
            0LL,
            0LL,
            0);
          if ( (v23[232] & 4) != 0 )
            v8 = ESTROBJ::bTextExtent((ESTROBJ *)v23, (struct RFONTOBJ *)&v14, v10, a4);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v23);
        }
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
    }
    MDCOBJ::~MDCOBJ((MDCOBJ *)v18);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v19);
  }
  else
  {
    *a4 = 0LL;
    return 1;
  }
  return v8;
}
