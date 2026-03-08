/*
 * XREFs of ExpSaBinaryArrayRemove @ 0x1403D00EC
 * Callers:
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403BFEBC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1403CFF54 (ExpSaPageGroupDescriptorFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpSaBinaryArrayRemove(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // rdx
  _QWORD *v6; // rcx

  _BitScanReverse(&v3, a2);
  v4 = a2 ^ (1 << v3);
  v5 = v3 - 2;
  v6 = *(_QWORD **)(a1 + 8 * v5);
  v6[v4 + 1] = 0LL;
  if ( (*v6)-- == 1LL )
  {
    *(_QWORD *)(a1 + 8 * v5) = 0LL;
    ExFreePoolWithTag(v6, 0);
  }
}
