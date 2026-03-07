__int64 __fastcall NtRollbackRegistryTransaction(HANDLE Handle, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // ebx
  NTSTATUS v11; // eax
  volatile signed __int32 *v12; // rdi
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  __int128 v15; // [rsp+38h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  v15 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((__int64)&v15);
  if ( (unsigned __int8)CmpAcquireShutdownRundown(v5, v4, v6) )
  {
    if ( a2 )
    {
      v10 = -1073741811;
    }
    else
    {
      Object = 0LL;
      v11 = ObReferenceObjectByHandle(
              Handle,
              0x10u,
              CmRegistryTransactionType,
              KeGetCurrentThread()->PreviousMode,
              &Object,
              0LL);
      v12 = (volatile signed __int32 *)Object;
      v10 = v11;
      if ( v11 >= 0 )
      {
        CmpAttachToRegistryProcess(&ApcState);
        v10 = CmpRollbackLightWeightTransaction(v12);
        CmpDetachFromRegistryProcess(&ApcState);
        if ( v10 >= 0 )
          v10 = 0;
      }
      if ( v12 )
        ObfDereferenceObject((PVOID)v12);
    }
    CmpReleaseShutdownRundown(v8, v7, v9);
  }
  else
  {
    v10 = -1073741431;
  }
  CmCleanupThreadInfo((__int64 *)&v15);
  return (unsigned int)v10;
}
