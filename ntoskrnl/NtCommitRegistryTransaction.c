/*
 * XREFs of NtCommitRegistryTransaction @ 0x140A0A5F0
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     CmpCommitLightWeightTransaction @ 0x140A197CC (CmpCommitLightWeightTransaction.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall NtCommitRegistryTransaction(HANDLE Handle, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // ebx
  NTSTATUS v11; // eax
  PVOID v12; // rdi
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
              8u,
              CmRegistryTransactionType,
              KeGetCurrentThread()->PreviousMode,
              &Object,
              0LL);
      v12 = Object;
      v10 = v11;
      if ( v11 >= 0 )
      {
        CmpAttachToRegistryProcess(&ApcState);
        v10 = CmpCommitLightWeightTransaction(v12);
        CmpDetachFromRegistryProcess(&ApcState);
        if ( v10 >= 0 )
          v10 = 0;
      }
      if ( v12 )
        ObfDereferenceObject(v12);
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
