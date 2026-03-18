/*
 * XREFs of GreSelectFontInternal @ 0x1C00BFA08
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0034690 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C00B97AC (xxxDrawCaptionTemp.c)
 *     CreateCompatiblePublicDC @ 0x1C00BA240 (CreateCompatiblePublicDC.c)
 *     xxxMenuDraw @ 0x1C00BD4E0 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C00BE508 (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x1C00BEB88 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00BF15C (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     DrawFrameControl @ 0x1C00BF6FC (DrawFrameControl.c)
 *     NtGdiSelectFont @ 0x1C00BF9F0 (NtGdiSelectFont.c)
 *     ValidateExternalLogFont @ 0x1C00C3544 (ValidateExternalLogFont.c)
 *     xxxSetNCFonts @ 0x1C00C3874 (xxxSetNCFonts.c)
 *     FinalUserInit @ 0x1C00D43C4 (FinalUserInit.c)
 *     MNSetupAnimationDC @ 0x1C00D4628 (MNSetupAnimationDC.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C00EF7F8 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     _ServerFixupMenuDC @ 0x1C00F4650 (_ServerFixupMenuDC.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C010D224 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C011CE5C (xxxDrawMenuBarUnderlines.c)
 *     CreateScaledFont @ 0x1C01E4B98 (CreateScaledFont.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C021CC64 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0225AF0 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C023E474 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C023EB00 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxMNInvertItem @ 0x1C0248188 (xxxMNInvertItem.c)
 *     ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C024DBB0 (-SelectFont@@YAXPEAU_SELECT_FONT@@@Z.c)
 *     xxxDrawState @ 0x1C024DD1C (xxxDrawState.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C015D3B4 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 *     ??0?$HmgShareLockResult@VLFONT@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C015F29C (--0-$HmgShareLockResult@VLFONT@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VLFONT@@@@QEAA@XZ @ 0x1C015F2FC (--1-$HmgShareLockResult@VLFONT@@@@QEAA@XZ.c)
 *     ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C015F320 (--B-$HmgLockResultBase@VMETA@@@@QEBA_NXZ.c)
 */

__int64 __fastcall GreSelectFontInternal(HDC a1, __int64 a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 *v7; // rcx
  int IsEnabled; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  struct LFONT *v13; // rdi
  _QWORD v15[5]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v16[7]; // [rsp+48h] [rbp-38h] BYREF

  v5 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  v6 = v16[0];
  if ( v16[0] )
  {
    if ( !a3 )
    {
      if ( (*(_DWORD *)(HmgPentryFromPobj(v16[0]) + 8) & 0xFFFFFFFE) == 0 )
        goto LABEL_19;
      v6 = v16[0];
    }
    v7 = *(__int64 **)(v6 + 152);
    if ( v7 )
      v5 = *v7;
    if ( a2 != v5 )
    {
      IsEnabled = Feature_3101493560__private_IsEnabled();
      LOBYTE(v9) = 10;
      if ( !IsEnabled )
      {
        v12 = HmgShareLockCheck(a2, v9);
        v13 = (struct LFONT *)v12;
        if ( v12 )
        {
          if ( (*(_BYTE *)(HmgPentryFromPobj(v12) + 15) & 2) == 0 )
          {
            DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)(v16[0] + 152LL));
            *(_QWORD *)(v16[0] + 152LL) = v13;
            *(_QWORD *)(*(_QWORD *)(v16[0] + 976LL) + 296LL) = a2;
            *(_QWORD *)(v16[0] + 1744LL) = 0LL;
            *(_DWORD *)(*(_QWORD *)(v16[0] + 976LL) + 152LL) |= 0x10u;
            *(_DWORD *)(*(_QWORD *)(v16[0] + 976LL) + 152LL) &= ~0x20u;
            goto LABEL_19;
          }
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v13);
        }
        v5 = 0LL;
        goto LABEL_19;
      }
      v10 = HmgShareLockCheck(a2, v9);
      HmgShareLockResult<LFONT>::HmgShareLockResult<LFONT>(v15, v10);
      if ( !(unsigned __int8)HmgLockResultBase<META>::operator bool(v15)
        || (*(_BYTE *)(HmgPentryFromPobj(v15[0]) + 15) & 2) != 0 )
      {
        v5 = 0LL;
      }
      else
      {
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)(v16[0] + 152LL));
        v11 = v15[0];
        v15[0] = 0LL;
        *(_QWORD *)(v16[0] + 152LL) = v11;
        *(_QWORD *)(*(_QWORD *)(v16[0] + 976LL) + 296LL) = a2;
        *(_QWORD *)(v16[0] + 1744LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)(v16[0] + 976LL) + 152LL) |= 0x10u;
        *(_DWORD *)(*(_QWORD *)(v16[0] + 976LL) + 152LL) &= ~0x20u;
      }
      HmgShareLockResult<LFONT>::~HmgShareLockResult<LFONT>(v15);
    }
  }
LABEL_19:
  DCOBJ::~DCOBJ((DCOBJ *)v16);
  return v5;
}
