/*
 * XREFs of ?GetEnterpriseChromePreference@CApplicationViewBase@@UEAAJPEAH@Z @ 0x180206A60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewBase::GetEnterpriseChromePreference(CApplicationViewBase *this, int *a2)
{
  int ShouldShowEnterpriseIndicator; // ebx
  __int64 v4; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = *((_QWORD *)this + 8) != 0LL;
  if ( !*((_QWORD *)this + 8) )
    return 0LL;
  ShouldShowEnterpriseIndicator = (*(__int64 (__fastcall **)(CApplicationViewBase *, __int64 *))(*(_QWORD *)this + 504LL))(
                                    this,
                                    &v7);
  if ( ShouldShowEnterpriseIndicator < 0 )
  {
    v4 = 208LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)ShouldShowEnterpriseIndicator);
    return (unsigned int)ShouldShowEnterpriseIndicator;
  }
  ShouldShowEnterpriseIndicator = EdpShouldShowEnterpriseIndicator(v7, a2);
  result = 2147943568LL;
  if ( ShouldShowEnterpriseIndicator != -2147023728 )
  {
    if ( ShouldShowEnterpriseIndicator < 0 )
    {
      v4 = 216LL;
      goto LABEL_4;
    }
    return 0LL;
  }
  return result;
}
