__int64 __fastcall PipGenerateContainerID(__int64 a1, __int64 a2, __int64 a3, const WCHAR *a4, _QWORD *a5)
{
  __int64 v6; // rdi
  NTSTATUS v7; // ebx
  GUID *p_Guid; // rcx
  wchar_t *Buffer; // rdi
  unsigned int MaximumLength; // esi
  void *Pool2; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  int DeviceRegProp; // ebx
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-61h] BYREF
  int v17; // [rsp+50h] [rbp-51h] BYREF
  int v18; // [rsp+54h] [rbp-4Dh] BYREF
  GUID Guid; // [rsp+58h] [rbp-49h] BYREF
  WCHAR SourceString[40]; // [rsp+70h] [rbp-31h] BYREF

  v17 = 0;
  v18 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v6 = a1;
  *a5 = 0LL;
  v7 = 0;
  UnicodeString.Buffer = 0LL;
  Guid = 0LL;
  if ( !(_BYTE)a3 )
  {
    p_Guid = (GUID *)(*(_QWORD *)(a1 + 16) + 664LL);
    goto LABEL_3;
  }
  if ( a4 )
  {
    if ( !RtlCreateUnicodeString(&UnicodeString, a4) )
      return (unsigned int)-1073741670;
    goto LABEL_5;
  }
  if ( !a2 )
    goto LABEL_22;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v14 = *(_QWORD *)(v6 + 48);
  v17 = 78;
  DeviceRegProp = CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v14,
                    a2,
                    37,
                    (__int64)&v18,
                    (__int64)SourceString,
                    (__int64)&v17,
                    0);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( DeviceRegProp < 0 || v18 != 1 || !RtlCreateUnicodeString(&UnicodeString, SourceString) )
  {
LABEL_22:
    v7 = ExUuidCreate(&Guid);
    if ( v7 < 0 )
    {
LABEL_4:
      if ( v7 < 0 )
        return (unsigned int)v7;
      goto LABEL_5;
    }
    p_Guid = &Guid;
LABEL_3:
    LOBYTE(a3) = 1;
    v7 = RtlStringFromGUIDEx(p_Guid, &UnicodeString, a3);
    goto LABEL_4;
  }
  v7 = RtlGUIDFromString(&UnicodeString, &Guid);
  if ( v7 < 0 )
  {
LABEL_19:
    RtlFreeUnicodeString(&UnicodeString);
    goto LABEL_22;
  }
  while ( 1 )
  {
    v6 = *(_QWORD *)(v6 + 16);
    if ( !v6 )
      break;
    if ( (GUID *)(v6 + 664) == &Guid || RtlCompareMemory((const void *)(v6 + 664), &Guid, 0x10uLL) == 16 )
      goto LABEL_19;
  }
LABEL_5:
  Buffer = UnicodeString.Buffer;
  if ( UnicodeString.Buffer )
  {
    MaximumLength = UnicodeString.MaximumLength;
    Pool2 = (void *)ExAllocatePool2(256LL, UnicodeString.MaximumLength, 1852141648LL);
    *a5 = Pool2;
    if ( Pool2 )
      memmove(Pool2, Buffer, MaximumLength);
    else
      v7 = -1073741670;
    RtlFreeUnicodeString(&UnicodeString);
  }
  return (unsigned int)v7;
}
