/*
 * XREFs of SdbpFindNextNamedTagHelper @ 0x140A4EFC0
 * Callers:
 *     SdbpSearchDB @ 0x14079F878 (SdbpSearchDB.c)
 *     SdbpFindNextTagWithoutIndex @ 0x140A4DFD4 (SdbpFindNextTagWithoutIndex.c)
 *     SdbpFindNextWildcardTagWithoutIndex @ 0x140A4E050 (SdbpFindNextWildcardTagWithoutIndex.c)
 * Callees:
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     AslStringPatternMatchExW @ 0x14077790C (AslStringPatternMatchExW.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x1407A20E8 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x1407A280C (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x1407A2A70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpFindNextNamedTagHelper(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 a4,
        wchar_t *Str1,
        int a6)
{
  unsigned int v8; // edi
  unsigned int v10; // ebx
  __int16 TagFromTagID; // r15
  unsigned int FirstTag; // eax
  __int64 v14; // r8
  __int16 *StringTagPtr; // rax
  unsigned int NextChild; // eax

  v8 = a3;
  v10 = 0;
  TagFromTagID = SdbGetTagFromTagID(a1, a3);
  if ( TagFromTagID )
  {
    while ( 1 )
    {
      NextChild = SdbGetNextChild(a1, a2, v8);
      v8 = NextChild;
      if ( !NextChild )
        break;
      if ( (unsigned __int16)SdbGetTagFromTagID(a1, NextChild) == TagFromTagID )
      {
        FirstTag = SdbFindFirstTag(a1, v8, a4);
        if ( FirstTag )
        {
          StringTagPtr = (__int16 *)SdbGetStringTagPtr(a1, FirstTag, v14);
          if ( !StringTagPtr )
          {
            AslLogCallPrintf(1LL);
            return v10;
          }
          if ( a6 )
          {
            if ( (unsigned int)AslStringPatternMatchExW(StringTagPtr, Str1) )
              return v8;
          }
          else if ( !wcsicmp(Str1, (const wchar_t *)StringTagPtr) )
          {
            return v8;
          }
        }
      }
    }
    return v10;
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
