/*
 * XREFs of MiIsRangeFullyCommitted @ 0x1407C4160
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1406A0D38 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmProtectVirtualMemory @ 0x1407C77B0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiReadPteShadow @ 0x140224390 (MiReadPteShadow.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiGetProtoPteAddress @ 0x14031C780 (MiGetProtoPteAddress.c)
 */

__int64 __fastcall MiIsRangeFullyCommitted(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 *ProtoPteAddress; // rbx
  __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v8; // r15d
  __int64 v9; // rsi
  signed __int64 *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r11
  __int64 v13; // r10
  unsigned __int64 v14; // r9
  __int64 PteShadow; // rax
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  ProtoPteAddress = (__int64 *)MiGetProtoPteAddress(a1, a2 >> 12, 2, &v18);
  if ( !ProtoPteAddress )
    return 0LL;
  v6 = MiGetProtoPteAddress(a1, a3 >> 12, 2, &v19);
  if ( !v6 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 1;
  v9 = ***(_QWORD ***)(a1 + 72);
  --CurrentThread->SpecialApcDisable;
  v10 = (signed __int64 *)(v9 + 40);
  v11 = KeAbPreAcquire((__int64)v10, 0LL);
  if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10, 0, v11, (__int64)v10);
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  v12 = v19;
  v13 = v18;
  while ( 1 )
  {
    if ( v13 == v12 )
      v14 = v6;
    else
      v14 = *(_QWORD *)(v13 + 8) + 8LL * (unsigned int)(*(_DWORD *)(v13 + 44) - 1);
    if ( (unsigned __int64)ProtoPteAddress <= v14 )
    {
      while ( 1 )
      {
        PteShadow = *ProtoPteAddress;
        if ( (unsigned __int64)ProtoPteAddress >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)ProtoPteAddress <= 0xFFFFF6FB7DBED7F8uLL )
        {
          PteShadow = MiReadPteShadow((unsigned __int64)ProtoPteAddress, *ProtoPteAddress);
        }
        if ( !PteShadow )
          break;
        if ( (unsigned __int64)++ProtoPteAddress > v14 )
          goto LABEL_14;
      }
      v8 = 0;
    }
LABEL_14:
    if ( v13 == v12 )
      break;
    v13 = *(_QWORD *)(v13 + 16);
    v18 = v13;
    ProtoPteAddress = *(__int64 **)(v13 + 8);
    if ( !ProtoPteAddress )
    {
      v8 = 0;
      break;
    }
  }
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery();
  }
  return v8;
}
