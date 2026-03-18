/*
 * XREFs of DrawFrameControl @ 0x1C01197C0
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0014A74 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C01159A0 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0229B1C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     MNDrawArrow @ 0x1C0234654 (MNDrawArrow.c)
 * Callees:
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C0026364 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     ?DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0027374 (-DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0027824 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C0027B88 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     DrawPushButton @ 0x1C00286BC (DrawPushButton.c)
 *     GrePolyPatBlt @ 0x1C0029770 (GrePolyPatBlt.c)
 *     ?GetCaptionChar@@YAGI@Z @ 0x1C00AD408 (-GetCaptionChar@@YAGI@Z.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C00AF110 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     vConvertLogFontW @ 0x1C0115940 (vConvertLogFontW.c)
 *     GreSetBkMode @ 0x1C0115C14 (GreSetBkMode.c)
 *     cCapString @ 0x1C0116A58 (cCapString.c)
 *     GreSelectFontInternal @ 0x1C0119F34 (GreSelectFontInternal.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C011CB30 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C02651D4 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0266BBC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     GreGetTextAlign @ 0x1C02D7C60 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C02D7D04 (GreSetTextAlign.c)
 *     GreSetGraphicsMode @ 0x1C02DDCEC (GreSetGraphicsMode.c)
 */

