/*
 * XREFs of RtlpValidateContextXStateDisabledFeatures @ 0x140298364
 * Callers:
 *     PspGetSetContextInternal @ 0x1407035C0 (PspGetSetContextInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpValidateContextXStateDisabledFeatures(__int64 a1, __int64 a2)
{
  if ( a2 && (*(_DWORD *)(a1 + 48) & 0x100040) == 0x100040 && (*(_QWORD *)(*(int *)(a1 + 1248) + a1 + 1232) & a2) != 0 )
    return 3221225485LL;
  else
    return 0LL;
}
