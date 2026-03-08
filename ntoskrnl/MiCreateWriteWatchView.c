/*
 * XREFs of MiCreateWriteWatchView @ 0x140755EB4
 * Callers:
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MiAllocateChildVads @ 0x140A4571C (MiAllocateChildVads.c)
 * Callees:
 *     MiGetVadMandatoryPageSize @ 0x1402CAA10 (MiGetVadMandatoryPageSize.c)
 *     MiCreateVadEventBitmap @ 0x140756324 (MiCreateVadEventBitmap.c)
 */

__int64 __fastcall MiCreateWriteWatchView(__int64 a1, __int64 a2)
{
  unsigned __int64 VadMandatoryPageSize; // rax
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 result; // rax

  VadMandatoryPageSize = MiGetVadMandatoryPageSize(a2);
  result = MiCreateVadEventBitmap(
             a1,
             v5,
             (~(VadMandatoryPageSize - 1) & (VadMandatoryPageSize + v4 - 1)) / VadMandatoryPageSize,
             4LL);
  if ( (int)result >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x8000u);
    return 0LL;
  }
  return result;
}
