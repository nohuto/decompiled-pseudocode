/*
 * XREFs of ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1803D1DD8
 * Callers:
 *     _lambda_d35354d926b4f7c0d2efe226c9ec2890_::operator() @ 0x1800CF84C (_lambda_d35354d926b4f7c0d2efe226c9ec2890_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_96402707829379ee7785b9784010763b___::Run @ 0x1800D1C00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_96402707829379ee7785b9784010763b___--Run.c)
 *     ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x1803BCAC0 (-OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 * Callees:
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x1803BBD08 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::RelaunchInputAppAfterTermination(RTL_SRWLOCK **this)
{
  if ( TouchKeyboardExperienceManager::IsSessionShuttingDown() )
    return 0LL;
  else
    return KeyboardHosting::TabTipAdapter::RefreshHardwareKeyboardUIState(this);
}
