/*
 * XREFs of RtlLookupFunctionTableEx @ 0x14037F120
 * Callers:
 *     <none>
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14021EB70 (RtlpxLookupFunctionTable.c)
 */

PVOID __fastcall RtlLookupFunctionTableEx(unsigned __int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  if ( a1 < *(&xmmword_140E00020 + 1) || a1 >= *(&xmmword_140E00020 + 1) + (unsigned int)qword_140E00030 )
    return RtlpxLookupFunctionTable(a1, (unsigned __int64)a2, *(&xmmword_140E00020 + 1), a4);
  *(_OWORD *)a2 = *(_OWORD *)&xmmword_140E00020;
  a2[2] = qword_140E00030;
  return (PVOID)*a2;
}
