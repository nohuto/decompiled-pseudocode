/*
 * XREFs of DrawFrameControl @ 0x1C00BF6FC
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C00BF48C (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00C3E78 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241180 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     MNDrawArrow @ 0x1C0247A88 (MNDrawArrow.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x1C00131E4 (GreCreateFontIndirectW.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C00BAA6C (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     GreGetTextAlign @ 0x1C00BCFE4 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C00BD1B8 (GreSetTextAlign.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C00BD30C (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     ?DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C00BD428 (-DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C00BD7A4 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C00BDAC4 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     GreSetBkMode @ 0x1C00BFC20 (GreSetBkMode.c)
 *     GreGetLayout @ 0x1C00C1400 (GreGetLayout.c)
 *     DrawPushButton @ 0x1C00C16F0 (DrawPushButton.c)
 *     GrePolyPatBlt @ 0x1C00C1D4C (GrePolyPatBlt.c)
 *     ?GetCaptionChar@@YAGI@Z @ 0x1C00C1FC4 (-GetCaptionChar@@YAGI@Z.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     GreSetGraphicsMode @ 0x1C02BEBA8 (GreSetGraphicsMode.c)
 */

_BOOL8 __fastcall DrawFrameControl(HDC a1, struct tagRECT *a2, int a3, int a4)
{
  int v8; // r14d
  int TextAlign; // r15d
  int v10; // ecx
  unsigned int v11; // edi
  int v12; // r12d
  __int64 FontIndirectW; // r12
  unsigned __int16 CaptionChar; // ax
  BOOL v15; // edi
  LONG top; // edx
  int v18; // eax
  int v19; // eax
  RECT v20; // [rsp+30h] [rbp-69h] BYREF
  __int64 v21; // [rsp+40h] [rbp-59h]
  _DWORD v22[4]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v23; // [rsp+58h] [rbp-41h]
  _DWORD v24[36]; // [rsp+60h] [rbp-39h] BYREF
  int v25; // [rsp+118h] [rbp+7Fh]

  v25 = 0;
  v20 = *a2;
  v8 = 0;
  TextAlign = 0;
  if ( (GreGetLayout(a1) & 1) != 0 )
  {
    v8 = GreSetGraphicsMode(a1);
    if ( v8 )
    {
      TextAlign = GreGetTextAlign(a1);
      if ( (TextAlign & 6) != 6 )
        GreSetTextAlign(a1, TextAlign ^ 2);
    }
  }
  v10 = a4 | 0x8000;
  if ( *(_WORD *)(gpsi + 6996LL) != 1 )
    v10 = a4;
  v11 = v10 | 0x4000;
  if ( (v10 & 0x8000) == 0 )
    v11 = v10;
  if ( a3 != 2 && a3 != 5 && (a3 != 4 || (v11 & 0x10) != 0) && (a3 != 3 || (v11 & 0x18) == 0) )
  {
    DrawPushButton(a1);
    if ( (v11 & 0x2000) != 0 )
      *a2 = v20;
    v25 = 1;
  }
  if ( (unsigned int)GreSetBkMode(a1) )
  {
    v12 = v20.right - v20.left;
    if ( v20.right - v20.left >= v20.bottom - v20.top )
      v12 = v20.bottom - v20.top;
    if ( v12 > 0 )
    {
      memset(v24, 0, 0x5CuLL);
      v24[0] = v12;
      v24[4] = 400;
      *(_OWORD *)&v24[7] = *(_OWORD *)L"Marlett";
      HIBYTE(v24[5]) = 2;
      FontIndirectW = GreCreateFontIndirectW((__int64)v24, 0);
      v21 = GreSelectFontInternal(a1);
      if ( v25 )
      {
        if ( a3 == 1 )
        {
          CaptionChar = GetCaptionChar(v11);
          DrawIt(a1, &v20, v11, CaptionChar);
        }
        else
        {
          if ( a3 != 3 )
          {
            v15 = a3 == 4;
            goto LABEL_21;
          }
          DrawScrollArrow(a1, &v20, v11);
        }
      }
      else if ( a3 == 2 || a3 == 5 )
      {
        if ( (v11 & 0x18) != 0 )
        {
          if ( (v11 & 0x800) == 0 )
          {
            top = a2->top;
            v18 = a2->right - a2->left;
            v22[0] = a2->left;
            v22[2] = v18;
            v19 = a2->bottom - top;
            v22[1] = top;
            v22[3] = v19;
            v23 = *(_QWORD *)(gpsi + 4728LL);
            GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v22, 1u);
          }
          DrawScrollArrow(a1, &v20, ((v11 >> 3) & 1) == 0);
          v15 = 1;
          goto LABEL_21;
        }
        DrawMenuMark(a1, &v20, a3, v11);
      }
      else if ( a3 == 4 )
      {
        DrawBox(a1, &v20, v11);
      }
      else
      {
        DrawGrip(a1, a2, v11);
      }
      v15 = 1;
LABEL_21:
      if ( v8 )
      {
        GreSetGraphicsMode(a1);
        GreSetTextAlign(a1, TextAlign);
      }
      GreSetBkMode(a1);
      GreSelectFontInternal(a1);
      GreDeleteObject(FontIndirectW);
      return v15;
    }
  }
  if ( v8 )
  {
    GreSetGraphicsMode(a1);
    GreSetTextAlign(a1, TextAlign);
  }
  return 0LL;
}
