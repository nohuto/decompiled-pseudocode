/*
 * XREFs of StorCreateEventQueue @ 0x1C0019A68
 * Callers:
 *     RaidUnitAllocateResources @ 0x1C00196B0 (RaidUnitAllocateResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorCreateEventQueue(_QWORD *a1)
{
  ULONG MaximumProcessorCount; // esi
  __int64 v3; // rbp
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rdi
  char *v6; // rbx
  _QWORD *v7; // rax
  __int64 result; // rax

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v3 = MaximumProcessorCount;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, (MaximumProcessorCount + 1LL) << 6, 0x51506152u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( MaximumProcessorCount )
  {
    v6 = (char *)(PoolWithTag + 18);
    do
    {
      *(_QWORD *)v6 = v6 - 8;
      *((_QWORD *)v6 - 1) = v6 - 8;
      KeInitializeSpinLock((PKSPIN_LOCK)v6 + 4);
      *((_DWORD *)v6 + 10) = -1;
      v7 = v6 + 8;
      *((_QWORD *)v6 + 3) = 0LL;
      *((_QWORD *)v6 + 2) = v6 + 8;
      v6 += 64;
      *v7 = v7;
      --v3;
    }
    while ( v3 );
  }
  *v5 = 0;
  v5[2] = MaximumProcessorCount;
  result = 0LL;
  v5[1] = 4;
  *a1 = v5;
  return result;
}
