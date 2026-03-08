/*
 * XREFs of PfSnPrefetchMetadata @ 0x14071E150
 * Callers:
 *     PfSnAsyncPrefetchStep @ 0x1407E1620 (PfSnAsyncPrefetchStep.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x1406A4844 (PfSnFindPrefetchVolumeInfoInList.c)
 *     PfpPrefetchEntireDirectory @ 0x14071E438 (PfpPrefetchEntireDirectory.c)
 *     PfSnPrefetchFileMetadata @ 0x140789C64 (PfSnPrefetchFileMetadata.c)
 *     PfSnLogPrefetchMetadata @ 0x14079282C (PfSnLogPrefetchMetadata.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     NtCreateEvent @ 0x1407D0E20 (NtCreateEvent.c)
 */

__int64 __fastcall PfSnPrefetchMetadata(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int v4; // r12d
  unsigned int v6; // r13d
  int v7; // ebx
  __int64 v8; // r15
  __int64 v9; // rax
  _QWORD *v10; // rdx
  unsigned int *v11; // rbx
  _QWORD *PrefetchVolumeInfoInList; // rax
  _QWORD *v13; // r14
  _DWORD *v14; // rdx
  unsigned int i; // ecx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // ecx
  _QWORD *v20; // rdx
  unsigned int v21; // eax
  unsigned __int16 *v22; // r13
  unsigned int v23; // r12d
  unsigned int v24; // eax
  unsigned int *v25; // rbx
  __int64 v26; // r15
  unsigned int v28; // edi
  __int64 v29; // rcx
  __int64 v30; // xmm1_8
  __int64 v31; // rdx
  __int64 v32; // rax
  __int128 v33; // [rsp+30h] [rbp-59h] BYREF
  __int64 v34; // [rsp+40h] [rbp-49h]
  _DWORD v35[2]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v36; // [rsp+50h] [rbp-39h]
  UNICODE_STRING *p_DestinationString; // [rsp+58h] [rbp-31h]
  int v38; // [rsp+60h] [rbp-29h]
  int v39; // [rsp+64h] [rbp-25h]
  __int128 v40; // [rsp+68h] [rbp-21h]
  __int64 v41; // [rsp+78h] [rbp-11h]
  __int64 v42; // [rsp+80h] [rbp-9h]
  __int64 v43; // [rsp+88h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp+7h] BYREF
  unsigned int v45; // [rsp+F0h] [rbp+67h]
  unsigned int v46; // [rsp+F8h] [rbp+6Fh]
  int v47; // [rsp+100h] [rbp+77h]
  HANDLE Handle; // [rsp+108h] [rbp+7Fh] BYREF

  v46 = a2;
  v3 = *a1;
  v4 = 0;
  v35[1] = 0;
  v39 = 0;
  v34 = 0LL;
  v42 = v3;
  Handle = 0LL;
  LOBYTE(a3) = 1;
  v6 = a2;
  DestinationString = 0LL;
  v33 = 0LL;
  PfSnLogPrefetchMetadata(v3, a2, a3);
  if ( v3 )
  {
    v35[0] = 48;
    v36 = 0LL;
    v38 = 512;
    p_DestinationString = 0LL;
    v40 = 0LL;
    v7 = NtCreateEvent(&Handle, 2031619LL, v35, 0LL, 0);
    if ( v7 >= 0 )
    {
      v8 = v3 + *(unsigned int *)(v3 + 108);
      v9 = 0LL;
      v43 = v8;
      v47 = 0;
      if ( *(_DWORD *)(v3 + 112) )
      {
        v10 = a1 + 5;
        do
        {
          v11 = (unsigned int *)(v8 + 96 * v9);
          PrefetchVolumeInfoInList = PfSnFindPrefetchVolumeInfoInList((wchar_t *)(v8 + *v11), v10, 1);
          v13 = PrefetchVolumeInfoInList;
          if ( PrefetchVolumeInfoInList && (*((_DWORD *)PrefetchVolumeInfoInList + 27) & 1) != 0 )
          {
            v14 = v11 + 9;
            for ( i = 0; i < 7; ++i )
            {
              if ( _bittest((const int *)&v6, i) )
                v4 += *v14 + v14[7];
              ++v14;
            }
            PfSnPrefetchFileMetadata(
              a1,
              PrefetchVolumeInfoInList[4],
              v8 + v11[5],
              *((unsigned int *)PrefetchVolumeInfoInList + 26),
              v4,
              Handle);
            *((_DWORD *)v13 + 26) += v4;
            v16 = a1[10];
            v41 = v16;
            *(_DWORD *)v16 = 4;
            v17 = *((_DWORD *)a1 + 24);
            v18 = *((_DWORD *)a1 + 25) & 7 | 8;
            *(_DWORD *)(v16 + 4) = 768;
            *(_QWORD *)(v16 + 8) = v17 & 7 | (unsigned __int64)(unsigned int)(8 * v18);
            v19 = 0;
            v20 = (_QWORD *)(v16 + 16);
            do
            {
              v21 = v19++;
              *v20++ = v21 << 12;
            }
            while ( v19 < 0x300 );
            v22 = (unsigned __int16 *)v13[12];
            v23 = 0;
            v24 = v46;
            v25 = v11 + 16;
            v26 = v41;
            v45 = 0;
            do
            {
              if ( _bittest((const int *)&v24, v23) )
              {
                v28 = 0;
                if ( *v25 )
                {
                  do
                  {
                    RtlInitUnicodeString(&DestinationString, &v22[*((unsigned int *)v13 + 6) + 2]);
                    v29 = a1[1];
                    v36 = v13[8];
                    v35[0] = 48;
                    p_DestinationString = &DestinationString;
                    v38 = 576;
                    v34 = 0LL;
                    v40 = 0LL;
                    v33 = 0LL;
                    PfpPrefetchEntireDirectory(v29, v13 + 4, v26, &v33, v35);
                    if ( (_QWORD)v33 && *((_DWORD *)a1 + 30) < *((_DWORD *)a1 + 31) )
                    {
                      v30 = v34;
                      v31 = 3LL * *((unsigned int *)a1 + 30);
                      v32 = a1[14];
                      *(_OWORD *)(v32 + 8 * v31) = v33;
                      *(_QWORD *)(v32 + 8 * v31 + 16) = v30;
                      ++*((_DWORD *)a1 + 30);
                    }
                    ++v28;
                    v22 += *v22 + 2;
                  }
                  while ( v28 < *v25 );
                  v23 = v45;
                  v24 = v46;
                }
              }
              ++v23;
              ++v25;
              v45 = v23;
            }
            while ( v23 < 7 );
            v3 = v42;
            v4 = 0;
            v8 = v43;
            v13[12] = v22;
            v6 = v46;
          }
          v10 = a1 + 5;
          v9 = (unsigned int)(v47 + 1);
          v47 = v9;
        }
        while ( (unsigned int)v9 < *(_DWORD *)(v3 + 112) );
      }
      v7 = 0;
    }
    if ( Handle )
      NtClose(Handle);
  }
  else
  {
    v7 = -1073741811;
  }
  PfSnLogPrefetchMetadata(v3, v6, 0LL);
  return (unsigned int)v7;
}
