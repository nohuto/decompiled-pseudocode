/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00DCA80
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00DC9D0 (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C00DCBBC (-CommitSlot@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NI@Z.c)
 *     ??1?$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C012DCC4 (--1-$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrument.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<36864,144>::Allocate(__int64 *a1)
{
  __int64 v1; // rbx
  ULONG ClearBits; // eax
  ULONG v4; // r14d
  __int64 v5; // rdi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = *a1;
  v1 = v7;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  ClearBits = RtlFindClearBits((PRTL_BITMAP)(a1[2] ^ a1[3]), 1u, *((_DWORD *)a1 + 8) < 0xFCu ? *((_DWORD *)a1 + 8) : 0);
  v4 = ClearBits;
  if ( ClearBits == -1
    || !(unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<36864,144>::CommitSlot(a1, ClearBits) )
  {
    NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&v7);
    return 0LL;
  }
  else
  {
    RtlTestBit((PRTL_BITMAP)(a1[2] ^ a1[3]), v4);
    RtlSetBit((PRTL_BITMAP)(a1[2] ^ a1[3]), v4);
    ++*((_DWORD *)a1 + 8);
    *((_DWORD *)a1 + 8) &= -(*((_DWORD *)a1 + 8) < 0xFCu);
    v5 = ((v4 / 0x1C) << 12) + (a1[2] ^ a1[1]);
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
    return v5 + 144 * (v4 % 0x1C);
  }
}
