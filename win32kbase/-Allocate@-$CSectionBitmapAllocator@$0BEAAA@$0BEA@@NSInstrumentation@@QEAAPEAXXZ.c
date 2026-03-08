/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C0180570
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0180690 (-Allocate@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C01808C0 (-CommitSlot@-$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NI@Z.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<81920,320>::Allocate(__int64 *a1)
{
  __int64 v1; // rbx
  ULONG ClearBits; // eax
  __int64 v4; // rsi
  ULONG v5; // r14d
  __int64 v6; // rcx

  v1 = *a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  ClearBits = RtlFindClearBits((PRTL_BITMAP)(a1[2] ^ a1[3]), 1u, *((_DWORD *)a1 + 8) < 0xF0u ? *((_DWORD *)a1 + 8) : 0);
  v4 = 0LL;
  v5 = ClearBits;
  if ( ClearBits != -1
    && (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<81920,320>::CommitSlot(a1, ClearBits) )
  {
    RtlTestBit((PRTL_BITMAP)(a1[3] ^ a1[2]), v5);
    RtlSetBit((PRTL_BITMAP)(a1[3] ^ a1[2]), v5);
    ++*((_DWORD *)a1 + 8);
    v6 = a1[2] ^ a1[1];
    *((_DWORD *)a1 + 8) &= -(*((_DWORD *)a1 + 8) < 0xF0u);
    v4 = ((v5 / 0xC) << 12) + v6 + 320 * (v5 % 0xC);
  }
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
