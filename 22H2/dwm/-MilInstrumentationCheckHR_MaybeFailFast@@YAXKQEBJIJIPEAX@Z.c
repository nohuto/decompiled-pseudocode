/*
 * XREFs of ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x14000171C
 * Callers:
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140001130 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x1400012DC (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     WinMain @ 0x1400018F0 (WinMain.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140001BB8 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140001D50 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x140001DDC (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140001EC4 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001F74 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ?SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z @ 0x140002088 (-SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140002118 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x14000236C (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x140002958 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     ?ModifyTokenPrivileges@@YAJXZ @ 0x140002A48 (-ModifyTokenPrivileges@@YAJXZ.c)
 *     ?SetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGK@Z @ 0x14000805C (-SetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGK@Z.c)
 * Callees:
 *     ?IsHRInList@@YA_NJQEBJI@Z @ 0x1400017A0 (-IsHRInList@@YA_NJQEBJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x1400017C4 (-IsOOM@@YA_NJ@Z.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x14000CDCC (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x14000CF4C (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 */

void __fastcall MilInstrumentationCheckHR_MaybeFailFast(
        unsigned int a1,
        const int *const a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  bool v7; // al
  int v8; // ecx
  const int *v9; // r10
  unsigned int v10; // r11d
  char v11; // r9
  void *retaddr; // [rsp+28h] [rbp+0h]

  v7 = IsOOM(a4);
  if ( (a1 & 0x10) != 0 && v7 )
  {
    if ( !v9 || !v10 )
      goto LABEL_11;
  }
  else if ( !v9 || !v10 )
  {
    v9 = (const int *)&unk_140010B10;
    v10 = 10;
  }
  if ( !IsHRInList(v8, v9, v10) )
  {
LABEL_11:
    MilInstrumentationHandleFailure_MaybeFailFast(a4, a1, a5, retaddr);
    return;
  }
  if ( (a1 & 4) != 0 )
  {
    if ( v11 )
      DoStackCapture(a4, a5, retaddr);
  }
}
