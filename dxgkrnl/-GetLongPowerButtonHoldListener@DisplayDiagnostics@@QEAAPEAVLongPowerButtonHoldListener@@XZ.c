/*
 * XREFs of ?GetLongPowerButtonHoldListener@DisplayDiagnostics@@QEAAPEAVLongPowerButtonHoldListener@@XZ @ 0x1C004B398
 * Callers:
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1C02F3B84 (-Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

struct LongPowerButtonHoldListener *__fastcall DisplayDiagnostics::GetLongPowerButtonHoldListener(
        DisplayDiagnostics *this)
{
  return (DisplayDiagnostics *)((char *)this + 64);
}
