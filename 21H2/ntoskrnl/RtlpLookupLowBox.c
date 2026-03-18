/*
 * XREFs of RtlpLookupLowBox @ 0x1402F349C
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x1406AB320 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1406C7C90 (RtlPinAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1407A0A30 (RtlQueryAtomInAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1409B8DC8 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     RtlpAllowsLowBoxAccess @ 0x140244198 (RtlpAllowsLowBoxAccess.c)
 *     RtlpQueryLowBoxId @ 0x1402EF324 (RtlpQueryLowBoxId.c)
 */

_QWORD *__fastcall RtlpLookupLowBox(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v5; // rbx
  int LowBoxId; // ecx
  _QWORD *result; // rax

  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    return (_QWORD *)(a2 + 16);
  v5 = (_QWORD *)(a2 + 16);
  LowBoxId = RtlpQueryLowBoxId();
  if ( LowBoxId )
  {
    for ( result = (_QWORD *)*v5; result != v5; result = (_QWORD *)*result )
    {
      if ( *((_DWORD *)result + 4) == LowBoxId )
        return result;
    }
    if ( !RtlpAllowsLowBoxAccess(a2) || a3 )
      return 0LL;
  }
  return v5;
}
