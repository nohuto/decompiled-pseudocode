/*
 * XREFs of ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x180075B90
 * Callers:
 *     <none>
 * Callees:
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_d38650e98aaa1c01633db47e65347927___ @ 0x1800997CC (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_d38650e98aaa1c01633db.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??9@YA_NAEBU_GUID@@0@Z @ 0x180206634 (--9@YA_NAEBU_GUID@@0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewBase::SetVirtualDesktopId(RTL_SRWLOCK *this, const struct _GUID *a2)
{
  RTL_SRWLOCK *v4; // rdi
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  LPVOID pv[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = this + 6;
  AcquireSRWLockExclusive(this + 6);
  *(struct _GUID *)&this[14].Ptr = *a2;
  if ( (unsigned __int8)operator!=(&this[14], &GUID_NULL) )
  {
    pv[0] = 0LL;
    pv[1] = (LPVOID)-1LL;
    pv[2] = (LPVOID)-1LL;
    if ( (*((int (__fastcall **)(RTL_SRWLOCK *, LPVOID *))this[2].Ptr + 4))(this + 2, pv) >= 0 )
    {
      v6[0] = pv;
      v6[1] = this;
      GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_d38650e98aaa1c01633db47e65347927___(v6);
    }
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
