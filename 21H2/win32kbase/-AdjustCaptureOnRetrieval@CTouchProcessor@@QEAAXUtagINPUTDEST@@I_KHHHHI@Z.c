/*
 * XREFs of ?AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z @ 0x1C01BDE40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0088D80 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1C01D3A34 (-ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C01D57E0 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C01D6698 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  CInpLockGuard *v15[6]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v16[128]; // [rsp+60h] [rbp-A8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v15, (struct CInpLockGuard *)(a1 + 32), a4);
  if ( !a6 )
  {
    if ( (a3 & 0x10000) != 0 )
    {
      CInputDest::CInputDest((CInputDest *)v16, a2);
      CTouchProcessor::SetPointerImplicitCapture(
        (CTouchProcessor *)a1,
        (unsigned __int64)a4,
        (const struct CInputDest *)v16,
        a5,
        a7);
LABEL_6:
      CInputDest::SetEmpty((CInputDest *)v16);
      goto LABEL_12;
    }
    if ( a9 == 593 )
    {
      CInputDest::CInputDest((CInputDest *)v16, a2);
      CTouchProcessor::SetPointerExplicitCapture(
        (CTouchProcessor *)a1,
        (unsigned __int64)a4,
        (const struct CInputDest *)v16,
        a5,
        a7);
      goto LABEL_6;
    }
  }
  if ( a8 && a6 && (a9 == 583 || a9 == 594) )
    CTouchProcessor::ReleasePointerCapture((CTouchProcessor *)a1, (unsigned __int64)a4, a7);
LABEL_12:
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v15, v13, v14);
}
