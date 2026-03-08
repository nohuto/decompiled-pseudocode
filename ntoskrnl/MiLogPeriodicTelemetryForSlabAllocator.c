/*
 * XREFs of MiLogPeriodicTelemetryForSlabAllocator @ 0x1403CAEA0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     InsertEventEntryInLookUpTable @ 0x14035EE9C (InsertEventEntryInLookUpTable.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 MiLogPeriodicTelemetryForSlabAllocator()
{
  __int64 v0; // r9
  __int64 v1; // r10
  unsigned __int16 *v2; // r11
  unsigned __int8 v3; // r9
  char *v4; // rdx
  char v5; // al
  __int64 v7; // rax
  char v9; // r8
  char *v10; // rdx
  char v11; // al
  char v12; // r8
  char v13; // cl
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v19; // [rsp+60h] [rbp-A0h]
  __int64 v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  __int64 v23; // [rsp+80h] [rbp-80h] BYREF
  __int64 v24; // [rsp+88h] [rbp-78h] BYREF
  __int64 v25; // [rsp+90h] [rbp-70h] BYREF
  __int64 v26; // [rsp+98h] [rbp-68h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v32; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v33; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E0h] [rbp-20h] BYREF
  char *v35; // [rsp+F0h] [rbp-10h]
  int v36; // [rsp+F8h] [rbp-8h]
  int v37; // [rsp+FCh] [rbp-4h]
  __int64 *v38; // [rsp+100h] [rbp+0h]
  _QWORD v39[33]; // [rsp+108h] [rbp+8h]

  if ( **(_DWORD **)&qword_140C69568 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C69568, 0x400000000400LL) )
    {
      v20 = *(_QWORD *)(v0 + 72);
      v21 = v20;
      v39[1] = &v21;
      v22 = *(_QWORD *)(v0 + 48);
      v23 = v22;
      v39[5] = &v23;
      v24 = *(_QWORD *)(v0 + 64);
      v25 = v24;
      v39[9] = &v25;
      v26 = *(_QWORD *)(v0 + 112);
      v39[11] = &v26;
      v27 = *(_QWORD *)(v0 + 112);
      v39[13] = &v27;
      v28 = *(unsigned int *)(v0 + 92);
      v39[15] = &v28;
      v29 = *(unsigned int *)(v0 + 96);
      v39[17] = &v29;
      v30 = *(unsigned int *)(v0 + 100);
      v39[19] = &v30;
      v31 = *(unsigned int *)(v0 + 104);
      v39[21] = &v31;
      v32 = *(unsigned int *)(v0 + 108);
      v39[23] = &v32;
      v15 = *(_DWORD *)(v0 + 80);
      v39[25] = &v15;
      v16 = *(_DWORD *)(v0 + 84);
      v39[27] = &v16;
      v17 = *v2;
      v38 = &v20;
      v39[29] = &v17;
      v39[3] = &v22;
      v39[31] = &v33;
      v39[0] = 8LL;
      v39[2] = 8LL;
      v39[4] = 8LL;
      v39[6] = 8LL;
      v39[7] = &v24;
      v39[8] = 8LL;
      v39[10] = 8LL;
      v39[12] = 8LL;
      v39[14] = 8LL;
      v39[16] = 8LL;
      v39[18] = 8LL;
      v39[20] = 8LL;
      v39[22] = 8LL;
      v39[24] = 8LL;
      v39[26] = 4LL;
      v39[28] = 4LL;
      v39[30] = 4LL;
      v33 = 0x1000000LL;
      v39[32] = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *(_QWORD *)(v1 + 8);
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0x400000000400LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v35 = byte_140039B93;
      UserData.Reserved = 2;
      v36 = 431;
      v37 = 1;
      v19 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(v1 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
      {
        v3 = 0;
        v4 = byte_140039B95;
        do
          v5 = *v4++;
        while ( v5 < 0 );
        while ( *v4++ )
          ;
        while ( v4 < &byte_140039D42 )
        {
          while ( *v4++ )
            ;
          v9 = *v4;
          v10 = v4 + 1;
          if ( v9 >= 0 )
            break;
          v11 = *v10;
          v12 = v9 & 0x7F;
          v4 = v10 + 1;
          if ( v11 >= 0 )
            break;
          while ( 1 )
          {
            v13 = *v4;
            if ( *v4 >= 0 )
              break;
            if ( v13 != (char)0x80 )
              goto LABEL_18;
            ++v4;
          }
          if ( v12 != 9 || (unsigned __int8)(v13 - 113) > 2u )
            break;
          v7 = 2LL * v3++;
          BYTE5(v39[v7]) = v13;
        }
LABEL_18:
        if ( v3 )
          InsertEventEntryInLookUpTable(v1, (__int128 *)&EventDescriptor, 0x13u, (__int64)&UserData, v3);
        else
          EtwWriteEx(*(_QWORD *)(v1 + 32), &EventDescriptor, 0LL, 0, 0LL, 0LL, 0x13u, &UserData);
      }
    }
  }
  return 0LL;
}
