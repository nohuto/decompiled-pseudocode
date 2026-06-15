/*
 * XREFs of sub_1800023A0 @ 0x1800023A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 */

__int64 __fastcall sub_1800023A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  _BYTE pv[64]; // [rsp+30h] [rbp-48h] BYREF

  sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv);
  v6 = 0;
  if ( (unsigned int)IsPbmReportAppClosingSupported() )
    v6 = PbmReportAppClosing(a1, a2, a3);
  sub_18000F690(pv);
  return v6;
}
