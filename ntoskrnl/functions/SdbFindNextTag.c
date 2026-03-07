__int64 __fastcall SdbFindNextTag(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edi
  unsigned int v6; // ebx
  __int16 TagFromTagID; // r14
  unsigned int NextChild; // eax
  __int64 v9; // r8

  v4 = a3;
  v6 = 0;
  TagFromTagID = SdbGetTagFromTagID(a1, (unsigned int)a3, a3);
  if ( TagFromTagID )
  {
    while ( 1 )
    {
      NextChild = SdbGetNextChild(a1, a2, v4);
      v4 = NextChild;
      if ( !NextChild )
        break;
      if ( (unsigned __int16)SdbGetTagFromTagID(a1, NextChild, v9) == TagFromTagID )
        return v4;
    }
    return v6;
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
