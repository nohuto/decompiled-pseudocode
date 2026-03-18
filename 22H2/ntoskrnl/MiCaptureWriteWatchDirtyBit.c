/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x1402170D0
 * Callers:
 *     MiMakeCombineCandidateClean @ 0x14021745C (MiMakeCombineCandidateClean.c)
 *     MiRevertValidPte @ 0x140278960 (MiRevertValidPte.c)
 *     MiWsleFlush @ 0x140280CF0 (MiWsleFlush.c)
 *     MiMakeVaRangeNoAccess @ 0x14035B5CC (MiMakeVaRangeNoAccess.c)
 *     MiProtectAweRegion @ 0x14064B414 (MiProtectAweRegion.c)
 *     MiBuildForkPte @ 0x140662270 (MiBuildForkPte.c)
 * Callees:
 *     MiLocateAddress @ 0x140217260 (MiLocateAddress.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025ABF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLockVadCore @ 0x1402876B0 (MiLockVadCore.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlockVadCore @ 0x1402EAAE4 (MiUnlockVadCore.c)
 *     MiGetVadMandatoryPageSize @ 0x1402EADF0 (MiGetVadMandatoryPageSize.c)
 *     MiLocateLockedVadEvent @ 0x14030B2F4 (MiLocateLockedVadEvent.c)
 */

void __fastcall MiCaptureWriteWatchDirtyBit(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 Address; // rsi
  __int64 LockedVadEvent; // rdi
  unsigned __int64 VadMandatoryPageSize; // rax
  unsigned __int64 v7; // rt2
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx

  Address = a3;
  if ( (*(_DWORD *)(a1 + 1124) & 0x20) == 0 )
  {
    if ( a3
      || (ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                          + 284)),
          Address = MiLocateAddress(a2),
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                            + 284)),
          Address) )
    {
      if ( (*(_DWORD *)(Address + 48) & 0x600000) == 0x600000 )
      {
        LockedVadEvent = MiLocateLockedVadEvent(Address, 4LL);
        VadMandatoryPageSize = MiGetVadMandatoryPageSize();
        v7 = ((a2 >> 12)
            - (*(unsigned int *)(Address + 24) | ((unsigned __int64)*(unsigned __int8 *)(Address + 32) << 32)))
           % VadMandatoryPageSize;
        v8 = ((a2 >> 12)
            - (*(unsigned int *)(Address + 24) | ((unsigned __int64)*(unsigned __int8 *)(Address + 32) << 32)))
           / VadMandatoryPageSize;
        MiLockVadCore(Address, v7);
        LOBYTE(v9) = 2;
        _bittestandset64(*(signed __int64 **)(LockedVadEvent + 16), v8);
        MiUnlockVadCore(Address, v9);
      }
    }
  }
}
