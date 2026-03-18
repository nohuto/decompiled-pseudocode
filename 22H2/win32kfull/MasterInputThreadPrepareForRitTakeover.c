/*
 * XREFs of MasterInputThreadPrepareForRitTakeover @ 0x1C00A467C
 * Callers:
 *     EditionDeactivateMitInput @ 0x1C00A4240 (EditionDeactivateMitInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C005F1AC (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_Backport_MitRitReliability__private_IsEnabledDeviceUsage @ 0x1C0139B44 (Feature_Backport_MitRitReliability__private_IsEnabledDeviceUsage.c)
 *     EndPointerDeviceContacts @ 0x1C013B7F4 (EndPointerDeviceContacts.c)
 *     ??C?$SGDINPUTPROCESSORgpTouchProcessor@PEAVCTouchProcessor@@@@QEBAPEAVCTouchProcessor@@XZ @ 0x1C01AAB1C (--C-$SGDINPUTPROCESSORgpTouchProcessor@PEAVCTouchProcessor@@@@QEBAPEAVCTouchProcessor@@XZ.c)
 */

void __noreturn MasterInputThreadPrepareForRitTakeover()
{
  char v0; // bl
  char v1; // di
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // rcx
  char v5; // al

  v0 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v1 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( PtiCurrentShared() == (struct tagTHREADINFO *)gptiRit )
    {
      v4 = "Rit";
    }
    else
    {
      v5 = IsInputThread(gptiRit, v2, v3);
      v4 = "Mit";
      if ( !v5 )
        v4 = (const char *)&unk_1C031F02C;
    }
    WPP_RECORDER_AND_TRACE_SF_s(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v0,
      v1,
      (__int64)gFullLog,
      4u,
      0x14u,
      0xAu,
      (__int64)&WPP_c5f407e479063c43686cda4769a6a350_Traceguids,
      v4);
  }
  EndPointerDeviceContacts();
}
