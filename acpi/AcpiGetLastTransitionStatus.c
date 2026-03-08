/*
 * XREFs of AcpiGetLastTransitionStatus @ 0x1C0022760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiGetLastTransitionStatus(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 440) )
  {
    result = -(__int64)(*(_DWORD *)(a1 + 1008) & 0x10000);
    *a2 = ((*(_DWORD *)(a1 + 1008) & 0x10000) != 0LL) + 1;
  }
  else
  {
    *a2 = 0;
  }
  return result;
}
