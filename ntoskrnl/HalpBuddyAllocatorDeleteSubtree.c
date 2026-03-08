/*
 * XREFs of HalpBuddyAllocatorDeleteSubtree @ 0x1405301B8
 * Callers:
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x14052F760 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     HalpBuddyAllocatorCleanUp @ 0x14052FFD0 (HalpBuddyAllocatorCleanUp.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     HalpBuddyAllocatorBltAdd @ 0x14052FBC0 (HalpBuddyAllocatorBltAdd.c)
 *     HalpBuddyAllocatorBltRemove @ 0x14052FEF4 (HalpBuddyAllocatorBltRemove.c)
 */

__int64 __fastcall HalpBuddyAllocatorDeleteSubtree(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx

  *(_BYTE *)(a2 + 72) = 0;
  for ( i = a2; ; i = v7 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(i + 24);
      if ( !v5 )
      {
        v5 = *(_QWORD *)(i + 32);
        if ( !v5 )
          break;
      }
      i = v5;
    }
    if ( i == a2 )
      break;
    HalpBuddyAllocatorBltRemove((_QWORD *)i, a1);
    if ( *(_BYTE *)(i + 72) )
    {
      v6 = *(_QWORD *)(i + 64);
      if ( v6 )
      {
        if ( *(_QWORD *)(i + 40) == a1 + 80 )
        {
          *(_QWORD *)(a1 + 72) -= v6;
        }
        else
        {
          *(_QWORD *)(a1 + 56) -= *(_QWORD *)(i + 64);
          *(_QWORD *)(a1 + 64) -= *(_QWORD *)(i + 56);
        }
      }
    }
    v7 = *(_QWORD *)(i + 16);
    v8 = *(_QWORD *)(v7 + 24);
    if ( v8 == i )
    {
      HalpMmAllocCtxFree(v6, v8);
      *(_QWORD *)(v7 + 24) = 0LL;
    }
    else
    {
      HalpMmAllocCtxFree(v6, *(_QWORD *)(v7 + 32));
      *(_QWORD *)(v7 + 32) = 0LL;
    }
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 48));
  }
  return HalpBuddyAllocatorBltAdd((__int64 *)a2, a1);
}
