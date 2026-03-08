/*
 * XREFs of BmlIsLowResAnalogTvOutput @ 0x1C0171D0C
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C016EB6C (BmlFillPreferredMonitorMode.c)
 *     BmlGetMonitorModePreference @ 0x1C016F008 (BmlGetMonitorModePreference.c)
 * Callees:
 *     <none>
 */

bool __fastcall BmlIsLowResAnalogTvOutput(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 80);
  return v1 == -1 || v1 == 1 || v1 == 2 || v1 == 3 || v1 == 14;
}
