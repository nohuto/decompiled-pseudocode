/*
 * XREFs of ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C034895C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8AD0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DxgkSharedProtectedSessionObDeleteProcedure@@YAXPEAX@Z @ 0x1C0326A00 (-DxgkSharedProtectedSessionObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?SignalFenceWorkItemRoutine@DXGPROTECTEDSESSION@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0348FF0 (-SignalFenceWorkItemRoutine@DXGPROTECTEDSESSION@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DxgkCreateProtectedSession @ 0x1C0349140 (DxgkCreateProtectedSession.c)
 *     DxgkDestroyProtectedSession @ 0x1C0349F10 (DxgkDestroyProtectedSession.c)
 *     DxgkOpenProtectedSessionFromNtHandle @ 0x1C034A270 (DxgkOpenProtectedSessionFromNtHandle.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Close@DXGPROTECTEDSESSION@@QEAA_NI@Z @ 0x1C034844C (-Close@DXGPROTECTEDSESSION@@QEAA_NI@Z.c)
 *     ?DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C0348778 (-DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::DestroyProtectedSession(struct DXGPROTECTEDSESSION *a1, unsigned int a2)
{
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a1 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1101LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pThis->GetAdapter()->IsCoreResourceSharedOwner()",
      1101LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a1 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1102LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pThis->GetAdapter()->IsCoreResourceExclusiveOwner()",
      1102LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( DXGPROTECTEDSESSION::Close(a1, a2) )
    ADAPTER_DISPLAY::DestroyProtectedSession(*((DXGADAPTER ***)a1 + 2), a1);
  return 0LL;
}
