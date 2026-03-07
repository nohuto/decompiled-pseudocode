__int64 __fastcall CmpEnumerateCallback(__int64 **a1)
{
  __int64 *v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  signed __int32 v7[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v8 = 0LL;
  CmpInitializeThreadInfo((__int64)v8);
  CmpLockCallbackListShared();
  v2 = &CallbackListHead;
  if ( *a1 )
    v2 = *a1;
  v3 = (unsigned __int64)*a1 & -(__int64)(*a1 != 0LL);
  v4 = *v2;
  v5 = 0LL;
  while ( (__int64 *)v4 != &CallbackListHead )
  {
    if ( *(int *)(v4 + 16) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 16));
      v5 = *(_QWORD *)(v4 + 40);
      *a1 = (__int64 *)v4;
      break;
    }
    v4 = *(_QWORD *)v4;
  }
  CmpUnlockCallbackList();
  if ( v3 )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(v3 + 16)) == 0x80000000 )
    {
      _InterlockedOr(v7, 0);
      if ( CallbackListDeleteEvent )
        ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
    }
  }
  CmCleanupThreadInfo(v8);
  return v5;
}
