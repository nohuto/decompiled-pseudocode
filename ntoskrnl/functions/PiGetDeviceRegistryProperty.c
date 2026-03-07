__int64 __fastcall PiGetDeviceRegistryProperty(__int64 a1, __int64 a2, __int64 a3, __int64 a4, wchar_t *a5, __int64 a6)
{
  __int64 v7; // r12
  struct _KTHREAD *CurrentThread; // rax
  int RegistryValue; // ebx
  _DWORD *v10; // rsi
  unsigned int v11; // r14d
  wchar_t *v12; // rdi
  wchar_t *v13; // r15
  wchar_t *v14; // rax
  __int64 v15; // rcx
  const wchar_t *v16; // rcx
  unsigned int i; // r13d
  __int64 v18; // rax
  __int64 v19; // rcx
  wchar_t *v20; // rax
  char v21; // cl
  _DWORD *v22; // r13
  _DWORD Size[3]; // [rsp+54h] [rbp-ACh] BYREF
  wchar_t *Str; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  NTSTRSAFE_PWSTR v28; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+80h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  __int64 v32[20]; // [rsp+D0h] [rbp-30h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  v28 = a5;
  v29 = a6;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  P = 0LL;
  memset(Size, 0, sizeof(Size));
  Str = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  RegistryValue = PnpDeviceObjectToDeviceInstance(a1, (__int64)&Size[1], 131097);
  if ( RegistryValue >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"LogConf");
    ObjectAttributes.RootDirectory = *(HANDLE *)&Size[1];
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    RegistryValue = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( RegistryValue >= 0 )
    {
      ZwClose(*(HANDLE *)&Size[1]);
      *(_QWORD *)&Size[1] = KeyHandle;
      RegistryValue = IopGetRegistryValue(KeyHandle, L"BootConfig", 320, &P);
    }
    ZwClose(*(HANDLE *)&Size[1]);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( RegistryValue >= 0 )
  {
    v10 = P;
    v11 = *((_DWORD *)P + 3);
    v12 = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
    if ( *((_DWORD *)P + 1) == 1
      && (unsigned int)PnpFindAlternateStringData((char *)P + *((unsigned int *)P + 2), v11, &Str, Size) )
    {
      v13 = Str;
      v11 = Size[0];
      v12 = Str;
      v14 = wcsstr(Str, L";(");
      v7 = (__int64)v14;
      if ( v14 && (v15 = (v11 >> 1) - 2, v13[v15] == 41) )
      {
        *v14 = 0;
        v7 = (__int64)(v14 + 2);
        v13[v15] = 0;
        memset(&v32[1], 0, 0x98uLL);
        v16 = (const wchar_t *)v7;
        v32[0] = v7;
        for ( i = 1; ; ++i )
        {
          v20 = wcschr(v16, 0x2Cu);
          if ( !v20 )
          {
            v21 = 0;
            goto LABEL_15;
          }
          *v20 = 0;
          v18 = (__int64)(v20 + 1);
          if ( i >= 0x13 )
            break;
          v19 = i;
          v32[v19] = v18;
          v16 = (const wchar_t *)v18;
        }
        v21 = 1;
      }
      else
      {
        v21 = 0;
      }
    }
    else
    {
      LODWORD(v13) = (_DWORD)Str;
      v21 = 0;
    }
LABEL_15:
    v22 = (_DWORD *)v29;
    if ( *(_DWORD *)v29 < v11 )
    {
      RegistryValue = -1073741789;
    }
    else if ( v10[1] == 8 )
    {
      if ( v7 )
      {
        if ( v21 )
          RegistryValue = -1073741619;
        else
          RegistryValue = RtlFormatMessageEx((int)v13, 0, 0, 0, 1, (__int64)v32, v28, *(_DWORD *)v29, v29);
      }
      else
      {
        memmove(v28, v12, v11);
      }
    }
    else
    {
      RegistryValue = -1073741584;
    }
    *v22 = v11;
    ExFreePoolWithTag(v10, 0);
  }
  return (unsigned int)RegistryValue;
}
