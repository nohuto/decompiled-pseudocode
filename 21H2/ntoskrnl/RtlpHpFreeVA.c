/*
 * XREFs of RtlpHpFreeVA @ 0x1403054C0
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x14022220C (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeFree @ 0x140222928 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x140222AE0 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrCommit @ 0x140315360 (RtlpHpSegMgrCommit.c)
 *     RtlpHpHeapAllocate @ 0x14037B400 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapDestroy @ 0x140389A0C (RtlpHpHeapDestroy.c)
 *     RtlpHpSegMgrRelease @ 0x140389CA4 (RtlpHpSegMgrRelease.c)
 *     RtlpHpLargeAllocationDestroy @ 0x140595820 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpVaMgrCtxFree @ 0x1402208C4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpEnvFreeVA @ 0x140305554 (RtlpHpEnvFreeVA.c)
 *     RtlpHpEnvGetHeapManager @ 0x140314164 (RtlpHpEnvGetHeapManager.c)
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
