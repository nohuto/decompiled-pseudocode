/*
 * XREFs of SdbpMergeAreTagValuesEqual @ 0x140A50E64
 * Callers:
 *     SdbMergeIsEntryUpdated @ 0x140A50A7C (SdbMergeIsEntryUpdated.c)
 * Callees:
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x1407A20E8 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedTagData @ 0x1407A2238 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x1407A2980 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x1407A2A70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpMergeAreTagValuesEqual(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int16 TagFromTagID; // bp
  __int64 v10; // r8
  int v11; // eax
  SIZE_T TagDataSize; // rbp
  const void *MappedTagData; // rdi
  const void *v14; // rax
  bool v16; // zf
  char *StringTagPtr; // rdi
  __int64 v18; // r8
  char *v19; // rax
  __int16 v20; // cx
  signed __int64 v21; // rdi

  v4 = 0;
  if ( !a2 || !a4 )
  {
    v16 = a2 == a4;
LABEL_25:
    LOBYTE(v4) = v16;
    return v4;
  }
  TagFromTagID = SdbGetTagFromTagID(a1, a2);
  if ( TagFromTagID != (unsigned __int16)SdbGetTagFromTagID(a3, a4) )
    return 0LL;
  v11 = TagFromTagID & 0xF000;
  if ( v11 == 4096 )
    return 1LL;
  if ( v11 != 24576 && v11 != 0x8000 )
  {
    TagDataSize = (unsigned int)SdbGetTagDataSize(a1, a2);
    if ( TagDataSize == (unsigned int)SdbGetTagDataSize(a3, a4) )
    {
      MappedTagData = (const void *)SdbpGetMappedTagData(a1, a2);
      v14 = (const void *)SdbpGetMappedTagData(a3, a4);
      if ( TagDataSize && (!MappedTagData || !v14) )
      {
        AslLogCallPrintf(1LL);
        return 0LL;
      }
      v16 = TagDataSize == RtlCompareMemory(MappedTagData, v14, TagDataSize);
      goto LABEL_25;
    }
    return 0LL;
  }
  StringTagPtr = (char *)SdbGetStringTagPtr(a1, a2, v10);
  v19 = (char *)SdbGetStringTagPtr(a3, a4, v18);
  if ( !StringTagPtr )
  {
    if ( !v19 )
      return 1;
    return v4;
  }
  if ( v19 )
  {
    v20 = *(_WORD *)StringTagPtr;
    if ( *(_WORD *)StringTagPtr )
    {
      v21 = StringTagPtr - v19;
      while ( v20 == *(_WORD *)v19 )
      {
        v19 += 2;
        v20 = *(_WORD *)&v19[v21];
        if ( !v20 )
          goto LABEL_20;
      }
      return 0LL;
    }
LABEL_20:
    v16 = *(_WORD *)v19 == 0;
    goto LABEL_25;
  }
  return v4;
}
