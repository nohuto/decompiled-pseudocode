/*
 * XREFs of ?GetMonitor@CImmersiveApp@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18007A510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::GetMonitor(CImmersiveApp *this, struct IImmersiveMonitor **a2)
{
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(char *, struct IImmersiveMonitor **))(*((_QWORD *)this + 3) + 464LL))((char *)this + 24, a2);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
