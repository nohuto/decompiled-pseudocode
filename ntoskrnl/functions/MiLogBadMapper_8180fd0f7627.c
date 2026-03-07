char __fastcall MiLogBadMapper(__int64 a1, int a2, EVENT_DESCRIPTOR *a3)
{
  void (__fastcall *v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // rax
  EVENT_DESCRIPTOR *p_EventDescriptor_8; // rbx
  bool v7; // cc
  __int64 v8; // r10
  unsigned __int64 v9; // rdx
  __int64 v10; // r10
  unsigned __int8 v11; // r9
  char *v12; // rdx
  char v13; // al
  char v16; // al
  char v17; // r8
  char v18; // cl
  __int64 v19; // rax
  int EventDescriptor; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor_8; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  __int64 v26; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  __int16 *v28; // [rsp+98h] [rbp-70h]
  int v29; // [rsp+A0h] [rbp-68h]
  int v30; // [rsp+A4h] [rbp-64h]
  __int64 *v31; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h]
  __int64 *p_EventDescriptor; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  int *v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  _DWORD *v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  unsigned __int64 Keyword; // [rsp+E8h] [rbp-20h]
  _DWORD v40[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 *v41; // [rsp+F8h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+28h] BYREF

  v3 = (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))&retaddr;
  p_EventDescriptor_8 = &EventDescriptor_8;
  if ( a3 )
    p_EventDescriptor_8 = a3;
  v7 = **(_DWORD **)&qword_140C69568 <= 5u;
  EventDescriptor_8 = 0LL;
  if ( !v7 )
  {
    LOBYTE(v3) = tlgKeywordOn(*(__int64 *)&qword_140C69568, 128LL);
    if ( (_BYTE)v3 )
    {
      v23 = a1;
      v31 = &v23;
      v32 = 8LL;
      p_EventDescriptor = (__int64 *)&EventDescriptor;
      EventDescriptor = a2;
      v34 = 4LL;
      LOBYTE(v3) = tlgWriteEx_EtwWriteEx(v8, (unsigned __int8 *)&dword_14003830C, 0LL, 1u, 0, 0, 4u, &UserData);
    }
  }
  if ( **(_DWORD **)&qword_140C69568 > 5u )
  {
    LOBYTE(v3) = tlgKeywordOn(*(__int64 *)&qword_140C69568, 0x400000000080LL);
    if ( (_BYTE)v3 )
    {
      v24 = a1;
      v31 = &v24;
      v25 = a1;
      p_EventDescriptor = &v25;
      v32 = 8LL;
      v35 = &EventDescriptor;
      v37 = v40;
      Keyword = p_EventDescriptor_8->Keyword;
      v40[0] = p_EventDescriptor_8->Id;
      v26 = 2164260864LL;
      v41 = &v26;
      UserData.Ptr = *(_QWORD *)(v10 + 8);
      v34 = 8LL;
      EventDescriptor = a2;
      v36 = 4LL;
      v38 = 2LL;
      v40[1] = 0;
      v42 = 8LL;
      *(_QWORD *)&EventDescriptor_8.Id = 0x50B000000LL;
      EventDescriptor_8.Keyword = v9;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v28 = &word_140038356;
      UserData.Reserved = 2;
      v29 = 121;
      v30 = 1;
      LODWORD(v23) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      v3 = TlgAggregateInternalRegisteredProviderEtwCallback;
      if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(v10 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
      {
        v11 = 0;
        v12 = (char *)&unk_140038358;
        do
          v13 = *v12++;
        while ( v13 < 0 );
        while ( *v12++ )
          ;
        while ( v12 < &byte_1400383CF )
        {
          while ( *v12++ )
            ;
          if ( *v12 >= 0 )
            break;
          v16 = v12[1];
          v17 = *v12 & 0x7F;
          v12 += 2;
          if ( v16 >= 0 )
            break;
          while ( 1 )
          {
            v18 = *v12;
            if ( *v12 >= 0 )
              break;
            if ( v18 != (char)0x80 )
              goto LABEL_24;
            ++v12;
          }
          if ( v17 != 9 || (unsigned __int8)(v18 - 113) > 2u )
            break;
          v19 = 2LL * v11++;
          *((_BYTE *)&v32 + 8 * v19 + 5) = v18;
        }
LABEL_24:
        if ( v11 )
          LOBYTE(v3) = InsertEventEntryInLookUpTable(v10, (__int128 *)&EventDescriptor_8, 8u, (__int64)&UserData, v11);
        else
          LOBYTE(v3) = EtwWriteEx(*(_QWORD *)(v10 + 32), &EventDescriptor_8, 0LL, 0, 0LL, 0LL, 8u, &UserData);
      }
    }
  }
  return (char)v3;
}
