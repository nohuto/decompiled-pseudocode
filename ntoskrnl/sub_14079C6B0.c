/*
 * XREFs of sub_14079C6B0 @ 0x14079C6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14079C6B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)a2 - *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)a2 == *(_QWORD *)(a1 + 32) )
    return *(_DWORD *)(a2 + 8) - *(_DWORD *)(a1 + 24);
  return v2;
}
