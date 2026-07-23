/*
 * XREFs of _SysCtxRegOpenCurrentUserKey @ 0x14072D908
 * Callers:
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406081C4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14063276C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140636AC0 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140639F28 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14072C740 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14072CC64 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072D4FC (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140975028 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14097809C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x1409789EC (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     RtlUShortAdd @ 0x14023071C (RtlUShortAdd.c)
 *     RtlEqualSid @ 0x14026A980 (RtlEqualSid.c)
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     RtlSubAuthoritySid @ 0x14026D6C0 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x1403FA9A0 (ZwQueryInformationToken.c)
 *     ZwOpenThreadTokenEx @ 0x1403FAB60 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x1403FAB80 (ZwOpenProcessTokenEx.c)
 *     _SysCtxGetCachedContextBaseKey @ 0x140611DE0 (_SysCtxGetCachedContextBaseKey.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlConvertSidToUnicodeString @ 0x1406697D0 (RtlConvertSidToUnicodeString.c)
 *     RtlInitializeSid @ 0x1406BC580 (RtlInitializeSid.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SysCtxRegOpenCurrentUserKey(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  wchar_t *v8; // rdi
  int appended; // ebx
  PSID v10; // rsi
  unsigned __int16 v12; // bx
  wchar_t *PoolWithTag; // rax
  __int64 v14; // rcx
  USHORT pusResult[2]; // [rsp+30h] [rbp-99h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-95h] BYREF
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
          goto LABEL_11;
        if ( v20 < 2 )
        {
          appended = -1073741790;
          goto LABEL_11;
        }
      }
      else if ( TokenInformation != 1 )
      {
LABEL_10:
        appended = -1073741637;
        goto LABEL_11;
      }
      appended = ZwQueryInformationToken(Handle, TokenUser, Sid2, 0x54u, &ReturnLength);
      if ( appended >= 0 )
      {
        v10 = Sid2[0];
        appended = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
        if ( appended >= 0 )
        {
          *RtlSubAuthoritySid(Sid, 0) = 18;
          if ( RtlEqualSid(Sid, v10) )
            goto LABEL_10;
          appended = RtlConvertSidToUnicodeString(&UnicodeString, v10, 1u);
          if ( appended >= 0 )
          {
            appended = RtlUShortAdd(UnicodeString.Length, 0x1Eu, pusResult);
            if ( appended >= 0 )
            {
              appended = RtlUShortAdd(pusResult[0], 2u, pusResult);
              if ( appended >= 0 )
              {
                v12 = pusResult[0];
                PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, pusResult[0], 0x53504E50u);
                v8 = PoolWithTag;
                if ( PoolWithTag )
                {
                  Destination.Length = 0;
                  Destination.MaximumLength = v12;
                  Destination.Buffer = PoolWithTag;
                  appended = RtlAppendUnicodeStringToString(&Destination, &stru_140009DC0);
                  if ( appended >= 0 )
                  {
                    appended = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
                    if ( appended >= 0 )
                    {
                      appended = SysCtxGetCachedContextBaseKey(a1, 3, &v22);
                      if ( appended >= 0 )
                        appended = SysCtxRegOpenKey(v14, v22, (__int64)(Destination.Buffer + 15), a2, a3, a4);
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
        }
      }
    }
  }
LABEL_11:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeAnsiString(&UnicodeString);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)appended;
}
