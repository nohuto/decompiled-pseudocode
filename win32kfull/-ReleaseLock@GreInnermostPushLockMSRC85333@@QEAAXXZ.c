void __fastcall GreInnermostPushLockMSRC85333::ReleaseLock(GreInnermostPushLockMSRC85333 *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  if ( (unsigned int)Feature_3160330556__private_IsEnabledDeviceUsage() )
    CPushLock::ReleaseLock(this, v2, v3);
}
