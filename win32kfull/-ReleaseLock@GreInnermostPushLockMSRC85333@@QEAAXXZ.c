/*
 * XREFs of ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C012F8E8
 * Callers:
 *     ??1?$lambda_call@V_lambda_d4ac050843a32da14874304f2689d2a8_@@@details@wil@@QEAA@XZ @ 0x1C012F82C (--1-$lambda_call@V_lambda_d4ac050843a32da14874304f2689d2a8_@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00DBE14 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     Feature_3160330556__private_IsEnabledDeviceUsage @ 0x1C012FB20 (Feature_3160330556__private_IsEnabledDeviceUsage.c)
 */

void __fastcall GreInnermostPushLockMSRC85333::ReleaseLock(GreInnermostPushLockMSRC85333 *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  if ( (unsigned int)Feature_3160330556__private_IsEnabledDeviceUsage() )
    CPushLock::ReleaseLock(this, v2, v3);
}