_BOOL8 __fastcall DrawFrameControl(HDC a1, struct tagRECT *a2, int a3, int a4)
{
  RECT v4; // xmm0
  struct tagRECT *v8; // r13
  int v9; // r12d
  int v10; // esi
  DC *v11; // rcx
  struct _DC_ATTR *UserAttr; // rax
  struct _DC_ATTR *v13; // rax
  __int64 v14; // rdi
  int v15; // ecx
  unsigned int v16; // edi
  __int16 v17; // r9
  int v18; // r13d
  DC *v19; // rcx
  struct _DC_ATTR *v20; // rax
  DC *v21; // rcx
  __int64 v22; // rax
  struct _DC_ATTR *v23; // rax
  __int64 v24; // rsi
  int v25; // esi
  unsigned int v27; // r15d
  __int64 Object; // rsi
  Gre::Base *v29; // rcx
  struct HOBJ__ *inserted; // r15
  __int64 v31; // rsi
  LONG top; // edx
  int v33; // eax
  int v34; // eax
  BOOL v35; // edi
  __int16 CaptionChar; // ax
  int v37; // [rsp+20h] [rbp-E0h]
  int v38; // [rsp+38h] [rbp-C8h] BYREF
  int v39; // [rsp+3Ch] [rbp-C4h] BYREF
  int v40; // [rsp+40h] [rbp-C0h]
  RECT v41; // [rsp+48h] [rbp-B8h] BYREF
  struct tagRECT *v42; // [rsp+58h] [rbp-A8h]
  DC *v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h]
  _BYTE v45[32]; // [rsp+70h] [rbp-90h] BYREF
  DC *v46; // [rsp+90h] [rbp-70h] BYREF
  __int64 v47; // [rsp+98h] [rbp-68h]
  _BYTE v48[32]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v49[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v50; // [rsp+D0h] [rbp-30h]
  _BYTE v51[32]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v52; // [rsp+F8h] [rbp-8h]
  _DWORD v53[5]; // [rsp+100h] [rbp+0h] BYREF
  char v54; // [rsp+117h] [rbp+17h]
  __int128 v55; // [rsp+11Ch] [rbp+1Ch]
  _BYTE Src[12]; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v57; // [rsp+16Ch] [rbp+6Ch]
  WCHAR v58[162]; // [rsp+17Ch] [rbp+7Ch] BYREF
  unsigned int v59; // [rsp+2C0h] [rbp+1C0h]

  v4 = *a2;
  v42 = a2;
  v40 = 0;
  v41 = v4;
  v46 = 0LL;
  v8 = a2;
  v47 = 0LL;
  v9 = 0;
  LOBYTE(v10) = -1;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v48);
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v46, a1);
  v11 = v46;
  if ( !v46 )
    goto LABEL_22;
  if ( (*((_DWORD *)v46 + 11) & 2) == 0 )
  {
    if ( !HIDWORD(v47) )
    {
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v46);
      if ( UserAttr && !DC::SaveAttributes(v46, UserAttr) )
      {
        v11 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)v46 + 3);
        v46 = 0LL;
        goto LABEL_13;
      }
      v11 = v46;
    }
    *((_DWORD *)v11 + 11) |= 2u;
    LODWORD(v47) = 1;
    v11 = v46;
  }
  if ( (*((_DWORD *)v11 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v11);
    v11 = v46;
  }
  if ( v11 )
  {
    v10 = *(_DWORD *)(*((_QWORD *)v11 + 122) + 108LL);
LABEL_13:
    if ( v11 )
    {
      if ( (_DWORD)v47 && (*((_DWORD *)v11 + 11) & 2) != 0 )
      {
        if ( !HIDWORD(v47) )
        {
          v13 = XDCOBJ::GetUserAttr((XDCOBJ *)&v46);
          v11 = v46;
          if ( v13 )
          {
            DC::RestoreAttributes(v46, v13);
            v11 = v46;
          }
        }
        *((_DWORD *)v11 + 11) &= ~2u;
        v11 = v46;
        LODWORD(v47) = 0;
      }
      v38 = 0;
      v14 = *(_QWORD *)v11;
      HmgDecrementExclusiveReferenceCountEx(v11, HIDWORD(v47), &v38);
      if ( v38 )
        GrepDeleteDC(v14, 0x2000000LL);
    }
  }
LABEL_22:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v48);
  if ( (v10 & 1) != 0 )
  {
    v9 = GreSetGraphicsMode(a1);
    if ( v9 )
    {
      if ( (GreGetTextAlign(a1) & 6) != 6 )
        GreSetTextAlign(a1);
      v8 = v42;
    }
  }
  v15 = a4 | 0x8000;
  if ( *(_WORD *)(gpsi + 6996LL) != 1 )
    v15 = a4;
  v16 = v15 | 0x4000;
  if ( (v15 & 0x8000) == 0 )
    v16 = v15;
  if ( a3 != 2 && a3 != 5 && (a3 != 4 || (v16 & 0x10) != 0) && (a3 != 3 || (v16 & 0x18) == 0) )
  {
    v17 = 12288;
    if ( a3 == 3 )
      v17 = 0x2000;
    DrawPushButton(a1, &v41, v16, v16 & 0xC000 | v17);
    if ( (v16 & 0x2000) != 0 )
      *v8 = v41;
    v40 = 1;
  }
  v43 = 0LL;
  v18 = 0;
  v44 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v45);
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v43, a1);
  v19 = v43;
  if ( v43 )
  {
    if ( (*((_DWORD *)v43 + 11) & 2) == 0 )
    {
      if ( !HIDWORD(v44) )
      {
        v20 = XDCOBJ::GetUserAttr((XDCOBJ *)&v43);
        if ( v20 && !DC::SaveAttributes(v43, v20) )
        {
          v21 = 0LL;
          _InterlockedDecrement((volatile signed __int32 *)v43 + 3);
          v43 = 0LL;
          goto LABEL_54;
        }
        v19 = v43;
      }
      *((_DWORD *)v19 + 11) |= 2u;
      v19 = v43;
      LODWORD(v44) = 1;
    }
    if ( (*((_DWORD *)v19 + 130) & 4) != 0 )
    {
      DC::vMarkTransformDirty(v19);
      v19 = v43;
    }
    if ( v19 )
    {
      v22 = *((_QWORD *)v19 + 122);
      v18 = *(_DWORD *)(v22 + 224);
      *(_DWORD *)(v22 + 224) = 1;
      *(_BYTE *)(*((_QWORD *)v43 + 122) + 213LL) = 1;
      v21 = v43;
LABEL_54:
      if ( v21 )
      {
        if ( (_DWORD)v44 && (*((_DWORD *)v21 + 11) & 2) != 0 )
        {
          if ( !HIDWORD(v44) )
          {
            v23 = XDCOBJ::GetUserAttr((XDCOBJ *)&v43);
            v21 = v43;
            if ( v23 )
            {
              DC::RestoreAttributes(v43, v23);
              v21 = v43;
            }
          }
          *((_DWORD *)v21 + 11) &= ~2u;
          v21 = v43;
          LODWORD(v44) = 0;
        }
        v39 = 0;
        v24 = *(_QWORD *)v21;
        HmgDecrementExclusiveReferenceCountEx(v21, HIDWORD(v44), &v39);
        if ( v39 )
          GrepDeleteDC(v24, 0x2000000LL);
      }
    }
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v45);
  if ( !v18 )
    goto LABEL_67;
  v25 = v41.right - v41.left;
  if ( v41.right - v41.left >= v41.bottom - v41.top )
    v25 = v41.bottom - v41.top;
  if ( v25 <= 0 )
  {
LABEL_67:
    if ( v9 )
    {
      GreSetGraphicsMode(a1);
      GreSetTextAlign(a1);
    }
    return 0LL;
  }
  memset_0(v53, 0, 0x5CuLL);
  v53[0] = v25;
  v53[4] = 400;
  v54 = 2;
  v55 = *(_OWORD *)L"Marlett";
  memset_0(Src, 0, 0x1A4uLL);
  vConvertLogFontW((__int64)Src, (__int64)v53);
  if ( v59 > 0x10 )
    goto LABEL_80;
  v27 = 4 * v59 + 356;
  Object = AllocateObject(4 * v59 + 632, 10LL, 0LL);
  if ( !Object )
    goto LABEL_80;
  *(_QWORD *)(Object + 24) = 0LL;
  *(_DWORD *)(Object + 272) = v27;
  memmove((void *)(Object + 276), Src, v27);
  *(_DWORD *)(Object + 32) = 0;
  *(_DWORD *)(Object + 36) = *(_DWORD *)(*((_QWORD *)Gre::Base::Globals(v29) + 241) + 1573016LL);
  cCapString((WCHAR *)(Object + 208), v58, 32);
  v57 = lNormAngle(v57);
  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v51);
  if ( v52 || (inserted = HmgInsertObjectInternal((void *)Object, 1u, 0xAu)) == 0LL )
  {
    FreeObject(Object, 10LL);
    if ( v52 )
      _InterlockedDecrement((volatile signed __int32 *)(v52 + 12));
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v51);
LABEL_80:
    inserted = 0LL;
    goto LABEL_81;
  }
  v52 = Object;
  *(_QWORD *)(HmgPentryFromPobj(Object) + 16) = 0LL;
  if ( v52 )
    _InterlockedDecrement((volatile signed __int32 *)(v52 + 12));
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v51);
LABEL_81:
  v31 = GreSelectFontInternal(a1, inserted, 1LL);
  if ( v40 )
  {
    if ( a3 == 1 )
    {
      CaptionChar = GetCaptionChar(v16);
      DrawIt(a1, &v41, v16, CaptionChar);
    }
    else
    {
      if ( a3 != 3 )
      {
        v35 = a3 == 4;
        goto LABEL_98;
      }
      DrawScrollArrow(a1, &v41, v16);
    }
  }
  else if ( a3 == 2 || a3 == 5 )
  {
    if ( (v16 & 0x18) != 0 )
    {
      if ( (v16 & 0x800) == 0 )
      {
        top = v42->top;
        v33 = v42->right - v42->left;
        v49[0] = v42->left;
        v49[2] = v33;
        v34 = v42->bottom - top;
        v49[1] = top;
        v49[3] = v34;
        v50 = *(_QWORD *)(gpsi + 4728LL);
        GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v49, 1u, v37);
      }
      DrawScrollArrow(a1, &v41, ((v16 >> 3) & 1) == 0);
      v35 = 1;
      goto LABEL_98;
    }
    DrawMenuMark(a1, &v41, a3, v16);
  }
  else if ( a3 == 4 )
  {
    DrawBox(a1, &v41, v16);
  }
  else
  {
    DrawGrip(a1, v42, v16);
  }
  v35 = 1;
LABEL_98:
  if ( v9 )
  {
    GreSetGraphicsMode(a1);
    GreSetTextAlign(a1);
  }
  GreSetBkMode(a1, v18);
  GreSelectFontInternal(a1, v31, 1LL);
  GreDeleteObject(inserted);
  return v35;
}
