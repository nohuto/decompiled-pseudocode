/*
 * XREFs of ?AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z @ 0x1C01E91D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0079840 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C9B24 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C00C9B90 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1C02016F8 (-ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0203824 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0204A10 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 */

void __fastcall CTouchProcessor::AdjustCaptureOnRetrieval(
        __int64 a1,
        const struct tagINPUTDEST *a2,
        int a3,
        void *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  _BYTE v13[48]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v14[128]; // [rsp+60h] [rbp-A8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v13, (struct CInpLockGuard *)(a1 + 32), a4);
  if ( !a6 )
  {
    if ( (a3 & 0x10000) != 0 )
    {
      CInputDest::CInputDest((CInputDest *)v14, a2);
      CTouchProcessor::SetPointerImplicitCapture(
        (CTouchProcessor *)a1,
        (unsigned __int64)a4,
        (const struct CInputDest *)v14,
        a5,
        a7);
LABEL_6:
      CInputDest::SetEmpty((CInputDest *)v14);
      goto LABEL_12;
    }
    if ( a9 == 593 )
    {
      CInputDest::CInputDest((CInputDest *)v14, a2);
      CTouchProcessor::SetPointerExplicitCapture(
        (CTouchProcessor *)a1,
        (unsigned __int64)a4,
        (const struct CInputDest *)v14,
        a5,
        a7);
      goto LABEL_6;
    }
  }
  if ( a8 && a6 && (a9 == 583 || a9 == 594) )
    CTouchProcessor::ReleasePointerCapture((CTouchProcessor *)a1, (unsigned __int64)a4, a7);
LABEL_12:
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v13);
}
