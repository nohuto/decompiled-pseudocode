char __fastcall CHidInput::OnRIMDeviceDestroyed(
        CHidInput *this,
        struct RawInputManagerDeviceObject *a2,
        struct DEVICEINFO *a3)
{
  char v3; // di
  __int64 v4; // rbx
  __int64 v5; // rdx
  const struct tagDomLock *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  int *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v3 = 1;
  if ( (*((_DWORD *)a2 + 68) & 0x80u) != 0 )
  {
    v4 = *((_QWORD *)a2 + 68);
    CInputSystemMetrics::UpdatePointerDeviceSystemMetrics(this, a3, 0);
    if ( *(_QWORD *)(v4 + 1056) )
      CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)v4);
    HMUnlockObject(v4);
    if ( *(_DWORD *)(v4 + 8) )
    {
      return 0;
    }
    else
    {
      LockRefactorStagingAssertOwned(v6, v5, v7, v8);
      HMMarkObjectDestroyWorker((_DWORD *)v4);
      HMRemoveHandleForObject(v10, v9, v11, v12);
    }
  }
  return v3;
}
