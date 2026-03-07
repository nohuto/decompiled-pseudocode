__int64 __fastcall MiAssignSystemVa(ULONG NumberToClear, unsigned int a2)
{
  ULONG v4; // esi
  int v5; // ebx
  ULONG ClearBitsAndSet; // eax
  __int64 v7; // rdi
  unsigned __int8 v8; // al
  ULONG v9; // ebx
  RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 256LL;
  BitMapHeader.Buffer = (unsigned int *)&xmmword_140C66BE0;
  if ( NumberToClear <= 2 )
  {
    v8 = ExGenRandom(1);
    v5 = 8;
    goto LABEL_7;
  }
  v4 = dword_140C66C00;
  v5 = a2 >= 4 ? 0x10 : 0;
  while ( 1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, NumberToClear, v4);
    v7 = ClearBitsAndSet;
    if ( ClearBitsAndSet == -1 )
      return 0LL;
    if ( ClearBitsAndSet == v4 || !v5 )
      break;
    --v5;
    RtlClearBits(&BitMapHeader, ClearBitsAndSet, NumberToClear);
    v8 = ExGenRandom(1);
LABEL_7:
    v4 = v8;
  }
  v9 = ClearBitsAndSet + NumberToClear;
  if ( a2 != 1 )
    v9 = (unsigned __int8)(v9 + (unsigned int)ExGenRandom(1) % a2);
  dword_140C66C00 = v9;
  return (v7 - 256) << 39;
}
