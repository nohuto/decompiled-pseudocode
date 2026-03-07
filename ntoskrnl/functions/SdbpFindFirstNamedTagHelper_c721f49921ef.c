__int64 __fastcall SdbpFindFirstNamedTagHelper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        wchar_t *Str1,
        int a6)
{
  unsigned int v6; // ebx
  __int16 v8; // r14
  unsigned int v9; // ebp
  unsigned int i; // eax
  unsigned int FirstTag; // eax
  __int64 v13; // r8
  __int16 *StringTagPtr; // rax
  unsigned int v15; // edi

  v6 = 0;
  v8 = a3;
  v9 = a2;
  for ( i = SdbGetFirstChild(a1, a2, a3); ; i = SdbGetNextChild(a1, v9, v15) )
  {
    v15 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i) == v8 )
    {
      FirstTag = SdbFindFirstTag(a1, v15, a4);
      if ( FirstTag )
      {
        StringTagPtr = (__int16 *)SdbGetStringTagPtr(a1, FirstTag, v13);
        if ( !StringTagPtr )
        {
          AslLogCallPrintf(1LL);
          return v6;
        }
        if ( a6 )
        {
          if ( (unsigned int)AslStringPatternMatchExW(StringTagPtr, Str1) )
            return v15;
        }
        else if ( !wcsicmp(Str1, (const wchar_t *)StringTagPtr) )
        {
          return v15;
        }
      }
    }
  }
  return v6;
}
