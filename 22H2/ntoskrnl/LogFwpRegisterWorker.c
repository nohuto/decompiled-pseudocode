/*
 * XREFs of LogFwpRegisterWorker @ 0x140AEFAC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041AA40 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041B2A0 (ZwSetValueKey.c)
 */

int LogFwpRegisterWorker()
{
  int result; // eax
  NTSTATUS v1; // eax
  HANDLE v2; // rcx
  int v3; // ebx
  int *v4; // rbx
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+Fh] BYREF
  int Data; // [rsp+B8h] [rbp+6Fh] BYREF
  ULONG Disposition; // [rsp+C0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+7Fh] BYREF

  Disposition = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"BGFX");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
    v2 = KeyHandle;
    if ( v1 >= 0 )
    {
      v3 = dword_140CF7BD8;
      ZwClose(KeyHandle);
      RtlInitUnicodeString(&DestinationString, L"Resume");
      Data = (v3 & 0x100000) != 0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"Width");
      Data = qword_140CF7C28;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"Height");
      Data = HIDWORD(qword_140CF7C28);
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"BPP");
      Data = dword_140CF7BE8;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"LogoSize");
      Data = Size;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressFrames");
      Data = dword_140CF7C18;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressMemory");
      Data = dword_140C0E4D0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressProlog");
      Data = 1000000 * qword_140CF7C38 / qword_140C0C9C0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressLow");
      Data = 1000000 * qword_140C0B708 / qword_140C0C9C0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressHigh");
      Data = 1000000 * qword_140CF7BE0 / qword_140C0C9C0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      v4 = (int *)qword_140C0E4E0;
      if ( qword_140C0E4E0 )
      {
        RtlInitUnicodeString(&DestinationString, L"ResidentSize");
        Data = *v4;
        ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      }
      RtlInitUnicodeString(&DestinationString, L"ProgressTotal");
      Data = 1000000 * qword_140CF7BC8 / qword_140C0C9C0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressManual");
      Data = 1000000 * qword_140D18110 / qword_140C0C9C0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeProlog");
      Data = 1000000 * qword_140CF7C20 / qword_140C0C9C0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeOverlap");
      Data = dword_140CF7C40;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeIo");
      Data = dword_140CF7C1C;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeCpu");
      Data = dword_140CF7BEC;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeFrames");
      Data = dword_140CF7BF0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeMemory");
      Data = dword_140C0E4CC;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeLow");
      Data = 1000000 * qword_140C0B710 / qword_140C0C9C0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeHigh");
      Data = 1000000 * qword_140CF7BF8 / qword_140C0C9C0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeTotal");
      Data = 1000000 * qword_140CF7BD0 / qword_140C0C9C0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"AnimationTotal");
      Data = 1000000 * qword_140CF7BB8 / qword_140C0C9C0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"CompressBitmaps");
      Data = 1000000 * qword_140D18118 / qword_140C0C9C0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      v2 = Handle;
    }
    return ZwClose(v2);
  }
  return result;
}
