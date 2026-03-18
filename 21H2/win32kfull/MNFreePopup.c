/*
 * XREFs of MNFreePopup @ 0x1C021BD14
 * Callers:
 *     MNFlushDestroyedPopups @ 0x1C021BC20 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C021BF30 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C021C5F4 (xxxMNStartMenuState.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C022F478 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0061074 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     UnlockPopupMenu @ 0x1C0230354 (UnlockPopupMenu.c)
 */

_QWORD *__fastcall MNFreePopup(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi

  v2 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)*a1 + 16LL));
  v3 = v2;
  if ( v2 && *(void *const *)*a1 != gpopupMenu )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    if ( *(_QWORD *)(v2 + 16) && *(_QWORD *)(v2 + 16) != *(_QWORD *)*a1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    *(_QWORD *)(v3 + 16) = *(_QWORD *)*a1;
  }
  HMAssignmentUnlock(*(_QWORD *)*a1 + 24LL);
  HMAssignmentUnlock(*(_QWORD *)*a1 + 32LL);
  UnlockPopupMenu(a1, *(_QWORD *)*a1 + 40LL);
  UnlockPopupMenu(a1, *(_QWORD *)*a1 + 48LL);
  HMAssignmentUnlock(*(_QWORD *)*a1 + 8LL);
  HMAssignmentUnlock(*(_QWORD *)*a1 + 56LL);
  HMAssignmentUnlock(*(_QWORD *)*a1 + 16LL);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1);
}
