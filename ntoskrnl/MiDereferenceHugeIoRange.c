/*
 * XREFs of MiDereferenceHugeIoRange @ 0x14061D51C
 * Callers:
 *     MiZeroHugeRangeWorker @ 0x140620990 (MiZeroHugeRangeWorker.c)
 *     MiZeroHugeRangeCore @ 0x140A2B20C (MiZeroHugeRangeCore.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceHugeIoRange(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 25, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
