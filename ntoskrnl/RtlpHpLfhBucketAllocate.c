/*
 * XREFs of RtlpHpLfhBucketAllocate @ 0x1403CE658
 * Callers:
 *     RtlpHpLfhContextAllocate @ 0x1402F8774 (RtlpHpLfhContextAllocate.c)
 * Callees:
 *     RtlpHpLfhSlotAllocate @ 0x140310BA0 (RtlpHpLfhSlotAllocate.c)
 */

__int64 __fastcall RtlpHpLfhBucketAllocate(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r10
  unsigned __int8 v5; // al

  v4 = ((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 2LL) << 6;
  if ( *(_BYTE *)(a2 + 2) == 1 )
    v5 = 0;
  else
    v5 = *(_BYTE *)(v4 + BYTE5(KeGetCurrentThread()[1].Spare18) + a2);
  return RtlpHpLfhSlotAllocate(
           a1,
           a2,
           *(_QWORD *)(v4
                     + *(unsigned __int8 *)(a1 + 56)
                     - (unsigned __int64)((*(_BYTE *)(a1 + 56) - 1) & 7)
                     + 7
                     + 8LL * v5
                     + a2),
           a3,
           a4);
}
