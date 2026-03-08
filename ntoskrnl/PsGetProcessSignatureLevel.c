/*
 * XREFs of PsGetProcessSignatureLevel @ 0x1403D15C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PsGetProcessSignatureLevel(__int64 a1, _BYTE *a2)
{
  if ( a2 )
    *a2 = *(_BYTE *)(a1 + 2169);
  return *(_BYTE *)(a1 + 2168);
}
