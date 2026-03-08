/*
 * XREFs of OpenCacheKeyEx @ 0x1C00760E0
 * Callers:
 *     InitScancodeMap @ 0x1C00178C0 (InitScancodeMap.c)
 *     CheckDesktopPolicy @ 0x1C0017BD0 (CheckDesktopPolicy.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0017E70 (xxxUpdatePerUserAccessPackSettings.c)
 *     FastGetProfileValue @ 0x1C0018890 (FastGetProfileValue.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C002D838 (-UserInitialize@@YAJXZ.c)
 *     InitializeWin32KSyscallFilter @ 0x1C002E260 (InitializeWin32KSyscallFilter.c)
 *     FastGetProfileDwordEx @ 0x1C002E9B0 (FastGetProfileDwordEx.c)
 *     FastGetProfileStringW @ 0x1C0074270 (FastGetProfileStringW.c)
 *     FastWriteProfileStringW @ 0x1C00D1720 (FastWriteProfileStringW.c)
 *     Initialize @ 0x1C00D1ECC (Initialize.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C00D2B3C (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     CheckDesktopPolicyChange @ 0x1C015CF60 (CheckDesktopPolicyChange.c)
 *     FastGetProfileKeysW @ 0x1C015D0F0 (FastGetProfileKeysW.c)
 *     FastWriteProfileValue @ 0x1C015D3A0 (FastWriteProfileValue.c)
 *     Win32UserInitialize @ 0x1C031E444 (Win32UserInitialize.c)
 *     InitCreateUserSubsystem @ 0x1C032009C (InitCreateUserSubsystem.c)
 * Callees:
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C007271C (-InitPreviousUserString@@YAXXZ.c)
 *     ApiSetEditionOpenProfileKey @ 0x1C0078748 (ApiSetEditionOpenProfileKey.c)
 *     AccessCheckObject @ 0x1C00C3CE0 (AccessCheckObject.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00CD374 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

void *__fastcall OpenCacheKeyEx(PCUNICODE_STRING Source, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  ACCESS_MASK v7; // r13d
  PCUNICODE_STRING v8; // r15
  PVOID v9; // r12
  int v10; // r14d
  __int64 v11; // rsi
  const UNICODE_STRING *v12; // rdx
  int v13; // eax
  NTSTATUS v14; // eax
  int v15; // r15d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int *v21; // rax
  NTSTATUS v22; // eax
  __int64 v23; // r8
  PVOID v24; // r12
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  PCUNICODE_STRING v28; // [rsp+50h] [rbp-B0h]
  __int64 CurrentProcess; // [rsp+58h] [rbp-A8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR Sourcea[32]; // [rsp+90h] [rbp-70h] BYREF
  char v32; // [rsp+D0h] [rbp-30h] BYREF

  v4 = (unsigned int)a2;
  v5 = 0LL;
  v28 = Source;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  KeyHandle = 0LL;
  v7 = a3;
  v8 = Source;
  CurrentProcess = PsGetCurrentProcess(Source, a2, a3, a4);
  v9 = (PVOID)CurrentProcess;
  if ( (unsigned int)ApiSetEditionOpenProfileKey((unsigned int)v4, v7, a4, &KeyHandle) )
    return KeyHandle;
  if ( v7 == 131097 && ((_DWORD)v4 == 4 || (_DWORD)v4 == 23) )
  {
    v10 = *a4;
  }
  else
  {
    if ( a4 && (*a4 & 0x10) != 0 )
    {
LABEL_43:
      *a4 = 0;
      return 0LL;
    }
    v10 = 1;
  }
  v11 = 16 * v4;
  while ( 1 )
  {
    *(_DWORD *)&Destination.Length = 0x2000000;
    Destination.Buffer = (PWSTR)&v32;
    if ( (v10 & 4) != 0 )
    {
      RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
      RtlAppendUnicodeToString(&Destination, L"Software\\Policies\\Microsoft\\Windows\\");
      v13 = -5;
    }
    else
    {
      if ( *off_1C02809A0[*(unsigned int *)((char *)&unk_1C02805F0 + v11)] == 77 )
      {
        RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
      }
      else
      {
        if ( v8 )
        {
          v12 = v8;
        }
        else
        {
          InitPreviousUserString();
          v12 = &PreviousUserString;
        }
        RtlAppendUnicodeStringToString(&Destination, v12);
      }
      if ( (v10 & 2) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"Software\\Policies\\Microsoft\\Windows\\");
        v13 = -3;
      }
      else if ( (v10 & 8) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"Remote\\");
        v21 = (unsigned int *)SGDGetUserSessionState(v18, v17, v19, v20);
        RtlStringCchPrintfW(Sourcea, 0x20uLL, L"%ld\\", *v21);
        RtlAppendUnicodeToString(&Destination, Sourcea);
        v13 = -9;
      }
      else
      {
        if ( a4 && (*a4 & 0x10) != 0 )
          goto LABEL_43;
        v13 = -2;
      }
    }
    v10 &= v13;
    RtlAppendUnicodeToString(&Destination, off_1C02809A0[*(unsigned int *)((char *)&unk_1C02805F0 + v11)] + 1);
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)((char *)&unk_1C02805F0 + v11 + 8));
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v14 = ZwOpenKey(&KeyHandle, v7, &ObjectAttributes);
    v15 = v14;
    if ( v7 != 131097 && v9 != gpepCSRSS && v9 != (PVOID)gpepInit )
    {
      if ( v14 < 0 )
        goto LABEL_21;
      Object = 0LL;
      v22 = ObReferenceObjectByHandle(KeyHandle, v7, 0LL, 0, &Object, 0LL);
      v24 = Object;
      if ( v22 < 0 )
      {
        ZwClose(KeyHandle);
        v15 = -1073741790;
        goto LABEL_21;
      }
      LOBYTE(v23) = 1;
      if ( !(unsigned int)AccessCheckObject(Object, v7, v23, &KeyMapping) )
      {
        ZwClose(KeyHandle);
        v15 = -1073741790;
      }
      ObfDereferenceObject(v24);
    }
    if ( v15 >= 0 )
      break;
LABEL_21:
    if ( !v10 )
      break;
    v8 = v28;
    v9 = (PVOID)CurrentProcess;
  }
  if ( a4 )
    *a4 = v10;
  if ( v15 >= 0 )
    return KeyHandle;
  return (void *)v5;
}
