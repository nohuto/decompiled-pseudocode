/*
 * XREFs of ?GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0085A24
 * Callers:
 *     GetWindowsDirectoryDevicePath @ 0x1C0085844 (GetWindowsDirectoryDevicePath.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall GetSymbolicLink(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  int v3; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  NTSTATUS v7; // edi
  _QWORD *Pool2; // rax
  __int64 v10; // r10
  void *LinkHandle; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING LinkTarget; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationStringa; // [rsp+60h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  PVOID BackTrace[26]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v19; // [rsp+190h] [rbp+90h] BYREF
  unsigned __int64 v20; // [rsp+198h] [rbp+98h] BYREF

  v2 = gpLeakTrackingAllocator;
  LinkHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v3 = *(_DWORD *)gpLeakTrackingAllocator;
  v19 = 1651209045;
  v12 = 260LL;
  v14 = 520LL;
  DestinationStringa = 0LL;
  LinkTarget = 0LL;
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      if ( v3 != 2 )
        return 3221225495LL;
      v20 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x626B7355u, &v20) )
      {
        v15[0] = &v12;
        v15[1] = &v19;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v2,
                                                                                           (__int64)v15,
                                                                                           &v14);
        goto LABEL_4;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v10,
                                                                                         536LL,
                                                                                         1651209045LL);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        return 3221225495LL;
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 >= 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                v2,
                                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                v20,
                                BackTrace) )
          goto LABEL_5;
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                   v2,
                                   UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                   v20,
                                   BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_4;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      return 3221225495LL;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x626B7355u) )
      return 3221225495LL;
    Pool2 = (_QWORD *)ExAllocatePool2(v12 & 0xFFFFFFFFFFFFFFFDuLL, 536LL, v19);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v2 + 14),
          *Pool2 = 1651209045LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v2 + 1),
        (const void *)0x626B7355);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       520LL,
                                                                                       1651209045LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
  }
LABEL_4:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    return 3221225495LL;
LABEL_5:
  RtlInitUnicodeString(&DestinationStringa, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationStringa;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenSymbolicLinkObject(&LinkHandle, 0x80000000, &ObjectAttributes);
  if ( v7 >= 0 )
  {
    LinkTarget.Buffer = (PWSTR)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    *(_DWORD *)&LinkTarget.Length = 34078720;
    v7 = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
    ZwClose(LinkHandle);
    if ( v7 >= 0 )
      RtlCopyUnicodeString(DestinationString, &LinkTarget);
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(
    gpLeakTrackingAllocator,
    (void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
  return (unsigned int)v7;
}
