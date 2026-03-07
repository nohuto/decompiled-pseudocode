__int64 __fastcall ViThunkSnapSharedExports(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        RTL_BITMAP *a4,
        unsigned int a5,
        __int64 a6)
{
  ULONG v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v12; // r15
  ULONG v13; // eax
  ULONG v14; // ebx
  int v15; // eax
  ULONG StartingRunIndex; // [rsp+60h] [rbp+18h] BYREF
  int v18; // [rsp+64h] [rbp+1Ch]

  v18 = HIDWORD(a3);
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  StartingRunIndex = 0;
  if ( a5 )
  {
    v12 = a6;
    v13 = 0;
    do
    {
      if ( v13 >= a4->SizeOfBitMap || !RtlFindNextForwardRunClear(a4, v6, &StartingRunIndex) )
        break;
      v14 = StartingRunIndex;
      v15 = ViThunkSnapSharedExportByName(a1, a2 + 56LL * StartingRunIndex, v12 + 24 * v8);
      if ( v7 || v15 )
        v7 = 1;
      v6 = v14 + 1;
      v8 = (unsigned int)(v8 + 1);
      v13 = v6;
      StartingRunIndex = v6;
    }
    while ( (unsigned int)v8 < a5 );
  }
  return v7;
}
