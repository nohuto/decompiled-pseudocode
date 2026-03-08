/*
 * XREFs of AcpiPccRingDoorbell @ 0x1C0034340
 * Callers:
 *     AcpiPccExecuteCommandAsync @ 0x1C0033FB0 (AcpiPccExecuteCommandAsync.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C0004968 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C00344E8 (WriteIoMemRaw.c)
 */

void __fastcall AcpiPccRingDoorbell(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KSPIN_LOCK *v4; // rdi
  KIRQL v6; // al
  unsigned int v7; // r8d
  int v8; // edx
  unsigned __int64 v9; // rdx
  unsigned __int64 IoMemRaw; // rax
  char v11; // cl
  char v12; // cl
  __int64 v13; // rdi
  __int64 v14; // rax
  char v15; // cl
  __int64 v16; // r9

  v4 = (KSPIN_LOCK *)(DeferredContext + 648);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeferredContext + 81);
  v7 = *((_DWORD *)DeferredContext + 1);
  *((_DWORD *)DeferredContext + 160) = 0;
  v8 = (v7 >> 1) & 0xF;
  if ( ((v8 - 7) & 0xFFFFFFF9) == 0 && v8 != 13 )
    *((_DWORD *)DeferredContext + 1) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(2 * (v7 >> 1) - 2)) & 0x1E;
  _InterlockedExchange((volatile __int32 *)DeferredContext + 108, 1);
  KeReleaseSpinLock(v4, v6);
  if ( **((__int16 **)DeferredContext + 6) < 0 && ((*DeferredContext + 1) & 0xFE) == 0 )
    _InterlockedIncrement(&AcpiPccSciReferenceCount);
  if ( (unsigned __int8)DeferredContext[88] < 2u )
  {
    IoMemRaw = ReadIoMemRaw(
                 *(unsigned __int8 **)(DeferredContext + 92),
                 (unsigned __int8)DeferredContext[88],
                 (unsigned __int8)DeferredContext[91]);
    v9 = IoMemRaw;
    if ( IoMemRaw )
    {
      v11 = DeferredContext[90];
      if ( v11 )
        v9 = IoMemRaw >> v11;
      v12 = DeferredContext[89];
      if ( (unsigned __int8)v12 < 0x40u )
        v9 &= (1LL << v12) - 1;
    }
  }
  else
  {
    v9 = 0LL;
  }
  v13 = *((_QWORD *)DeferredContext + 8) | v9 & *((_QWORD *)DeferredContext + 9);
  if ( (unsigned __int8)DeferredContext[88] <= 1u )
  {
    if ( DeferredContext[90] )
    {
      v14 = ReadIoMemRaw(
              *(unsigned __int8 **)(DeferredContext + 92),
              (unsigned __int8)DeferredContext[88],
              (unsigned __int8)DeferredContext[91]);
      v15 = DeferredContext[90];
      v16 = (__int64)((1 << DeferredContext[89]) - 1) << v15;
      v13 = v14 & ~v16 | v16 & (v13 << v15);
    }
    WriteIoMemRaw(
      *(_QWORD *)(DeferredContext + 92),
      (unsigned __int8)DeferredContext[88],
      (unsigned __int8)DeferredContext[91],
      v13);
  }
  KeSetTimer2(DeferredContext + 440, -10LL * *((unsigned int *)DeferredContext + 3), 0LL, 0LL);
}
