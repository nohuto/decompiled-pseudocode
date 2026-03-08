/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C0029DF0
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0029F24 (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C002A1EC (-CommitSlot@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NI@Z.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<36864,144>::Allocate(__int64 *a1)
{
  __int64 v1; // rbx
  ULONG ClearBits; // eax
  __int64 v4; // rsi
  ULONG v5; // r14d
  __int64 v6; // rcx

  v1 = *a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  ClearBits = RtlFindClearBits((PRTL_BITMAP)(a1[2] ^ a1[3]), 1u, *((_DWORD *)a1 + 8) < 0xFCu ? *((_DWORD *)a1 + 8) : 0);
  v4 = 0LL;
  v5 = ClearBits;
  if ( ClearBits != -1
    && (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<36864,144>::CommitSlot(a1, ClearBits) )
  {
    RtlTestBit((PRTL_BITMAP)(a1[3] ^ a1[2]), v5);
    RtlSetBit((PRTL_BITMAP)(a1[3] ^ a1[2]), v5);
    ++*((_DWORD *)a1 + 8);
    v6 = a1[2] ^ a1[1];
    *((_DWORD *)a1 + 8) &= -(*((_DWORD *)a1 + 8) < 0xFCu);
    v4 = ((v5 / 0x1C) << 12) + v6 + 144 * (v5 % 0x1C);
  }
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
