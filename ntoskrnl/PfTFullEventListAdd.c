PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_140C64FA0, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_140C64FA0.Alignment);
    if ( LOWORD(stru_140C64FA0.Alignment) <= (unsigned int)dword_140C64FB0 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_140C64FA0);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(&stru_140C64F20, result, 1);
  }
  return result;
}
