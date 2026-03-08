/*
 * XREFs of RtlpFillMemoryRandomUp @ 0x140678AF0
 * Callers:
 *     RtlpGenericRandomPatternWorker @ 0x140679048 (RtlpGenericRandomPatternWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFillMemoryRandomUp(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rdx
  __int64 result; // rax

  v4 = a1 + 512;
  while ( a1 < v4 )
  {
    *a1 = a3;
    result = a3 & 0xF;
    a3 = *(_QWORD *)(a4 + 8 * result) ^ (a3 >> 4);
    ++a1;
  }
  return result;
}
