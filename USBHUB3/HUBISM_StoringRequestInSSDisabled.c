/*
 * XREFs of HUBISM_StoringRequestInSSDisabled @ 0x1C003F160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBISM_StoringRequestInSSDisabled(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 168) = a2;
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  return 6005LL;
}
