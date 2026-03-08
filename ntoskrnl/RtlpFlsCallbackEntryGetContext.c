/*
 * XREFs of RtlpFlsCallbackEntryGetContext @ 0x1402CAA5C
 * Callers:
 *     PsTlsGetValue @ 0x1407564B0 (PsTlsGetValue.c)
 *     PsTlsSetValue @ 0x14076B4A0 (PsTlsSetValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFlsCallbackEntryGetContext(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  int v4; // ecx
  __int64 v5; // r11
  __int64 v6; // rax

  if ( (unsigned int)(a2 - 1) <= 0xEE
    && (v3 = 0, _BitScanReverse((unsigned int *)&v4, a2 + 16),
                (v5 = *(&PspTlsContext + (unsigned int)(v4 - 4) + 1)) != 0)
    && (v6 = v5
           + 8
           * (((unsigned int)(a2 + 16) ^ (unsigned __int64)(unsigned int)(1 << v4))
            + 4 * ((unsigned int)(a2 + 16) ^ (unsigned __int64)(unsigned int)(1 << v4))
            + 1)) != 0 )
  {
    *a3 = *(_QWORD *)(v6 + 16);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
