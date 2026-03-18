/*
 * XREFs of ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01D6F90
 * Callers:
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01D6E88 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x1C01D94A4 (-UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEB.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00449EC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C01B8EF8 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  HWND WindowHandle; // rax
  __int64 v16; // rdx
  CInputDest *v17; // rcx
  __int64 v18; // r8
  bool v19; // zf
  HWND v20; // rsi
  __int64 v21; // rcx
  int v22; // edx
  int v23; // eax
  __int64 v24[14]; // [rsp+20h] [rbp-A8h] BYREF
  char v25; // [rsp+90h] [rbp-38h]

  if ( !(unsigned int)CPointerInfoNode::IsValid(a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
  *((_DWORD *)a2 + 1) &= ~0x100u;
  WindowHandle = CInputDest::GetWindowHandle(a3);
  v19 = *((_DWORD *)a2 + 111) == 0;
  *((_QWORD *)a2 + 24) = WindowHandle;
  if ( !v19 )
  {
    v20 = CInputDest::GetWindowHandle(v17);
    if ( CInputDest::GetWindowHandle((struct CPointerInfoNode *)((char *)a2 + 352)) != v20 )
    {
      memset(v24, 0, sizeof(v24));
      v25 = 0;
      CInputDest::SetupFromInputDestAndWindow(v24, (__int64)a2 + 352, v20, 1);
      CInputDest::operator=((__int64)a2 + 352, (__int64)v24);
      CInputDest::SetEmpty((CInputDest *)v24);
    }
  }
  v21 = *(unsigned int *)a2;
  LODWORD(v21) = v21 | 0x100;
  *((_DWORD *)a2 + 36) = a4;
  *(_DWORD *)a2 = v21;
  if ( a9 )
  {
    LODWORD(v21) = v21 | 0x200;
    *(_DWORD *)a2 = v21;
  }
  if ( !a8 )
  {
    if ( a9 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v16, v18);
      LODWORD(v21) = *(_DWORD *)a2;
    }
    LODWORD(v21) = v21 & 0xFFFFFDFF;
    *(_DWORD *)a2 = v21;
  }
  if ( a7 )
  {
    LODWORD(v21) = v21 & 0xFFFFF3FF | 0x400;
    *(_DWORD *)a2 = v21;
  }
  if ( a5 )
    *(struct tagPOINT *)((char *)a2 + 148) = *a5;
  if ( a8 )
  {
    v22 = 0x40000;
    if ( (v21 & 0x40000) != 0 )
      return;
    v23 = a6 << 18;
  }
  else
  {
    v22 = 0x20000;
    if ( (v21 & 0x20000) != 0 )
      return;
    v23 = a6 << 17;
  }
  *(_DWORD *)a2 = v21 ^ v22 & (v21 ^ v23);
}
