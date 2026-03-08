/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003E858
 * Callers:
 *     EditionUpdateInputTransformFromHitTest @ 0x1C0007B90 (EditionUpdateInputTransformFromHitTest.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0008920 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002498C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C003768C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C003BC90 (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     RemoveProcessFromJob @ 0x1C003BE50 (RemoveProcessFromJob.c)
 *     UserJobCallout @ 0x1C003C000 (UserJobCallout.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C003C318 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C003E0D0 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C003E2AC (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     MapDesktop @ 0x1C003E450 (MapDesktop.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C006A4D8 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00CDE04 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     SetNewForegroundQueue @ 0x1C00CE270 (SetNewForegroundQueue.c)
 *     DestroyThreadsMessages @ 0x1C00D3420 (DestroyThreadsMessages.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00D935C (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00D938C (-JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     xxxProcessHidInput @ 0x1C0141C40 (xxxProcessHidInput.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0143E38 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01AA924 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B68A8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01B6E20 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C01B722C (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01B7500 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B7674 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01C4E48 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C01FABA8 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01FD7B8 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackSendHook @ 0x1C01FDFB0 (xxxDDETrackSendHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01FE184 (xxxDDETrackWindowDying.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C022181C (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ @ 0x1C023D1DC (-SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qq(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+A0h] [rbp+48h] BYREF
  va_list va; // [rsp+A0h] [rbp+48h]
  va_list va1; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               a8,
               a7,
               (__int64 *)va,
               8LL,
               va1,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(a4, a5, a6, a8, v11, (__int64 *)va, 8LL, va1);
  }
  return result;
}
