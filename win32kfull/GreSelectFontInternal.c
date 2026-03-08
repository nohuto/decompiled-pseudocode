/*
 * XREFs of GreSelectFontInternal @ 0x1C0116F84
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0055DA0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C00B7E08 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     FinalUserInit @ 0x1C00C1B24 (FinalUserInit.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00F268C (xxxDrawMenuBarUnderlines.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C00F9B80 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     xxxSetNCFonts @ 0x1C010E91C (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C010EFFC (ValidateExternalLogFont.c)
 *     NtGdiSelectFont @ 0x1C0116920 (NtGdiSelectFont.c)
 *     DrawFrameControl @ 0x1C0116938 (DrawFrameControl.c)
 *     CreateScaledFont @ 0x1C01C05F8 (CreateScaledFont.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C02039A0 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C020BF00 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C02284EC (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0228B58 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022EDB4 (xxxDrawCaptionTemp.c)
 *     _ServerFixupMenuDC @ 0x1C0237764 (_ServerFixupMenuDC.c)
 *     xxxDrawMenuItem @ 0x1C0237914 (xxxDrawMenuItem.c)
 *     xxxMNInvertItem @ 0x1C02382C8 (xxxMNInvertItem.c)
 *     xxxMenuDraw @ 0x1C0238E5C (xxxMenuDraw.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C023AAC4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxMNCompute @ 0x1C023B4C8 (xxxMNCompute.c)
 *     ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C0242040 (-SelectFont@@YAXPEAU_SELECT_FONT@@@Z.c)
 *     CreateCompatiblePublicDC @ 0x1C02421AC (CreateCompatiblePublicDC.c)
 *     xxxDrawState @ 0x1C02423C0 (xxxDrawState.c)
 * Callees:
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269660 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreSelectFontInternal(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  _QWORD *v8; // rax
  struct UMPDOBJ *v9; // rdx
  DC *v10; // r9
  int v11; // ebx
  __int64 v12; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rax
  struct LFONT *v17; // rbx
  struct _DC_ATTR *v18; // rax
  __int64 v19; // rbx
  DC *v21; // [rsp+20h] [rbp-10h] BYREF
  int v22; // [rsp+28h] [rbp-8h]
  unsigned int v23; // [rsp+2Ch] [rbp-4h]
  int v24; // [rsp+68h] [rbp+38h] BYREF

  v3 = 0LL;
  v5 = a2;
  v22 = 0;
  v23 = 0;
  LOBYTE(a2) = 1;
  v21 = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( !v21 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet(v12);
LABEL_21:
    v10 = v21;
    goto LABEL_22;
  }
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && (v7 = *ThreadWin32Thread) != 0 && (v8 = (_QWORD *)(v7 + 40), (_QWORD *)*v8 != v8) )
    v9 = (struct UMPDOBJ *)(*v8 - 40LL);
  else
    v9 = 0LL;
  v10 = v21;
  if ( *((_WORD *)v21 + 6) == 1 )
  {
    *((_QWORD *)v21 + 271) = v9;
    *((_DWORD *)v21 + 544) = 0xFFFF;
    v10 = v21;
  }
  else if ( *((struct UMPDOBJ **)v21 + 271) != v9 )
  {
    XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v21, v9);
    goto LABEL_16;
  }
  if ( v23 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v10 + 6) + 40LL) & 0x8000) == 0 )
    {
LABEL_13:
      _InterlockedDecrement((volatile signed __int32 *)v10 + 3);
LABEL_17:
      v10 = 0LL;
      v21 = 0LL;
      goto LABEL_43;
    }
    v11 = *((_DWORD *)v10 + 528);
    if ( v11 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v10 = v21;
      goto LABEL_13;
    }
    goto LABEL_21;
  }
LABEL_22:
  if ( !v10 )
    return v3;
  if ( (*((_DWORD *)v10 + 11) & 2) == 0 )
  {
    if ( v23 )
    {
LABEL_28:
      *((_DWORD *)v10 + 11) |= 2u;
      v10 = v21;
      v22 = 1;
      goto LABEL_29;
    }
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v21);
    if ( !UserAttr || DC::SaveAttributes(v21, UserAttr) )
    {
      v10 = v21;
      goto LABEL_28;
    }
LABEL_16:
    _InterlockedDecrement((volatile signed __int32 *)v21 + 3);
    goto LABEL_17;
  }
LABEL_29:
  if ( (*((_DWORD *)v10 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v10);
    v10 = v21;
  }
  if ( v10 )
  {
    if ( !a3 )
    {
      v14 = HmgPentryFromPobj(v10);
      v10 = v21;
      if ( (*(_DWORD *)(v14 + 8) & 0xFFFFFFFE) == 0 )
        goto LABEL_43;
    }
    v15 = (__int64 *)*((_QWORD *)v10 + 19);
    if ( v15 )
      v3 = *v15;
    if ( v5 == v3 )
      goto LABEL_43;
    LOBYTE(v9) = 10;
    v16 = HmgShareLockCheck(v5, v9);
    v17 = (struct LFONT *)v16;
    if ( v16 )
    {
      if ( (*(_BYTE *)(HmgPentryFromPobj(v16) + 15) & 2) == 0 )
      {
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)v21 + 19));
        *((_QWORD *)v21 + 19) = v17;
        *(_QWORD *)(*((_QWORD *)v21 + 122) + 296LL) = v5;
        *((_QWORD *)v21 + 218) = 0LL;
        *(_DWORD *)(*((_QWORD *)v21 + 122) + 152LL) |= 0x10u;
        *(_DWORD *)(*((_QWORD *)v21 + 122) + 152LL) &= ~0x20u;
LABEL_42:
        v10 = v21;
LABEL_43:
        if ( v10 )
        {
          if ( v22 && (*((_DWORD *)v10 + 11) & 2) != 0 )
          {
            if ( !v23 )
            {
              v18 = XDCOBJ::GetUserAttr((XDCOBJ *)&v21);
              if ( v18 )
                DC::RestoreAttributes(v21, v18);
              v10 = v21;
            }
            *((_DWORD *)v10 + 11) &= ~2u;
            v22 = 0;
            v10 = v21;
          }
          v24 = 0;
          v19 = *(_QWORD *)v10;
          HmgDecrementExclusiveReferenceCountEx(v10, v23, &v24);
          if ( v24 )
            GrepDeleteDC(v19, 0x2000000LL);
        }
        return v3;
      }
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v17);
    }
    v3 = 0LL;
    goto LABEL_42;
  }
  return v3;
}
