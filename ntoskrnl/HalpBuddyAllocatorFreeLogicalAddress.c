/*
 * XREFs of HalpBuddyAllocatorFreeLogicalAddress @ 0x140456A60
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     HalpBuddyAllocatorBltAdd @ 0x14052FBC0 (HalpBuddyAllocatorBltAdd.c)
 *     HalpBuddyAllocatorBltPopBuddy @ 0x14052FE04 (HalpBuddyAllocatorBltPopBuddy.c)
 */

__int64 __fastcall HalpBuddyAllocatorFreeLogicalAddress(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // r14

  v2 = *(_QWORD *)(a1 + 88);
  v4 = 0;
  while ( *(_QWORD *)(v2 + 48) != a2 || *(_QWORD *)(v2 + 24) || *(_QWORD *)(v2 + 32) )
  {
    v5 = *(_QWORD *)(v2 + 32);
    if ( v5 && *(_QWORD *)(v5 + 48) <= a2 )
    {
      v2 = *(_QWORD *)(v2 + 32);
    }
    else
    {
      v2 = *(_QWORD *)(v2 + 24);
      if ( !v2 )
        return (unsigned int)-1073741811;
    }
  }
  if ( !*(_BYTE *)(v2 + 72) || *(_QWORD *)(v2 + 40) == a1 + 80 )
    return (unsigned int)-1073741811;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), -*(_QWORD *)(v2 + 64));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), -*(_QWORD *)(v2 + 56));
  *(_BYTE *)(v2 + 72) = 0;
  *(_QWORD *)(v2 + 64) = 0LL;
  while ( 1 )
  {
    v9 = (__int64 *)(v2 + 16);
    if ( !*(_QWORD *)(v2 + 16) || !HalpBuddyAllocatorBltPopBuddy(v2, a1) )
      break;
    v2 = *v9;
    HalpMmAllocCtxFree(v7, *(_QWORD *)(*v9 + 24));
    HalpMmAllocCtxFree(v8, *(_QWORD *)(v2 + 32));
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_BYTE *)(v2 + 72) = 0;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFEuLL);
  }
  HalpBuddyAllocatorBltAdd(v2, a1);
  return v4;
}
