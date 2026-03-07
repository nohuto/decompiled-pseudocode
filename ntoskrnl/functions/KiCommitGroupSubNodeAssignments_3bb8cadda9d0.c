void __fastcall KiCommitGroupSubNodeAssignments(__int16 a1)
{
  __int16 v1; // dx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r10
  __int16 *v6; // rcx

  v1 = word_140C6A9EC;
  if ( a1 != word_140C6A9EC && KiSubNodeCount )
  {
    v5 = (unsigned __int16)KiSubNodeCount;
    v6 = (__int16 *)(KiSubNodeConfigBlock + 6);
    do
    {
      if ( (*((_BYTE *)v6 - 1) & 1) != 0 )
      {
        if ( *v6 == a1 )
        {
          *v6 = v1;
        }
        else if ( *v6 == v1 )
        {
          *v6 = a1;
        }
      }
      v6 += 12;
      --v5;
    }
    while ( v5 );
  }
  if ( KiSubNodeCount )
  {
    v3 = (unsigned __int16)KiSubNodeCount;
    v4 = KiSubNodeConfigBlock + 5;
    do
    {
      if ( (*(_BYTE *)v4 & 1) != 0 && *(_WORD *)(v4 + 1) == v1 )
        *(_BYTE *)v4 |= 2u;
      v4 += 24LL;
      --v3;
    }
    while ( v3 );
  }
  word_140C6A9EC = v1 + 1;
}
