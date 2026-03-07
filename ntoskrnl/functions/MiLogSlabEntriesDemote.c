unsigned __int64 __fastcall MiLogSlabEntriesDemote(unsigned __int16 **a1)
{
  unsigned __int64 result; // rax
  unsigned int v2; // r15d
  unsigned __int16 *v4; // r9
  __int64 v5; // rbx
  __int64 v6; // r9
  int v7; // r10d
  __int64 v8; // r11
  unsigned __int16 *v9; // rax
  int v10; // ecx
  unsigned __int8 AggregateFieldTypes; // al
  __int64 CurrentIrql; // rdi
  _DWORD *SchedulerAssist; // r9
  __int64 v14; // rdx
  _QWORD *v15; // r12
  __int64 v16; // rbx
  __int64 v17; // r10
  unsigned __int16 *v18; // rax
  __int64 v19; // rcx
  unsigned __int8 v20; // al
  __int64 v21; // r10
  unsigned __int16 *v22; // rax
  int v23; // ecx
  unsigned __int8 v24; // r9
  char *v25; // rdx
  char v26; // al
  char v29; // al
  char v30; // r8
  char v31; // cl
  __int64 v32; // rax
  unsigned __int8 v33; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v35; // r8
  int v36; // eax
  bool v37; // zf
  int v38; // [rsp+4Ch] [rbp-BCh] BYREF
  int v39; // [rsp+50h] [rbp-B8h] BYREF
  int v40; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v41; // [rsp+58h] [rbp-B0h] BYREF
  int v42; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v43; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR v45; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR v46; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-78h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int16 *v51; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+C8h] [rbp-40h] BYREF
  char *v54; // [rsp+D8h] [rbp-30h]
  int v55; // [rsp+E0h] [rbp-28h]
  int v56; // [rsp+E4h] [rbp-24h]
  unsigned __int16 **v57; // [rsp+E8h] [rbp-20h]
  _QWORD v58[5]; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+118h] [rbp+10h] BYREF
  char *v60; // [rsp+128h] [rbp+20h]
  int v61; // [rsp+130h] [rbp+28h]
  int v62; // [rsp+134h] [rbp+2Ch]
  __int64 *v63; // [rsp+138h] [rbp+30h]
  int v64; // [rsp+140h] [rbp+38h]
  int v65; // [rsp+144h] [rbp+3Ch]
  unsigned int *v66; // [rsp+148h] [rbp+40h]
  int v67; // [rsp+150h] [rbp+48h]
  int v68; // [rsp+154h] [rbp+4Ch]
  int *v69; // [rsp+158h] [rbp+50h]
  int v70; // [rsp+160h] [rbp+58h]
  int v71; // [rsp+164h] [rbp+5Ch]
  __int64 *v72; // [rsp+168h] [rbp+60h]
  int v73; // [rsp+170h] [rbp+68h]
  int v74; // [rsp+174h] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+178h] [rbp+70h] BYREF
  char *v76; // [rsp+188h] [rbp+80h]
  int v77; // [rsp+190h] [rbp+88h]
  int v78; // [rsp+194h] [rbp+8Ch]
  __int64 *v79; // [rsp+198h] [rbp+90h]
  __int64 v80; // [rsp+1A0h] [rbp+98h]
  int *v81; // [rsp+1A8h] [rbp+A0h]
  __int64 v82; // [rsp+1B0h] [rbp+A8h]
  int *v83; // [rsp+1B8h] [rbp+B0h]
  __int64 v84; // [rsp+1C0h] [rbp+B8h]
  int *v85; // [rsp+1C8h] [rbp+C0h]
  __int64 v86; // [rsp+1D0h] [rbp+C8h]
  __int64 *v87; // [rsp+1D8h] [rbp+D0h]
  __int64 v88; // [rsp+1E0h] [rbp+D8h]
  _UNKNOWN *retaddr; // [rsp+210h] [rbp+108h] BYREF

  result = (unsigned __int64)&retaddr;
  v2 = 0;
  if ( *(_QWORD *)&qword_140C69568 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v44 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( (_BYTE)CurrentIrql == 2 )
        LODWORD(v14) = 4;
      else
        v14 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v14;
    }
    v4 = a1[9];
    if ( v4 )
    {
      if ( a1[*((unsigned int *)v4 + 20) + 1] )
      {
        v5 = *(_QWORD *)&qword_140C69568;
        if ( **(_DWORD **)&qword_140C69568 > 5u )
        {
          if ( tlgKeywordOn(*(__int64 *)&qword_140C69568, 0x400000000400LL) )
          {
            v48 = v8;
            v79 = &v48;
            v81 = &v38;
            v80 = 8LL;
            v38 = v7;
            v82 = 4LL;
            v39 = *(_DWORD *)(v6 + 84);
            v83 = &v39;
            v9 = *a1;
            v84 = 4LL;
            v45.Keyword = 0x400000000400LL;
            *(_QWORD *)&v45.Id = 0x50B000000LL;
            v10 = *v9;
            v85 = &v40;
            v87 = &v44;
            UserData.Ptr = *(_QWORD *)(v5 + 8);
            v40 = v10;
            v86 = 4LL;
            v44 = 0x1000000LL;
            v88 = 8LL;
            UserData.Size = *(unsigned __int16 *)UserData.Ptr;
            v76 = byte_140039609;
            UserData.Reserved = 2;
            v77 = 119;
            v78 = 1;
            if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(v5 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
            {
              AggregateFieldTypes = ExtractAggregateFieldTypes((__int64)&TraceLoggingMetadata, (__int64)&UserData);
              if ( AggregateFieldTypes )
                InsertEventEntryInLookUpTable(v5, (__int128 *)&v45, 7u, (__int64)&UserData, AggregateFieldTypes);
              else
                EtwWriteEx(*(_QWORD *)(v5 + 32), &v45, 0LL, 0, 0LL, 0LL, 7u, &UserData);
            }
          }
        }
      }
    }
    else
    {
      v15 = a1 + 1;
      do
      {
        if ( *v15 )
        {
          v16 = *(_QWORD *)&qword_140C69568;
          if ( **(_DWORD **)&qword_140C69568 > 5u )
          {
            if ( tlgKeywordOn(*(__int64 *)&qword_140C69568, 0x400000000400LL) )
            {
              v65 = 0;
              v68 = 0;
              v63 = &v49;
              v66 = &v41;
              v18 = *a1;
              v49 = v17;
              v64 = 8;
              v41 = v2;
              v67 = 4;
              v19 = *v18;
              v71 = 0;
              v74 = 0;
              v69 = &v42;
              v72 = &v50;
              *(_DWORD *)&v46.Level = 5;
              v59.Ptr = *(_QWORD *)(v16 + 8);
              v42 = v19;
              v70 = 4;
              v50 = 0x1000000LL;
              v73 = 8;
              *(_DWORD *)&v46.Id = 184549376;
              v46.Keyword = 0x400000000400LL;
              v59.Size = *(unsigned __int16 *)v59.Ptr;
              v60 = &byte_140039597;
              v59.Reserved = 2;
              v61 = 102;
              v62 = 1;
              if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(v16 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
              {
                v20 = ExtractAggregateFieldTypes(v19, (__int64)&v59);
                if ( v20 )
                  InsertEventEntryInLookUpTable(v16, (__int128 *)&v46, 6u, (__int64)&v59, v20);
                else
                  EtwWriteEx(*(_QWORD *)(v16 + 32), &v46, 0LL, 0, 0LL, 0LL, 6u, &v59);
              }
            }
          }
        }
        ++v2;
        ++v15;
      }
      while ( v2 < 7 );
      LOBYTE(CurrentIrql) = v44;
      if ( **(_DWORD **)&qword_140C69568 > 5u )
      {
        if ( tlgKeywordOn(*(__int64 *)&qword_140C69568, 0x400000000400LL) )
        {
          v51 = a1[8];
          v57 = &v51;
          v22 = *a1;
          v58[0] = 8LL;
          EventDescriptor.Keyword = 0x400000000400LL;
          *(_DWORD *)&EventDescriptor.Id = 184549376;
          v23 = *v22;
          v58[1] = &v43;
          v58[3] = &v52;
          *(_DWORD *)&EventDescriptor.Level = 5;
          v53.Ptr = *(_QWORD *)(v21 + 8);
          LODWORD(v43) = v23;
          v58[2] = 4LL;
          v52 = 0x1000000LL;
          v58[4] = 8LL;
          v53.Size = *(unsigned __int16 *)v53.Ptr;
          v54 = byte_140039530;
          v53.Reserved = 2;
          v55 = 91;
          v56 = 1;
          if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(v21 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
          {
            v24 = 0;
            v25 = (char *)word_140039532;
            do
              v26 = *v25++;
            while ( v26 < 0 );
            while ( *v25++ )
              ;
            while ( v25 < byte_14003958B )
            {
              while ( *v25++ )
                ;
              if ( *v25 >= 0 )
                break;
              v29 = v25[1];
              v30 = *v25 & 0x7F;
              v25 += 2;
              if ( v29 >= 0 )
                break;
              while ( 1 )
              {
                v31 = *v25;
                if ( *v25 >= 0 )
                  break;
                if ( v31 != (char)0x80 )
                  goto LABEL_49;
                ++v25;
              }
              if ( v30 != 9 || (unsigned __int8)(v31 - 113) > 2u )
                break;
              v32 = 2LL * v24++;
              BYTE5(v58[v32]) = v31;
            }
LABEL_49:
            if ( v24 )
              InsertEventEntryInLookUpTable(v21, (__int128 *)&EventDescriptor, 5u, (__int64)&v53, v24);
            else
              EtwWriteEx(*(_QWORD *)(v21 + 32), &EventDescriptor, 0LL, 0, 0LL, 0LL, 5u, &v53);
          }
        }
      }
    }
    if ( KiIrqlFlags )
    {
      v33 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v33 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v35 = CurrentPrcb->SchedulerAssist;
        v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v37 = (v36 & v35[5]) == 0;
        v35[5] &= v36;
        if ( v37 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = (unsigned __int8)CurrentIrql;
    __writecr8((unsigned __int8)CurrentIrql);
  }
  return result;
}
