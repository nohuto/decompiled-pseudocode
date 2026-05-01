/*
 * XREFs of ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x1803BBA38
 * Callers:
 *     _lambda_43e2ea7707e3cc3476f49dcfffc6812f_::operator() @ 0x1800CEE78 (_lambda_43e2ea7707e3cc3476f49dcfffc6812f_--operator().c)
 *     _lambda_d35354d926b4f7c0d2efe226c9ec2890_::operator() @ 0x1800CF82C (_lambda_d35354d926b4f7c0d2efe226c9ec2890_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_96402707829379ee7785b9784010763b___::Run @ 0x1800D1BE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_96402707829379ee7785b9784010763b___--Run.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1803B8294 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1803D1B08 (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool TouchKeyboardExperienceManager::IsSessionShuttingDown(void)
{
  return GetSystemMetrics(0x2000) != 0;
}
