/*
 * XREFs of ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C006D8F4
 * Callers:
 *     GetMonitorDC @ 0x1C00183FC (GetMonitorDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002A8D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 * Callees:
 *     GreOffsetRgn @ 0x1C001B040 (GreOffsetRgn.c)
 *     GreDeleteObject @ 0x1C0023690 (GreDeleteObject.c)
 *     CreateMonitorRegionForDpi @ 0x1C006DB60 (CreateMonitorRegionForDpi.c)
 *     GetMonitorRect @ 0x1C006ECBC (GetMonitorRect.c)
 *     GetCurrentThreadCompositedDpi @ 0x1C006EDE4 (GetCurrentThreadCompositedDpi.c)
 *     GreCombineRgn @ 0x1C006EFF0 (GreCombineRgn.c)
 *     GreSetRectRgn @ 0x1C008E9A0 (GreSetRectRgn.c)
 */

void __fastcall SetMonitorRegion(struct tagMONITOR *a1, HRGN a2, HRGN a3)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  HRGN MonitorRegionForDpi; // rsi
  _DWORD *MonitorRect; // rax
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  MonitorRegionForDpi = (HRGN)CreateMonitorRegionForDpi(a1, CurrentThreadCompositedDpi);
  if ( (unsigned int)GreCombineRgn(a2, a3, MonitorRegionForDpi, 1) )
  {
    MonitorRect = (_DWORD *)GetMonitorRect(v9, a1);
    GreOffsetRgn(a2, -*MonitorRect, -HIDWORD(*(_QWORD *)MonitorRect));
  }
  else
  {
    GreSetRectRgn(a2, 0);
  }
  GreDeleteObject(MonitorRegionForDpi);
}
