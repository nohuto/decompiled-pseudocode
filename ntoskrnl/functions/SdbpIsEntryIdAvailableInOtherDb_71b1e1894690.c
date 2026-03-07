__int64 __fastcall SdbpIsEntryIdAvailableInOtherDb(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 TagFromTagID; // ax
  __int64 v7; // r10
  unsigned __int64 v8; // r9
  char *v10; // rcx
  int IsEntryUpdated; // eax
  int v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0;
  TagFromTagID = SdbGetTagFromTagID(a1, a3);
  v7 = 0LL;
  v8 = 0LL;
  while ( *(_WORD *)((char *)qword_140015870 + v8) != TagFromTagID )
  {
    ++v7;
    v8 += 10LL;
    if ( v8 >= 0x14A )
      return 0LL;
  }
  v10 = (char *)qword_140015870 + 10 * v7;
  if ( !v10 )
    return 0LL;
  if ( !*((_WORD *)v10 + 1) )
    return 0LL;
  IsEntryUpdated = SdbMergeIsEntryUpdated(a1, a3, a2, &v12);
  if ( IsEntryUpdated == -1073741275 )
    return 0LL;
  if ( IsEntryUpdated < 0 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  return 1LL;
}
