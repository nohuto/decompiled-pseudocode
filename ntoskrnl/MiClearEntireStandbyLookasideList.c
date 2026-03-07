__int64 __fastcall MiClearEntireStandbyLookasideList(__int64 a1, __int64 *a2, unsigned int a3)
{
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbp

  v5 = 1;
  v6 = 0LL;
  v7 = a2;
  do
  {
    v8 = *v7;
    if ( *v7 != -1 )
    {
      v9 = 48 * v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(48 * v8 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
      {
        v5 = 0;
      }
      else
      {
        MiWriteStandbyLookasideEntry(&a2[v6], a3, -1LL);
        _InterlockedAnd64((volatile signed __int64 *)(v9 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    v6 = (unsigned int)(v6 + 1);
    ++v7;
  }
  while ( (unsigned int)v6 < 0x40 );
  return v5;
}
