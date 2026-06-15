/*
 * XREFs of WPP_SF_ @ 0x1800050D0
 * Callers:
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x180005B70 (-EventWorkerThread@@YAKPEAX@Z.c)
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000AFC0 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180010BC0 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180012D98 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?VoipCallStateChanged@CApplication@@QEAAXH@Z @ 0x180012EA0 (-VoipCallStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x180014660 (-UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z.c)
 *     ?ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z @ 0x18001E510 (-ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z.c)
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x18001F6D0 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180027958 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x180029CD0 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x18002A580 (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x18002AF48 (-TS_ServiceStart@@YAXXZ.c)
 *     ??0CDriverListener@@QEAA@XZ @ 0x18002D800 (--0CDriverListener@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_(TRACEHANDLE a1, USHORT a2, const GUID *a3)
{
  return TraceMessage(a1, 0x2Bu, a3, a2, 0LL);
}
