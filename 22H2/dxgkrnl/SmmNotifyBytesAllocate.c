/*
 * XREFs of SmmNotifyBytesAllocate @ 0x1C0071114
 * Callers:
 *     ?SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C03D6CFC (-SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmNotifyBytesAllocate(_QWORD *a1, __int64 a2, __int64 a3)
{
  a1[160] += a2;
  a1[161] -= a2;
  a1[163] += a2 - a3;
  a1[162] += a3;
}
