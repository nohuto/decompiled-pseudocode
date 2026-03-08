/*
 * XREFs of ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x1C0085038
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0084F50 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     GetWindowsDirectoryDevicePath @ 0x1C0085844 (GetWindowsDirectoryDevicePath.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1C00DACB8 (_wcsnicmp.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

void *__fastcall ConvertHandleAndVerifyLoc(HANDLE Handle)
{
  NSInstrumentation::CLeakTrackingAllocator *v1; // rdi
  int v2; // eax
  PVOID v4; // rsi
  __int64 Pool2; // rbx
  NTSTATUS v6; // eax
  const WCHAR *v7; // rdx
  WCHAR *v8; // rdx
  WCHAR *v9; // rcx
  NTSTATUS v10; // eax
  void *v11; // rdx
  _QWORD *v13; // rax
  __int64 v14; // r10
  __int16 ProcessMachine; // ax
  unsigned int Destination; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING Destination_8; // [rsp+70h] [rbp-98h] BYREF
  void *FileHandle; // [rsp+80h] [rbp-88h] BYREF
  PVOID Object[2]; // [rsp+88h] [rbp-80h] BYREF
  ULONG ReturnLength; // [rsp+98h] [rbp-70h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v22; // [rsp+A8h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F0h] [rbp-18h] BYREF
  PVOID BackTrace[20]; // [rsp+108h] [rbp+0h] BYREF
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+1A8h] [rbp+A0h] BYREF

  v1 = gpLeakTrackingAllocator;
  FileHandle = 0LL;
  ReturnLength = 0;
  v22 = 520LL;
  v2 = *(_DWORD *)gpLeakTrackingAllocator;
  Destination = 1651209045;
  v21 = 260LL;
  v4 = 0LL;
  Destination_8 = 0LL;
  if ( !v2 )
  {
    Pool2 = ExAllocatePool2(260LL, 520LL, 1651209045LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v1 + 14);
    goto LABEL_4;
  }
  if ( v2 != 1 )
  {
    if ( v2 == 2 )
    {
      Object[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
              gpLeakTrackingAllocator,
              0x626B7355u,
              (unsigned __int64 *)Object) )
      {
        Object[0] = &v21;
        Object[1] = &Destination;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v1,
                  (__int64)Object,
                  &v22);
        goto LABEL_4;
      }
      Pool2 = ExAllocatePool2(v14, 536LL, 1651209045LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v1 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v1,
                                  Pool2,
                                  Object[0],
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_4;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v1,
                                     Pool2,
                                     Object[0],
                                     BackTrace) )
        {
          goto LABEL_4;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v1 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_34:
    Pool2 = 0LL;
    goto LABEL_4;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x626B7355u) )
    goto LABEL_34;
  v13 = (_QWORD *)ExAllocatePool2(v21 & 0xFFFFFFFFFFFFFFFDuLL, 536LL, Destination);
  Pool2 = (__int64)v13;
  if ( !v13
    || (_InterlockedIncrement64((volatile signed __int64 *)v1 + 14),
        *v13 = 1651209045LL,
        Pool2 = (__int64)(v13 + 2),
        v13 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v1 + 1),
      (const void *)0x626B7355);
  }
LABEL_4:
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  if ( !Pool2 )
    return FileHandle;
  if ( Handle )
  {
    Object[0] = 0LL;
    v6 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 1, Object, 0LL);
    v4 = Object[0];
    if ( v6 >= 0 && ObQueryNameString(Object[0], &ObjectNameInfo, 0x218u, &ReturnLength) >= 0 )
    {
      Destination_8.Buffer = (PWSTR)Pool2;
      *(_DWORD *)&Destination_8.Length = 34078720;
      if ( (int)GetWindowsDirectoryDevicePath(&Destination_8) >= 0 )
      {
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x100) == 0 )
        {
LABEL_10:
          v7 = L"\\system32\\";
          goto LABEL_11;
        }
        ProcessMachine = PsWow64GetProcessMachine(**((_QWORD **)gptiCurrent + 53));
        if ( ProcessMachine == 332 )
        {
          v7 = L"\\SysWoW64\\";
        }
        else
        {
          if ( ProcessMachine != 452 )
            goto LABEL_10;
          v7 = L"\\SysArm32\\";
        }
LABEL_11:
        RtlAppendUnicodeToString(&Destination_8, v7);
        if ( !wcsnicmp(ObjectNameInfo.Name.Buffer, Destination_8.Buffer, (unsigned __int64)Destination_8.Length >> 1) )
        {
          v8 = &ObjectNameInfo.Name.Buffer[(unsigned __int64)Destination_8.Length >> 1];
          v9 = &v8[(unsigned int)((ObjectNameInfo.Name.Length - (unsigned __int64)Destination_8.Length) >> 1)];
          while ( v8 < v9 )
          {
            if ( *v8 == 92 )
              goto LABEL_19;
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
LABEL_19:
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
  if ( v4 )
    ObfDereferenceObject(v4);
  return FileHandle;
}
