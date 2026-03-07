struct CLIENT_CHANNEL_HANDLE_ENTRY *__fastcall CChannelTable::TryGetMasterTableEntry(
        CChannelTable *this,
        unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  __int64 v4; // r9

  LOBYTE(v2) = HANDLE_TABLE::ValidEntry(this, a2);
  if ( v2 )
    return (struct CLIENT_CHANNEL_HANDLE_ENTRY *)(*(_QWORD *)(v4 + 24) + (unsigned int)(*(_DWORD *)(v4 + 8) * v3));
  else
    return 0LL;
}
