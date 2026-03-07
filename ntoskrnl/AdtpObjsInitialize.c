int AdtpObjsInitialize()
{
  int v0; // edi
  HANDLE v1; // r15
  __int64 v2; // rbx
  unsigned int v3; // esi
  char *v4; // r14
  int result; // eax
  unsigned int v6; // esi
  char *v7; // r14
  int v8; // eax
  int v9; // esi
  unsigned int v10; // r13d
  HANDLE v11; // r12
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // r14
  unsigned __int16 v16; // ax
  __int64 v17; // rax
  bool v18; // al
  unsigned int v19; // r12d
  int v20; // r14d
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbx
  _QWORD *v23; // rax
  _QWORD *v24; // rsi
  unsigned __int16 v25; // ax
  __int64 v26; // rax
  SIZE_T Length; // [rsp+20h] [rbp-59h]
  _QWORD *v28; // [rsp+38h] [rbp-41h]
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  __int128 v31; // [rsp+60h] [rbp-19h]
  __int128 v32; // [rsp+70h] [rbp-9h]
  __int128 v33; // [rsp+80h] [rbp+7h]
  bool v34; // [rsp+E0h] [rbp+67h]
  SIZE_T v35; // [rsp+E8h] [rbp+6Fh] BYREF
  HANDLE v36; // [rsp+F0h] [rbp+77h]
  HANDLE v37; // [rsp+F8h] [rbp+7Fh]

  v0 = 0;
  v34 = 1;
  v37 = 0LL;
  *(_QWORD *)&v33 = 0LL;
  DWORD2(v33) = 0;
  v31 = 0LL;
  v1 = 0LL;
  v36 = 0LL;
  v32 = 0LL;
  LODWORD(v35) = 0;
  DestinationString = 0LL;
  v28 = 0LL;
  SourceString = 0LL;
  AdtpSourceModules = 0LL;
  ExInitializeResourceLite(&AdtpSourceModuleLock);
  LODWORD(v2) = 0;
  v3 = 0;
  v4 = (char *)&unk_140C0E922;
  while ( 1 )
  {
    *(_DWORD *)(v4 - 2) = 1572864;
    *(_QWORD *)(v4 + 6) = (char *)&AdtpAccessIdsStringBuffer + 2 * (unsigned int)v2;
    result = RtlIntegerToUnicodeString(v3 + 1537, 0xAu, (PUNICODE_STRING)&AdtpEventIdStringStandard + v3);
    if ( result < 0 )
      return result;
    v2 = (unsigned int)(v2 + 12);
    ++v3;
    v4 += 16;
    if ( v3 > 6 )
    {
      v6 = 0;
      v7 = (char *)&unk_140C0E822;
      while ( 1 )
      {
        *(_QWORD *)(v7 + 6) = (char *)&AdtpAccessIdsStringBuffer + 2 * v2;
        *(_DWORD *)(v7 - 2) = 1572864;
        result = RtlIntegerToUnicodeString(v6 + 1552, 0xAu, (PUNICODE_STRING)&AdtpEventIdStringSpecific + v6);
        if ( result < 0 )
          return result;
        v2 = (unsigned int)(v2 + 12);
        ++v6;
        v7 += 16;
        if ( v6 > 0xF )
        {
          RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\EventLog\\Security");
          LODWORD(v31) = 48;
          *(_QWORD *)&v32 = &DestinationString;
          *((_QWORD *)&v31 + 1) = 0LL;
          DWORD2(v32) = 576;
          v33 = 0LL;
          v8 = NtOpenKey();
          v9 = v8;
          if ( v8 == -1073741772 )
            return 0;
          v10 = 0;
          if ( v8 < 0 )
          {
LABEL_35:
            NtClose(v37);
            if ( v9 != -2147483622 )
              return v9;
            return v0;
          }
          else
          {
            while ( 1 )
            {
              v11 = v37;
              LODWORD(Length) = 0;
              v9 = NtEnumerateKey(v37, v10, 0, 0LL, Length, &v35);
              if ( v9 != -1073741789 )
                goto LABEL_40;
              Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, (unsigned int)v35, 1799447891LL);
              v13 = Pool2;
              if ( !Pool2 )
                return -1073741801;
              LODWORD(Length) = v35;
              v9 = NtEnumerateKey(v11, v10, 0, Pool2, Length, &v35);
              if ( v9 < 0 )
              {
LABEL_40:
                v18 = v34;
LABEL_16:
                v19 = 0;
                goto LABEL_17;
              }
              v14 = (_QWORD *)ExAllocatePool2(256LL, 32LL, 1799447891LL);
              v28 = v14;
              v15 = v14;
              if ( !v14 )
                return -1073741801;
              *v14 = AdtpSourceModules;
              AdtpSourceModules = (__int64)v14;
              v14[3] = 0LL;
              v16 = v13[6];
              *((_WORD *)v15 + 4) = v16;
              v16 += 2;
              *((_WORD *)v15 + 5) = v16;
              v17 = ExAllocatePool2(256LL, v16, 1799447891LL);
              v15[2] = v17;
              if ( !v17 )
                return -1073741801;
              SourceString.Length = v13[6];
              SourceString.MaximumLength = SourceString.Length;
              SourceString.Buffer = v13 + 8;
              RtlCopyUnicodeString((PUNICODE_STRING)(v15 + 1), &SourceString);
              ExFreePoolWithTag(v13, 0);
              LODWORD(v31) = 48;
              *((_QWORD *)&v31 + 1) = v11;
              DWORD2(v32) = 576;
              *(_QWORD *)&v32 = v15 + 1;
              v33 = 0LL;
              result = NtOpenKey();
              if ( result < 0 )
                return result;
              RtlInitUnicodeString(&SourceString, L"ObjectNames");
              *(_QWORD *)&v32 = &SourceString;
              LODWORD(v31) = 48;
              *((_QWORD *)&v31 + 1) = 0LL;
              DWORD2(v32) = 576;
              v33 = 0LL;
              v9 = NtOpenKey();
              NtClose(0LL);
              v1 = v36;
              v18 = 1;
              v34 = 1;
              if ( v9 != -1073741772 )
                goto LABEL_16;
              v18 = 0;
              v9 = 0;
              v34 = 0;
              v19 = 0;
              do
              {
                if ( !v18 )
                  break;
                v20 = NtEnumerateValueKey(v1, v19, 1u, 0LL, 0, &v35);
                if ( v20 == -1073741789 )
                {
                  v21 = ExAllocatePool2(256LL, (unsigned int)v35, 1799447891LL);
                  v22 = v21;
                  if ( !v21 )
                    return -1073741801;
                  v20 = NtEnumerateValueKey(v1, v19, 1u, v21, v35, &v35);
                  if ( v20 >= 0 )
                  {
                    v23 = (_QWORD *)ExAllocatePool2(256LL, 32LL, 1799447891LL);
                    v24 = v23;
                    if ( !v23 )
                      return -1073741801;
                    *v23 = v28[3];
                    v28[3] = v23;
                    v25 = *(_WORD *)(v22 + 16);
                    *((_WORD *)v24 + 4) = v25;
                    v25 += 2;
                    *((_WORD *)v24 + 5) = v25;
                    v26 = ExAllocatePool2(256LL, v25, 1799447891LL);
                    v24[2] = v26;
                    if ( !v26 )
                      return -1073741801;
                    SourceString.Length = *(_WORD *)(v22 + 16);
                    SourceString.MaximumLength = SourceString.Length;
                    SourceString.Buffer = (wchar_t *)(v22 + 20);
                    RtlCopyUnicodeString((PUNICODE_STRING)(v24 + 1), &SourceString);
                    if ( *(_DWORD *)(v22 + 12) < 4u )
                      *((_DWORD *)v24 + 6) = 1552;
                    else
                      *((_DWORD *)v24 + 6) = *(_DWORD *)(*(unsigned int *)(v22 + 8) + v22);
                  }
                  ExFreePoolWithTag((PVOID)v22, 0);
                }
                v9 = 0;
                if ( v20 != -2147483622 )
                  v9 = v20;
                ++v19;
                v18 = v20 != -2147483622;
                v34 = v20 != -2147483622;
LABEL_17:
                ;
              }
              while ( v9 >= 0 );
              if ( v9 || v18 || !v1 )
              {
                ++v10;
                if ( v9 < 0 )
                  goto LABEL_35;
              }
              else
              {
                NtClose(v1);
                ++v10;
                v36 = 0LL;
                v1 = 0LL;
              }
            }
          }
        }
      }
    }
  }
}
