/*
 * XREFs of HvlDebuggerSupportInitialize @ 0x1403B0FD4
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     strncmp @ 0x1403D3310 (strncmp.c)
 *     strstr @ 0x1403D3650 (strstr.c)
 *     atol @ 0x1403D3700 (atol.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 */

void __fastcall HvlDebuggerSupportInitialize(__int64 a1)
{
  const char *v2; // rcx
  char *v3; // rsi
  char *v4; // rbx
  char *v5; // rax
  char *v6; // rbx
  __int64 v7; // rax
  char *v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char *v12; // rax
  const char *v13; // rbx
  int v14; // r14d
  char *v15; // rax
  const char *v16; // rbx
  char v17; // si
  char *v18; // rax
  int v19; // ebx
  char *v20; // rax
  char *v21; // rdi
  __int16 v22; // di
  STRING SourceString; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v25[34]; // [rsp+40h] [rbp-C0h] BYREF

  DestinationString = 0LL;
  if ( (HvlpRootFlags & 8) != 0 )
  {
    if ( a1 )
    {
      v2 = *(const char **)(a1 + 216);
      if ( v2 )
      {
        v3 = strstr(v2, "HYPERVISORDBGPORT=");
        v4 = strstr(*(const char **)(a1 + 216), "HYPERVISORDBGDEVICE=");
        v5 = strstr(*(const char **)(a1 + 216), "HYPERVISORDBGACPIPATH=");
        if ( v5 )
        {
          v6 = strstr(v5, "\\");
          if ( v6 )
          {
            memset(v25, 0, sizeof(v25));
            HIDWORD(v25[27]) = 1;
            if ( v3 )
              WORD2(v25[25]) = 0x8000;
            else
              WORD2(v25[25]) = -32765;
            v7 = (__int64)strstr(v6, " ");
            if ( v7 )
            {
              LOWORD(v7) = v7 - (_WORD)v6;
            }
            else
            {
              v7 = -1LL;
              do
                ++v7;
              while ( v6[v7] );
            }
            *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
            SourceString.Buffer = v6;
            SourceString.Length = v7;
            SourceString.MaximumLength = v7;
            if ( RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u) >= 0 )
            {
              v25[28] = DestinationString.Buffer;
              LODWORD(v25[29]) = DestinationString.Length;
              BYTE3(v25[2]) = 1;
              ((void (__fastcall *)(_QWORD, _QWORD *))off_140C01B10[0])(0LL, v25);
              RtlFreeUnicodeString(&DestinationString);
            }
          }
        }
        else if ( v3 )
        {
          v8 = strstr(v3, "COM");
          if ( v8 )
          {
            v9 = atol(v8 + 3) - 1;
            if ( v9 )
            {
              v10 = v9 - 1;
              if ( v10 )
              {
                v11 = v10 - 1;
                if ( v11 )
                {
                  if ( v11 == 1 )
                    KdHvComPortInUse = 744LL;
                }
                else
                {
                  KdHvComPortInUse = 1000LL;
                }
              }
              else
              {
                KdHvComPortInUse = 760LL;
              }
            }
            else
            {
              KdHvComPortInUse = 1016LL;
            }
          }
        }
        else if ( v4 )
        {
          v12 = strstr(v4, "=");
          v13 = v12;
          if ( v12 )
          {
            v14 = atol(v12 + 1);
            v15 = strstr(v13, ".");
            if ( v15 )
            {
              v16 = v15 + 1;
              v17 = atol(v15 + 1);
              v18 = strstr(v16, ".");
              if ( v18 )
              {
                v19 = v17 & 0x1F | (32 * (atol(v18 + 1) & 7));
                v20 = strstr(*(const char **)(a1 + 216), "HYPERVISORDBGTYPE=");
                v21 = v20;
                if ( v20 )
                {
                  if ( !strncmp(v20 + 18, "1394", 4uLL) )
                  {
                    v22 = -32767;
                  }
                  else
                  {
                    if ( strncmp(v21 + 18, "NET", 3uLL) )
                      return;
                    v22 = -32765;
                  }
                  memset(v25, 0, sizeof(v25));
                  LODWORD(v25[1]) = -1;
                  WORD2(v25[1]) = -1;
                  BYTE3(v25[2]) = 1;
                  v25[0] = __PAIR64__(v19, v14);
                  if ( v22 == -32767 )
                  {
                    HIWORD(v25[1]) = 12;
                    LOBYTE(v25[2]) = 16;
                  }
                  else
                  {
                    HIWORD(v25[1]) = 2;
                    LOBYTE(v25[2]) = -1;
                  }
                  LODWORD(v25[24]) = 0;
                  ((void (__fastcall *)(_QWORD, _QWORD *))off_140C01A08[0])(0LL, v25);
                }
              }
            }
          }
        }
      }
    }
  }
}
