/*
 * XREFs of ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C004D894
 * Callers:
 *     ?SetWindowCompositionTransitions@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0004FF0 (-SetWindowCompositionTransitions@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     DecVisWindows @ 0x1C001FD7C (DecVisWindows.c)
 *     IncVisWindows @ 0x1C0020088 (IncVisWindows.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C004D030 (NtUserGetWindowCompositionAttribute.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C004EC00 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     ?SetWindowCompositionNCRenderingExiled@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0080BB8 (-SetWindowCompositionNCRenderingExiled@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C0081DAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0098A20 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z @ 0x1C009D490 (-IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z.c)
 *     ?IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z @ 0x1C00B2C10 (-IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z.c)
 *     ?SetWindowCompositionHasIconicBitmap@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C010E0F0 (-SetWindowCompositionHasIconicBitmap@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C010F8C4 (-SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionAccentPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C010F9D8 (-SetWindowCompositionAccentPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionDarkModeColors@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01106AC (-SetWindowCompositionDarkModeColors@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionForceActiveWindowAppearance@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C011333C (-SetWindowCompositionForceActiveWindowAppearance@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBD.c)
 *     ?SetWindowCompositionExcludeFromLivePreview@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0113EF0 (-SetWindowCompositionExcludeFromLivePreview@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_U.c)
 *     ?SetWindowCompositionForceIconicSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C011559C (-SetWindowCompositionForceIconicSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionSystemBackdropType@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C015BFA0 (-SetWindowCompositionSystemBackdropType@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowDisableMoveSizeFeedback@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C015C04C (-SetWindowDisableMoveSizeFeedback@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionNCRenderPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C016D7FC (-SetWindowCompositionNCRenderPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     NtUserGetWindowCompositionInfo @ 0x1C01F6FE0 (NtUserGetWindowCompositionInfo.c)
 *     ?GetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z @ 0x1C0212958 (-GetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z.c)
 *     ?SetWindowCompositionAllowNCPaint@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C02129E4 (-SetWindowCompositionAllowNCPaint@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionDisallowPeek@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0212AA4 (-SetWindowCompositionDisallowPeek@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionExcludedFromDDA@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0212B64 (-SetWindowCompositionExcludedFromDDA@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?SetWindowCompositionHolographic@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0212C28 (-SetWindowCompositionHolographic@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionNonClientRTLLayout@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0212CE8 (-SetWindowCompositionNonClientRTLLayout@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowCompositionPassiveUpdateMode@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0212DAC (-SetWindowCompositionPassiveUpdateMode@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@.c)
 *     ?SetWindowCompositionVideoOverlayActive@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0212E70 (-SetWindowCompositionVideoOverlayActive@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowCompositionVisualOwner@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0212F30 (-SetWindowCompositionVisualOwner@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowMaximizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0212FE0 (-SetWindowMaximizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C02130BC (-SetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowMargins@@YAJPEAUtagWND@@AEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0235D04 (-SetWindowMargins@@YAJPEAUtagWND@@AEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00FE1A0 (GetAppCompatFlags2QuadWord.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall _GetWindowCompositionInfo(const struct tagWND *a1, struct WINDOWCOMPOSITIONINFO *a2)
{
  __int64 v3; // rdx
  unsigned int v5; // r15d
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r12
  tagObjLock **v11; // rsi
  _OWORD *Prop; // rsi
  __int64 AppCompatFlags2QuadWord; // rax
  bool v14; // zf
  __int128 v16; // [rsp+48h] [rbp-28h] BYREF
  char v17; // [rsp+58h] [rbp-18h]
  char v18; // [rsp+60h] [rbp-10h]

  v3 = *((_QWORD *)a1 + 13);
  v5 = 0;
  v6 = 1;
  if ( (!v3 || (v7 = *((_QWORD *)a1 + 3)) == 0 || (v8 = *(_QWORD *)(v7 + 8)) == 0 || v3 != *(_QWORD *)(v8 + 24))
    && ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 || !GetTopLevelWindow(a1)) )
  {
    goto LABEL_24;
  }
  v9 = *((_QWORD *)a1 + 18);
  v10 = (unsigned __int16)atomDWMProp;
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser) )
  {
    v18 = 1;
    if ( v9 == gObjDummyLock )
      v9 = 0LL;
    *(_QWORD *)&v16 = v9;
    v11 = (tagObjLock **)&v16;
    do
    {
      if ( *v11 )
        tagObjLock::LockExclusive(*v11);
      ++v5;
      ++v11;
    }
    while ( !v5 );
    v17 = 1;
  }
  Prop = (_OWORD *)RealGetProp(*((_QWORD *)a1 + 18), v10, 1LL);
  if ( v18 && v17 )
  {
    if ( (_QWORD)v16 )
      tagObjLock::UnLockExclusive((tagObjLock *)v16);
    v17 = 0;
  }
  v5 = 1;
  if ( Prop )
  {
    *(_OWORD *)a2 = *Prop;
    *((_OWORD *)a2 + 1) = Prop[1];
    *((_OWORD *)a2 + 2) = Prop[2];
    *((_OWORD *)a2 + 3) = Prop[3];
  }
  else
  {
LABEL_24:
    *(_DWORD *)a2 &= 0xFFFD0000;
    *(_OWORD *)((char *)a2 + 8) = 0LL;
    *((_DWORD *)a2 + 1) = 0;
    *((_QWORD *)a2 + 3) = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    AppCompatFlags2QuadWord = GetAppCompatFlags2QuadWord(*((_QWORD *)a1 + 2));
    v14 = g_defaultFrameStyle == -1;
    *(_DWORD *)a2 = *(_DWORD *)a2 & 0xFFFBFFFF | ((AppCompatFlags2QuadWord & 0x200000) != 0 ? 0x40000 : 0);
    if ( !v14 )
      v6 = g_defaultFrameStyle;
    *((_DWORD *)a2 + 10) = v6;
    *(_QWORD *)((char *)a2 + 44) = 0LL;
    *(_QWORD *)((char *)a2 + 52) = 0LL;
  }
  *(_DWORD *)a2 &= 0x7FFFFu;
  return v5;
}
