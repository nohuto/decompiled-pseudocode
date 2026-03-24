/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C0068300
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C013E598 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C006841C (-CommitSlot@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NI@Z.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(__int64 *a1)
{
  __int64 v1; // rbx
  ULONG v3; // r8d
  __int64 v4; // rsi
  ULONG ClearBits; // eax
  ULONG v6; // ebp

  v1 = *a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  v3 = *((_DWORD *)a1 + 8);
  v4 = 0LL;
  if ( v3 >= 0xFC )
    v3 = 0;
  ClearBits = RtlFindClearBits((PRTL_BITMAP)(a1[2] ^ a1[3]), 1u, v3);
  v6 = ClearBits;
  if ( ClearBits != -1
    && (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<28672,112>::CommitSlot(a1, ClearBits) )
  {
    RtlTestBit((PRTL_BITMAP)(a1[2] ^ a1[3]), v6);
    RtlSetBit((PRTL_BITMAP)(a1[2] ^ a1[3]), v6);
    if ( ++*((_DWORD *)a1 + 8) >= 0xFCu )
      *((_DWORD *)a1 + 8) = 0;
    v4 = ((v6 / 0x24) << 12) + (a1[2] ^ a1[1]) + 112 * (v6 % 0x24);
  }
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
