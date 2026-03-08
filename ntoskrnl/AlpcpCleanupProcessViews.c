/*
 * XREFs of AlpcpCleanupProcessViews @ 0x140704D30
 * Callers:
 *     LpcExitProcess @ 0x140704CEC (LpcExitProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     AlpcpDereferenceBlobEx @ 0x14071550C (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x1407CAA30 (AlpcpReferenceBlob.c)
 *     AlpcpForceUnlinkSecureView @ 0x1409764EC (AlpcpForceUnlinkSecureView.c)
 */

void __fastcall AlpcpCleanupProcessViews(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v2; // rsi
  _QWORD *v3; // r13
  const void *v4; // r12
  unsigned int v5; // r14d
  __int64 v6; // rbp
  ULONG_PTR v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // r15
  __int64 v10; // rax
  ULONG_PTR v11; // r12
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  _QWORD *v14; // [rsp+60h] [rbp+8h]
  const void *v15; // [rsp+68h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v2 = (volatile signed __int64 *)(a1 + 2048);
  v3 = (_QWORD *)(a1 + 2056);
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 2048, 0LL);
  v14 = v3;
  while ( (_QWORD *)*v3 != v3 )
  {
    v7 = *v3 - 80LL;
    v8 = v5 + 1;
    v9 = 0LL;
    if ( v4 == (const void *)v7 )
      v9 = v6;
    v5 = 0;
    if ( v4 == (const void *)v7 )
      v5 = v8;
    v10 = *v3 - 80LL;
    if ( v4 == (const void *)v7 )
      v10 = (__int64)v4;
    v15 = (const void *)v10;
    v11 = v7 & -(__int64)(AlpcpReferenceBlob(v7) != 0);
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    if ( v9 )
    {
      v6 = v9;
      if ( v5 > 0x64 )
      {
        v13 = 0xFFFFF780000003B0uLL;
        v12 = MEMORY[0xFFFFF780000003B0];
        v3 = v14;
        if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v9 - MEMORY[0xFFFFF780000003B0]) > 0x23C34600 )
        {
          DbgPrintEx(0x69u, 0, "ALPC: View @ %p is stuck.\n", v15);
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
          v5 = 0;
          v6 = 0LL;
        }
      }
    }
    else
    {
      v13 = 0xFFFFF780000003B0uLL;
      v3 = v14;
      v6 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    }
    if ( v11 )
    {
      AlpcpForceUnlinkSecureView(v11, v12, v13);
      AlpcpDereferenceBlobEx(v11);
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v2, 0LL);
    v4 = v15;
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegion();
}
