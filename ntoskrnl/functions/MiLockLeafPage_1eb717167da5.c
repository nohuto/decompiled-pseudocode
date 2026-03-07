__int64 __fastcall MiLockLeafPage(__int64 *a1, char a2)
{
  unsigned __int64 v4; // r8
  unsigned __int64 i; // r9
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v11; // rdx
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0xFFFFDE0000000000uLL;
  for ( i = 0x7FFFFFFFFFFFFFFFLL; ; _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), i) )
  {
    while ( 1 )
    {
      v6 = *a1;
      v7 = *a1;
      if ( (*a1 & 1) != 0 )
        goto LABEL_3;
      if ( (*a1 & 0xC00) != 0x800 )
        return 0LL;
      if ( MiInvalidPteConforms(*a1) )
      {
        v7 = v6;
        if ( qword_140C657C0 && (v6 & 0x10) == 0 )
          v7 = v6 & ~qword_140C657C0;
LABEL_3:
        v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
        if ( v8 <= qword_140C65820 )
        {
          if ( _bittest64((const signed __int64 *)(48 * v8 - 0x21FFFFFFFFD8LL), 0x36u) )
            break;
        }
      }
    }
    v9 = v4 + 48 * v8;
    if ( (a2 & 1) != 0 )
    {
      MiLockNestedPageAtDpcInline(v4 + 48 * v8);
    }
    else
    {
      v12 = a2 & 1;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        goto LABEL_7;
      do
      {
        do
          KeYieldProcessorEx(&v12);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
    }
    i = 0x7FFFFFFFFFFFFFFFLL;
    v4 = 0xFFFFDE0000000000uLL;
LABEL_7:
    if ( *a1 == v6 )
      break;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
  {
    v11 = a2 & 1 | 2u;
    if ( (a2 & 2) == 0 )
      v11 = a2 & 1;
    return MiLockSpecialPurposeMemoryCachedPage(v9, v11);
  }
  return v9;
}
