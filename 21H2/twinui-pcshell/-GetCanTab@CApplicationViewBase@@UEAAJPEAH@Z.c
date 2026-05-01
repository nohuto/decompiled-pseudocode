/*
 * XREFs of ?GetCanTab@CApplicationViewBase@@UEAAJPEAH@Z @ 0x1802069A0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180051738 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180051970 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewBase::GetCanTab(RTL_SRWLOCK *this, int *a2)
{
  int Ptr_high; // r8d
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v9; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v10, this + 6);
  Ptr_high = HIDWORD(this[16].Ptr);
  if ( Ptr_high )
    goto LABEL_5;
  v5 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, char *))this->Ptr + 66))(this, &v9);
  v6 = v5;
  if ( v5 >= 0 )
  {
    Ptr_high = 2 - (v9 != 0);
    HIDWORD(this[16].Ptr) = Ptr_high;
LABEL_5:
    *a2 = Ptr_high == 1;
    v6 = 0;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE4,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
    (const char *)(unsigned int)v5);
LABEL_6:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v10);
  return v6;
}
