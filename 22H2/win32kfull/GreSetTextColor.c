/*
 * XREFs of GreSetTextColor @ 0x1C0027D58
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0014A74 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C0026364 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     BltIcon @ 0x1C00274A8 (BltIcon.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0027824 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C0027B88 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     DrawPushButton @ 0x1C00286BC (DrawPushButton.c)
 *     FinalUserInit @ 0x1C003E45C (FinalUserInit.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C00AF110 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00BAA10 (xxxDrawMenuBarUnderlines.c)
 *     RecolorDeskPattern @ 0x1C00BDFC0 (RecolorDeskPattern.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C013BB08 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0200E00 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0209330 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0225E60 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022C094 (xxxDrawCaptionTemp.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0233414 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxDrawMenuItem @ 0x1C0234CAC (xxxDrawMenuItem.c)
 *     BltColor @ 0x1C023F394 (BltColor.c)
 *     xxxDrawState @ 0x1C023F6F0 (xxxDrawState.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0266BBC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetTextColor(__int64 a1, int a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  _QWORD *v8; // rax
  struct UMPDOBJ *v9; // rdx
  DC *v10; // r9
  int v11; // ebx
  DC *v12; // r9
  struct _DC_ATTR *v13; // rax
  __int64 v14; // rax
  int v15; // edi
  struct _DC_ATTR *UserAttr; // rax
  __int64 v17; // rbx
  DC *v19; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+28h] [rbp-28h]
  _BYTE v21[32]; // [rsp+30h] [rbp-20h] BYREF
  int v22; // [rsp+80h] [rbp+30h] BYREF

  v20 = 0LL;
  v4 = -1;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v21);
  LOBYTE(v5) = 1;
  v19 = (DC *)HmgLockEx(a1, v5, 0LL);
  if ( v19 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread && (v7 = *ThreadWin32Thread) != 0 && (v8 = (_QWORD *)(v7 + 40), (_QWORD *)*v8 != v8) )
      v9 = (struct UMPDOBJ *)(*v8 - 40LL);
    else
      v9 = 0LL;
    v10 = v19;
    if ( *((_WORD *)v19 + 6) == 1 )
    {
      *((_QWORD *)v19 + 271) = v9;
      *((_DWORD *)v19 + 544) = 0xFFFF;
      v10 = v19;
    }
    else if ( *((struct UMPDOBJ **)v19 + 271) != v9 )
    {
      XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v19, v9);
      goto LABEL_16;
    }
    if ( HIDWORD(v20) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v10 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_13:
        _InterlockedDecrement((volatile signed __int32 *)v10 + 3);
LABEL_17:
        v12 = 0LL;
        v19 = 0LL;
LABEL_37:
        if ( v12 )
        {
          if ( (_DWORD)v20 && (*((_DWORD *)v12 + 11) & 2) != 0 )
          {
            if ( !HIDWORD(v20) )
            {
              UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v19);
              if ( UserAttr )
                DC::RestoreAttributes(v19, UserAttr);
              v12 = v19;
            }
            *((_DWORD *)v12 + 11) &= ~2u;
            v12 = v19;
            LODWORD(v20) = 0;
          }
          v22 = 0;
          v17 = *(_QWORD *)v12;
          HmgDecrementExclusiveReferenceCountEx(v12, HIDWORD(v20), &v22);
          if ( v22 )
            GrepDeleteDC(v17, 0x2000000LL);
        }
        goto LABEL_47;
      }
      v11 = *((_DWORD *)v10 + 528);
      if ( v11 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v10 = v19;
        goto LABEL_13;
      }
    }
    else
    {
      if ( !*((_DWORD *)v10 + 528) )
        goto LABEL_24;
      *((_DWORD *)v10 + 528) = 0;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  v10 = v19;
LABEL_24:
  if ( !v10 )
    goto LABEL_47;
  if ( (*((_DWORD *)v10 + 11) & 2) == 0 )
  {
    if ( HIDWORD(v20) )
    {
LABEL_30:
      *((_DWORD *)v10 + 11) |= 2u;
      v10 = v19;
      LODWORD(v20) = 1;
      goto LABEL_31;
    }
    v13 = XDCOBJ::GetUserAttr((XDCOBJ *)&v19);
    if ( !v13 || DC::SaveAttributes(v19, v13) )
    {
      v10 = v19;
      goto LABEL_30;
    }
LABEL_16:
    _InterlockedDecrement((volatile signed __int32 *)v19 + 3);
    goto LABEL_17;
  }
LABEL_31:
  if ( (*((_DWORD *)v10 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v10);
    v10 = v19;
  }
  if ( v10 )
  {
    v14 = *((_QWORD *)v10 + 122);
    v4 = *(_DWORD *)(v14 + 188);
    *(_DWORD *)(v14 + 188) = a2;
    v15 = a2 & 0x13FFFFFF;
    if ( v15 != v4 )
    {
      *(_DWORD *)(*((_QWORD *)v19 + 122) + 184LL) = v15;
      *(_DWORD *)(*((_QWORD *)v19 + 122) + 152LL) |= 7u;
    }
    v12 = v19;
    goto LABEL_37;
  }
LABEL_47:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v21);
  return v4;
}
