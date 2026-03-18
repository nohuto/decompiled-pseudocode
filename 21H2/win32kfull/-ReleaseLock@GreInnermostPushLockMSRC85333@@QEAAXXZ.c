/*
 * XREFs of ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C015DB44
 * Callers:
 *     ??1?$lambda_call@V_lambda_d4ac050843a32da14874304f2689d2a8_@@@details@wil@@QEAA@XZ @ 0x1C015DA6C (--1-$lambda_call@V_lambda_d4ac050843a32da14874304f2689d2a8_@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00F4E24 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?Feature_3093221692__private_IsEnabled@@YAHXZ @ 0x1C015DADC (-Feature_3093221692__private_IsEnabled@@YAHXZ.c)
 */

void __fastcall GreInnermostPushLockMSRC85333::ReleaseLock(GreInnermostPushLockMSRC85333 *this)
{
  if ( (unsigned int)Feature_3093221692__private_IsEnabled() )
    CPushLock::ReleaseLock(this);
}
