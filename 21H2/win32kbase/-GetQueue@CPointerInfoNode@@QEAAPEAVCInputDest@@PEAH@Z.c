/*
 * XREFs of ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C01CD644
 * Callers:
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C00E82B6 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C01BEA8C (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D5850 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C003C340 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C00E8060 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01B8DD8 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CInputDest *__fastcall CPointerInfoNode::GetQueue(CPointerInfoNode *this, int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rdx
  CInputDest *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  CInputDest *v22; // [rsp+40h] [rbp-18h] BYREF

  if ( !(unsigned int)CPointerInfoNode::IsValid(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  *a2 = 0;
  if ( !*((_DWORD *)this + 111) )
  {
LABEL_13:
    v14 = *((_QWORD *)this + 2);
    v22 = 0LL;
    CTouchProcessor::GetPointerCapture((struct _KTHREAD **)gpTouchProcessor, v14, 0LL, &v22, 0LL);
    v15 = v22;
    if ( !v22 )
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_PointerCaptureLock__private_reporting,
        31344584LL,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_Vail_logged_traits,
        1,
        3);
      return 0LL;
    }
    if ( !CInputDest::GetThreadInfo(v22) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
    if ( !*((_QWORD *)CInputDest::GetThreadInfo(v15) + 54) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
    return v15;
  }
  if ( !CInputDest::IsEqualByWindowHandle((__int64)this + 352, *((_QWORD *)this + 24), 1) )
  {
    if ( (*(_DWORD *)this & 0x400) != 0 )
      return 0LL;
    goto LABEL_13;
  }
  if ( !CInputDest::IsEqualByWindowHandle((__int64)this + 352, *((_QWORD *)this + 24), 2) )
  {
    *a2 = 1;
    return 0LL;
  }
  if ( !CInputDest::GetThreadInfo((CPointerInfoNode *)((char *)this + 352)) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  if ( !*((_QWORD *)CInputDest::GetThreadInfo((CPointerInfoNode *)((char *)this + 352)) + 54) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  return (CPointerInfoNode *)((char *)this + 352);
}
