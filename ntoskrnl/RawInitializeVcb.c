/*
 * XREFs of RawInitializeVcb @ 0x1406F3B48
 * Callers:
 *     RawMountVolume @ 0x1406F37D0 (RawMountVolume.c)
 * Callees:
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1406F3D20 (ExAllocateCacheAwareRundownProtection.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RawInitializeVcb(_DWORD *a1, __int64 a2, __int64 a3)
{
  PVOID PoolWithTag; // rax
  PVOID v7; // rbx
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  unsigned int v9; // ebx
  char v10; // al
  __int64 result; // rax

  memset(a1, 0, 0x158uLL);
  *((_QWORD *)a1 + 24) = a3;
  *a1 = 22545920;
  *((_QWORD *)a1 + 23) = a2;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x60uLL, 0x20776152u);
  *((_QWORD *)a1 + 25) = PoolWithTag;
  v7 = PoolWithTag;
  CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x20776152u);
  *((_QWORD *)a1 + 28) = CacheAwareRundownProtection;
  a1[58] = 1;
  v9 = v7 == 0LL ? 0xC000009A : 0;
  if ( !CacheAwareRundownProtection )
    v9 = -1073741670;
  *((_QWORD *)a1 + 30) = 0LL;
  a1[62] = 0;
  KeInitializeEvent((PRKEVENT)(a1 + 64), SynchronizationEvent, 0);
  *((_QWORD *)a1 + 37) = 0LL;
  a1[76] = 0;
  a1[72] = 1;
  KeInitializeEvent((PRKEVENT)a1 + 13, SynchronizationEvent, 0);
  v10 = *((_BYTE *)a1 + 7);
  *((_BYTE *)a1 + 4) |= 0x40u;
  *((_BYTE *)a1 + 6) |= 2u;
  *((_BYTE *)a1 + 7) = v10 & 0xF | 0x40;
  *((_QWORD *)a1 + 8) = a1 + 14;
  *((_QWORD *)a1 + 7) = a1 + 14;
  if ( a1 != (_DWORD *)-288LL )
    *((_QWORD *)a1 + 6) = a1 + 72;
  *((_QWORD *)a1 + 9) = 0LL;
  result = v9;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 11) = 0LL;
  *((_QWORD *)a1 + 12) = 0LL;
  a1[26] = 0;
  a1[28] |= 0x10u;
  return result;
}
