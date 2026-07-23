/*
 * XREFs of PfSnPrefetchMetadata @ 0x1406324B0
 * Callers:
 *     PfSnAsyncPrefetchStep @ 0x140680A0C (PfSnAsyncPrefetchStep.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     PfpPrefetchEntireDirectory @ 0x140632798 (PfpPrefetchEntireDirectory.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x1406335BC (PfSnFindPrefetchVolumeInfoInList.c)
 *     NtClose @ 0x14063E0A0 (NtClose.c)
 *     NtCreateEvent @ 0x140651360 (NtCreateEvent.c)
 *     PfSnPrefetchFileMetadata @ 0x1406928A8 (PfSnPrefetchFileMetadata.c)
 *     PfSnLogPrefetchMetadata @ 0x14069C9A8 (PfSnLogPrefetchMetadata.c)
 */

__int64 __fastcall PfSnPrefetchMetadata(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // r12d
  unsigned int v6; // r13d
  NTSTATUS v7; // edi
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned int *v10; // rdi
  __int64 PrefetchVolumeInfoInList; // rax
  __int64 v12; // r14
  _DWORD *v13; // rdx
  unsigned int j; // ecx
  __int64 v15; // rdx
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // ecx
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  unsigned __int16 *v21; // r13
  unsigned int v22; // r12d
  unsigned int v23; // eax
  unsigned int *v24; // rdi
  __int64 v25; // r15
  unsigned int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // xmm1_8
  __int64 v30; // rdx
  __int64 v31; // rax
  BOOLEAN InitialState[8]; // [rsp+20h] [rbp-69h]
  __int128 v33; // [rsp+30h] [rbp-59h] BYREF
  __int64 v34; // [rsp+40h] [rbp-49h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-41h] BYREF
  __int64 v36; // [rsp+78h] [rbp-11h]
  __int64 v37; // [rsp+80h] [rbp-9h]
  __int64 v38; // [rsp+88h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp+7h] BYREF
  unsigned int v40; // [rsp+F0h] [rbp+67h]
  unsigned int v41; // [rsp+F8h] [rbp+6Fh]
  int i; // [rsp+100h] [rbp+77h]
  HANDLE EventHandle; // [rsp+108h] [rbp+7Fh] BYREF

  v41 = a2;
  v3 = *a1;
  v4 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v37 = v3;
  EventHandle = 0LL;
  v34 = 0LL;
  LOBYTE(a3) = 1;
  v6 = a2;
  DestinationString = 0LL;
  v33 = 0LL;
  PfSnLogPrefetchMetadata(v3, a2, a3);
  if ( v3 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    if ( v7 >= 0 )
    {
      v8 = v3 + *(unsigned int *)(v3 + 108);
      v9 = 0LL;
      v38 = v8;
      for ( i = 0; (unsigned int)v9 < *(_DWORD *)(v3 + 112); i = v9 )
      {
        v10 = (unsigned int *)(v8 + 96 * v9);
        PrefetchVolumeInfoInList = PfSnFindPrefetchVolumeInfoInList((wchar_t *)(v8 + *v10));
        v12 = PrefetchVolumeInfoInList;
        if ( PrefetchVolumeInfoInList && (*(_DWORD *)(PrefetchVolumeInfoInList + 108) & 1) != 0 )
        {
          v13 = v10 + 9;
          for ( j = 0; j < 7; ++j )
          {
            if ( _bittest((const int *)&v6, j) )
              v4 += *v13 + v13[7];
            ++v13;
          }
          *(_DWORD *)InitialState = v4;
          PfSnPrefetchFileMetadata(
            a1,
            *(_QWORD *)(PrefetchVolumeInfoInList + 32),
            v8 + v10[5],
            *(unsigned int *)(PrefetchVolumeInfoInList + 104),
            *(_QWORD *)InitialState,
            EventHandle);
          *(_DWORD *)(v12 + 104) += v4;
          v15 = a1[10];
          v36 = v15;
          *(_DWORD *)v15 = 4;
          v16 = *((_DWORD *)a1 + 24);
          v17 = *((_DWORD *)a1 + 25) & 7 | 8;
          *(_DWORD *)(v15 + 4) = 768;
          *(_QWORD *)(v15 + 8) = v16 & 7 | (unsigned __int64)(unsigned int)(8 * v17);
          v18 = 0;
          v19 = (_QWORD *)(v15 + 16);
          do
          {
            v20 = v18++;
            *v19++ = v20 << 12;
          }
          while ( v18 < 0x300 );
          v21 = *(unsigned __int16 **)(v12 + 96);
          v22 = 0;
          v23 = v41;
          v24 = v10 + 16;
          v25 = v36;
          v40 = 0;
          do
          {
            if ( _bittest((const int *)&v23, v22) )
            {
              v27 = 0;
              if ( *v24 )
              {
                do
                {
                  RtlInitUnicodeString(&DestinationString, &v21[*(unsigned int *)(v12 + 24) + 2]);
                  v28 = a1[1];
                  ObjectAttributes.RootDirectory = *(HANDLE *)(v12 + 64);
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.ObjectName = &DestinationString;
                  ObjectAttributes.Attributes = 576;
                  v34 = 0LL;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  v33 = 0LL;
                  PfpPrefetchEntireDirectory(v28, v12 + 32, v25, &v33, &ObjectAttributes);
                  if ( (_QWORD)v33 && *((_DWORD *)a1 + 30) < *((_DWORD *)a1 + 31) )
                  {
                    v29 = v34;
                    v30 = 3LL * *((unsigned int *)a1 + 30);
                    v31 = a1[14];
                    *(_OWORD *)(v31 + 8 * v30) = v33;
                    *(_QWORD *)(v31 + 8 * v30 + 16) = v29;
                    ++*((_DWORD *)a1 + 30);
                  }
                  ++v27;
                  v21 += *v21 + 2;
                }
                while ( v27 < *v24 );
                v22 = v40;
                v23 = v41;
              }
            }
            ++v22;
            ++v24;
            v40 = v22;
          }
          while ( v22 < 7 );
          v3 = v37;
          v4 = 0;
          v8 = v38;
          *(_QWORD *)(v12 + 96) = v21;
          v6 = v41;
        }
        v9 = (unsigned int)(i + 1);
      }
      v7 = 0;
    }
    if ( EventHandle )
      NtClose(EventHandle);
  }
  else
  {
    v7 = -1073741811;
  }
  PfSnLogPrefetchMetadata(v3, v6, 0LL);
  return (unsigned int)v7;
}
