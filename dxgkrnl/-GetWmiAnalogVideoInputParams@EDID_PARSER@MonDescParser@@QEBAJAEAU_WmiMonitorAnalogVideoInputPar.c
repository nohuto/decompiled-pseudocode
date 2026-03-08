/*
 * XREFs of ?GetWmiAnalogVideoInputParams@EDID_PARSER@MonDescParser@@QEBAJAEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x1C0023E84
 * Callers:
 *     ?EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x1C0023E30 (-EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonDescParser::EDID_PARSER::GetWmiAnalogVideoInputParams(
        MonDescParser::EDID_PARSER *this,
        struct _WmiMonitorAnalogVideoInputParams *a2)
{
  __int64 v2; // r8
  char v3; // al

  v2 = *(_QWORD *)this;
  v3 = *(_BYTE *)(*(_QWORD *)this + 20LL);
  if ( v3 < 0 )
    return 3221226021LL;
  a2->SetupExpected = (v3 & 0x10) != 0;
  a2->SeparateSyncsSupported = (*(_BYTE *)(v2 + 20) & 8) != 0;
  a2->CompositeSyncSupported = (*(_BYTE *)(v2 + 20) & 4) != 0;
  a2->SyncOnGreenVideoSupported = (*(_BYTE *)(v2 + 20) & 2) != 0;
  a2->SerrationOfVsyncRequired = *(_BYTE *)(v2 + 20) & 1;
  a2->SignalLevelStandard = (*(_BYTE *)(v2 + 20) >> 5) & 3;
  return 0LL;
}
