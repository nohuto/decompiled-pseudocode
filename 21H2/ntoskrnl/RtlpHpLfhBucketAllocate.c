/*
 * XREFs of RtlpHpLfhBucketAllocate @ 0x1403925D0
 * Callers:
 *     RtlpHpLfhContextAllocate @ 0x1402234C4 (RtlpHpLfhContextAllocate.c)
 * Callees:
 *     RtlpHpLfhSlotAllocate @ 0x140347B90 (RtlpHpLfhSlotAllocate.c)
 */

__int64 __fastcall RtlpHpLfhBucketAllocate(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rcx
  unsigned __int8 v6; // al
  __int64 v8; // [rsp+40h] [rbp+8h]

  v8 = ((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 2LL) << 6;
  v5 = *(unsigned __int8 *)(a1 + 56) - (unsigned __int64)((*(_BYTE *)(a1 + 56) - 1) & 7) + v8 + 7;
  if ( *(_BYTE *)(a2 + 2) == 1 )
    v6 = 0;
  else
    v6 = *(_BYTE *)(v8 + BYTE5(KeGetCurrentThread()[1].Ucb) + a2);
  return RtlpHpLfhSlotAllocate(a1, a2, *(_QWORD *)(v5 + 8LL * v6 + a2), a3, a4);
}
