/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x140228730
 * Callers:
 *     MiMakeCombineCandidateClean @ 0x140210FE0 (MiMakeCombineCandidateClean.c)
 *     MiMakeVaRangeNoAccess @ 0x1402EF244 (MiMakeVaRangeNoAccess.c)
 *     MiRevertValidPte @ 0x140322DC0 (MiRevertValidPte.c)
 *     MiWsleFlush @ 0x14032B4A0 (MiWsleFlush.c)
 *     MiProtectAweRegion @ 0x140648DF8 (MiProtectAweRegion.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14020DC68 (MiLocateLockedVadEvent.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlockVadCore @ 0x1402CA9D4 (MiUnlockVadCore.c)
 *     MiGetVadMandatoryPageSize @ 0x1402CAA10 (MiGetVadMandatoryPageSize.c)
 *     MiLockVadCore @ 0x140330E20 (MiLockVadCore.c)
 */

void __fastcall MiCaptureWriteWatchDirtyBit(__int64 a1, unsigned __int64 a2, __int64 **a3)
{
  __int64 **Address; // rsi
  unsigned __int64 LockedVadEvent; // rdi
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
      if ( ((_DWORD)Address[6] & 0x600000) == 0x600000 )
      {
        LockedVadEvent = MiLocateLockedVadEvent((__int64)Address, 4);
        VadMandatoryPageSize = MiGetVadMandatoryPageSize();
        v7 = ((a2 >> 12)
            - (*((unsigned int *)Address + 6) | ((unsigned __int64)*((unsigned __int8 *)Address + 32) << 32)))
           % VadMandatoryPageSize;
        v8 = ((a2 >> 12)
            - (*((unsigned int *)Address + 6) | ((unsigned __int64)*((unsigned __int8 *)Address + 32) << 32)))
           / VadMandatoryPageSize;
        MiLockVadCore(Address, v7);
        LOBYTE(v9) = 2;
        _bittestandset64(*(signed __int64 **)(LockedVadEvent + 16), v8);
        MiUnlockVadCore(Address, v9);
      }
    }
  }
}
