/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0DGAAA@$0DGA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C002A9A4
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C002A3B0 (-Allocate@-$CTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0DGAAA@$0DGA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C002AAB0 (-CommitSlot@-$CSectionBitmapAllocator@$0DGAAA@$0DGA@@NSInstrumentation@@AEAA_NI@Z.c)
 */

unsigned __int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<221184,864>::Allocate(__int64 *a1)
{
  __int64 v1; // rbx
  ULONG ClearBits; // eax
  unsigned __int64 v4; // rsi
  ULONG v5; // ebp

  v1 = *a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  ClearBits = RtlFindClearBits((PRTL_BITMAP)(a1[2] ^ a1[3]), 1u, *((_DWORD *)a1 + 8) < 0xD8u ? *((_DWORD *)a1 + 8) : 0);
  v4 = 0LL;
  v5 = ClearBits;
  if ( ClearBits != -1
    && (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<221184,864>::CommitSlot(a1, ClearBits) )
  {
    RtlTestBit((PRTL_BITMAP)(a1[2] ^ a1[3]), v5);
    RtlSetBit((PRTL_BITMAP)(a1[2] ^ a1[3]), v5);
    ++*((_DWORD *)a1 + 8);
    *((_DWORD *)a1 + 8) &= -(*((_DWORD *)a1 + 8) < 0xD8u);
    v4 = (a1[2] ^ a1[1]) + 864 * (v5 & 3) + (unsigned __int64)(v5 >> 2 << 12);
  }
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
