/*
 * XREFs of ExpHpIsSpecialPoolHeap @ 0x1403CD64C
 * Callers:
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1402D26C0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     ExReturnPoolQuota @ 0x14030631C (ExReturnPoolQuota.c)
 *     ExQueryPoolBlockSize @ 0x1403CD600 (ExQueryPoolBlockSize.c)
 *     ExIsSpecialPoolAddress @ 0x1405BA000 (ExIsSpecialPoolAddress.c)
 * Callees:
 *     MiDeterminePoolType @ 0x14027B41C (MiDeterminePoolType.c)
 */

__int64 __fastcall ExpHpIsSpecialPoolHeap(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // edx
  int v4; // eax
  __int64 *v5; // rax

  v2 = 0;
  v3 = MiDeterminePoolType(a1);
  v4 = 0;
  if ( v3 != 32 )
    v4 = v3;
  if ( v4 == 33 )
  {
    LOBYTE(v2) = a1 == *(_QWORD *)(*(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 672)
                                 + 14568LL);
  }
  else
  {
    v5 = qword_140CDB0C0;
    while ( a1 != *v5 )
    {
      if ( (__int64)++v5 >= (__int64)qword_140CDB0E0 )
        return v2;
    }
    return 1;
  }
  return v2;
}
