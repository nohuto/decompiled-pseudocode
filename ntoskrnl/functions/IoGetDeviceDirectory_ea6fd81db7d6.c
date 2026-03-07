__int64 __fastcall IoGetDeviceDirectory(__int64 a1, int a2, int a3, __int64 a4, _QWORD *a5)
{
  void *v7; // rdi
  WCHAR *v8; // r14
  __int64 v11; // rsi
  int StateRootPath; // ebx
  int ObjectProperty; // eax
  __int64 v14; // r15
  unsigned __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  unsigned __int16 Length; // r8
  int v21; // edx
  __int64 v22; // rax
  wchar_t *Buffer; // rdi
  int v24; // eax
  __int64 v26; // [rsp+68h] [rbp-51h] BYREF
  void *v27; // [rsp+70h] [rbp-49h] BYREF
  UNICODE_STRING v28; // [rsp+78h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-31h] BYREF
  PCWSTR SourceString; // [rsp+98h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-19h] BYREF
  UNICODE_STRING v32; // [rsp+B8h] [rbp-1h] BYREF
  UUID Uuid; // [rsp+C8h] [rbp+Fh] BYREF

  v7 = 0LL;
  v26 = 0LL;
  v8 = 0LL;
  v27 = 0LL;
  DestinationString = 0LL;
  SourceString = 0LL;
  UnicodeString = 0LL;
  Uuid = 0LL;
  v28 = 0LL;
  v32 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&v28, 0LL);
  RtlInitUnicodeString(&v32, 0LL);
  if ( a1 )
  {
    if ( !a3 && !a4 )
    {
      if ( a5 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
        if ( v11 )
        {
          if ( *(_WORD *)(v11 + 40) && *(_QWORD *)(v11 + 48) && !a2 )
          {
            StateRootPath = PiGetStateRootPath(
                              L"DriverState",
                              L"\\SystemRoot\\System32\\DriverState",
                              1u,
                              &DestinationString);
            if ( StateRootPath < 0 )
              goto LABEL_40;
            ObjectProperty = PnpGetObjectProperty(
                               0x6F697050u,
                               0x4Eu,
                               *(_QWORD *)(v11 + 48),
                               1,
                               0LL,
                               0LL,
                               (__int64)&DEVPKEY_Device_StateDirectoryId,
                               (__int64)&v26 + 4,
                               (PVOID *)&SourceString,
                               (unsigned int *)&v26,
                               0);
            v8 = (WCHAR *)SourceString;
            v14 = -1LL;
            StateRootPath = ObjectProperty;
            if ( ObjectProperty < 0 )
            {
              if ( ObjectProperty != -1073741275 )
                goto LABEL_40;
            }
            else if ( HIDWORD(v26) == 18 && (unsigned int)v26 >= 2 )
            {
              v15 = -1LL;
              do
                ++v15;
              while ( SourceString[v15] );
              v16 = 0;
              if ( !v15 )
              {
LABEL_20:
                StateRootPath = RtlInitUnicodeStringEx(&v32, SourceString);
                if ( StateRootPath < 0 )
                  goto LABEL_40;
                v19 = PiBuildAndOpenDeviceDirectoryPath(&DestinationString, (__int64)&v27);
LABEL_36:
                StateRootPath = v19;
                if ( v19 >= 0 )
                {
                  v7 = 0LL;
                  *a5 = v27;
                  goto LABEL_40;
                }
                goto LABEL_38;
              }
              v17 = 0LL;
              while ( 1 )
              {
                v18 = SourceString[v17];
                if ( (unsigned int)v18 > 0x7F || (*((_BYTE *)qword_140017560 + v18) & 1) == 0 )
                  break;
                v17 = ++v16;
                if ( v16 >= v15 )
                  goto LABEL_20;
              }
            }
            StateRootPath = PnpConcatenateUnicodeStrings(&v28, (PCUNICODE_STRING)(v11 + 40));
            if ( StateRootPath < 0 )
              goto LABEL_40;
            Length = v28.Length;
            v21 = 0;
            if ( (v28.Length & 0xFFFE) != 0 )
            {
              do
              {
                v22 = v28.Buffer[v21];
                if ( (unsigned int)v22 > 0x7F )
                  goto LABEL_39;
                if ( (*((_BYTE *)qword_140017560 + v22) & 1) == 0 )
                {
                  v28.Buffer[v21] = (*((_BYTE *)qword_140017560 + v22) & 1) + 35;
                  Length = v28.Length;
                }
              }
              while ( ++v21 < (unsigned int)(Length >> 1) );
            }
            Buffer = v28.Buffer;
            v24 = PiBuildAndOpenDeviceDirectoryPath(&DestinationString, (__int64)&v27);
            StateRootPath = v24;
            if ( v24 == -1073741766 )
            {
              StateRootPath = ExUuidCreate(&Uuid);
              if ( StateRootPath < 0 )
                goto LABEL_38;
              StateRootPath = RtlStringFromGUIDEx(&Uuid.Data1, (__int64)&UnicodeString, 1);
              if ( StateRootPath < 0 )
                goto LABEL_38;
              Buffer = UnicodeString.Buffer;
              v24 = PiBuildAndOpenDeviceDirectoryPath(&DestinationString, (__int64)&v27);
              StateRootPath = v24;
            }
            if ( v24 >= 0 )
            {
              do
                ++v14;
              while ( Buffer[v14] );
              v19 = PnpSetObjectProperty(
                      *(__int64 *)&PiPnpRtlCtx,
                      *(_QWORD *)(v11 + 48),
                      1u,
                      0LL,
                      0LL,
                      (__int64)&DEVPKEY_Device_StateDirectoryId,
                      18,
                      (__int64)Buffer,
                      2 * (int)v14 + 2,
                      0);
              goto LABEL_36;
            }
LABEL_38:
            v7 = v27;
            goto LABEL_40;
          }
        }
      }
    }
  }
LABEL_39:
  StateRootPath = -1073741811;
LABEL_40:
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v28);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x6F697050u);
  if ( v7 )
    ZwClose(v7);
  return (unsigned int)StateRootPath;
}
