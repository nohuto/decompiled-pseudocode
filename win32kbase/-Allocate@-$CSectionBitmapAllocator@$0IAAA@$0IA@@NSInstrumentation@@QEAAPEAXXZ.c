/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C0002018
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00299D0 (-Allocate@-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     GreCreateRectRgnIndirect @ 0x1C0050B70 (GreCreateRectRgnIndirect.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0053290 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0056850 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C0002124 (-CommitSlot@-$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@AEAA_NI@Z.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<32768,128>::Allocate(__int64 *a1)
{
  __int64 v1; // rbx
  ULONG ClearBits; // eax
  __int64 v4; // rsi
  ULONG v5; // ebp
  __int64 v6; // rcx

  v1 = *a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  ClearBits = RtlFindClearBits((PRTL_BITMAP)(a1[2] ^ a1[3]), 1u, *((_DWORD *)a1 + 8) < 0x100u ? *((_DWORD *)a1 + 8) : 0);
  v4 = 0LL;
  v5 = ClearBits;
  if ( ClearBits != -1
    && (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<32768,128>::CommitSlot(a1, ClearBits) )
  {
    RtlTestBit((PRTL_BITMAP)(a1[2] ^ a1[3]), v5);
    RtlSetBit((PRTL_BITMAP)(a1[2] ^ a1[3]), v5);
    ++*((_DWORD *)a1 + 8);
    v6 = a1[2] ^ a1[1];
    *((_DWORD *)a1 + 8) &= -(*((_DWORD *)a1 + 8) < 0x100u);
    v4 = v6 + ((unsigned __int8)(v5 & 0x1F) << 7) + (unsigned __int64)(v5 >> 5 << 12);
  }
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
