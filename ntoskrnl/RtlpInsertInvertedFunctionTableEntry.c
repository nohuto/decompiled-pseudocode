/*
 * XREFs of RtlpInsertInvertedFunctionTableEntry @ 0x1402B2A30
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x1402B26C8 (RtlInsertInvertedFunctionTable.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall RtlpInsertInvertedFunctionTableEntry(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned __int64 *v10; // rcx
  __int64 v11; // rcx

  result = (unsigned int)PsInvertedFunctionTable[0];
  if ( PsInvertedFunctionTable[0] == dword_140E00024 )
  {
    byte_140E0002C = 1;
  }
  else
  {
    _InterlockedIncrement(&dword_140E00028);
    v9 = 1;
    if ( PsInvertedFunctionTable[0] != 1 )
    {
      if ( PsInvertedFunctionTable[0] <= 1u )
        goto LABEL_8;
      v10 = (unsigned __int64 *)&unk_140E00050;
      do
      {
        if ( a2 < *v10 )
          break;
        ++v9;
        v10 += 3;
      }
      while ( v9 < PsInvertedFunctionTable[0] );
      if ( v9 != PsInvertedFunctionTable[0] )
LABEL_8:
        memmove(
          &PsInvertedFunctionTable[4 * v9 + 10 + 2 * v9],
          &PsInvertedFunctionTable[4 * v9 + 4 + 2 * v9],
          24LL * (PsInvertedFunctionTable[0] - v9));
    }
    v11 = 3LL * v9;
    result = a5;
    *(_QWORD *)&PsInvertedFunctionTable[2 * v11 + 4] = a3;
    *(_QWORD *)&PsInvertedFunctionTable[2 * v11 + 6] = a2;
    PsInvertedFunctionTable[2 * v11 + 8] = a4;
    PsInvertedFunctionTable[2 * v11 + 9] = a5;
    ++PsInvertedFunctionTable[0];
    _InterlockedIncrement(&dword_140E00028);
  }
  return result;
}
