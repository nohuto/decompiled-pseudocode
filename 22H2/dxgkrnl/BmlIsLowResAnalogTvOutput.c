/*
 * XREFs of BmlIsLowResAnalogTvOutput @ 0x1C01EA614
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C0177F70 (BmlFillPreferredMonitorMode.c)
 *     BmlGetMonitorModePreference @ 0x1C0178408 (BmlGetMonitorModePreference.c)
 * Callees:
 *     <none>
 */

bool __fastcall BmlIsLowResAnalogTvOutput(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 80);
  return v1 == -1 || v1 == 1 || v1 == 2 || v1 == 3 || v1 == 14;
}
