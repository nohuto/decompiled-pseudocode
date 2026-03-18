/*
 * XREFs of OpenCacheKeyEx @ 0x1C00371E0
 * Callers:
 *     FastGetProfileDwordEx @ 0x1C0036EC0 (FastGetProfileDwordEx.c)
 *     FastGetProfileStringW @ 0x1C0037000 (FastGetProfileStringW.c)
 *     InitScancodeMap @ 0x1C00613A0 (InitScancodeMap.c)
 *     CheckDesktopPolicy @ 0x1C00616B0 (CheckDesktopPolicy.c)
 *     FastGetProfileValue @ 0x1C0061950 (FastGetProfileValue.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C007E84C (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     InitializeWin32KSyscallFilter @ 0x1C0097170 (InitializeWin32KSyscallFilter.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C00A2650 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C00AE3AC (-UserInitialize@@YAJXZ.c)
 *     FastWriteProfileStringW @ 0x1C00C1AA0 (FastWriteProfileStringW.c)
 *     Initialize @ 0x1C00C232C (Initialize.c)
 *     CheckDesktopPolicyChange @ 0x1C0135150 (CheckDesktopPolicyChange.c)
 *     FastGetProfileKeysW @ 0x1C01352E0 (FastGetProfileKeysW.c)
 *     FastWriteProfileValue @ 0x1C0135590 (FastWriteProfileValue.c)
 *     Win32UserInitialize @ 0x1C02DBF90 (Win32UserInitialize.c)
 *     InitCreateUserSubsystem @ 0x1C02DE10C (InitCreateUserSubsystem.c)
 * Callees:
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C00375A0 (-InitPreviousUserString@@YAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00AEFC4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     AccessCheckObject @ 0x1C00B4CE0 (AccessCheckObject.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall OpenCacheKeyEx(const UNICODE_STRING *a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  ACCESS_MASK v7; // r12d
  const UNICODE_STRING *v8; // r15
  PVOID CurrentProcess; // r13
  int v10; // r14d
  __int64 v11; // rsi
  int v12; // eax
  const UNICODE_STRING *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int *v18; // rax
  NTSTATUS v19; // eax
  int v20; // r15d
  NTSTATUS v21; // eax
  __int64 v22; // r8
  PVOID v23; // r13
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  const UNICODE_STRING *v28; // [rsp+50h] [rbp-B0h]
  void *v29; // [rsp+58h] [rbp-A8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR Source[32]; // [rsp+90h] [rbp-70h] BYREF
  char v32; // [rsp+D0h] [rbp-30h] BYREF

  v4 = (unsigned int)a2;
  v5 = 0LL;
  v28 = a1;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v7 = a3;
  v8 = a1;
  CurrentProcess = (PVOID)PsGetCurrentProcess(a1, a2, a3);
  v29 = CurrentProcess;
  KeyHandle = 0LL;
  if ( qword_1C0295D08 && (int)qword_1C0295D08() >= 0 )
  {
    if ( qword_1C0295D10 )
      return (void *)qword_1C0295D10((unsigned int)v4, v7, a4);
    return (void *)v5;
  }
  if ( v7 == 131097 && ((_DWORD)v4 == 4 || (_DWORD)v4 == 23) )
  {
    v10 = *a4;
  }
  else
  {
    if ( a4 && (*a4 & 0x10) != 0 )
    {
LABEL_40:
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
      v12 = -5;
    }
    else
    {
      if ( *off_1C0242840[*(unsigned int *)((char *)&unk_1C0242490 + v11)] == 77 )
      {
        RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
      }
      else
      {
        if ( v8 )
        {
          v13 = v8;
        }
        else
        {
          InitPreviousUserString();
          v13 = &PreviousUserString;
        }
        RtlAppendUnicodeStringToString(&Destination, v13);
      }
      if ( (v10 & 2) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"Software\\Policies\\Microsoft\\Windows\\");
        v12 = -3;
      }
      else if ( (v10 & 8) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"Remote\\");
        v18 = (unsigned int *)SGDGetUserSessionState(v15, v14, v16, v17);
        RtlStringCchPrintfW(Source, 0x20uLL, L"%ld\\", *v18);
        RtlAppendUnicodeToString(&Destination, Source);
        v12 = -9;
      }
      else
      {
        if ( a4 && (*a4 & 0x10) != 0 )
          goto LABEL_40;
        v12 = -2;
      }
    }
    v10 &= v12;
    RtlAppendUnicodeToString(&Destination, off_1C0242840[*(unsigned int *)((char *)&unk_1C0242490 + v11)] + 1);
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)((char *)&unk_1C0242490 + v11 + 8));
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v19 = ZwOpenKey(&KeyHandle, v7, &ObjectAttributes);
    v20 = v19;
    if ( v7 != 131097 && CurrentProcess != gpepCSRSS && CurrentProcess != (PVOID)gpepInit )
    {
      if ( v19 < 0 )
        goto LABEL_37;
      Object = 0LL;
      v21 = ObReferenceObjectByHandle(KeyHandle, v7, 0LL, 0, &Object, 0LL);
      v23 = Object;
      if ( v21 < 0 )
      {
        ZwClose(KeyHandle);
        v20 = -1073741790;
        goto LABEL_37;
      }
      LOBYTE(v22) = 1;
      if ( !(unsigned int)AccessCheckObject(Object, v7, v22, &KeyMapping) )
      {
        ZwClose(KeyHandle);
        v20 = -1073741790;
      }
      ObfDereferenceObject(v23);
    }
    if ( v20 >= 0 )
      break;
LABEL_37:
    if ( !v10 )
      break;
    v8 = v28;
    CurrentProcess = v29;
  }
  if ( a4 )
    *a4 = v10;
  if ( v20 >= 0 )
    return KeyHandle;
  return (void *)v5;
}
