/*
 * XREFs of RtlpLookupLowBox @ 0x14027BFC8
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x140600C10 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x14060F540 (RtlPinAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1406853F0 (RtlQueryAtomInAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140913318 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     RtlpAllowsLowBoxAccess @ 0x1402457A8 (RtlpAllowsLowBoxAccess.c)
 *     RtlpQueryLowBoxId @ 0x14027C158 (RtlpQueryLowBoxId.c)
 */

__int64 __fastcall RtlpLookupLowBox(__int64 a1, __int64 a2, char a3)
{
  int LowBoxId; // ecx
  __int64 *v6; // rbx
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    LowBoxId = 0;
  else
    LowBoxId = RtlpQueryLowBoxId();
  v6 = (__int64 *)(a2 + 16);
  if ( !LowBoxId )
    return a2 + 16;
  for ( result = *v6; (__int64 *)result != v6; result = *(_QWORD *)result )
  {
    if ( *(_DWORD *)(result + 16) == LowBoxId )
      return result;
  }
  if ( !RtlpAllowsLowBoxAccess(a2) || a3 )
    return 0LL;
  else
    return a2 + 16;
}
