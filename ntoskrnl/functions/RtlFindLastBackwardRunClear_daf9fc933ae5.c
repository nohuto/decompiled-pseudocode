ULONG __stdcall RtlFindLastBackwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  unsigned int *Buffer; // r9
  unsigned int *v5; // r8
  ULONG v6; // r11d
  ULONG v7; // ecx
  unsigned int *i; // r8

  if ( BitMapHeader->SizeOfBitMap <= FromIndex )
  {
    *StartingRunIndex = FromIndex;
    return 0;
  }
  else
  {
    Buffer = BitMapHeader->Buffer;
    v5 = &Buffer[(unsigned __int64)FromIndex >> 5];
    if ( v5 != Buffer )
    {
      v6 = FromIndex & 0x1F;
      if ( (*v5 | ~*((_DWORD *)qword_140016150 + v6 + 1)) == 0xFFFFFFFF )
      {
        FromIndex = FromIndex - v6 - 1;
        for ( --v5; v5 > Buffer && *v5 == -1; --v5 )
          FromIndex -= 32;
      }
    }
    while ( FromIndex != -1 && _bittest64((const signed __int64 *)Buffer, FromIndex) == 1 )
      --FromIndex;
    v7 = FromIndex;
    if ( (*((_DWORD *)qword_140016150 + (FromIndex & 0x1F)) & *v5) == 0 )
    {
      v7 = (FromIndex & 0xFFFFFFE0) - 1;
      for ( i = v5 - 1; i > Buffer && !*i; --i )
        v7 -= 32;
    }
    while ( v7 != -1 && !_bittest64((const signed __int64 *)Buffer, v7) )
      --v7;
    *StartingRunIndex = v7 + 1;
    return FromIndex - v7;
  }
}
