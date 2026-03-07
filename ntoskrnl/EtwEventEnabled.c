BOOLEAN __stdcall EtwEventEnabled(REGHANDLE RegHandle, PCEVENT_DESCRIPTOR EventDescriptor)
{
  __int64 v3; // rax
  unsigned __int64 Keyword; // r9
  unsigned __int8 v5; // cl
  BOOLEAN result; // al

  result = 0;
  if ( RegHandle )
  {
    v3 = *(_QWORD *)(RegHandle + 32);
    Keyword = EventDescriptor->Keyword;
    if ( *(_DWORD *)(v3 + 96) )
    {
      v5 = *(_BYTE *)(v3 + 100);
      if ( (EventDescriptor->Level <= v5 || !v5)
        && ((*(_DWORD *)(v3 + 104) & 0x40) != 0 && !Keyword
         || (Keyword & *(_QWORD *)(v3 + 112)) != 0 && (Keyword & *(_QWORD *)(v3 + 120)) == *(_QWORD *)(v3 + 120)) )
      {
        return 1;
      }
    }
    if ( *(_BYTE *)(RegHandle + 101)
      && (unsigned __int8)EtwpLevelKeywordEnabled(
                            *(_QWORD *)(RegHandle + 40) + 96LL,
                            EventDescriptor->Level,
                            EventDescriptor->Keyword,
                            Keyword) )
    {
      return 1;
    }
  }
  return result;
}
