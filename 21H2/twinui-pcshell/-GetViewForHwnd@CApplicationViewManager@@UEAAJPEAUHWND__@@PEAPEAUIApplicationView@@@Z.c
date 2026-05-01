/*
 * XREFs of ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180041D70
 * Callers:
 *     ?GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1800505D0 (-GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 *     _lambda_58d0b42f459fba30bfac1d074d7fc715_::operator() @ 0x1801FD928 (_lambda_58d0b42f459fba30bfac1d074d7fc715_--operator().c)
 *     ?GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z @ 0x1801FE2E0 (-GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z.c)
 *     ?WindowEnterpriseIdChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x1801FFCE0 (-WindowEnterpriseIdChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x1801FFDD0 (-WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x180202510 (-EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationViewManager::GetViewForHwnd(RTL_SRWLOCK *this, HWND a2, struct IApplicationView **a3)
{
  RTL_SRWLOCK *v6; // rbx
  unsigned int v7; // r15d
  struct IApplicationView *v8; // rdi
  struct IApplicationView **Ptr; // r14
  struct IApplicationView **v10; // r12
  struct IApplicationView *v11; // rsi
  char v12; // si
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v21[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v23; // [rsp+90h] [rbp+40h] BYREF
  struct IApplicationView **v24; // [rsp+A0h] [rbp+50h]
  __int64 v25; // [rsp+A8h] [rbp+58h] BYREF

  v24 = a3;
  v6 = this + 67;
  v21[1] = this + 67;
  AcquireSRWLockShared(this + 67);
  v7 = 0;
  *a3 = 0LL;
  v8 = 0LL;
  v21[2] = 0LL;
  Ptr = (struct IApplicationView **)this[68].Ptr;
  v10 = &Ptr[(__int64)this[69].Ptr];
  if ( Ptr == v10 )
    goto LABEL_13;
  while ( 1 )
  {
    v11 = *Ptr;
    v23 = 0;
    v20 = 0LL;
    v25 = 0LL;
    if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v11)(
           v11,
           &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
           &v20) < 0 )
    {
      v16 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v11)(
             v11,
             &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
             &v25) >= 0 )
      {
        v19 = 0LL;
        v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 24LL))(v25, &v19);
        if ( v17 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3D,
            (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\util.cpp",
            (const char *)(unsigned int)v17,
            v19);
        else
          (*(void (__fastcall **)(__int64, HWND, int *))(*(_QWORD *)v19 + 96LL))(v19, a2, &v23);
        v18 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
LABEL_25:
      if ( !v23 )
        goto LABEL_6;
      goto LABEL_28;
    }
    if ( (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v20 + 24LL))(v20, v21) < 0 )
      goto LABEL_25;
    if ( a2 != (HWND)v21[0] )
    {
      v23 = 0;
LABEL_6:
      v12 = 0;
      goto LABEL_7;
    }
    v23 = 1;
LABEL_28:
    v12 = 1;
LABEL_7:
    v13 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( v12 )
      break;
    if ( ++Ptr == v10 )
      goto LABEL_13;
  }
  if ( *Ptr )
  {
    v8 = *Ptr;
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)*Ptr + 8LL))(*Ptr);
  }
LABEL_13:
  *v24 = v8;
  if ( !v8 )
    v7 = -2147319765;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v7;
}
