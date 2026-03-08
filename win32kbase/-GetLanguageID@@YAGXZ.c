/*
 * XREFs of ?GetLanguageID@@YAGXZ @ 0x1C009F890
 * Callers:
 *     InitializeGreCSRSS @ 0x1C009F4FC (InitializeGreCSRSS.c)
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

__int64 GetLanguageID(void)
{
  unsigned __int16 v0; // si
  NSInstrumentation::CLeakTrackingAllocator *v1; // rdi
  int v2; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *Pool2; // rax
  __int64 v6; // r10
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v9; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v10[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BackTrace[24]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v13; // [rsp+160h] [rbp+60h] BYREF
  ULONG Length; // [rsp+168h] [rbp+68h] BYREF
  unsigned __int64 Value; // [rsp+170h] [rbp+70h] BYREF
  void *KeyHandle; // [rsp+178h] [rbp+78h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  v0 = 1033;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Language");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    v1 = gpLeakTrackingAllocator;
    Length = 544;
    v13 = 1684630599;
    v8 = 260LL;
    v2 = *(_DWORD *)gpLeakTrackingAllocator;
    v9 = 544LL;
    if ( v2 )
    {
      if ( v2 != 1 )
      {
        if ( v2 != 2 )
          goto LABEL_9;
        Value = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x64696C47u, &Value) )
        {
          v10[0] = &v8;
          v10[1] = &v13;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             (__int64)v1,
                                                                                             (__int64)v10,
                                                                                             &v9);
          goto LABEL_5;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           v6,
                                                                                           560LL,
                                                                                           1684630599LL);
        if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          goto LABEL_9;
        _InterlockedIncrement64((volatile signed __int64 *)v1 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v1,
                                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                  Value,
                                  BackTrace) )
            goto LABEL_6;
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v1,
                                     UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                     Value,
                                     BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_5;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v1 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        goto LABEL_9;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x64696C47u) )
        goto LABEL_9;
      Pool2 = (_QWORD *)ExAllocatePool2(v8 & 0xFFFFFFFFFFFFFFFDuLL, 560LL, v13);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)v1 + 14),
            *Pool2 = 1684630599LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v1 + 1),
          (const void *)0x64696C47);
      }
    }
    else
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         544LL,
                                                                                         1684630599LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        _InterlockedIncrement64((volatile signed __int64 *)v1 + 14);
    }
LABEL_5:
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    {
LABEL_6:
      RtlInitUnicodeString(&DestinationString, L"Default");
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             (PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
             Length,
             &Length) >= 0 )
      {
        LODWORD(Value) = 0;
        RtlInitUnicodeString(
          &DestinationString,
          (PCWSTR)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 12));
        RtlUnicodeStringToInteger(&DestinationString, 0x10u, (PULONG)&Value);
        v0 = Value;
      }
      NSInstrumentation::CLeakTrackingAllocator::Free(
        gpLeakTrackingAllocator,
        (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    }
LABEL_9:
    ZwClose(KeyHandle);
  }
  return v0;
}
