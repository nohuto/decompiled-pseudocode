__int64 __fastcall CiConfigInitializeFromRegistry(HANDLE KeyHandle)
{
  ULONG i; // esi
  NTSTATUS v3; // ebx
  WCHAR *Pool2; // rax
  WCHAR *v5; // rbx
  NTSTATUS v6; // r9d
  int TaskFromRegistry; // edi
  int v8; // ecx
  ULONG Length[2]; // [rsp+28h] [rbp-E0h]
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandlea; // [rsp+40h] [rbp-C8h] BYREF
  __int64 ObjectAttributes; // [rsp+48h] [rbp-C0h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes_8; // [rsp+50h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v16[15]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE KeyInformation[12]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int Size; // [rsp+114h] [rbp+Ch]
  size_t Size_4; // [rsp+118h] [rbp+10h] BYREF

  ObjectAttributes = 0LL;
  ResultLength[0] = 0;
  KeyHandlea = 0LL;
  memset(&ObjectAttributes_8, 0, 44);
  memset(v16, 0, 48);
  DestinationString_8 = 0LL;
  memset(&v16[7], 0, 0x40uLL);
  for ( i = 0; ; ++i )
  {
    v3 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, KeyInformation, 0x98u, ResultLength);
    if ( v3 < 0 )
      break;
    if ( Size < 0x80 )
    {
      Pool2 = (WCHAR *)ExAllocatePool2(64LL, 2LL * (Size + 1), 1953658433LL);
      v5 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, &Size_4, Size);
        v5[(unsigned __int64)Size >> 1] = 0;
        if ( RtlInitUnicodeStringEx(&DestinationString_8, v5) < 0 )
          goto LABEL_20;
        ObjectAttributes_8.Length = 48;
        ObjectAttributes_8.ObjectName = &DestinationString_8;
        ObjectAttributes_8.RootDirectory = KeyHandle;
        ObjectAttributes_8.Attributes = 64;
        *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
        v6 = ZwOpenKey(&KeyHandlea, 0x101u, &ObjectAttributes_8);
        if ( v6 < 0 )
        {
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            WPP_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xEu,
              (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
              v6);
LABEL_20:
          ExFreePoolWithTag(v5, 0);
          continue;
        }
        TaskFromRegistry = CiConfigQueryTaskFromRegistry(KeyHandlea);
        ZwClose(KeyHandlea);
        if ( TaskFromRegistry < 0 )
          goto LABEL_20;
        CiConfigTaskPolicy(v16);
        v8 = CiTaskAllocate(v5);
        if ( v8 < 0 )
        {
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            Length[0] = v8;
            WPP_SF_Sd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xDu,
              (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
              0LL,
              *(_QWORD *)Length);
          }
        }
        else
        {
          CiConfigTaskPolicy(ObjectAttributes);
          CiTaskDump(ObjectAttributes);
        }
      }
    }
LABEL_10:
    ;
  }
  if ( v3 == -1073741789 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xFu,
        (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
        -1073741789);
    goto LABEL_10;
  }
  if ( v3 == -2147483622 )
    return 0LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x10u,
      (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
      v3);
  return (unsigned int)v3;
}
