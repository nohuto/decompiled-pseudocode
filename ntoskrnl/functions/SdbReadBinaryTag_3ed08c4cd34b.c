__int64 __fastcall SdbReadBinaryTag(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebx
  __int64 v8; // r8

  v6 = a2;
  if ( (SdbGetTagFromTagID(a1, a2, a3) & 0xF000) == 0x9000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v6, a3, a4) )
      return 1LL;
    AslLogCallPrintf(1LL);
  }
  else
  {
    SdbGetTagFromTagID(a1, v6, v8);
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
