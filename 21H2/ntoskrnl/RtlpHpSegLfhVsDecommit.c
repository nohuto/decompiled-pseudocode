/*
 * XREFs of RtlpHpSegLfhVsDecommit @ 0x140312A30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpScheduleCompaction @ 0x140313038 (RtlpHpScheduleCompaction.c)
 *     RtlpHpSegPageRangeCommit @ 0x140315000 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegDescriptorValidate @ 0x14034D020 (RtlpHpSegDescriptorValidate.c)
 */

__int64 __fastcall RtlpHpSegLfhVsDecommit(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v6; // r14
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi

  result = RtlpHpSegDescriptorValidate();
  v6 = a3 >> 12;
  if ( (*(_BYTE *)(a1 + 13) & 8) != 0 )
    return RtlpHpSegPageRangeCommit(a1, 0, 0LL);
  v7 = *(__int16 *)(a1 + 22);
  v8 = *(_QWORD *)(v7 + a1 + 8) >> *(_BYTE *)(a1 + 11);
  if ( v8 <= 8 )
    v8 = 8LL;
  v9 = *(_QWORD *)(v7 + a1 + 8) >> *(_BYTE *)(a1 + 12);
  if ( v9 <= 8 )
    v9 = 8LL;
  v10 = v6 + *(_QWORD *)(v7 + a1 + 16) + *(_QWORD *)(v7 + a1 + 24);
  if ( v10 > v8 )
  {
    result = RtlpHpScheduleCompaction(*(_QWORD *)(a1 + 56));
    if ( (int)result < 0 )
      return RtlpHpSegPageRangeCommit(a1, 0, 0LL);
  }
  if ( v10 > v9 )
    return RtlpHpSegPageRangeCommit(a1, 0, 0LL);
  return result;
}
