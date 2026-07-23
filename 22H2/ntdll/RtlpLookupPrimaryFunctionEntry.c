/*
 * XREFs of RtlpLookupPrimaryFunctionEntry @ 0x18007AFC8
 * Callers:
 *     RtlpSameFunction @ 0x18007AF70 (RtlpSameFunction.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180102540 (RtlRaiseStatus.c)
 */

_BYTE *__fastcall RtlpLookupPrimaryFunctionEntry(_BYTE *a1, __int64 a2)
{
  unsigned int v2; // r9d
  int v3; // ecx
  int v4; // eax
  _BYTE *v5; // r8

  v2 = 0;
  while ( 1 )
  {
    v5 = (_BYTE *)(a2 + *((unsigned int *)a1 + 2));
    if ( (*v5 & 0x20) == 0 )
      break;
    v3 = (unsigned __int8)v5[2];
    v4 = v3 + 1;
    if ( (v3 & 1) == 0 )
      v4 = (unsigned __int8)v5[2];
    ++v2;
    a1 = &v5[2 * v4 + 4];
    if ( v2 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  return a1;
}
