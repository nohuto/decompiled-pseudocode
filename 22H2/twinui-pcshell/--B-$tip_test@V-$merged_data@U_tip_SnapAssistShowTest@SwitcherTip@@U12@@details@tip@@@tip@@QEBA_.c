/*
 * XREFs of ??B?$tip_test@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEBA_NXZ @ 0x1800D3934
 * Callers:
 *     ?v_DismissView@CAltTabViewHost@@MEAAXXZ @ 0x1803FCBC0 (-v_DismissView@CAltTabViewHost@@MEAAXXZ.c)
 *     ?v_DismissView@CSnapAssistViewHost@@MEAAXXZ @ 0x1803FE640 (-v_DismissView@CSnapAssistViewHost@@MEAAXXZ.c)
 * Callees:
 *     ?is_running@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAA_NXZ @ 0x1800D4864 (-is_running@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAA_NXZ.c)
 */

__int64 __fastcall tip::tip_test<tip::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>>::operator bool(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( v1 )
    return tip::details::shared_data<0,0,0>::is_running(v1 + 8);
  return result;
}
