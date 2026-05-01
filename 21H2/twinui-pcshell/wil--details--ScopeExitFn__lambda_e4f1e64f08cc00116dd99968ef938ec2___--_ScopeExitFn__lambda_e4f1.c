/*
 * XREFs of wil::details::ScopeExitFn__lambda_e4f1e64f08cc00116dd99968ef938ec2___::_ScopeExitFn__lambda_e4f1e64f08cc00116dd99968ef938ec2___ @ 0x1800BAC74
 * Callers:
 *     _CBaseTrayFlyoutExperienceManager::OnPriorityBoostRequested_::_1_::dtor$0 @ 0x1800BC9D5 (_CBaseTrayFlyoutExperienceManager--OnPriorityBoostRequested_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_e4f1e64f08cc00116dd99968ef938ec2___::_ScopeExitFn__lambda_e4f1e64f08cc00116dd99968ef938ec2___(
        _BYTE *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    result = *(_QWORD *)a1;
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
    if ( v2 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
  }
  return result;
}
