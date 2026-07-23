/*
 * XREFs of MiAssignSystemVa @ 0x140A50B28
 * Callers:
 *     MiAssignTopLevelRanges @ 0x140A508A8 (MiAssignTopLevelRanges.c)
 * Callees:
 *     RtlClearBits @ 0x140206DC0 (RtlClearBits.c)
 *     ExGenRandom @ 0x14022C200 (ExGenRandom.c)
 *     RtlFindClearBitsAndSet @ 0x1402509C0 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall MiAssignSystemVa(ULONG NumberToFind, unsigned int a2)
{
  ULONG v4; // ebp
  int v5; // ebx
  unsigned __int8 v6; // al
  ULONG ClearBitsAndSet; // eax
  ULONG v8; // edi
  ULONG v10; // ebx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  BitMapHeader.SizeOfBitMap = 256;
  BitMapHeader.Buffer = (unsigned int *)&xmmword_140C4E258;
  if ( NumberToFind <= 2 )
  {
    v6 = ExGenRandom(1);
    v5 = 8;
    goto LABEL_7;
  }
  v4 = dword_140C4E278;
  v5 = a2 >= 4 ? 0x10 : 0;
  while ( 1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, NumberToFind, v4);
    v8 = ClearBitsAndSet;
    if ( ClearBitsAndSet == -1 )
      return 0LL;
    if ( ClearBitsAndSet == v4 || !v5 )
      break;
    --v5;
    RtlClearBits(&BitMapHeader, ClearBitsAndSet, NumberToFind);
    v6 = ExGenRandom(1);
LABEL_7:
    v4 = v6;
  }
  v10 = ClearBitsAndSet + NumberToFind;
  if ( a2 != 1 )
    v10 = (unsigned __int8)(v10 + (unsigned int)ExGenRandom(1) % a2);
  dword_140C4E278 = v10;
  return (v8 - 256LL) << 39;
}
