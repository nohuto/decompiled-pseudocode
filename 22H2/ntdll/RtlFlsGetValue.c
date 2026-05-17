/*
 * XREFs of RtlFlsGetValue @ 0x180053600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFlsGetValue(int a1, _QWORD *a2)
{
  _QWORD *FlsData; // rax
  unsigned int v4; // r10d
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rax

  FlsData = NtCurrentTeb()->FlsData;
  if ( (unsigned int)(a1 - 1) > 0xFEE || !FlsData )
    return 3221225485LL;
  v4 = a1 + 16;
  _BitScanReverse((unsigned int *)&a1, a1 + 16);
  v5 = FlsData[(unsigned int)(a1 - 4) + 2];
  if ( v5 && (v6 = (__int64 *)(v5 + 8 * (((unsigned int)(1 << a1) ^ (unsigned __int64)v4) + 1))) != 0LL )
    v7 = *v6;
  else
    v7 = 0LL;
  *a2 = v7;
  return 0LL;
}
