/*
 * XREFs of AlpcpAssociateIoCompletionPort @ 0x140689FD8
 * Callers:
 *     NtAlpcSetInformation @ 0x140689DC0 (NtAlpcSetInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x1402917C0 (AlpcpFreeCompletionPacketLookaside.c)
 *     AlpcpQueueIoCompletionPort @ 0x1402925F4 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14068A4D8 (AlpcpAllocateCompletionPacketLookaside.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall AlpcpAssociateIoCompletionPort(__int64 a1, void *a2, __int64 a3)
{
  volatile signed __int64 *v6; // rdi
  NTSTATUS v7; // eax
  _DWORD *v8; // rdx
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 CompletionPacketLookaside; // rax
  _QWORD *i; // r14
  void *v15; // rcx
  KSPIN_LOCK *v16; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225485LL;
  v6 = (volatile signed __int64 *)(a1 + 352);
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
  if ( *(_QWORD *)(a1 + 32) )
  {
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    return 3221225544LL;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 360) )
    {
      Object = 0LL;
      v7 = ObReferenceObjectByHandle(a2, 2u, IoCompletionObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
      v8 = Object;
      *(_QWORD *)(a1 + 32) = Object;
      v9 = v7;
      if ( v7 >= 0 )
      {
        v10 = *(_QWORD *)(a1 + 360);
        *(_QWORD *)(a1 + 40) = a3;
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 96) >> 3;
        }
        else
        {
          if ( (*(_BYTE *)v8 & 0x7F) == 0x15 )
            LODWORD(v11) = v8[166];
          else
            LODWORD(v11) = v8[11];
          if ( (unsigned int)v11 > 4 )
            LODWORD(v11) = 4;
        }
        CompletionPacketLookaside = AlpcpAllocateCompletionPacketLookaside((unsigned int)v11, v8, a3);
        *(_QWORD *)(a1 + 48) = CompletionPacketLookaside;
        if ( CompletionPacketLookaside )
        {
          ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
          for ( i = *(_QWORD **)(a1 + 144); i != (_QWORD *)(a1 + 144); i = (_QWORD *)*i )
            AlpcpQueueIoCompletionPort((_QWORD *)a1, 0, 0, 0, 0);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 136));
          KeAbPostRelease(a1 + 136);
          v9 = 0;
LABEL_16:
          if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v6);
          KeAbPostRelease((ULONG_PTR)v6);
          return v9;
        }
        v9 = -1073741670;
      }
      v15 = *(void **)(a1 + 32);
      if ( v15 )
      {
        ObfDereferenceObject(v15);
        *(_QWORD *)(a1 + 32) = 0LL;
      }
      v16 = *(KSPIN_LOCK **)(a1 + 48);
      if ( v16 )
      {
        AlpcpFreeCompletionPacketLookaside(v16);
        *(_QWORD *)(a1 + 48) = 0LL;
      }
      goto LABEL_16;
    }
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    return 3221225659LL;
  }
}
