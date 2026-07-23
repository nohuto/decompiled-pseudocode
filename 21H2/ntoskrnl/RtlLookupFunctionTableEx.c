/*
 * XREFs of RtlLookupFunctionTableEx @ 0x14037F4C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1402C34B0 (RtlpxLookupFunctionTable.c)
 */

PVOID __fastcall RtlLookupFunctionTableEx(unsigned __int64 a1, _QWORD *a2)
{
  if ( a1 < *(&xmmword_140E00020 + 1) || a1 >= *(&xmmword_140E00020 + 1) + (unsigned int)qword_140E00030 )
    return RtlpxLookupFunctionTable(a1, (__int64)a2);
  *(_OWORD *)a2 = *(_OWORD *)&xmmword_140E00020;
  a2[2] = qword_140E00030;
  return (PVOID)*a2;
}
