/*
 * XREFs of MiEmptyDeferredWorkingSetEntries @ 0x1402CFF20
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x140221870 (MiMakeSystemCacheRangeValid.c)
 *     MiSystemFault @ 0x1402220A0 (MiSystemFault.c)
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiUserFault @ 0x140268260 (MiUserFault.c)
 *     MiCompletePrivateZeroFault @ 0x14026C360 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     MiCompleteRestrictedImageFault @ 0x14028D690 (MiCompleteRestrictedImageFault.c)
 *     MiQueueCoreWorkingSetEntries @ 0x14028D9D0 (MiQueueCoreWorkingSetEntries.c)
 *     MiUnlockFaultPageTable @ 0x140343598 (MiUnlockFaultPageTable.c)
 * Callees:
 *     MiAddWorkingSetEntries @ 0x14026D700 (MiAddWorkingSetEntries.c)
 */

__int64 __fastcall MiEmptyDeferredWorkingSetEntries(__int64 a1)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // ecx
  unsigned __int64 v6; // rdx
  int v7; // r9d
  __int64 result; // rax

  v2 = *(_QWORD *)a1;
  v3 = (__int64)(*(_QWORD *)(a1 + 16) << 25) >> 16 << 25;
  v4 = *(unsigned __int16 *)(a1 + 8);
  v5 = (*(unsigned __int8 *)(a1 + 13) >> 3) & 2;
  v6 = (v4 << 12) + (v3 >> 16);
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v7 = v5 | 5;
  }
  else
  {
    v7 = v5 | 4;
    if ( (*(_BYTE *)(v2 + 184) & 7) != 0 )
      v7 = v5;
  }
  MiAddWorkingSetEntries(v2, v6, *(unsigned __int16 *)(a1 + 10), v7);
  result = 0LL;
  *(_WORD *)(a1 + 10) = 0;
  return result;
}
