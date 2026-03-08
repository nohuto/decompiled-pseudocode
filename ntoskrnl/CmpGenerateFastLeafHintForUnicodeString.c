/*
 * XREFs of CmpGenerateFastLeafHintForUnicodeString @ 0x140786860
 * Callers:
 *     CmpAddToLeaf @ 0x1407A4520 (CmpAddToLeaf.c)
 *     CmpCheckLeaf @ 0x1407B0800 (CmpCheckLeaf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGenerateFastLeafHintForUnicodeString(unsigned __int16 *a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  unsigned int v3; // r8d
  unsigned int v4; // edx
  __int64 v5; // r10
  __int64 v6; // rcx
  unsigned __int16 v7; // r9
  unsigned int v8; // [rsp+8h] [rbp+8h]

  result = 0LL;
  v2 = *a1 >> 1;
  v8 = 0;
  v3 = 4;
  if ( v2 < 4 )
  {
    v3 = v2;
    v4 = 0;
    if ( !v3 )
      return result;
  }
  else
  {
    v4 = 0;
  }
  v5 = *((_QWORD *)a1 + 1);
  while ( 1 )
  {
    v6 = v4;
    v7 = *(_WORD *)(v5 + 2LL * v4);
    if ( v7 > 0xFFu )
      break;
    ++v4;
    *((_BYTE *)&v8 + v6) = v7;
    if ( v4 >= v3 )
      return v8;
  }
  return result;
}
