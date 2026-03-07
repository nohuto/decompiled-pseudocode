PSLIST_ENTRY __fastcall RtlpStdGetSpaceForTrace(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rsi
  unsigned int i; // ebx
  PSLIST_ENTRY v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ecx

  v2 = a2;
  if ( !a2 )
    return 0LL;
  for ( i = a2 - 1; i < 0x20; ++i )
  {
    v6 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 16 * (i + 13LL)));
    if ( v6 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 196));
      return v6 - 1;
    }
  }
  v7 = RtlpStdExtendLowerWatermark(a1, (8 * v2 + 31) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v7 )
  {
    v8 = ((((8 * (_DWORD)v2 + 31) & 0xFFFFFFF0) - 16) >> 3) - 1;
    if ( v8 > 0x1F )
      LOWORD(v8) = 31;
    *(_WORD *)(v7 + 8) = ((_WORD)v8 << 11) | *(_WORD *)(v7 + 8) & 0x7FF;
  }
  return (PSLIST_ENTRY)v7;
}
