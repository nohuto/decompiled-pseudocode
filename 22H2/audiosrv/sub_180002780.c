/*
 * XREFs of sub_180002780 @ 0x180002780
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 */

__int64 __fastcall sub_180002780(__int64 a1)
{
  unsigned int v2; // ebx
  _BYTE pv[72]; // [rsp+30h] [rbp-48h] BYREF

  sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv);
  v2 = 0;
  if ( (unsigned int)IsPbmSwitchSoftNonToHardNonInteractiveSupported() )
    v2 = PbmSwitchSoftNonInteractiveAppsToHardNonInteractive(a1);
  sub_18000F690(pv);
  return v2;
}
