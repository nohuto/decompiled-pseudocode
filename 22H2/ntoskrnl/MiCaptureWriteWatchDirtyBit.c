/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x14025A9BC
 * Callers:
 *     MiWsleFlush @ 0x1402A7B80 (MiWsleFlush.c)
 *     MiRevertValidPte @ 0x1402B4990 (MiRevertValidPte.c)
 *     MiMakeVaRangeNoAccess @ 0x140321CF4 (MiMakeVaRangeNoAccess.c)
 *     MiMakeCombineCandidateClean @ 0x1403696DC (MiMakeCombineCandidateClean.c)
 *     MiProtectAweRegion @ 0x14054D2A4 (MiProtectAweRegion.c)
 *     MiBuildForkPte @ 0x1405581FC (MiBuildForkPte.c)
 * Callees:
 *     MiLocateAddress @ 0x14025B070 (MiLocateAddress.c)
 *     MiLocateLockedVadEvent @ 0x14027EA4C (MiLocateLockedVadEvent.c)
 *     MiGetVadMandatoryPageSize @ 0x140298600 (MiGetVadMandatoryPageSize.c)
 *     MiLockVadCore @ 0x140307108 (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x14030A4F0 (MiUnlockVadCore.c)
 */

__int64 __fastcall MiCaptureWriteWatchDirtyBit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 LockedVadEvent; // rdi
  unsigned __int64 VadMandatoryPageSize; // rax
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx

  result = *(unsigned int *)(a1 + 1124);
  v4 = a3;
  if ( (result & 0x20) == 0 )
  {
    if ( a3 || (result = MiLocateAddress(a2), (v4 = result) != 0) )
    {
      result = *(unsigned int *)(v4 + 48);
      if ( (result & 4) == 0 )
      {
        result &= 0x300000u;
        if ( (_DWORD)result == 3145728 )
        {
          LockedVadEvent = MiLocateLockedVadEvent(v4, 4LL);
          VadMandatoryPageSize = MiGetVadMandatoryPageSize();
          v8 = (v7 >> 12) - (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32));
          v9 = v8 / VadMandatoryPageSize;
          MiLockVadCore(v4, v8 % VadMandatoryPageSize);
          LOBYTE(v10) = 2;
          _bittestandset64(*(signed __int64 **)(LockedVadEvent + 16), v9);
          return MiUnlockVadCore(v4, v10);
        }
      }
    }
  }
  return result;
}
