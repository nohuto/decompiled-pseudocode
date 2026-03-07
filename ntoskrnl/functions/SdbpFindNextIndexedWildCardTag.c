__int64 __fastcall SdbpFindNextIndexedWildCardTag(__int64 a1, unsigned int *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 Index; // r14
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // esi
  unsigned int FirstTag; // eax
  __int16 *StringTagPtr; // rax
  unsigned int v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v15; // [rsp+30h] [rbp-D0h]
  _BYTE v16[272]; // [rsp+40h] [rbp-C0h] BYREF

  v13 = 0;
  memset(v16, 0, 0x104uLL);
  v4 = *((_QWORD *)a2 + 4);
  v14 = 0LL;
  v15 = 0;
  if ( (int)AslStringUpcaseToMultiByteN(v16, v5, v4) >= 0 )
  {
    Index = SdbpGetIndex(a1, *a2, &v13);
    if ( Index )
    {
      LODWORD(v7) = a2[4];
      while ( 1 )
      {
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v13 )
          break;
        v8 = *(_QWORD *)(Index + 12 * v7);
        if ( (a2[5] & 2) != 0 )
        {
          SdbpKeyToAnsiString(v8, (__int64)&v14 + 1);
          LOBYTE(v14) = 42;
        }
        else
        {
          SdbpKeyToAnsiString(v8, (__int64)&v14);
          LOBYTE(v15) = 42;
        }
        if ( (unsigned int)AslStringPatternMatchExA((char *)&v14, v16) )
        {
          v9 = *(_DWORD *)(Index + 12 * v7 + 8);
          FirstTag = SdbFindFirstTag(a1, v9, *((unsigned __int16 *)a2 + 6));
          if ( FirstTag )
          {
            StringTagPtr = (__int16 *)SdbGetStringTagPtr(a1, FirstTag);
            if ( StringTagPtr )
            {
              if ( (unsigned int)AslStringPatternMatchExW(StringTagPtr, *((_WORD **)a2 + 4)) )
              {
                a2[4] = v7;
                return v9;
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
