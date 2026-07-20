/*
 * XREFs of SmpInit @ 0x140006E54
 * Callers:
 *     wmain @ 0x140001850 (wmain.c)
 * Callees:
 *     SmpInitializeKnownSubSystems @ 0x140005A50 (SmpInitializeKnownSubSystems.c)
 *     SmpCreateSecurityDescriptors @ 0x140005B50 (SmpCreateSecurityDescriptors.c)
 *     SmpInitializePendingRename @ 0x140006BA4 (SmpInitializePendingRename.c)
 *     SmpLoadDataFromRegistry @ 0x140009604 (SmpLoadDataFromRegistry.c)
 *     InitializeWow64OnBoot @ 0x14000BC80 (InitializeWow64OnBoot.c)
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 *     memset_0 @ 0x140011B7F (memset_0.c)
 */

int SmpInit()
{
  int result; // eax
  NTSTATUS v1; // eax
  int v2; // ecx
  void *v3; // rcx
  _BYTE *Heap; // rax
  _BYTE *v5; // rbx
  NTSTATUS v6; // edi
  void *v7; // rcx
  unsigned int v8; // ecx
  ULONG i; // ebx
  NTSTATUS v10; // eax
  void *v11; // rcx
  int v12; // edi
  int DataFromRegistry; // ebx
  int v14; // eax
  ULONG ReturnLength[2]; // [rsp+28h] [rbp-E0h] BYREF
  void *EventHandle; // [rsp+30h] [rbp-D8h] BYREF
  int ProcessInformation; // [rsp+38h] [rbp-D0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v19[2]; // [rsp+70h] [rbp-98h] BYREF
  int v20; // [rsp+80h] [rbp-88h] BYREF
  const wchar_t *v21; // [rsp+88h] [rbp-80h]
  _DWORD SystemInformation[260]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v23[4]; // [rsp+4A8h] [rbp+3A0h] BYREF
  __int64 v24; // [rsp+4B8h] [rbp+3B0h]
  __int64 v25; // [rsp+4C8h] [rbp+3C0h]

  LODWORD(v19[0]) = 1441812;
  v19[1] = L"\\SmApiPort";
  v20 = 4456514;
  v21 = L"\\Device\\VolumesSafeForWriteAccess";
  ReturnLength[0] = 0;
  SmpInitSaveGlobals = (__int64)&SmpInitLastCall;
  SmBaseTag = RtlCreateTagHeap(
                *(HANDLE *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                0,
                (PWSTR)L"SMSS!",
                (PWSTR)L"INIT");
  result = NtQuerySystemInformation(SystemBasicInformation, &SmpSystemInfo, 0x40u, 0LL);
  if ( result >= 0 )
  {
    v1 = NtQuerySystemInformation(SystemSessionPoolTagInformation|0x80, &SmpSystemWriteConstraintInfo, 8u, 0LL);
    v2 = SmpSystemWriteConstraintInfo;
    ProcessInformation = 1;
    if ( v1 < 0 )
      v2 = 0;
    SmpSystemWriteConstraintInfo = v2;
    NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDefaultHardErrorMode, &ProcessInformation, 4u);
    result = SmpInitializeKnownSubSystems();
    if ( result < 0 )
    {
      SmpInitProgressByLine = 1723;
      v3 = SmpInitializeKnownSubSystems;
LABEL_6:
      SmpInitReturnStatus = result;
      SmpInitLastCall = (__int64)v3;
      return result;
    }
    SmpManufacturingMode = 0;
    result = NtQuerySystemInformation(SystemSummaryMemoryInformation|0x80, 0LL, 0, ReturnLength);
    if ( result >= 0 )
    {
      return -1073741823;
    }
    else if ( result == -1073741820 )
    {
      Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, ReturnLength[0]);
      v5 = Heap;
      if ( Heap )
      {
        v6 = NtQuerySystemInformation(SystemSummaryMemoryInformation|0x80, Heap, ReturnLength[0], ReturnLength);
        v7 = *(void **)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL);
        if ( v6 >= 0 )
        {
          SmpManufacturingMode = *v5 & 1;
          RtlFreeHeap(v7, 0, v5);
          result = SmpCreateSecurityDescriptors(1);
          if ( result < 0 )
          {
            SmpInitProgressByLine = 1787;
            v3 = SmpCreateSecurityDescriptors;
            goto LABEL_6;
          }
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)v19;
          ObjectAttributes.Attributes = 0;
          ObjectAttributes.SecurityDescriptor = SmpApiPortSecurityDescriptor;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          memset_0(v23, 0, 0x48uLL);
          v23[0] = 0x20000;
          v24 = 328LL;
          v25 = 1000000LL;
          result = NtAlpcCreatePort(&SmpApiConnectionPort, &ObjectAttributes, v23);
          if ( result < 0 )
          {
            v3 = NtAlpcCreatePort;
            SmpInitProgressByLine = 1810;
            goto LABEL_6;
          }
          SmpUniqueProcessId = LODWORD(KeGetPcr()->NtTib.Self[1].StackBase);
          SmpActiveProcessorCount = MEMORY[0x7FFE03C0];
          result = NtQuerySystemInformation(SystemNumaProcessorMap, SystemInformation, 0x408u, 0LL);
          if ( result < 0 )
          {
            v3 = NtQuerySystemInformation;
            SmpInitProgressByLine = 1828;
            goto LABEL_6;
          }
          SmpMaximumNodeCount = SystemInformation[0] + 1;
          RtlInitializeBitMap(&SmpNodeBitmap, &SmpNodeBitmapBuffer, SystemInformation[0] + 1);
          RtlClearAllBits(&SmpNodeBitmap);
          v8 = SmpMaximumNodeCount;
          for ( i = 0; i < v8; ++i )
          {
            if ( *(_QWORD *)&SystemInformation[4 * i + 2] )
            {
              RtlSetBits(&SmpNodeBitmap, i, 1u);
              v8 = SmpMaximumNodeCount;
            }
          }
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&v20;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v10 = NtOpenEvent(&EventHandle, 0x1F0003u, &ObjectAttributes);
          v11 = EventHandle;
          v12 = v10;
          if ( v10 < 0 )
            v11 = 0LL;
          EventHandle = v11;
          result = SmpInitializePendingRename();
          if ( result >= 0 )
          {
            DataFromRegistry = SmpLoadDataFromRegistry(EventHandle);
            if ( v12 >= 0 )
              NtClose(EventHandle);
            if ( DataFromRegistry >= 0 )
            {
              v14 = InitializeWow64OnBoot();
              DataFromRegistry = v14;
              if ( v14 < 0 )
              {
                SmpInitProgressByLine = 1915;
                SmpInitReturnStatus = v14;
                SmpInitLastCall = (__int64)InitializeWow64OnBoot;
              }
            }
            return DataFromRegistry;
          }
        }
        else
        {
          RtlFreeHeap(v7, 0, v5);
          return v6;
        }
      }
      else
      {
        return -1073741670;
      }
    }
  }
  return result;
}
