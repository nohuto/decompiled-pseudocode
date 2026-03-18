/*
 * XREFs of RtlpHpFreeVA @ 0x140212178
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x14024F060 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrReserve @ 0x1403149D4 (RtlpHpSegMgrReserve.c)
 *     RtlpHpSegMgrRelease @ 0x1403150E8 (RtlpHpSegMgrRelease.c)
 *     RtlpHpLargeFree @ 0x140323C8C (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x140323EBC (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapAllocate @ 0x140397AD8 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapDestroy @ 0x1405B66C0 (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1405B7350 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpVaMgrCtxFree @ 0x140210A8C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpEnvFreeVA @ 0x140212200 (RtlpHpEnvFreeVA.c)
 */

__int64 __fastcall RtlpHpFreeVA(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3, _OWORD *a4)
{
  unsigned int v4; // ebx
  int v5; // eax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx

  v4 = 0;
  v5 = a3 & 0x1000000;
  LODWORD(a3) = a3 & 0xFEFFFFFF;
  if ( (_DWORD)a3 != 0x8000 || v5 )
  {
    if ( BYTE1(*a4) != 4 )
      return (unsigned int)RtlpHpEnvFreeVA(a1, a2, a3);
  }
  else
  {
    v9 = *a1;
    v10 = v9 + *a2;
    v11 = (v9 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v12 = v10 - v11;
    *a1 = v11;
    *a2 = v12;
    if ( v12 )
      RtlpHpVaMgrCtxFree((__int64)&unk_140C71218, a1, a2);
  }
  return v4;
}
