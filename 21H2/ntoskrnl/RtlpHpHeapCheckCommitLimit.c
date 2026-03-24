/*
 * XREFs of RtlpHpHeapCheckCommitLimit @ 0x14030AB40
 * Callers:
 *     RtlpHpSegHeapCheckCommitLimit @ 0x14030AB10 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpAllocateHeap @ 0x140588B30 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x14058A6B4 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x14058A938 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x14058B100 (RtlpInitializeHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14059356C (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpHeapCheckCommitLimit(__int64 a1, __int64 a2, int a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // r10
  unsigned int v5; // ebx
  char *v7; // rax
  __int64 v8; // r9

  v4 = *a4;
  v5 = 0;
  if ( (*a4 || (v4 = *((_QWORD *)&xmmword_140C1DE10 + 1)) != 0) && a1 + a2 > v4 )
  {
    v7 = (char *)&xmmword_140C1DE10 + 8;
    if ( *a4 )
      v7 = (char *)a4;
    v8 = *((_QWORD *)v7 + 1);
    if ( v8 )
      RtlpLogHeapFailure(21, a3, 0, v8, a1, a2);
  }
  else
  {
    return 1;
  }
  return v5;
}
