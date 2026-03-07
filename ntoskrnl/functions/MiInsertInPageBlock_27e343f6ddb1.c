__int64 __fastcall MiInsertInPageBlock(PSLIST_ENTRY ListEntry)
{
  __int64 v2; // rcx
  union _SLIST_HEADER *v3; // rcx

  v2 = ((unsigned int)~LODWORD(ListEntry[12].Next) >> 6) & 1;
  if ( (unsigned __int64)ListEntry >= MiState[v2 + 2117] && (unsigned __int64)ListEntry < MiState[v2 + 2119] )
  {
    v3 = (union _SLIST_HEADER *)((char *)&unk_140C69300 + 16 * v2);
    goto LABEL_5;
  }
  if ( (unsigned int)LOWORD(MiState[2 * v2 + 2108]) < *((unsigned __int8 *)&MiState[2116] + v2) )
  {
    v3 = (union _SLIST_HEADER *)&MiState[2 * v2 + 2108];
LABEL_5:
    RtlpInterlockedPushEntrySList(v3, ListEntry);
    return 1LL;
  }
  return 0LL;
}
