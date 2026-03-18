/*
 * XREFs of PsGetProcessSignatureLevel @ 0x1403A1460
 * Callers:
 *     NtCreateUserProcess @ 0x14066D650 (NtCreateUserProcess.c)
 * Callees:
 *     <none>
 */

char __fastcall PsGetProcessSignatureLevel(__int64 a1, _BYTE *a2)
{
  if ( a2 )
    *a2 = *(_BYTE *)(a1 + 2169);
  return *(_BYTE *)(a1 + 2168);
}
