/*
 * XREFs of ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0043348
 * Callers:
 *     ?SetWindowCompositionHasIconicBitmap@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C000F034 (-SetWindowCompositionHasIconicBitmap@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?SetWindowCompositionSystemBackdropType@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C000F704 (-SetWindowCompositionSystemBackdropType@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C000FCCC (-SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionForceIconicSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0011F7C (-SetWindowCompositionForceIconicSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowMaximizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0014AE4 (-SetWindowMaximizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     DecVisWindows @ 0x1C002A17C (DecVisWindows.c)
 *     IncVisWindows @ 0x1C002E484 (IncVisWindows.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C002E920 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00402A0 (NtUserGetWindowCompositionAttribute.c)
 *     ?CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA?AUFRAME_MARGIN@@PEBUtagWND@@IW4MarginsFor@?A0x67ef0edd@2@@Z @ 0x1C0042CB8 (-CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA-AUFRAME_MARGIN@@PEBUtagWND@@IW4Mar.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C007E644 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?SetWindowCompositionNCRenderingExiled@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C00E1014 (-SetWindowCompositionNCRenderingExiled@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@.c)
 *     ?SetWindowCompositionDarkModeColors@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C00E59F8 (-SetWindowCompositionDarkModeColors@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z @ 0x1C00E68D0 (-IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z.c)
 *     ?SetWindowCompositionAccentPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C00E90F4 (-SetWindowCompositionAccentPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     NtUserGetWindowCompositionInfo @ 0x1C00E9E40 (NtUserGetWindowCompositionInfo.c)
 *     ?SetWindowCompositionExcludeFromLivePreview@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C00EA518 (-SetWindowCompositionExcludeFromLivePreview@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_U.c)
 *     ?SetWindowCompositionForceActiveWindowAppearance@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C00EC6B0 (-SetWindowCompositionForceActiveWindowAppearance@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBD.c)
 *     ?SetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C00F158C (-SetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionNCRenderPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01491F2 (-SetWindowCompositionNCRenderPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?GetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z @ 0x1C01F804C (-GetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z.c)
 *     ?SetWindowCompositionAllowNCPaint@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F80C8 (-SetWindowCompositionAllowNCPaint@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionDisallowPeek@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F8188 (-SetWindowCompositionDisallowPeek@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionExcludedFromDDA@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F8248 (-SetWindowCompositionExcludedFromDDA@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?SetWindowCompositionHolographic@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F830C (-SetWindowCompositionHolographic@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionNonClientRTLLayout@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F83CC (-SetWindowCompositionNonClientRTLLayout@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowCompositionPassiveUpdateMode@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F8490 (-SetWindowCompositionPassiveUpdateMode@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@.c)
 *     ?SetWindowCompositionTransitions@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F8554 (-SetWindowCompositionTransitions@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionVideoOverlayActive@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F8614 (-SetWindowCompositionVideoOverlayActive@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowCompositionVisualOwner@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F86D4 (-SetWindowCompositionVisualOwner@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowDisableMoveSizeFeedback@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F8784 (-SetWindowDisableMoveSizeFeedback@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall _GetWindowCompositionInfo(const struct tagWND *a1, struct WINDOWCOMPOSITIONINFO *a2)
{
  __int64 v3; // rcx
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rax
  _OWORD *Prop; // rsi
  unsigned int v12; // eax
  struct tagTHREADINFO *v13; // rcx
  int v15; // r15d
  tagObjLock **v16; // rsi
  __int128 v17; // [rsp+48h] [rbp-28h] BYREF
  char v18; // [rsp+58h] [rbp-18h]
  char v19; // [rsp+60h] [rbp-10h]

  v3 = *((_QWORD *)a1 + 13);
  v5 = 0;
  if ( (!v3 || (v6 = *((_QWORD *)a1 + 3)) == 0 || (v7 = *(_QWORD *)(v6 + 8)) == 0 || v3 != *(_QWORD *)(v7 + 24))
    && ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 || !GetTopLevelWindow((__int64)a1)) )
  {
    goto LABEL_8;
  }
  v8 = *((_QWORD *)a1 + 18);
  v9 = *(unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Busy;
  v17 = 0LL;
  v18 = 0;
  v19 = 0;
  v10 = SGDGetUserSessionState(v3);
  v5 = 1;
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v10 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
  {
    v19 = 1;
    if ( v8 == gObjDummyLock )
      v8 = 0LL;
    *(_QWORD *)&v17 = v8;
    v15 = 0;
    v16 = (tagObjLock **)&v17;
    do
    {
      if ( *v16 )
        tagObjLock::LockExclusive(*v16);
      ++v15;
      ++v16;
    }
    while ( !v15 );
    v18 = 1;
  }
  Prop = (_OWORD *)RealGetProp(*((_QWORD *)a1 + 18), v9, 1LL);
  if ( v19 && v18 )
  {
    if ( (_QWORD)v17 )
      tagObjLock::UnLockExclusive((tagObjLock *)v17);
    v18 = 0;
  }
  if ( Prop )
  {
    *(_OWORD *)a2 = *Prop;
    *((_OWORD *)a2 + 1) = Prop[1];
    *((_OWORD *)a2 + 2) = Prop[2];
    *((_OWORD *)a2 + 3) = Prop[3];
  }
  else
  {
LABEL_8:
    v12 = *(_DWORD *)a2 & 0xFFFD0000;
    *(_QWORD *)a2 = v12;
    *((_QWORD *)a2 + 3) = 0LL;
    *(_OWORD *)((char *)a2 + 8) = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    v13 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
    if ( !v13 )
    {
      v13 = PtiCurrentShared();
      v12 = *(_DWORD *)a2;
    }
    *(_DWORD *)a2 = v12 ^ (v12 ^ (*((_DWORD *)v13 + 162) >> 3)) & 0x40000;
    *((_DWORD *)a2 + 10) = g_defaultFrameStyle;
    *(_QWORD *)((char *)a2 + 44) = 0LL;
    *(_QWORD *)((char *)a2 + 52) = 0LL;
  }
  *(_DWORD *)a2 &= 0x7FFFFu;
  return v5;
}
