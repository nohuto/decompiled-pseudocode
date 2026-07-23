/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForMua @ 0x1405BA840
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1403A414C (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 *     RtlAppendUnicodeToString @ 0x14032EAB0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1403480C0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F9C60 (ZwOpenKey.c)
 *     ZwQueryInformationToken @ 0x1403F9E40 (ZwQueryInformationToken.c)
 *     AllocateMemory @ 0x1405BA7F4 (AllocateMemory.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1405BAAD0 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     RtlGetPersistedStateLocation @ 0x1406B87A0 (RtlGetPersistedStateLocation.c)
 *     RtlConvertSidToUnicodeString @ 0x1406ED390 (RtlConvertSidToUnicodeString.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForMua(__int64 a1, __int64 a2, HANDLE *a3, _DWORD *a4)
{
  __int64 v4; // rdi
  int v7; // r14d
  __int64 v8; // rcx
  __int64 *Memory; // rsi
  NTSTATUS InformationToken; // ebx
  unsigned __int8 v11; // al
  unsigned __int16 v12; // bx
  wchar_t *v13; // rax
  ULONG_PTR v14; // rdi
  ULONG ReturnLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  WCHAR TargetPath[264]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = 0LL;
  v7 = 0;
  UnicodeString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Memory = (__int64 *)AllocateMemory(0x54uLL);
  if ( Memory )
  {
    ReturnLength[0] = 0;
    InformationToken = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenUser, Memory, 0x54u, ReturnLength);
    if ( InformationToken < 0 )
      goto LABEL_26;
    v4 = *Memory;
  }
  else
  {
    InformationToken = -1073741801;
  }
  if ( InformationToken >= 0 )
  {
    v11 = *(_BYTE *)(v4 + 1);
    if ( v11 < 2u || v11 == 5 && *(_DWORD *)(v4 + 8) == 21 && *(_DWORD *)(v4 + 24) == 503 )
    {
      *a4 = 0;
      InformationToken = -1073741514;
      v7 = 1;
    }
    if ( InformationToken >= 0 )
    {
      InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)v4, 1u);
      if ( InformationToken >= 0 )
      {
        ReturnLength[0] = 0;
        InformationToken = RtlGetPersistedStateLocation(
                             L"GlobalizationUserSettings",
                             L"TargetNtPath",
                             L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\International",
                             LocationTypeRegistry,
                             TargetPath,
                             0x208u,
                             ReturnLength);
        if ( InformationToken >= 0 )
        {
          v12 = LOWORD(ReturnLength[0]) + UnicodeString.Length + 4;
          v13 = (wchar_t *)AllocateMemory(v12);
          v14 = (ULONG_PTR)v13;
          if ( v13 )
          {
            *(_QWORD *)&Destination.Length = 0LL;
            Destination.MaximumLength = v12;
            Destination.Buffer = v13;
            InformationToken = RtlAppendUnicodeToString(&Destination, TargetPath);
            if ( InformationToken >= 0 )
            {
              InformationToken = RtlAppendUnicodeToString(&Destination, L"\\");
              if ( InformationToken >= 0 )
              {
                InformationToken = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
                if ( InformationToken >= 0 )
                {
                  ObjectAttributes.RootDirectory = 0LL;
                  *(_QWORD *)ReturnLength = 0LL;
                  ObjectAttributes.ObjectName = &Destination;
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.Attributes = 576;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  if ( ZwOpenKey((PHANDLE)ReturnLength, 0x20019u, &ObjectAttributes) < 0 )
                  {
                    v7 = 1;
                    *a4 = 1;
                  }
                  else
                  {
                    ZwClose(*(HANDLE *)ReturnLength);
                    *a4 = 2;
                    InformationToken = ZwOpenKey(a3, 8u, &ObjectAttributes);
                  }
                }
              }
            }
            ExFreeHeapPool(v14);
          }
          else
          {
            InformationToken = -1073741801;
          }
        }
        RtlFreeAnsiString(&UnicodeString);
      }
    }
    if ( v7 )
      InformationToken = OpenGlobalizationUserSettingsKey_ForSingleUserModel(v8, a3);
  }
LABEL_26:
  if ( Memory )
    ExFreeHeapPool((ULONG_PTR)Memory);
  return (unsigned int)InformationToken;
}
