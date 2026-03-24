/*
 * XREFs of ?PtInsideWindowFrameBounds@@YA_NAEBUtagPOINT@@PEBUtagWND@@@Z @ 0x1C023EDA4
 * Callers:
 *     ?xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z @ 0x1C0241740 (-xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C004DE1C (PtInRect.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     PhysicalToLogicalPointForWindow @ 0x1C01E55F0 (PhysicalToLogicalPointForWindow.c)
 *     ?GetWindowFrameBounds@@YA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C023ED6C (-GetWindowFrameBounds@@YA-AUtagRECT@@PEBUtagWND@@@Z.c)
 */

bool __fastcall PtInsideWindowFrameBounds(const struct tagPOINT *a1, const struct tagWND *a2)
{
  __int64 v2; // rcx
  const struct tagWND *v3; // r11
  unsigned __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v6; // [rsp+28h] [rbp-20h] BYREF

  v2 = (__int64)*a1;
  v5 = 0LL;
  PhysicalToLogicalPointForWindow(v2, (__int64)a2, &v5);
  v6 = *GetWindowFrameBounds(&v6, v3);
  return PtInRect(&v6, v5);
}
