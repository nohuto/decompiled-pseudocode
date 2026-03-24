/*
 * XREFs of RtlpHpFreeVA @ 0x1402FA770
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x1402A4DCC (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeFree @ 0x1402A54E8 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1402A56A0 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrCommit @ 0x14030A610 (RtlpHpSegMgrCommit.c)
 *     RtlpHpHeapAllocate @ 0x14037B8B0 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapDestroy @ 0x1403898BC (RtlpHpHeapDestroy.c)
 *     RtlpHpSegMgrRelease @ 0x140389B54 (RtlpHpSegMgrRelease.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1405955F0 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpVaMgrCtxFree @ 0x1402A3484 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpEnvFreeVA @ 0x1402FA804 (RtlpHpEnvFreeVA.c)
 *     RtlpHpEnvGetHeapManager @ 0x140309414 (RtlpHpEnvGetHeapManager.c)
 */

__int64 __fastcall RtlpHpFreeVA(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3, __int128 *a4)
{
  __int128 v4; // xmm0
  unsigned int v5; // ebx
  int v6; // eax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 HeapManager; // rax
  _QWORD *v15; // r10
  _QWORD *v16; // r11
  __int128 v17; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a4;
  v5 = 0;
  v6 = a3 & 0x1000000;
  LODWORD(a3) = a3 & 0xFEFFFFFF;
  v17 = *a4;
  if ( (_DWORD)a3 != 0x8000 || v6 )
  {
    if ( BYTE1(v17) < 2u )
      return (unsigned int)RtlpHpEnvFreeVA(a1, a2, a3);
  }
  else
  {
    v10 = *a1;
    v11 = v10 + *a2;
    v12 = (v10 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v13 = v11 - v12;
    *a1 = v12;
    *a2 = v13;
    if ( v13 )
    {
      v17 = v4;
      HeapManager = RtlpHpEnvGetHeapManager(&v17, v13);
      RtlpHpVaMgrCtxFree(HeapManager + 88, v16, v15);
    }
  }
  return v5;
}
