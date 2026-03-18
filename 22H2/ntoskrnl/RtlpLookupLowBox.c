/*
 * XREFs of RtlpLookupLowBox @ 0x140297594
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x14069EA50 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x140715170 (RtlQueryAtomInAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1407D1010 (RtlPinAtomInAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1409BBEC8 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     RtlpQueryLowBoxId @ 0x1402979F8 (RtlpQueryLowBoxId.c)
 *     RtlpAllowsLowBoxAccess @ 0x1403AC540 (RtlpAllowsLowBoxAccess.c)
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
