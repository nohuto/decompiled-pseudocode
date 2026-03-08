/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00DF358
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00DF2A8 (-Allocate@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C00DF468 (-CommitSlot@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NI@Z.c)
 *     ??1?$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C012DCC4 (--1-$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrument.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<233472,912>::Allocate(__int64 *a1)
{
  __int64 v1; // rbx
  ULONG ClearBits; // eax
  ULONG v4; // ebp
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = *a1;
  v1 = v8;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  ClearBits = RtlFindClearBits((PRTL_BITMAP)(a1[2] ^ a1[3]), 1u, *((_DWORD *)a1 + 8) < 0xE4u ? *((_DWORD *)a1 + 8) : 0);
  v4 = ClearBits;
  if ( ClearBits == -1
    || !(unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<233472,912>::CommitSlot(a1, ClearBits) )
  {
    NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&v8);
    return 0LL;
  }
  else
  {
    RtlTestBit((PRTL_BITMAP)(a1[2] ^ a1[3]), v4);
    RtlSetBit((PRTL_BITMAP)(a1[2] ^ a1[3]), v4);
    ++*((_DWORD *)a1 + 8);
    v5 = a1[2] ^ a1[1];
    *((_DWORD *)a1 + 8) &= -(*((_DWORD *)a1 + 8) < 0xE4u);
    v6 = v5 + (v4 >> 2 << 12);
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
    return v6 + 912 * (v4 & 3);
  }
}
