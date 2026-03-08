/*
 * XREFs of NtAlpcRevokeSecurityContext @ 0x140975D00
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     AlpcReferenceBlobByHandle @ 0x1406D1E94 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x14071550C (AlpcpDereferenceBlobEx.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAlpcRevokeSecurityContext(void *a1, int a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // edi
  PVOID v6; // rbp
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rsi
  volatile signed __int64 *v9; // rbp
  int v10; // eax
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
  {
    v5 = -1073741811;
  }
  else
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v6 = Object;
      v7 = AlpcReferenceBlobByHandle((_QWORD *)(*((_QWORD *)Object + 2) + 40LL), a3, AlpcSecurityType);
      v8 = v7;
      if ( v7 )
      {
        if ( v6 == *(PVOID *)(v7 + 24) )
        {
          v9 = (volatile signed __int64 *)(v7 - 16);
          ExAcquirePushLockExclusiveEx(v7 - 16, 0LL);
          v10 = *(_DWORD *)(v8 + 104);
          if ( (v10 & 2) != 0 )
          {
            v5 = -1073741823;
          }
          else
          {
            *(_DWORD *)(v8 + 104) = v10 | 1;
            v5 = 0;
          }
          if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v9);
          KeAbPostRelease((ULONG_PTR)v9);
          v6 = Object;
        }
        else
        {
          v5 = -1073741790;
        }
        AlpcpDereferenceBlobEx(v8, 1);
      }
      else
      {
        v5 = -1073741816;
      }
      ObfDereferenceObject(v6);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
