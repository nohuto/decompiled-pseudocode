/*
 * XREFs of PopScreenOn @ 0x1408F0474
 * Callers:
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 * Callees:
 *     PopBlockSessionSwitch @ 0x140779F20 (PopBlockSessionSwitch.c)
 *     PopControlMonitor @ 0x14077A160 (PopControlMonitor.c)
 */

ULONG PopScreenOn()
{
  ULONG v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF
  int v3; // [rsp+3Ch] [rbp+14h]

  v1 = -1;
  PopBlockSessionSwitch(1, &v1);
  v2 = 2;
  v3 = 30;
  PopControlMonitor(&v2, v1);
  return PopBlockSessionSwitch(0, &v1);
}
