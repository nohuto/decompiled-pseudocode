/*
 * XREFs of NtGdiPatBlt @ 0x1C00B42B0
 * Callers:
 *     EraseBitmap @ 0x1C00296A4 (EraseBitmap.c)
 *     GreStretchDIBitsInternal @ 0x1C00AE0CC (GreStretchDIBitsInternal.c)
 *     GreStretchBltInternal @ 0x1C00B4D10 (GreStretchBltInternal.c)
 *     xxxDrawCaptionBar @ 0x1C00DCE08 (xxxDrawCaptionBar.c)
 *     xxxPaintMenuBar @ 0x1C0102100 (xxxPaintMenuBar.c)
 *     DrawThumb2 @ 0x1C0158244 (DrawThumb2.c)
 *     xxxSoundSentry @ 0x1C015DA30 (xxxSoundSentry.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C02447F8 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C024BD68 (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C024BFE4 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     MNEraseBackground @ 0x1C024C8FC (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C024CA44 (xxxMNDrawFullNC.c)
 *     xxxDrawState @ 0x1C0250D44 (xxxDrawState.c)
 *     DxgkEngColorFillViaGDI @ 0x1C0277590 (DxgkEngColorFillViaGDI.c)
 * Callees:
 *     bCvtPts1 @ 0x1C0084CF0 (bCvtPts1.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0087D58 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACD0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C00B3804 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B4CCC (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     GreMaskBlt @ 0x1C010979C (GreMaskBlt.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A69C (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C016A9F8 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall NtGdiPatBlt(HDC a1, LONG a2, LONG a3, int a4, int a5, int a6)
{
  unsigned int v9; // ebx
  __int64 v10; // rsi
  unsigned int v11; // edi
  int v12; // r14d
  unsigned __int64 v13; // rax
  int v14; // r10d
  LONG v15; // r8d
  int v16; // r11d
  LONG v17; // ecx
  LONG v18; // edx
  LONG v19; // r9d
  LONG v20; // eax
  LONG v21; // eax
  __int64 v22; // rcx
  struct SURFACE *v23; // rsi
  __int64 v24; // rdx
  unsigned int locked; // eax
  __int64 v28; // [rsp+78h] [rbp-88h] BYREF
  int v29; // [rsp+80h] [rbp-80h]
  int v30; // [rsp+84h] [rbp-7Ch]
  _QWORD v31[7]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v32; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v33; // [rsp+D0h] [rbp-30h]
  int v34; // [rsp+D8h] [rbp-28h]
  _QWORD v35[2]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v36[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  __int64 v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  LONG v41; // [rsp+130h] [rbp+30h] BYREF
  LONG v42; // [rsp+134h] [rbp+34h]
  int v43; // [rsp+138h] [rbp+38h]
  LONG v44; // [rsp+13Ch] [rbp+3Ch]

  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v31, a1);
  v10 = v31[0];
  if ( v31[0] )
  {
    v11 = (BYTE2(a6) << 8) | BYTE2(a6);
    if ( ((BYTE2(a6) ^ (unsigned __int8)(4 * BYTE2(a6))) & 0xCC) == 0 )
    {
      v9 = 1;
      v29 = *(_DWORD *)(*(_QWORD *)(v31[0] + 976LL) + 208LL);
      v12 = *(_DWORD *)(*(_QWORD *)(v31[0] + 976LL) + 108LL) & 1;
      v30 = v12;
      if ( (*(_DWORD *)(*(_QWORD *)(v31[0] + 976LL) + 340LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v28, (struct XDCOBJ *)v31, 0x204u, 0);
        v13 = v28;
        v10 = v31[0];
        v12 = v30;
      }
      else
      {
        v13 = v31[0] + 320LL;
        v28 = v31[0] + 320LL;
      }
      v14 = *(_DWORD *)(v13 + 32);
      v15 = a3;
      if ( (v14 & 1) == 0 )
      {
        v9 = GreMaskBlt(a1, a5, 0LL, 0, 0, 0LL, 0, 0, v11 << 16, 0);
        goto LABEL_34;
      }
      v16 = a4;
      v17 = a2;
      v41 = a2;
      v42 = a3;
      v18 = a4 + a2;
      v43 = a4 + a2;
      v19 = a3 + a5;
      v44 = a3 + a5;
      if ( (v14 & 0x43) != 0x43 )
      {
        bCvtPts1(v13, &v41, 2LL);
        v19 = v44;
        v18 = v43;
        v15 = v42;
        v17 = v41;
        v16 = a4;
      }
      if ( v12 )
      {
        ++v17;
        ++v18;
        v41 = v17;
        v43 = v18;
      }
      if ( v17 > v18 )
      {
        v20 = v17;
        v41 = v18;
        v17 = v18;
        v43 = v20;
        v18 = v20;
      }
      if ( v15 > v19 )
      {
        v21 = v15;
        v42 = v19;
        v15 = v19;
        v44 = v21;
        v19 = v21;
      }
      if ( v17 != v18 && v15 != v19 )
      {
        if ( (*(_DWORD *)(v10 + 36) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)v31, (struct ERECTL *)&v41);
        if ( ((gajRop3[BYTE2(a6)] | gajRop3[(unsigned __int64)((BYTE2(a6) << 8) | (unsigned int)BYTE2(a6)) >> 8]) & 0xB2) != 0 )
          bSpDwmValidateSurface((struct XDCOBJ *)v31, a2, a3, v16, a5);
        v35[0] = 0LL;
        v35[1] = 0LL;
        UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v36);
        v37 = 256;
        v32 = 0LL;
        v33 = 0LL;
        v34 = 0;
        v35[0] = 0LL;
        v40 = 0LL;
        v39 = 0LL;
        v38 = 0LL;
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v32, (struct XDCOBJ *)v31, 0) )
        {
          v22 = v31[0];
          v23 = *(struct SURFACE **)(v31[0] + 496LL);
          if ( !v23 )
          {
LABEL_28:
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v32);
            if ( v35[0] )
            {
              if ( (_BYTE)v37 )
              {
                *(_DWORD *)(v35[0] + 40LL) &= ~2u;
                LOBYTE(v37) = 0;
              }
              XDCOBJ::vUnlock((XDCOBJ *)v35);
            }
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v36);
            goto LABEL_34;
          }
          v24 = *(_QWORD *)(v31[0] + 976LL);
          if ( (*(_DWORD *)(v24 + 152) & 0x1000) != 0 )
          {
            GreDCSelectBrush(v31[0], *(_QWORD *)(v24 + 160));
            v22 = v31[0];
          }
          locked = GrePatBltLockedDC(
                     (__int64)v31,
                     (struct EXFORMOBJ *)*(unsigned int *)(*(_QWORD *)(v22 + 976) + 188LL),
                     (struct ERECTL *)&v41,
                     v11,
                     v23,
                     *(_DWORD *)(*(_QWORD *)(v22 + 976) + 184LL),
                     *(_DWORD *)(*(_QWORD *)(v22 + 976) + 176LL),
                     *(_DWORD *)(*(_QWORD *)(v22 + 976) + 188LL),
                     *(_DWORD *)(*(_QWORD *)(v22 + 976) + 180LL));
        }
        else
        {
          locked = XDCOBJ::bFullScreen((XDCOBJ *)v31);
        }
        v9 = locked;
        goto LABEL_28;
      }
    }
  }
LABEL_34:
  DCOBJ::~DCOBJ((DCOBJ *)v31);
  return v9;
}
