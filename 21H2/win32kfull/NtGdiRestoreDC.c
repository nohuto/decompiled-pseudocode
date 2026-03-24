/*
 * XREFs of NtGdiRestoreDC @ 0x1C0111EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiRestoreDC(__int64 a1, __int64 a2)
{
  return GreRestoreDCInternal(a1, a2, 0LL, 1LL);
}
