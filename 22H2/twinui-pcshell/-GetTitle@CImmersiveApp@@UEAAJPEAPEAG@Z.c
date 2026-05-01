/*
 * XREFs of ?GetTitle@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x180070760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::GetTitle(CImmersiveApp *this, unsigned __int16 **a2)
{
  unsigned int v4; // edi

  *a2 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  *a2 = 0LL;
  v4 = -2147023728;
  if ( *((_QWORD *)this + 48) )
    v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(***((_QWORD ***)this + 47) + 168LL))(
           **((_QWORD **)this + 47),
           a2);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return v4;
}
