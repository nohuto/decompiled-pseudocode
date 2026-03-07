__int64 __fastcall CChannelTable::GetMasterTableEntry(
        CChannelTable *this,
        unsigned int a2,
        struct CLIENT_CHANNEL_HANDLE_ENTRY **a3)
{
  int v3; // eax
  __int64 v4; // rcx
  _QWORD *v5; // r8
  int v6; // r9d
  __int64 v7; // r10
  unsigned int v8; // ebx

  LOBYTE(v3) = HANDLE_TABLE::ValidEntry(this, a2);
  if ( v3 )
  {
    *v5 = *(_QWORD *)(v7 + 24) + (unsigned int)(*(_DWORD *)(v7 + 8) * v6);
    return 0;
  }
  else
  {
    v8 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024890, 0x24u, 0LL);
  }
  return v8;
}
