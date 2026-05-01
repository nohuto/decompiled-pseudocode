/*
 * XREFs of ?GetWindows@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x180064990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::GetWindows(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  *a4 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(a1) = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)(a1 + 24) + 352LL))(
                  a1 + 24,
                  a2,
                  a3,
                  a4);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)a1;
}
