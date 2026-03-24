/*
 * XREFs of ExpandMonitorSpaceVertex @ 0x1C00429AC
 * Callers:
 *     GetMonitorRectForDpi @ 0x1C0041F48 (GetMonitorRectForDpi.c)
 *     GetMonitorRectForDpiContext @ 0x1C0042810 (GetMonitorRectForDpiContext.c)
 *     GetMonitorWorkRectForDpi @ 0x1C007C8AC (GetMonitorWorkRectForDpi.c)
 *     ExpandedMonitorSpace @ 0x1C01E3A5C (ExpandedMonitorSpace.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C025D1D4 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpandMonitorSpaceVertex(unsigned __int16 a1, unsigned __int16 a2, __int64 a3)
{
  INT v3; // ebx
  INT v4; // edi
  INT v6; // [rsp+44h] [rbp+1Ch]
  __int64 v7; // [rsp+48h] [rbp+20h]

  v6 = HIDWORD(a3);
  v3 = a2;
  v4 = a1;
  LODWORD(v7) = EngMulDiv(a3, a1, a2);
  HIDWORD(v7) = EngMulDiv(v6, v4, v3);
  return v7;
}
