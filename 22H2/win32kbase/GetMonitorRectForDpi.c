/*
 * XREFs of GetMonitorRectForDpi @ 0x1C006F908
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0037720 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C0070490 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 *     GetScreenRectForDpi @ 0x1C0071EE0 (GetScreenRectForDpi.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C0070528 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C0071698 (ScaleDPIRect.c)
 */

__int64 *__fastcall GetMonitorRectForDpi(__int64 *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax

  *(_OWORD *)a1 = *(_OWORD *)(*(_QWORD *)(a2 + 40) + 28LL);
  if ( a3 )
  {
    v6 = *(_QWORD *)(a2 + 40);
    v7 = ExpandMonitorSpaceVertex(a3, *(unsigned __int16 *)(v6 + 66), *a1);
    ScaleDPIRect((_DWORD)a1, (_DWORD)a1, a3, *(unsigned __int16 *)(v6 + 64), v7, *a1);
  }
  return a1;
}
