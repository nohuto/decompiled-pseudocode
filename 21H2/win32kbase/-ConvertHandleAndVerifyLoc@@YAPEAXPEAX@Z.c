/*
 * XREFs of ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x1C004F23C
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C004EB20 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     GetWindowsDirectoryDevicePath @ 0x1C004F4EC (GetWindowsDirectoryDevicePath.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1C00D61F8 (_wcsnicmp.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

void *__fastcall ConvertHandleAndVerifyLoc(HANDLE Handle)
{
  PVOID v1; // rdi
  PVOID v3; // rsi
  int v4; // eax
  __int64 Pool2; // rbx
  NTSTATUS v6; // eax
  const WCHAR *v7; // rdx
  WCHAR *v8; // rdx
  WCHAR *v9; // rcx
  NTSTATUS v10; // eax
  void *v11; // rdx
  __int64 v13; // rax
  __int16 ProcessMachine; // ax
  struct _UNICODE_STRING Destination; // [rsp+60h] [rbp-A0h] BYREF
  void *FileHandle; // [rsp+70h] [rbp-90h] BYREF
  ULONG ReturnLength; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-38h] BYREF
  PVOID BackTrace[20]; // [rsp+E0h] [rbp-20h] BYREF
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+180h] [rbp+80h] BYREF

  v1 = gpLeakTrackingAllocator;
  FileHandle = 0LL;
  ReturnLength = 0;
  v3 = 0LL;
  v4 = *((_DWORD *)gpLeakTrackingAllocator + 10) & 0x626B7355;
  Destination = 0LL;
  if ( v4 != 1651209045 || (v13 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 520LL);
    goto LABEL_3;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v13) != 1651209045 )
  {
    if ( ++v13 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  Pool2 = ExAllocatePool2(260LL, 536LL);
  if ( !Pool2 )
    goto LABEL_29;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                            v1,
                            Pool2,
                            BackTrace) )
      goto LABEL_3;
    goto LABEL_28;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                           v1,
                           Pool2,
                           BackTrace) )
  {
LABEL_28:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_29:
    Pool2 = 0LL;
    goto LABEL_3;
  }
  Pool2 += 16LL;
LABEL_3:
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  if ( !Pool2 )
    return FileHandle;
  if ( Handle )
  {
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
    v3 = Object;
    if ( v6 >= 0 && ObQueryNameString(Object, &ObjectNameInfo, 0x218u, &ReturnLength) >= 0 )
    {
      Destination.Buffer = (PWSTR)Pool2;
      *(_DWORD *)&Destination.Length = 34078720;
      if ( (int)GetWindowsDirectoryDevicePath(&Destination) >= 0 )
      {
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x100) == 0 )
        {
LABEL_9:
          v7 = L"\\system32\\";
          goto LABEL_10;
        }
        ProcessMachine = PsWow64GetProcessMachine(**((_QWORD **)gptiCurrent + 53));
        if ( ProcessMachine == 332 )
        {
          v7 = L"\\SysWoW64\\";
        }
        else
        {
          if ( ProcessMachine != 452 )
            goto LABEL_9;
          v7 = L"\\SysArm32\\";
        }
LABEL_10:
        RtlAppendUnicodeToString(&Destination, v7);
        if ( !wcsnicmp(ObjectNameInfo.Name.Buffer, Destination.Buffer, (unsigned __int64)Destination.Length >> 1) )
        {
          v8 = &ObjectNameInfo.Name.Buffer[(unsigned __int64)Destination.Length >> 1];
          v9 = &v8[(unsigned int)((ObjectNameInfo.Name.Length - (unsigned __int64)Destination.Length) >> 1)];
          while ( v8 < v9 )
          {
            if ( *v8 == 92 )
              goto LABEL_18;
            ++v8;
          }
          RtlInitUnicodeString(&DestinationString, ObjectNameInfo.Name.Buffer);
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 512;
          ObjectAttributes.ObjectName = &DestinationString;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v10 = ZwCreateFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x24u, 0LL, 0);
          v11 = FileHandle;
          if ( v10 < 0 )
            v11 = 0LL;
          FileHandle = v11;
        }
      }
    }
  }
LABEL_18:
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (void *)Pool2);
  if ( v3 )
    ObfDereferenceObject(v3);
  return FileHandle;
}
