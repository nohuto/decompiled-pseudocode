/*
 * XREFs of ExpandMonitorSpaceVertex @ 0x1C0070528
 * Callers:
 *     GetMonitorRectForDpi @ 0x1C006F908 (GetMonitorRectForDpi.c)
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1C0071E58 (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 * Callees:
 *     EngMulDiv @ 0x1C00718C0 (EngMulDiv.c)
 */

__int64 __fastcall ExpandMonitorSpaceVertex(unsigned __int16 a1, unsigned __int16 a2, __int64 a3)
{
  INT v3; // rbx^4
  INT v4; // edi
  INT v5; // esi
  __int64 v7; // [rsp+48h] [rbp+20h]

  v3 = HIDWORD(a3);
  v4 = a2;
  v5 = a1;
  LODWORD(v7) = EngMulDiv(a3, a1, a2);
  HIDWORD(v7) = EngMulDiv(v3, v5, v4);
  return v7;
}
