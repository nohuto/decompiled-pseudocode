/*
 * XREFs of ExpandMonitorSpaceVertex @ 0x1C00A3584
 * Callers:
 *     InitializeMonitorInfo @ 0x1C002D4E8 (InitializeMonitorInfo.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C004524C (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C00A1EF8 (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     GetMonitorRectForDpi @ 0x1C00A2698 (GetMonitorRectForDpi.c)
 *     InternalGetRealClientRect @ 0x1C00A2710 (InternalGetRealClientRect.c)
 *     CalculateLogicalMonitorRect @ 0x1C00A3510 (CalculateLogicalMonitorRect.c)
 *     _MonitorFromRect @ 0x1C00AEE80 (_MonitorFromRect.c)
 *     GetMonitorWorkRectForDpi @ 0x1C00E1F04 (GetMonitorWorkRectForDpi.c)
 *     ExpandedMonitorSpace @ 0x1C01BA230 (ExpandedMonitorSpace.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C024E86C (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
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
