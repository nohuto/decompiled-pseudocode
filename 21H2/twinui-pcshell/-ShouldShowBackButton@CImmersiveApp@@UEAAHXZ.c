/*
 * XREFs of ?ShouldShowBackButton@CImmersiveApp@@UEAAHXZ @ 0x1801F1810
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::ShouldShowBackButton(CImmersiveApp *this)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int v3; // edi

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 216LL))((char *)this + 8);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v3;
}
