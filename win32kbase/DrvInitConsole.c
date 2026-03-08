/*
 * XREFs of DrvInitConsole @ 0x1C0010EB8
 * Callers:
 *     InitVideo @ 0x1C0010AAC (InitVideo.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001FAC0 (DrvUpdateGraphicsDeviceList.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 DrvInitConsole()
{
  int v0; // edi
  __int64 v1; // r14
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  void *v4; // rsi
  unsigned int v5; // eax
  unsigned __int64 i; // rdx
  __int64 v7; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v9; // eax
  unsigned int v10; // eax
  NSInstrumentation::CLeakTrackingAllocator *v11; // rdi
  unsigned __int64 v12; // rbx
  int v13; // eax
  __int64 Pool2; // rbx
  unsigned __int64 v15; // rax
  NSInstrumentation::CLeakTrackingAllocator *v16; // rdi
  unsigned __int64 v17; // rbx
  int v18; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *v21; // rax
  char v22; // si
  _QWORD *v23; // rax
  __int64 v24; // r10
  char v25; // si
  unsigned __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v33; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v34; // [rsp+78h] [rbp-88h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  PVOID BackTrace[20]; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v37[26]; // [rsp+150h] [rbp+50h] BYREF
  ULONG ResultLength; // [rsp+230h] [rbp+130h] BYREF
  unsigned int v39; // [rsp+238h] [rbp+138h] BYREF
  unsigned int v40; // [rsp+240h] [rbp+140h] BYREF
  void *KeyHandle; // [rsp+248h] [rbp+148h] BYREF

  DestinationString = 0LL;
  KeyHandle = 0LL;
  v0 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v1 = *(_QWORD *)(SGDGetSessionState() + 24);
  if ( !gProtocolType )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ResultLength = 0;
      RtlInitUnicodeString(&DestinationString, L"SystemStartOptions");
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741789
        && ResultLength >= 0x11 )
      {
        v2 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
               gpLeakTrackingAllocator,
               0x104uLL,
               ResultLength,
               0x706D7447u);
        v3 = v2;
        if ( v2 )
        {
          v4 = v2;
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValuePartialInformation,
                 v2,
                 ResultLength,
                 &ResultLength) >= 0 )
          {
            v5 = v3[2];
            if ( v5 >= 0x12 )
            {
              for ( i = (unsigned __int64)(v3 + 3); i <= (unsigned __int64)v3 + v5 - 6; i += 2LL )
              {
                v7 = *(_QWORD *)i - 0x45005300410042LL;
                if ( *(_QWORD *)i == 0x45005300410042LL )
                {
                  v7 = *(_QWORD *)(i + 8) - 0x45004400490056LL;
                  if ( *(_QWORD *)(i + 8) == 0x45004400490056LL )
                    v7 = *(unsigned __int16 *)(i + 16) - 79LL;
                }
                if ( !v7 )
                {
                  v0 = 1;
                  break;
                }
              }
            }
          }
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
        }
      }
      ZwClose(KeyHandle);
    }
  }
  WdLogSingleEntry0(5LL);
  *(_DWORD *)(*(_QWORD *)(SGDGetSessionState() + 24) + 1232LL) = v0;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  v9 = (*(__int64 (**)(void))(DxgkWin32kInterface + 80))();
  *(_DWORD *)(v1 + 1300) = v9;
  v10 = 8 * v9;
  if ( !v10 )
    goto LABEL_50;
  v11 = gpLeakTrackingAllocator;
  v12 = v10;
  v39 = 1634492743;
  v28 = 260LL;
  v13 = *(_DWORD *)gpLeakTrackingAllocator;
  v29 = v12;
  if ( !v13 )
  {
    Pool2 = ExAllocatePool2(260LL, (unsigned int)v12, 1634492743LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v11 + 14);
    goto LABEL_21;
  }
  if ( v13 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x616C6147u)
      && v12 + 16 >= v12 )
    {
      v21 = (_QWORD *)ExAllocatePool2(v28 & 0xFFFFFFFFFFFFFFFDuLL, v12 + 16, v39);
      Pool2 = (__int64)v21;
      if ( !v21
        || (_InterlockedIncrement64((volatile signed __int64 *)v11 + 14),
            *v21 = 1634492743LL,
            Pool2 = (__int64)(v21 + 2),
            v21 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v11 + 1),
          (const void *)0x616C6147);
      }
      goto LABEL_21;
    }
    goto LABEL_50;
  }
  if ( v13 != 2 )
    goto LABEL_50;
  v26 = 0LL;
  if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x616C6147u, &v26) )
  {
    v22 = 0;
    if ( v12 < 0x1000 || (v12 & 0xFFF) != 0 )
    {
      v12 += 16LL;
      v22 = 1;
      v29 = v12;
    }
    Pool2 = ExAllocatePool2(260LL, v12, 1634492743LL);
    if ( Pool2 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v11 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v22 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v11,
                                Pool2,
                                v26,
                                BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_21;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v11,
                                   Pool2,
                                   v26,
                                   BackTrace) )
      {
        goto LABEL_21;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v11 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    }
LABEL_50:
    Pool2 = 0LL;
    goto LABEL_21;
  }
  v33 = &v28;
  v34 = &v39;
  Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
            v11,
            &v33,
            &v29);
LABEL_21:
  v15 = *(unsigned int *)(v1 + 1300);
  *(_QWORD *)(v1 + 1304) = Pool2;
  if ( !(_DWORD)v15 )
    goto LABEL_28;
  v16 = gpLeakTrackingAllocator;
  v17 = (unsigned int)v15;
  v31 = v15;
  v40 = 1634492743;
  v30 = 260LL;
  v18 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       (unsigned int)v17,
                                                                                       1634492743LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v16 + 14);
    goto LABEL_25;
  }
  if ( v18 != 1 )
  {
    if ( v18 == 2 )
    {
      v27 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x616C6147u, &v27) )
      {
        v33 = &v30;
        v34 = &v40;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           v16,
                                                                                           &v33,
                                                                                           &v31);
        goto LABEL_25;
      }
      v25 = 0;
      if ( v17 < 0x1000 || (v17 & 0xFFF) != 0 )
      {
        v17 += 16LL;
        v25 = 1;
        v31 = v17;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v24,
                                                                                         v17,
                                                                                         1634492743LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v16 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(v37);
        if ( v25
          && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v16,
                                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                  v27,
                                  v37) )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
            goto LABEL_25;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v16,
                                     UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                     v27,
                                     v37) )
        {
          goto LABEL_25;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v16 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      }
    }
    goto LABEL_28;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x616C6147u)
    || v17 + 16 < v17 )
  {
LABEL_28:
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
    goto LABEL_25;
  }
  v23 = (_QWORD *)ExAllocatePool2(v30 & 0xFFFFFFFFFFFFFFFDuLL, v17 + 16, v40);
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v23;
  if ( !v23
    || (_InterlockedIncrement64((volatile signed __int64 *)v16 + 14),
        *v23 = 1634492743LL,
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v23 + 2),
        v23 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v16 + 1),
      (const void *)0x616C6147);
  }
LABEL_25:
  *(_QWORD *)(v1 + 1312) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  if ( !*(_QWORD *)(v1 + 1304) || !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    return 3221225495LL;
  DrvUpdateGraphicsDeviceList(1LL);
  return 0LL;
}
