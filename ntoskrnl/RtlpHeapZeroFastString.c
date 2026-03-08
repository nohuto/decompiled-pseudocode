/*
 * XREFs of RtlpHeapZeroFastString @ 0x1403D2DA0
 * Callers:
 *     RtlHeapZero @ 0x1403D2D10 (RtlHeapZero.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHeapZeroFastString(_OWORD *a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax

  *a1 = v2;
  a1[1] = v2;
  result = 0LL;
  a1[2] = v2;
  memset(
    (void *)(((unsigned __int64)a1 + 63) & 0xFFFFFFFFFFFFFFC0uLL),
    0,
    (unsigned __int64)a1 + a2 - (((unsigned __int64)a1 + 63) & 0xFFFFFFFFFFFFFFC0uLL));
  return result;
}
