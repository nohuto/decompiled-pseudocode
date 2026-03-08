/*
 * XREFs of RtlpFcAddUsageSubscriptionFromUpdate @ 0x1409BFD94
 * Callers:
 *     RtlpFcUpdateUsageTriggers @ 0x1409C05F0 (RtlpFcUpdateUsageTriggers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcAddUsageSubscriptionFromUpdate(__int64 a1, _DWORD *a2, __int64 *a3)
{
  __int64 v3; // r10
  __int64 v4; // r11
  _DWORD *v5; // r9
  __int16 v6; // ax
  __int64 v7; // rcx
  __int64 result; // rax

  if ( !*(_DWORD *)a1 )
  {
    v3 = *a3;
    v4 = 2LL;
    *(_DWORD *)v3 = *(_DWORD *)(a1 + 4);
    v5 = (_DWORD *)(v3 + 8);
    *(_WORD *)(v3 + 4) = *(_WORD *)(a1 + 8);
    v6 = *(_WORD *)(a1 + 10);
    v7 = a1 - v3;
    *(_WORD *)(v3 + 6) = v6;
    do
    {
      *v5 = *(_DWORD *)((char *)v5 + v7 + 4);
      ++v5;
      --v4;
    }
    while ( v4 );
    ++*a2;
    result = v3 + 16;
    *a3 = v3 + 16;
  }
  return result;
}
