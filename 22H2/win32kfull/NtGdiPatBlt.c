/*
 * XREFs of NtGdiPatBlt @ 0x1C00DBEF0
 * Callers:
 *     DrawThumb2 @ 0x1C0014D68 (DrawThumb2.c)
 *     EraseBitmap @ 0x1C006EC78 (EraseBitmap.c)
 *     xxxDrawCaptionBar @ 0x1C00C689C (xxxDrawCaptionBar.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C00DF680 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     GreStretchBltInternal @ 0x1C00FF3A0 (GreStretchBltInternal.c)
 *     xxxSoundSentry @ 0x1C01F6208 (xxxSoundSentry.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C022913C (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0233A28 (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0233E30 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     MNEraseBackground @ 0x1C0234904 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C023534C (xxxMNDrawFullNC.c)
 *     xxxPaintMenuBar @ 0x1C023668C (xxxPaintMenuBar.c)
 *     xxxDrawState @ 0x1C023F6F0 (xxxDrawState.c)
 *     DxgkEngColorFillViaGDI @ 0x1C026FAC0 (DxgkEngColorFillViaGDI.c)
 * Callees:
 *     GreMaskBlt @ 0x1C001C9BC (GreMaskBlt.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001E590 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C002C900 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00311EC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00DC2A8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00E0C40 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     bCvtPts1 @ 0x1C00F7380 (bCvtPts1.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0101D80 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C011CD7C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E4C0 (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiPatBlt(HDC a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v7; // ebx
  int v11; // edi
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  DC *v15; // rcx
  struct SURFACE *v16; // rsi
  __int64 v17; // rdx
  unsigned int locked; // eax
  struct _DC_ATTR *UserAttr; // rax
  __int64 v20; // rdi
  int v22; // [rsp+70h] [rbp-90h] BYREF
  DC *v23; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h]
  _BYTE v25[32]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-58h] BYREF
  int v27; // [rsp+B4h] [rbp-4Ch]
  __int128 v28; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+D0h] [rbp-30h]
  int v30; // [rsp+D8h] [rbp-28h]
  _QWORD v31[2]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v32[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]
  __int64 v35; // [rsp+120h] [rbp+20h]
  __int64 v36; // [rsp+128h] [rbp+28h]
  _DWORD v37[2]; // [rsp+130h] [rbp+30h] BYREF
  int v38; // [rsp+138h] [rbp+38h]
  int v39; // [rsp+13Ch] [rbp+3Ch]

  v23 = 0LL;
  v7 = 0;
  v24 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v25);
  XDCOBJ::vLock((XDCOBJ *)&v23, a1);
  if ( v23 )
  {
    v11 = (BYTE2(a6) << 8) | BYTE2(a6);
    if ( ((BYTE2(a6) ^ (unsigned __int8)(4 * BYTE2(a6))) & 0xCC) == 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v26, (struct XDCOBJ *)&v23, 516);
      v7 = 1;
      v12 = *(_DWORD *)(v26 + 32);
      if ( (v12 & 1) == 0 )
      {
        v7 = GreMaskBlt(a1, a2, a3, a4, a5, 0LL, 0, 0, 0LL, 0, 0, v11 << 16, 0);
        goto LABEL_24;
      }
      v37[1] = a3;
      v13 = a4 + a2;
      v14 = a2;
      v37[0] = a2;
      v38 = a4 + a2;
      v39 = a5 + a3;
      if ( (v12 & 0x43) != 0x43 )
      {
        bCvtPts1(v26, v37, 2LL);
        v13 = v38;
        v14 = v37[0];
      }
      if ( v27 )
      {
        v37[0] = v14 + 1;
        v38 = v13 + 1;
      }
      ERECTL::vOrder((ERECTL *)v37);
      if ( !ERECTL::bEmpty((ERECTL *)v37) )
      {
        if ( (*((_DWORD *)v23 + 9) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)&v23, (struct ERECTL *)v37);
        if ( ((gajRop3[BYTE2(a6)] | gajRop3[(unsigned __int64)((BYTE2(a6) << 8) | (unsigned int)BYTE2(a6)) >> 8]) & 0xB2) != 0 )
          bSpDwmValidateSurface((struct XDCOBJ *)&v23, a2, a3, a4, a5);
        v31[0] = 0LL;
        v31[1] = 0LL;
        UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v32);
        v33 = 256;
        v28 = 0LL;
        v29 = 0LL;
        v30 = 0;
        v31[0] = 0LL;
        v36 = 0LL;
        v35 = 0LL;
        v34 = 0LL;
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v28, (struct XDCOBJ *)&v23, 0) )
        {
          v15 = v23;
          v16 = (struct SURFACE *)*((_QWORD *)v23 + 62);
          if ( !v16 )
          {
LABEL_20:
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v28);
            if ( v31[0] )
              DLODCOBJ::vUnlock((DLODCOBJ *)v31);
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v32);
            goto LABEL_24;
          }
          v17 = *((_QWORD *)v23 + 122);
          if ( (*(_DWORD *)(v17 + 152) & 0x1000) != 0 )
          {
            GreDCSelectBrush(v23, *(_QWORD *)(v17 + 160));
            v15 = v23;
          }
          locked = GrePatBltLockedDC(
                     (struct XDCOBJ *)&v23,
                     (struct EXFORMOBJ *)*(unsigned int *)(*((_QWORD *)v15 + 122) + 188LL),
                     (struct ERECTL *)v37,
                     v11,
                     v16,
                     *(_DWORD *)(*((_QWORD *)v15 + 122) + 184LL),
                     *(_DWORD *)(*((_QWORD *)v15 + 122) + 176LL),
                     *(_DWORD *)(*((_QWORD *)v15 + 122) + 188LL),
                     *(_DWORD *)(*((_QWORD *)v15 + 122) + 180LL));
        }
        else
        {
          locked = XDCOBJ::bFullScreen((XDCOBJ *)&v23);
        }
        v7 = locked;
        goto LABEL_20;
      }
    }
  }
LABEL_24:
  if ( v23 )
  {
    if ( (_DWORD)v24 && (*((_DWORD *)v23 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v24) )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v23);
        if ( UserAttr )
          DC::RestoreAttributes(v23, UserAttr);
      }
      *((_DWORD *)v23 + 11) &= ~2u;
      LODWORD(v24) = 0;
    }
    v22 = 0;
    v20 = *(_QWORD *)v23;
    HmgDecrementExclusiveReferenceCountEx(v23, HIDWORD(v24), &v22);
    if ( v22 )
      GrepDeleteDC(v20, 0x2000000LL);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v25);
  return v7;
}
