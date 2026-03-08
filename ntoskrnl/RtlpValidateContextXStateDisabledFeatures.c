/*
 * XREFs of RtlpValidateContextXStateDisabledFeatures @ 0x1403649B4
 * Callers:
 *     PspGetSetContextInternal @ 0x1406EA840 (PspGetSetContextInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpValidateContextXStateDisabledFeatures(__int64 a1, __int64 a2)
{
  if ( a2 && (*(_DWORD *)(a1 + 48) & 0x100040) == 0x100040 )
    return (a2 & *(_QWORD *)(*(int *)(a1 + 1248) + a1 + 1232)) != 0 ? 0xC000000D : 0;
  else
    return 0LL;
}
