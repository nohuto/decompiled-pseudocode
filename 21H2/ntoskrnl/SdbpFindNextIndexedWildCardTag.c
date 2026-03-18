/*
 * XREFs of SdbpFindNextIndexedWildCardTag @ 0x140A146FC
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x14075B6A4 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x14075BB10 (SdbpSearchDB.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AslStringPatternMatchExA @ 0x1406AD17C (AslStringPatternMatchExA.c)
 *     AslStringUpcaseToMultiByteN @ 0x14075B0E4 (AslStringUpcaseToMultiByteN.c)
 *     SdbpKeyToAnsiString @ 0x14075B608 (SdbpKeyToAnsiString.c)
 *     SdbpGetIndex @ 0x14075B638 (SdbpGetIndex.c)
 *     SdbFindFirstTag @ 0x140792CCC (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x140842A24 (SdbGetStringTagPtr.c)
 *     AslStringPatternMatchExW @ 0x140851068 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall SdbpFindNextIndexedWildCardTag(__int64 a1, __int64 a2)
{
  const WCHAR *v4; // r8
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
  char v16[272]; // [rsp+40h] [rbp-C0h] BYREF

  v13 = 0;
  memset(v16, 0, 0x104uLL);
  v4 = *(const WCHAR **)(a2 + 32);
  v14 = 0LL;
  v15 = 0;
  if ( (int)AslStringUpcaseToMultiByteN(v16, v5, v4) >= 0 )
  {
    Index = SdbpGetIndex(a1, *(_DWORD *)a2, &v13);
    if ( Index )
    {
      LODWORD(v7) = *(_DWORD *)(a2 + 16);
      while ( 1 )
      {
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v13 )
          break;
        v8 = *(_QWORD *)(Index + 12 * v7);
        if ( (*(_DWORD *)(a2 + 20) & 2) != 0 )
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
          FirstTag = SdbFindFirstTag(a1, v9, *(_WORD *)(a2 + 12));
          if ( FirstTag )
          {
            StringTagPtr = (__int16 *)SdbGetStringTagPtr(a1, FirstTag);
            if ( StringTagPtr )
            {
              if ( (unsigned int)AslStringPatternMatchExW(StringTagPtr, *(_WORD **)(a2 + 32)) )
              {
                *(_DWORD *)(a2 + 16) = v7;
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
