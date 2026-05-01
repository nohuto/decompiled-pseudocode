/*
 * XREFs of ?RefreshCanTab@CApplicationViewBase@@UEAAJXZ @ 0x180206E70
 * Callers:
 *     ?HandleRecycle@CWin32ApplicationView@@UEAAJXZ @ 0x180203C40 (-HandleRecycle@CWin32ApplicationView@@UEAAJXZ.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180051738 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180051970 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180206FB4 (-SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z.c)
 */

__int64 __fastcall CApplicationViewBase::RefreshCanTab(RTL_SRWLOCK *this)
{
  int CanTab; // eax
  const struct Microsoft::WRL::Wrappers::Details::SyncLockExclusive *v3; // r8
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int8 v8; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v9; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v9, this + 6);
  CanTab = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, unsigned __int8 *))this->Ptr + 66))(this, &v8);
  v4 = CanTab;
  if ( CanTab >= 0 )
  {
    CanTab = CApplicationViewBase::SetCanTab((CApplicationViewBase *)this, v8, v3);
    v4 = CanTab;
    if ( CanTab >= 0 )
    {
      v4 = 0;
      goto LABEL_7;
    }
    v5 = 260LL;
  }
  else
  {
    v5 = 259LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
    (const char *)(unsigned int)CanTab);
LABEL_7:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v9);
  return v4;
}
