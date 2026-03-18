/*
 * XREFs of ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C01B59F8
 * Callers:
 *     NtUserReportInertia @ 0x1C000E690 (NtUserReportInertia.c)
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C00E4292 (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C01B5A44 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01C1508 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C01D95F4 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     ?ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z @ 0x1C01E224C (-ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CInputDest::TestWindowFlag(CInputDest *this, __int16 a2)
{
  char v3; // cl
  bool v4; // zf

  v3 = 0;
  if ( *((_DWORD *)this + 23) == 1 )
  {
    v4 = ((unsigned __int8)a2 & *(_BYTE *)(HIBYTE(a2) + *((_QWORD *)this + 10) + 24LL)) == 0;
    return !v4;
  }
  if ( *((_DWORD *)this + 23) == 2 )
  {
    v4 = ((unsigned __int8)a2 & *(_BYTE *)(HIBYTE(a2) + *(_QWORD *)(*((_QWORD *)this + 10) + 40LL) + 16LL)) == 0;
    return !v4;
  }
  return v3;
}
