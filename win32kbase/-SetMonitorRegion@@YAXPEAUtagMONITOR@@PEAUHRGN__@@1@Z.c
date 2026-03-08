/*
 * XREFs of ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C003B638
 * Callers:
 *     GetMonitorDC @ 0x1C003D41C (GetMonitorDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0048B20 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 * Callees:
 *     GetCurrentThreadCompositedDpi @ 0x1C003B5D4 (GetCurrentThreadCompositedDpi.c)
 *     CreateMonitorRegionForDpi @ 0x1C003B6D0 (CreateMonitorRegionForDpi.c)
 *     GetMonitorRect @ 0x1C003DBB4 (GetMonitorRect.c)
 *     GreCombineRgn @ 0x1C0041BD0 (GreCombineRgn.c)
 *     GreSetRectRgn @ 0x1C0041FD0 (GreSetRectRgn.c)
 *     GreOffsetRgn @ 0x1C0042C20 (GreOffsetRgn.c)
 *     GreDeleteObject @ 0x1C0043CD0 (GreDeleteObject.c)
 */

void __fastcall SetMonitorRegion(struct tagMONITOR *a1, HRGN a2, HRGN a3)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  HRGN MonitorRegionForDpi; // rsi
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi((__int64)a1, (__int64)a2, (__int64)a3);
  MonitorRegionForDpi = (HRGN)CreateMonitorRegionForDpi(a1, CurrentThreadCompositedDpi);
  if ( (unsigned int)GreCombineRgn(a2, a3, MonitorRegionForDpi, 1) )
  {
    GetMonitorRect(v8, a1);
    GreOffsetRgn(a2);
  }
  else
  {
    GreSetRectRgn(a2, 0);
  }
  GreDeleteObject((HPALETTE)MonitorRegionForDpi);
}
