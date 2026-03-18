/*
 * XREFs of PsGetProcessCommonJob @ 0x1402020D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessCommonJob(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 1296);
  if ( v2 && (v3 = *(_QWORD *)(a2 + 1296)) != 0 && *(_QWORD *)(v2 + 1272) == *(_QWORD *)(v3 + 1272) )
    return *(_QWORD *)(v2 + 1272);
  else
    return 0LL;
}
