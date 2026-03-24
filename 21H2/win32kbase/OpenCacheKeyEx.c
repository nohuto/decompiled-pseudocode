/*
 * XREFs of OpenCacheKeyEx @ 0x1C0026440
 * Callers:
 *     InitScancodeMap @ 0x1C000D290 (InitScancodeMap.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C000DFA0 (xxxUpdatePerUserAccessPackSettings.c)
 *     FastGetProfileValue @ 0x1C000E9A0 (FastGetProfileValue.c)
 *     CheckDesktopPolicy @ 0x1C000EB80 (CheckDesktopPolicy.c)
 *     FastGetProfileStringW @ 0x1C000F190 (FastGetProfileStringW.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C0068014 (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     Initialize @ 0x1C0068114 (Initialize.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C0068284 (-UserInitialize@@YAJXZ.c)
 *     InitializeWin32KSyscallFilter @ 0x1C00689B0 (InitializeWin32KSyscallFilter.c)
 *     W32kEtwEnableCallback @ 0x1C0068F8C (W32kEtwEnableCallback.c)
 *     FastGetProfileDwordEx @ 0x1C0069430 (FastGetProfileDwordEx.c)
 *     FastWriteProfileStringW @ 0x1C00B4FE0 (FastWriteProfileStringW.c)
 *     CheckDesktopPolicyChange @ 0x1C011D8A0 (CheckDesktopPolicyChange.c)
 *     FastGetProfileKeysW @ 0x1C011DA30 (FastGetProfileKeysW.c)
 *     FastWriteProfileValue @ 0x1C011DCD0 (FastWriteProfileValue.c)
 *     Win32UserInitialize @ 0x1C0298BBC (Win32UserInitialize.c)
 *     InitCreateUserSubsystem @ 0x1C0299BFC (InitCreateUserSubsystem.c)
 * Callees:
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C000C880 (-InitPreviousUserString@@YAXXZ.c)
 *     ApiSetEditionOpenProfileKey @ 0x1C0025A14 (ApiSetEditionOpenProfileKey.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0067D78 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     AccessCheckObject @ 0x1C009FED0 (AccessCheckObject.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

void *__fastcall OpenCacheKeyEx(const UNICODE_STRING *a1, __int64 a2, unsigned int a3, int *a4)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  const UNICODE_STRING *v8; // rbx
  PVOID v9; // r13
  int v10; // r14d
  const UNICODE_STRING *v11; // rdx
  int v12; // eax
  NTSTATUS v13; // eax
  int v14; // ebx
  NTSTATUS v16; // eax
  __int64 v17; // r8
  PVOID v18; // r13
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  __int64 CurrentProcess; // [rsp+50h] [rbp-B0h]
  const UNICODE_STRING *v23; // [rsp+58h] [rbp-A8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR Source[32]; // [rsp+90h] [rbp-70h] BYREF
  char v26; // [rsp+D0h] [rbp-30h] BYREF

  v4 = (unsigned int)a2;
  v5 = 0LL;
  v23 = a1;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  KeyHandle = 0LL;
  v8 = a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  v9 = (PVOID)CurrentProcess;
  if ( (unsigned int)ApiSetEditionOpenProfileKey(v4, a3, (__int64)a4, (__int64 *)&KeyHandle) )
    return KeyHandle;
  if ( a3 == 131097 && ((_DWORD)v4 == 4 || (_DWORD)v4 == 23) )
  {
    v10 = *a4;
    while ( 1 )
    {
LABEL_8:
      *(_DWORD *)&Destination.Length = 0x2000000;
      Destination.Buffer = (PWSTR)&v26;
      if ( (v10 & 4) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
        RtlAppendUnicodeToString(&Destination, L"Software\\Policies\\Microsoft\\Windows\\");
        v12 = -5;
      }
      else
      {
        if ( *off_1C020B080[dword_1C020ACD0[4 * v4]] == 77 )
        {
          RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
        }
        else
        {
          if ( v8 )
          {
            v11 = v8;
          }
          else
          {
            InitPreviousUserString();
            v11 = &PreviousUserString;
          }
          RtlAppendUnicodeStringToString(&Destination, v11);
        }
        if ( (v10 & 2) != 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"Software\\Policies\\Microsoft\\Windows\\");
          v12 = -3;
        }
        else if ( (v10 & 8) != 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"Remote\\");
          RtlStringCchPrintfW(Source, 0x20uLL, L"%ld\\", (unsigned int)gSessionId);
          RtlAppendUnicodeToString(&Destination, Source);
          v12 = -9;
        }
        else
        {
          if ( a4 && (*a4 & 0x10) != 0 )
            goto LABEL_43;
          v12 = -2;
        }
      }
      v10 &= v12;
      RtlAppendUnicodeToString(&Destination, off_1C020B080[dword_1C020ACD0[4 * v4]] + 1);
      RtlAppendUnicodeToString(&Destination, (&off_1C020ACD8)[2 * v4]);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &Destination;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v13 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
      v14 = v13;
      if ( a3 != 131097 && v9 != gpepCSRSS && v9 != (PVOID)gpepInit )
      {
        if ( v13 < 0 )
          goto LABEL_20;
        Object = 0LL;
        v16 = ObReferenceObjectByHandle(KeyHandle, a3, 0LL, 0, &Object, 0LL);
        v18 = Object;
        if ( v16 < 0 )
        {
          ZwClose(KeyHandle);
          v14 = -1073741790;
        }
        else
        {
          LOBYTE(v17) = 1;
          if ( !(unsigned int)AccessCheckObject(Object, a3, v17, &KeyMapping) )
          {
            ZwClose(KeyHandle);
            v14 = -1073741790;
          }
          ObfDereferenceObject(v18);
        }
        v9 = (PVOID)CurrentProcess;
      }
      if ( v14 >= 0 )
        goto LABEL_22;
LABEL_20:
      if ( !v10 )
      {
LABEL_22:
        if ( a4 )
          *a4 = v10;
        if ( v14 >= 0 )
          return KeyHandle;
        return (void *)v5;
      }
      v8 = v23;
    }
  }
  if ( !a4 || (*a4 & 0x10) == 0 )
  {
    v10 = 1;
    goto LABEL_8;
  }
LABEL_43:
  *a4 = 0;
  return 0LL;
}
