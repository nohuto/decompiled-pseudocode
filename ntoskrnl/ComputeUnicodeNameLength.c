/*
 * XREFs of ComputeUnicodeNameLength @ 0x1407524A8
 * Callers:
 *     RtlInsertUnicodePrefix @ 0x1407520F0 (RtlInsertUnicodePrefix.c)
 *     RtlFindUnicodePrefix @ 0x140752230 (RtlFindUnicodePrefix.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeUnicodeNameLength(unsigned __int16 *a1)
{
  __int64 result; // rax
  int v2; // edx
  unsigned int v3; // edx
  _WORD *v4; // r8
  __int64 v5; // r9
  bool v6; // zf
  unsigned int v7; // edx

  result = 1LL;
  v2 = *a1 >> 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = (_WORD *)*((_QWORD *)a1 + 1);
      v5 = v3;
      do
      {
        v6 = *v4 == 92;
        v7 = result + 1;
        ++v4;
        if ( !v6 )
          v7 = result;
        result = v7;
        --v5;
      }
      while ( v5 );
    }
  }
  return result;
}
