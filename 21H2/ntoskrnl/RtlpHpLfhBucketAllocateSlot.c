/*
 * XREFs of RtlpHpLfhBucketAllocateSlot @ 0x140370898
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14037039C (RtlpHpLfhBucketUpdateAffinityMapping.c)
 * Callees:
 *     RtlpHpLfhOwnerInitialize @ 0x140371BFC (RtlpHpLfhOwnerInitialize.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall RtlpHpLfhBucketAllocateSlot(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  void *v6; // rax
  void *v7; // rbx

  v6 = (void *)((__int64 (__fastcall *)(_QWORD, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 40)))(
                 *(_QWORD *)a1,
                 ((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 1LL) << 6);
  v7 = v6;
  if ( v6 )
  {
    memset(v6, 0, 0x40uLL);
    RtlpHpLfhOwnerInitialize(v7, *(unsigned __int8 *)(a2 + 1), a3, a1);
  }
  return v7;
}
