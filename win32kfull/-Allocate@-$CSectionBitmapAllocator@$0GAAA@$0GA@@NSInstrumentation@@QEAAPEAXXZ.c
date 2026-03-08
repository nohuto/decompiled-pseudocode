/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C0201300
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C020143C (-Allocate@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ??1?$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C012DCC4 (--1-$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrument.c)
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C0201668 (-CommitSlot@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NI@Z.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<24576,96>::Allocate(__int64 *a1)
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
    || !(unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<24576,96>::CommitSlot(a1, ClearBits) )
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
    v5 = ((v4 / 0x2A) << 12) + (a1[2] ^ a1[1]);
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
    return v5 + 96 * (v4 % 0x2A);
  }
}
