/*
 * XREFs of ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x14000309C
 * Callers:
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140002400 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x1400025CC (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     wWinMain @ 0x140003430 (wWinMain.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x140003610 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140003700 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140003824 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x1400038B0 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x14000394C (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ?SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z @ 0x140003A18 (-SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x140003AB4 (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?ModifyTokenPrivileges@@YAJXZ @ 0x140003BA4 (-ModifyTokenPrivileges@@YAJXZ.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140003CD4 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x140003E08 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?SetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGK@Z @ 0x14000BFEC (-SetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGK@Z.c)
 * Callees:
 *     ?IsHRInList@@YA_NJQEBJI@Z @ 0x140003120 (-IsHRInList@@YA_NJQEBJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x140003144 (-IsOOM@@YA_NJ@Z.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x14000E02C (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x14000E1AC (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
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
    v9 = (const int *)&unk_140011A30;
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
