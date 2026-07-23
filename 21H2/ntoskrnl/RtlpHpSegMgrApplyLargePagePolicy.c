/*
 * XREFs of RtlpHpSegMgrApplyLargePagePolicy @ 0x1402499E4
 * Callers:
 *     RtlpHpSegMgrCommitInitiate @ 0x140313FB8 (RtlpHpSegMgrCommitInitiate.c)
 * Callees:
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 */

_BOOL8 __fastcall RtlpHpSegMgrApplyLargePagePolicy(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx

  v1 = *(_BYTE *)(a1 + 13) & 7;
  if ( v1 <= 1 )
  {
    v2 = a1 + *(__int16 *)(a1 + 22);
    v3 = *(_QWORD *)(v2 + 56) + *(_QWORD *)(v2 + 40);
    return v3 < *(_QWORD *)(v2 + 72)
        && (v3 < *(_QWORD *)(v2 + 64)
         || *(_QWORD *)(v2 + 48) + *(_QWORD *)(v2 + 32) >= ((v3 * *(unsigned __int8 *)(v2 + 80)) << 9) / 0x64);
  }
  if ( v1 == 2 )
    return 0LL;
  if ( v1 == 3 )
    return 1LL;
  return ExGenRandom(1LL) & 1;
}
