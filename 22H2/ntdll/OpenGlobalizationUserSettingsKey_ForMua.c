/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForMua @ 0x180119A78
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1800704B4 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlAppendUnicodeStringToString @ 0x180017270 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlConvertSidToUnicodeString @ 0x180037250 (RtlConvertSidToUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     RtlGetPersistedStateLocation @ 0x18004A370 (RtlGetPersistedStateLocation.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtOpenKey @ 0x18009D720 (NtOpenKey.c)
 *     NtQueryInformationToken @ 0x18009D900 (NtQueryInformationToken.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180119D48 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForMua(
        ACCESS_MASK DesiredAccess,
        __int64 a2,
        HANDLE *a3,
        _DWORD *a4)
{
  __int64 v5; // rdi
  int v8; // r14d
  __int64 *Heap; // rsi
  NTSTATUS PersistedStateLocation; // ebx
  unsigned __int8 v11; // al
  unsigned __int16 v12; // bx
  wchar_t *v13; // rax
  wchar_t *v14; // rdi
  ULONG BufferLengthOut; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ReturnLength; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  WCHAR TargetPath[264]; // [rsp+B0h] [rbp-50h] BYREF

  v5 = 0LL;
  v8 = 0;
  Heap = (__int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x54uLL);
  if ( Heap )
  {
    PersistedStateLocation = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 1u, Heap, 0x54u, &ReturnLength);
    if ( PersistedStateLocation < 0 )
      goto LABEL_26;
    v5 = *Heap;
  }
  else
  {
    PersistedStateLocation = -1073741801;
  }
  if ( PersistedStateLocation >= 0 )
  {
    v11 = *(_BYTE *)(v5 + 1);
    if ( v11 < 2u || v11 == 5 && *(_DWORD *)(v5 + 8) == 21 && *(_DWORD *)(v5 + 24) == 503 )
    {
      *a4 = 0;
      PersistedStateLocation = -1073741514;
      v8 = 1;
    }
    if ( PersistedStateLocation >= 0 )
    {
      PersistedStateLocation = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)v5, 1u);
      if ( PersistedStateLocation >= 0 )
      {
        BufferLengthOut = 0;
        PersistedStateLocation = RtlGetPersistedStateLocation(
                                   L"GlobalizationUserSettings",
                                   L"TargetNtPath",
                                   L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\International",
                                   LocationTypeRegistry,
                                   TargetPath,
                                   0x208u,
                                   &BufferLengthOut);
        if ( PersistedStateLocation >= 0 )
        {
          v12 = BufferLengthOut + UnicodeString.Length + 4;
          v13 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v12);
          v14 = v13;
          if ( v13 )
          {
            *(_QWORD *)&Destination.Length = 0LL;
            Destination.MaximumLength = v12;
            Destination.Buffer = v13;
            PersistedStateLocation = RtlAppendUnicodeToString(&Destination, TargetPath);
            if ( PersistedStateLocation >= 0 )
            {
              PersistedStateLocation = RtlAppendUnicodeToString(&Destination, L"\\");
              if ( PersistedStateLocation >= 0 )
              {
                PersistedStateLocation = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
                if ( PersistedStateLocation >= 0 )
                {
                  ObjectAttributes.RootDirectory = 0LL;
                  ObjectAttributes.ObjectName = &Destination;
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.Attributes = 576;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
                  {
                    v8 = 1;
                    *a4 = 1;
                  }
                  else
                  {
                    ZwClose(KeyHandle);
                    *a4 = 2;
                    PersistedStateLocation = ZwOpenKey(a3, DesiredAccess, &ObjectAttributes);
                  }
                }
              }
            }
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
          }
          else
          {
            PersistedStateLocation = -1073741801;
          }
        }
        RtlFreeAnsiString(&UnicodeString);
      }
    }
    if ( v8 )
      PersistedStateLocation = OpenGlobalizationUserSettingsKey_ForSingleUserModel(DesiredAccess, a3);
  }
LABEL_26:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)PersistedStateLocation;
}
