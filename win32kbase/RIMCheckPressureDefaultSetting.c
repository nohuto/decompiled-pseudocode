/*
 * XREFs of RIMCheckPressureDefaultSetting @ 0x1C00346BC
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C00356F0 (RIMRegisterForInputWithCallbacks.c)
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

int __fastcall RIMCheckPressureDefaultSetting(__int64 a1)
{
  int result; // eax
  NSInstrumentation::CLeakTrackingAllocator *v3; // rdi
  unsigned __int64 v4; // rbx
  int v5; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *Pool2; // rax
  __int64 v8; // r10
  char v9; // si
  __int64 v10; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v14[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  PVOID BackTrace[26]; // [rsp+A0h] [rbp-60h] BYREF
  ULONG ResultLength; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v18; // [rsp+188h] [rbp+88h] BYREF
  void *KeyHandle; // [rsp+190h] [rbp+90h] BYREF
  unsigned __int64 v20; // [rsp+198h] [rbp+98h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_BYTE *)(a1 + 1041) = 1;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\DefaultPressure");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"Disable");
    ResultLength = 0;
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741772
      || !ResultLength )
    {
      return ZwClose(KeyHandle);
    }
    v3 = gpLeakTrackingAllocator;
    v4 = ResultLength;
    v11 = ResultLength;
    v18 = 1668313938;
    v10 = 260LL;
    v5 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( *(_DWORD *)gpLeakTrackingAllocator )
    {
      if ( v5 != 1 )
      {
        if ( v5 == 2 )
        {
          v20 = 0LL;
          if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x63707352u, &v20) )
          {
            v14[0] = &v10;
            v14[1] = &v18;
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                               v3,
                                                                                               v14,
                                                                                               &v11);
            goto LABEL_24;
          }
          v9 = 0;
          if ( v4 < 0x1000 || (v4 & 0xFFF) != 0 )
          {
            v4 += 16LL;
            v9 = 1;
            v11 = v4;
          }
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                             v8,
                                                                                             v4,
                                                                                             1668313938LL);
          if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
            return ZwClose(KeyHandle);
          _InterlockedIncrement64((volatile signed __int64 *)v3 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( v9
            && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
             + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v3,
                                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                    v20,
                                    BackTrace) )
            {
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
              goto LABEL_24;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v3,
                                       UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                       v20,
                                       BackTrace) )
          {
            goto LABEL_27;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v3 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        }
        return ZwClose(KeyHandle);
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x63707352u)
        || v4 + 16 < v4 )
      {
        return ZwClose(KeyHandle);
      }
      Pool2 = (_QWORD *)ExAllocatePool2(v10 & 0xFFFFFFFFFFFFFFFDuLL, v4 + 16, v18);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)v3 + 14),
            *Pool2 = 1668313938LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v3 + 1),
          (const void *)0x63707352);
      }
    }
    else
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         ResultLength,
                                                                                         1668313938LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        _InterlockedIncrement64((volatile signed __int64 *)v3 + 14);
    }
LABEL_24:
    if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      return ZwClose(KeyHandle);
LABEL_27:
    if ( ZwQueryValueKey(
           KeyHandle,
           &ValueName,
           KeyValuePartialInformation,
           (PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
           ResultLength,
           &ResultLength) >= 0
      && *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 4) == 4
      && *(_BYTE *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 12) == 1 )
    {
      *(_BYTE *)(a1 + 1041) = 0;
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(
      gpLeakTrackingAllocator,
      (void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    return ZwClose(KeyHandle);
  }
  return result;
}
