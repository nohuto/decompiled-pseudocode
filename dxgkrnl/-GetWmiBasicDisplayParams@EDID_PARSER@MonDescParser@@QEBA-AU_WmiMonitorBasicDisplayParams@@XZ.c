/*
 * XREFs of ?GetWmiBasicDisplayParams@EDID_PARSER@MonDescParser@@QEBA?AU_WmiMonitorBasicDisplayParams@@XZ @ 0x1C0073CCC
 * Callers:
 *     ?EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x1C0071BA0 (-EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z.c)
 * Callees:
 *     <none>
 */

struct _WmiMonitorBasicDisplayParams *__fastcall MonDescParser::EDID_PARSER::GetWmiBasicDisplayParams(
        MonDescParser::EDID_PARSER *this,
        struct _WmiMonitorBasicDisplayParams *__return_ptr retstr)
{
  unsigned __int8 v2; // al
  __int64 i; // r8

  *(_QWORD *)&retstr->VideoInputType = 0LL;
  *(_WORD *)&retstr->SupportedDisplayFeatures.sRGBSupported = 0;
  retstr->SupportedDisplayFeatures.GTFSupported = 0;
  v2 = *(_BYTE *)(*(_QWORD *)this + 24LL);
  retstr->VideoInputType = *(_BYTE *)(*(_QWORD *)this + 20LL) >> 7;
  for ( i = 0LL; i < 2; ++i )
    *(&retstr->MaxHorizontalImageSize + i) = *(_BYTE *)(*(_QWORD *)this + i + 21);
  retstr->DisplayTransferCharacteristic = *(_BYTE *)(*(_QWORD *)this + 23LL);
  retstr->SupportedDisplayFeatures.StandbySupported = v2 >> 7;
  retstr->SupportedDisplayFeatures.SuspendSupported = (v2 & 0x40) != 0;
  retstr->SupportedDisplayFeatures.ActiveOffSupported = (v2 & 0x20) != 0;
  retstr->SupportedDisplayFeatures.sRGBSupported = (v2 & 4) != 0;
  retstr->SupportedDisplayFeatures.HasPreferredTimingMode = (v2 & 2) != 0;
  retstr->SupportedDisplayFeatures.GTFSupported = v2 & 1;
  retstr->SupportedDisplayFeatures.DisplayType = (v2 >> 3) & 3;
  return retstr;
}
