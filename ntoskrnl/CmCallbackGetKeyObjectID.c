NTSTATUS __stdcall CmCallbackGetKeyObjectID(
        PLARGE_INTEGER Cookie,
        PVOID Object,
        PULONG_PTR ObjectID,
        PCUNICODE_STRING *ObjectName)
{
  __int64 *v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  NTSTATUS started; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  const UNICODE_STRING *v19; // [rsp+20h] [rbp-39h] BYREF
  __int128 v20; // [rsp+28h] [rbp-31h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+38h] [rbp-21h]
  __int128 v22; // [rsp+48h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-1h] BYREF

  v19 = 0LL;
  v22 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((__int64)&v22);
  v20 = 0LL;
  WORD1(v20) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( !Object || *(_DWORD *)Object != 1803104306 || !v7 )
    goto LABEL_16;
  v8 = *((_QWORD *)Object + 1);
  if ( v6 )
    *v6 = v8;
  if ( !ObjectName )
  {
    started = 0;
    goto LABEL_17;
  }
  if ( (v8 & 1) == 0 )
  {
    CmpAttachToRegistryProcess(&ApcState);
    CmpLockRegistry(v11, v10, v12, v13);
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v20, v8);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared((__int64)&v20);
      if ( *(_QWORD *)(v8 + 80) && (int)CmpConstructAndCacheName(v8, &v19) >= 0 )
      {
        started = 0;
        *ObjectName = v19;
      }
      else
      {
        started = -1073741670;
      }
      CmpUnlockKcbStack((__int64)&v20);
    }
    CmpUnlockRegistry(v15, v14, v16, v17);
    CmpDetachFromRegistryProcess(&ApcState);
  }
  else
  {
LABEL_16:
    started = -1073741811;
  }
LABEL_17:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmCleanupThreadInfo((__int64 *)&v22);
  return started;
}
