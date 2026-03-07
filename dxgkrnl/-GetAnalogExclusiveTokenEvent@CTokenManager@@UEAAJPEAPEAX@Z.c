__int64 __fastcall CTokenManager::GetAnalogExclusiveTokenEvent(void **this, void **a2)
{
  int v4; // esi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  CTokenManager::AcquireTokenManagerLock((CTokenManager *)this);
  if ( this[10]
    || (memset(&ObjectAttributes.Length + 1, 0, 20),
        memset(&ObjectAttributes.Attributes + 1, 0, 20),
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 512,
        v4 = ZwCreateEvent(this + 10, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0),
        v4 >= 0) )
  {
    v4 = CTokenManager::OpenEventForSynchonize(this[10], a2);
  }
  this[13] = 0LL;
  ExReleasePushLockExclusiveEx(this + 12, 0LL);
  return (unsigned int)v4;
}
