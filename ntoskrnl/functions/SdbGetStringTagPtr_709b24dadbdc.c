__int64 __fastcall SdbGetStringTagPtr(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  __int16 v6; // ax
  unsigned int StringRef; // eax

  v3 = 0LL;
  v4 = a2;
  if ( a1 )
  {
    v6 = SdbGetTagFromTagID(a1, a2, a3) & 0xF000;
    if ( v6 == (__int16)0x8000 )
      return SdbpGetMappedTagData(a1, v4);
    if ( v6 != 24576 )
      return v3;
    StringRef = SdbpReadStringRef(a1, v4);
    if ( StringRef )
      return SdbpGetMappedStringFromTable(a1, StringRef);
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
