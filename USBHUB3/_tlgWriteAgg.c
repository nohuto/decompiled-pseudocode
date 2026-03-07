NTSTATUS __fastcall tlgWriteAgg(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned __int8 a4,
        struct _EVENT_DATA_DESCRIPTOR *UserData)
{
  unsigned __int64 v5; // rax
  unsigned __int16 *v6; // rdx
  NTSTATUS result; // eax
  unsigned __int64 Ptr; // rcx
  unsigned __int8 v9; // r10
  unsigned __int64 v10; // r11
  char *v11; // rcx
  char v12; // al
  char v15; // al
  char v16; // r8
  char v17; // dl
  __int64 v18; // rax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v5 = *(_QWORD *)(a2 + 3);
  v6 = (unsigned __int16 *)(a2 + 11);
  EventDescriptor.Keyword = v5;
  UserData->Ptr = (unsigned __int64)off_1C006A200;
  UserData->Size = *(unsigned __int16 *)off_1C006A200;
  UserData->Reserved = 2;
  UserData[1].Ptr = (unsigned __int64)v6;
  UserData[1].Size = *v6;
  UserData[1].Reserved = 1;
  result = -1073741811;
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C006A220 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    Ptr = UserData[1].Ptr;
    v9 = 0;
    v10 = Ptr + UserData[1].Size;
    v11 = (char *)(Ptr + 2);
    do
      v12 = *v11++;
    while ( v12 < 0 );
    while ( *v11++ )
      ;
    while ( (unsigned __int64)v11 < v10 )
    {
      while ( *v11++ )
        ;
      if ( *v11 >= 0 )
        break;
      v15 = v11[1];
      v16 = *v11 & 0x7F;
      v11 += 2;
      if ( v15 >= 0 )
        break;
      while ( 1 )
      {
        v17 = *v11;
        if ( *v11 >= 0 )
          break;
        if ( v17 != (char)0x80 )
          goto LABEL_17;
        ++v11;
      }
      if ( v16 != 9 || (unsigned __int8)(v17 - 113) > 2u )
        break;
      v18 = v9++;
      UserData[v18 + 2].Reserved1 = v17;
    }
LABEL_17:
    if ( v9 )
      return InsertEventEntryInLookUpTable((__int64)v11, (__int128 *)&EventDescriptor, a4, (__int64)UserData, v9);
    else
      return EtwWriteTransfer(qword_1C006A218, &EventDescriptor, 0LL, 0LL, a4, UserData);
  }
  return result;
}
