/*
 * XREFs of RtlpLookupLowBox @ 0x140354C6C
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x1407DB4E0 (RtlQueryAtomInAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1407DBE40 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1407DBF30 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1409B8FA8 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     RtlpQueryLowBoxId @ 0x140354AA4 (RtlpQueryLowBoxId.c)
 *     RtlpAllowsLowBoxAccess @ 0x1403A70B0 (RtlpAllowsLowBoxAccess.c)
 */

_QWORD *__fastcall RtlpLookupLowBox(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  int LowBoxId; // ecx
  _QWORD *result; // rax

  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    return (_QWORD *)(a2 + 16);
  v6 = 0LL;
  v5 = (_QWORD *)(a2 + 16);
  LowBoxId = RtlpQueryLowBoxId();
  if ( !LowBoxId )
    return v5;
  for ( result = (_QWORD *)*v5; result != v5; result = (_QWORD *)*result )
  {
    if ( *((_DWORD *)result + 4) == LowBoxId )
      return result;
  }
  if ( !(unsigned __int8)RtlpAllowsLowBoxAccess(a2) )
    return 0LL;
  if ( !a3 )
    return (_QWORD *)(a2 + 16);
  return (_QWORD *)v6;
}
