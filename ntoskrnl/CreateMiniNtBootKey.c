char CreateMiniNtBootKey()
{
  NTSTATUS v0; // ebx
  wchar_t *Pool2; // rax
  wchar_t *v2; // rdi
  __int64 v3; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rcx
  bool v6; // zf
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r8
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  struct _FAST_MUTEX FastMutex; // [rsp+80h] [rbp-9h] BYREF
  ULONG Disposition; // [rsp+F0h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+100h] [rbp+77h] BYREF

  Disposition = 0;
  KeyHandle = 0LL;
  v0 = 0;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 0x200uLL, 0x74696E49u);
  v2 = Pool2;
  if ( !Pool2 )
    goto LABEL_18;
  swprintf_s(Pool2, 0x100uLL, L"%s\\Control", CmRegistryMachineSystemCurrentControlSet.Buffer);
  v2[255] = 0;
  RtlInitUnicodeString(&DestinationString, v2);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v0 >= 0 )
  {
    Handle = 0LL;
    RtlInitUnicodeString(&DestinationString, L"MiniNT");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v0 = ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
    if ( v0 >= 0 )
      ZwClose(Handle);
    ZwClose(KeyHandle);
  }
  if ( v0 < 0 )
LABEL_18:
    KeBugCheckEx(0x32u, v0, 6uLL, 0LL, 0LL);
  ExFreePoolWithTag(v2, 0);
  LOBYTE(v3) = InitForceInline;
  if ( InitForceInline == 1 )
  {
    memset(&FastMutex, 0, 52);
    ExTryToAcquireFastMutex(&FastMutex);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v5 = KeGetCurrentThread();
    v6 = v5->SpecialApcDisable++ == -1;
    if ( v6 && ($C71981A45BEB2B45F82C232A7085991E *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
      KiCheckForKernelApcDelivery();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(v3) = KiIrqlFlags;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v3) = 4;
      if ( CurrentIrql != 2 )
        v3 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v3;
    }
  }
  return v3;
}
