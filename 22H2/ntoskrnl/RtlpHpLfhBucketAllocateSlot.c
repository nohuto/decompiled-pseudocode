/*
 * XREFs of RtlpHpLfhBucketAllocateSlot @ 0x1403943CC
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140319688 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 * Callees:
 *     RtlpHpLfhOwnerInitialize @ 0x1402FF6B0 (RtlpHpLfhOwnerInitialize.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall RtlpHpLfhBucketAllocateSlot(unsigned __int64 a1, __int64 a2, int a3)
{
  void *v5; // rax
  __int64 v6; // rbx

  v5 = (void *)((__int64 (__fastcall *)(_QWORD, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 40)))(
                 *(_QWORD *)a1,
                 ((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 1LL) << 6);
  v6 = (__int64)v5;
  if ( v5 )
  {
    memset(v5, 0, 0x40uLL);
    RtlpHpLfhOwnerInitialize(v6, *(_BYTE *)(a2 + 1), a3);
  }
  return v6;
}
