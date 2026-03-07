__int64 __fastcall SdbMergeIsEntryUpdated(__int64 a1, unsigned int a2, __int64 a3, unsigned int *a4)
{
  int TagFromTagID; // r12d
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int16 *v11; // rsi
  unsigned __int16 v12; // r15
  unsigned int FirstTag; // r13d
  unsigned int TagFromAncestors; // eax
  unsigned int ParentTagFromAncestors; // eax
  unsigned int v16; // r12d
  unsigned int i; // eax
  unsigned int v18; // eax
  unsigned int v19; // edi
  unsigned int NextTag; // edi
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // r8
  unsigned int v25; // r12d
  int v26; // eax
  unsigned __int64 IndexKeyFromString; // rax
  unsigned int j; // eax
  unsigned int v29; // eax
  int v30; // [rsp+20h] [rbp-40h]
  __int128 v31; // [rsp+30h] [rbp-30h] BYREF
  __int128 v32; // [rsp+40h] [rbp-20h]
  PCWSTR StringTagPtr; // [rsp+50h] [rbp-10h]
  unsigned int v34; // [rsp+A0h] [rbp+40h]

  StringTagPtr = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( a1 && a3 )
  {
    if ( !a2 )
      return 3221225712LL;
    if ( !a4 )
      return 3221225714LL;
    *a4 = 0;
    TagFromTagID = (unsigned __int16)SdbGetTagFromTagID(a1, a2);
    v9 = 0LL;
    v10 = 0LL;
    while ( *(_WORD *)((char *)qword_140015870 + v10) != (_WORD)TagFromTagID )
    {
      ++v9;
      v10 += 10LL;
      if ( v10 >= 0x14A )
        return 3221226021LL;
    }
    v11 = (unsigned __int16 *)qword_140015870 + 5 * v9;
    if ( !v11 )
      return 3221226021LL;
    v12 = v11[1];
    if ( !v12 || (TagFromTagID & 0xF000) != 0x7000 )
      return 3221226021LL;
    FirstTag = SdbFindFirstTag(a1, a2, v12);
    if ( !FirstTag )
      goto LABEL_15;
    TagFromAncestors = _SdbpFindTagFromAncestors(a3, 2LL, 28751LL, 30724LL);
    v34 = TagFromAncestors;
    if ( !TagFromAncestors )
    {
      ParentTagFromAncestors = SdbFindParentTagFromAncestors(a3, (__int64)(v11 + 2));
      v16 = ParentTagFromAncestors;
      if ( ParentTagFromAncestors )
      {
        for ( i = SdbFindFirstTag(a3, ParentTagFromAncestors, *v11); ; i = SdbFindNextTag(a3, v16, v19) )
        {
          v19 = i;
          if ( !i )
            break;
          v18 = SdbFindFirstTag(a3, i, v12);
          if ( (unsigned int)SdbpMergeAreTagValuesEqual(a1, FirstTag, a3, v18, v30) )
            goto LABEL_47;
        }
      }
      return 3221226021LL;
    }
    NextTag = SdbFindFirstTag(a3, TagFromAncestors, 30723LL);
    if ( !NextTag )
      return 3221226021LL;
    while ( 1 )
    {
      v21 = SdbFindFirstTag(a3, NextTag, 14338LL);
      if ( !v21 )
        return 3221225816LL;
      if ( (_WORD)TagFromTagID == (unsigned __int16)SdbReadWORDTag(a3, v21, 0LL) )
      {
        v22 = SdbFindFirstTag(a3, NextTag, 14339LL);
        if ( !v22 )
          return 3221225816LL;
        if ( v12 == (unsigned __int16)SdbReadWORDTag(a3, v22, 0LL) )
        {
          WORD6(v31) = v12;
          v23 = SdbFindFirstTag(a3, NextTag, 16406LL);
          DWORD1(v32) = SdbReadDWORDTag(a3, v23, 0LL);
          v25 = SdbFindFirstTag(a3, NextTag, 38913LL);
          if ( !v25 )
          {
            AslLogCallPrintf(1LL);
            return 3221225816LL;
          }
          LODWORD(v31) = v25;
          v26 = v12 & 0xF000;
          if ( v26 == 24576 || v26 == 0x8000 )
          {
            StringTagPtr = (PCWSTR)SdbGetStringTagPtr(a1, FirstTag, v24);
            IndexKeyFromString = SdbMakeIndexKeyFromStringEx(StringTagPtr, SBYTE4(v32));
            goto LABEL_41;
          }
          if ( v26 != 36864 )
          {
            AslLogCallPrintf(1LL);
            return 3221225701LL;
          }
          if ( (unsigned int)SdbGetTagDataSize(a1, FirstTag) == 16 )
          {
            StringTagPtr = (PCWSTR)SdbpGetMappedTagData(a1, FirstTag);
            IndexKeyFromString = *(_QWORD *)StringTagPtr ^ *((_QWORD *)StringTagPtr + 1);
LABEL_41:
            *((_QWORD *)&v32 + 1) = IndexKeyFromString;
            for ( j = SdbpGetFirstIndexedRecord(a3, v25, IndexKeyFromString, &v31);
                  ;
                  j = SdbpGetNextIndexedRecord(a3, v31, &v31) )
            {
              v19 = j;
              if ( !j )
                break;
              v29 = SdbFindFirstTag(a3, j, v12);
              if ( v29 && (unsigned int)SdbpMergeAreTagValuesEqual(a1, FirstTag, a3, v29, v30) )
              {
LABEL_47:
                *a4 = v19;
                return 0LL;
              }
            }
            return 3221226021LL;
          }
LABEL_15:
          AslLogCallPrintf(3LL);
          return 3221226021LL;
        }
        v30 = TagFromTagID;
        AslLogCallPrintf(1LL);
      }
      NextTag = SdbFindNextTag(a3, v34, NextTag);
      if ( !NextTag )
        return 3221226021LL;
    }
  }
  return a3 != 0 ? -1073741585 : -1073741583;
}
