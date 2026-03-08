/*
 * XREFs of MiAddSecureEntry @ 0x1407D3424
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1406A0D38 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiMapLockedPagesInUserSpace @ 0x140725C90 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateVad @ 0x140728758 (MiAllocateVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140756084 (MiAllocateNewSubAllocatedRegion.c)
 *     MiSecureVad @ 0x14076918C (MiSecureVad.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 *     MiCloneNoChange @ 0x140A2F178 (MiCloneNoChange.c)
 * Callees:
 *     MmGetCurrentProcessorColor @ 0x14020D7A0 (MmGetCurrentProcessorColor.c)
 *     MiLocateExclusiveSecure @ 0x1402EDA70 (MiLocateExclusiveSecure.c)
 *     MiSetVadFlags @ 0x140330D00 (MiSetVadFlags.c)
 *     ExAllocatePoolMm @ 0x14034C1AC (ExAllocatePoolMm.c)
 *     MiInsertVadEvent @ 0x14034C254 (MiInsertVadEvent.c)
 */

_DWORD *__fastcall MiAddSecureEntry(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  int v9; // eax
  _DWORD *PoolMm; // rax
  _DWORD *v11; // rbx

  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 && ((a5 & 1) != 0 || MiLocateExclusiveSecure(a1)) )
    return 0LL;
  LOWORD(v9) = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64, 0x48uLL, 0x65536D4Du, v9 | 0x80000000);
  v11 = PoolMm;
  if ( !PoolMm )
    return 0LL;
  PoolMm[16] = 2;
  *((_QWORD *)PoolMm + 1) = a2;
  *((_QWORD *)PoolMm + 2) = a3;
  if ( (a4 & 1) != 0 )
  {
    PoolMm[2] |= 8u;
  }
  else if ( (a4 & 4) != 0 )
  {
    PoolMm[2] |= 0xAu;
  }
  else if ( (a4 & 2) != 0 )
  {
    PoolMm[2] |= 9u;
  }
  if ( (a5 & 1) != 0 )
    PoolMm[2] |= 0x20u;
  if ( (a5 & 4) != 0 )
    PoolMm[2] |= 0x40u;
  if ( (a5 & 8) != 0 )
    PoolMm[2] |= 0x80u;
  if ( a4 < 0 )
    PoolMm[2] |= 4u;
  if ( (a4 & 0x40000000) != 0 )
    PoolMm[2] |= 0x10u;
  if ( (a4 & 0x20000000) != 0 )
    PoolMm[2] |= 0x100u;
  MiInsertVadEvent(a1, (unsigned __int64 *)PoolMm, 1);
  MiSetVadFlags(a1, 1LL, 1);
  return v11;
}
