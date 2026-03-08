/*
 * XREFs of _SysCtxRegOpenCurrentUserKey @ 0x140A6772C
 * Callers:
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140682DC0 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1406C50D8 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406C9F40 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406D53EC (_CmOpenDeviceRegKeyWorker.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140A5E4A8 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140A5EBA0 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A5F264 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140A60C0C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140A6333C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A63C90 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     RtlUShortAdd @ 0x140202574 (RtlUShortAdd.c)
 *     RtlEqualSid @ 0x140208A60 (RtlEqualSid.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     RtlSubAuthoritySid @ 0x1402BE740 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x140412730 (ZwQueryInformationToken.c)
 *     ZwOpenThreadTokenEx @ 0x1404128F0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x140412910 (ZwOpenProcessTokenEx.c)
 *     RtlInitializeSid @ 0x14068E3A0 (RtlInitializeSid.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     RtlConvertSidToUnicodeString @ 0x1407479E0 (RtlConvertSidToUnicodeString.c)
 *     _SysCtxGetCachedContextBaseKey @ 0x14078225C (_SysCtxGetCachedContextBaseKey.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SysCtxRegOpenCurrentUserKey(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  wchar_t *v8; // rdi
  int appended; // ebx
  PSID v10; // rsi
  unsigned __int16 v11; // bx
  wchar_t *Pool2; // rax
  __int64 v13; // rcx
  USHORT pusResult[2]; // [rsp+30h] [rbp-99h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-95h] BYREF
  int TokenInformation; // [rsp+3Ch] [rbp-8Dh] BYREF
  ULONG ReturnLength; // [rsp+40h] [rbp-89h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-81h] BYREF
  int v20; // [rsp+50h] [rbp-79h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-71h] BYREF
  __int64 v22; // [rsp+68h] [rbp-61h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-59h] BYREF
  _BYTE Sid[16]; // [rsp+80h] [rbp-49h] BYREF
  PSID Sid2[11]; // [rsp+90h] [rbp-39h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  Handle = 0LL;
  TokenInformation = 0;
  v20 = 0;
  ReturnLength = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v22 = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  pusResult[0] = 0;
  v8 = 0LL;
  UnicodeString = 0LL;
  appended = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 0, 0x200u, &Handle);
  if ( appended == -1073741700 )
    appended = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &Handle);
  if ( appended >= 0 )
  {
    appended = ZwQueryInformationToken(Handle, TokenType, &TokenInformation, 4u, &ReturnLength);
    if ( appended >= 0 )
    {
      if ( TokenInformation == 2 )
      {
        appended = ZwQueryInformationToken(Handle, TokenImpersonationLevel, &v20, 4u, &ReturnLength);
        if ( appended < 0 )
          goto LABEL_23;
        if ( v20 < 2 )
        {
          appended = -1073741790;
          goto LABEL_23;
        }
      }
      else if ( TokenInformation != 1 )
      {
        goto LABEL_10;
      }
      appended = ZwQueryInformationToken(Handle, TokenUser, Sid2, 0x54u, &ReturnLength);
      if ( appended < 0 )
        goto LABEL_23;
      v10 = Sid2[0];
      appended = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      if ( appended < 0 )
        goto LABEL_23;
      *RtlSubAuthoritySid(Sid, 0) = 18;
      if ( !RtlEqualSid(Sid, v10) )
      {
        appended = RtlConvertSidToUnicodeString(&UnicodeString, v10, 1u);
        if ( appended >= 0 )
        {
          appended = RtlUShortAdd(UnicodeString.Length, 0x1Eu, pusResult);
          if ( appended >= 0 )
          {
            appended = RtlUShortAdd(pusResult[0], 2u, pusResult);
            if ( appended >= 0 )
            {
              v11 = pusResult[0];
              Pool2 = (wchar_t *)ExAllocatePool2(256LL, pusResult[0], 1397771856LL);
              v8 = Pool2;
              if ( Pool2 )
              {
                Destination.Length = 0;
                Destination.MaximumLength = v11;
                Destination.Buffer = Pool2;
                appended = RtlAppendUnicodeStringToString(&Destination, &stru_14000B248);
                if ( appended >= 0 )
                {
                  appended = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
                  if ( appended >= 0 )
                  {
                    appended = SysCtxGetCachedContextBaseKey(a1, 3, &v22);
                    if ( appended >= 0 )
                      appended = SysCtxRegOpenKey(v13, v22, (__int64)(Destination.Buffer + 15), a2, a3, a4);
                  }
                }
              }
              else
              {
                appended = -1073741801;
              }
            }
          }
        }
        goto LABEL_23;
      }
LABEL_10:
      appended = -1073741637;
    }
  }
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)appended;
}
