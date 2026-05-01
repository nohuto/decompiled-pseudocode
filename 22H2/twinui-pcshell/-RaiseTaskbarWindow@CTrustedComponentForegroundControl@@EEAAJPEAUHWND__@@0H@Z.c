/*
 * XREFs of ?RaiseTaskbarWindow@CTrustedComponentForegroundControl@@EEAAJPEAUHWND__@@0H@Z @ 0x1800877F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTrustedComponentForegroundControl::RaiseTaskbarWindow(
        CTrustedComponentForegroundControl *this,
        HWND a2,
        HWND a3,
        int a4)
{
  return (*(__int64 (__fastcall **)(PVOID, HWND, HWND, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                              + 32LL))(
           CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
           a2,
           a3,
           a4 != 0 ? 6 : 1);
}
