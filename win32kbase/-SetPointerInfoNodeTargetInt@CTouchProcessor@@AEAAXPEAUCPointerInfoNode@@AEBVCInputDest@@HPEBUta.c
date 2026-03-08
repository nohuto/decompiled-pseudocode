/*
 * XREFs of ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C02055A4
 * Callers:
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0205484 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x1C0208164 (-UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEB.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C007CE44 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2F0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C01E364C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C01E3A44 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 */

void __fastcall CTouchProcessor::SetPointerInfoNodeTargetInt(
        CTouchProcessor *this,
        struct CPointerInfoNode *a2,
        const struct CInputDest *a3,
        int a4,
        const struct tagPOINT *a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  CInputDest *v12; // rcx
  HWND WindowHandle; // rsi
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // eax
  __int64 v17[14]; // [rsp+30h] [rbp-B8h] BYREF
  char v18; // [rsp+A0h] [rbp-48h]

  if ( !(unsigned int)CPointerInfoNode::IsValid(a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11996);
  *((_DWORD *)a2 + 1) &= ~0x100u;
  *((_QWORD *)a2 + 24) = CInputDest::GetWindowHandle(a3);
  if ( *((_DWORD *)a2 + 111) )
  {
    WindowHandle = CInputDest::GetWindowHandle(v12);
    if ( CInputDest::GetWindowHandle((struct CPointerInfoNode *)((char *)a2 + 352)) != WindowHandle )
    {
      memset(v17, 0, sizeof(v17));
      v18 = 0;
      CInputDest::SetupFromInputDestAndWindow(v17, (__int64)a2 + 352, WindowHandle, 1);
      CInputDest::operator=((__int64)a2 + 352, (__int64)v17);
      CInputDest::SetEmpty((CInputDest *)v17);
    }
  }
  v14 = *(_DWORD *)a2 | 0x100;
  *((_DWORD *)a2 + 36) = a4;
  *(_DWORD *)a2 = v14;
  if ( a9 )
  {
    v14 |= 0x200u;
    *(_DWORD *)a2 = v14;
  }
  if ( !a8 )
  {
    if ( a9 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12036);
    *(_DWORD *)a2 &= ~0x200u;
    v14 = *(_DWORD *)a2;
  }
  if ( a7 )
  {
    v14 = v14 & 0xFFFFF3FF | 0x400;
    *(_DWORD *)a2 = v14;
  }
  if ( a5 )
    *(struct tagPOINT *)((char *)a2 + 148) = *a5;
  if ( a8 )
  {
    v15 = 0x40000;
    if ( (v14 & 0x40000) != 0 )
      return;
    v16 = a6 << 18;
  }
  else
  {
    v15 = 0x20000;
    if ( (v14 & 0x20000) != 0 )
      return;
    v16 = a6 << 17;
  }
  *(_DWORD *)a2 = v14 ^ v15 & (v14 ^ v16);
}
