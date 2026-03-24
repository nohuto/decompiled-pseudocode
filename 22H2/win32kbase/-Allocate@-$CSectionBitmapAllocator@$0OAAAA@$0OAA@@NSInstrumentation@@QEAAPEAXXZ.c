/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00C8A28
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00C8AFC (-Allocate@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     GreLeaveCriticalRegionAndReleasePushLockExclusive @ 0x1C00309D0 (GreLeaveCriticalRegionAndReleasePushLockExclusive.c)
 *     GreEnterCriticalRegionAndAcquirePushLockExclusive @ 0x1C0031430 (GreEnterCriticalRegionAndAcquirePushLockExclusive.c)
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C00C8CC0 (-CommitSlot@-$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA_NI@Z.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<917504,3584>::Allocate(__int64 a1)
{
  __int64 v1; // rbx
  ULONG ClearBits; // eax
  __int64 v4; // rdi
  ULONG v5; // ebp

  v1 = *(_QWORD *)a1;
  GreEnterCriticalRegionAndAcquirePushLockExclusive(*(_QWORD *)a1);
  ClearBits = RtlFindClearBits(
                (PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)),
                1u,
                *(_DWORD *)(a1 + 32) < 0xE0u ? *(_DWORD *)(a1 + 32) : 0);
  v4 = 0LL;
  v5 = ClearBits;
  if ( ClearBits != -1
    && (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<917504,3584>::CommitSlot(a1, ClearBits) )
  {
    RtlTestBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)), v5);
    RtlSetBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)), v5);
    if ( ++*(_DWORD *)(a1 + 32) >= 0xE0u )
      *(_DWORD *)(a1 + 32) = 0;
    v4 = (v5 << 12) + (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 8));
  }
  GreLeaveCriticalRegionAndReleasePushLockExclusive(v1);
  return v4;
}
