/*
 * XREFs of RtlxRemoveInvertedFunctionTable @ 0x140372408
 * Callers:
 *     RtlRemoveInvertedFunctionTable @ 0x1403723B4 (RtlRemoveInvertedFunctionTable.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 */

void __fastcall RtlxRemoveInvertedFunctionTable(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  int *v3; // rax
  bool v4; // zf

  v2 = (unsigned int)(PsInvertedFunctionTable[0] - 1);
  if ( PsInvertedFunctionTable[0] != 1 )
  {
    v3 = &PsInvertedFunctionTable[6 * v2 + 6];
    do
    {
      if ( a2 == *(_QWORD *)v3 )
        break;
      v3 -= 6;
      v4 = (_DWORD)v2 == 1;
      v2 = (unsigned int)(v2 - 1);
    }
    while ( !v4 );
  }
  if ( (_DWORD)v2 )
  {
    _InterlockedIncrement(&dword_140E00018);
    if ( PsInvertedFunctionTable[0] != 2 )
      memmove(
        &PsInvertedFunctionTable[4 * v2 + 4 + 2 * v2],
        &PsInvertedFunctionTable[4 * (unsigned int)(v2 + 1) + 4 + 2 * (unsigned int)(v2 + 1)],
        24LL * (unsigned int)(PsInvertedFunctionTable[0] - v2 - 1));
    --PsInvertedFunctionTable[0];
    _InterlockedIncrement(&dword_140E00018);
  }
}
