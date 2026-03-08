/*
 * XREFs of RIMAllocateAsyncPnpWorkItem @ 0x1C00364E8
 * Callers:
 *     RIMQueueDeviceClassNotifyAsyncWorkItem @ 0x1C0036884 (RIMQueueDeviceClassNotifyAsyncWorkItem.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x1C00895B0 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem @ 0x1C01BC4DC (rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem.c)
 *     rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem @ 0x1C01C8B04 (rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem.c)
 *     rimQueueUpdateInputGlolbalsAsyncWorkItem @ 0x1C01CF14C (rimQueueUpdateInputGlolbalsAsyncWorkItem.c)
 *     RIMQueueDeviceNotifyAsyncWorkItem @ 0x1C01D01A4 (RIMQueueDeviceNotifyAsyncWorkItem.c)
 *     RIMVirtQueueDeviceClassNotifyAsyncWorkItem @ 0x1C01D0EAC (RIMVirtQueueDeviceClassNotifyAsyncWorkItem.c)
 *     RIMVirtQueueRimDevChangeAsyncWorkItem @ 0x1C01D1044 (RIMVirtQueueRimDevChangeAsyncWorkItem.c)
 *     RIMVirtQueueRootPnpEndSyncAsyncWorkItem @ 0x1C01D11C4 (RIMVirtQueueRootPnpEndSyncAsyncWorkItem.c)
 *     rimQueueApiSetHidRawInputAsyncWorkItem @ 0x1C01DA354 (rimQueueApiSetHidRawInputAsyncWorkItem.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

_QWORD *__fastcall RIMAllocateAsyncPnpWorkItem(
        void *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _OWORD *a6,
        _OWORD *a7,
        PCUNICODE_STRING SourceString,
        int a9,
        int a10)
{
  NSInstrumentation::CLeakTrackingAllocator *v10; // rbx
  char v12; // r14
  int v13; // eax
  __int64 Pool2; // rdi
  _QWORD *v15; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v16; // r14
  unsigned __int64 MaximumLength; // rsi
  int v18; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rsi
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  unsigned int v23; // edx
  char v24; // r15
  unsigned __int64 v25; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v26; // rsi
  int v27; // eax
  __int64 v28; // rdi
  _QWORD *v29; // rax
  void *v30; // rdx
  unsigned int v31; // eax
  void *v32; // rcx
  unsigned int v33; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v34; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v36; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v41; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v44; // [rsp+88h] [rbp-80h] BYREF
  unsigned int *v45; // [rsp+90h] [rbp-78h]
  __int64 v46; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v47[2]; // [rsp+A8h] [rbp-60h] BYREF
  PVOID BackTrace[20]; // [rsp+B8h] [rbp-50h] BYREF
  PVOID v49[20]; // [rsp+158h] [rbp+50h] BYREF
  PVOID v50[26]; // [rsp+1F8h] [rbp+F0h] BYREF

  v10 = gpLeakTrackingAllocator;
  v39 = 260LL;
  v12 = 0;
  v34 = 1886417746;
  v13 = *(_DWORD *)gpLeakTrackingAllocator;
  v46 = 136LL;
  if ( !v13 )
  {
    Pool2 = ExAllocatePool2(260LL, 136LL, 1886417746LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v10 + 14);
    goto LABEL_4;
  }
  if ( v13 != 1 )
  {
    if ( v13 == 2 )
    {
      v36 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x70707352u, &v36) )
      {
        v44 = &v39;
        v45 = &v34;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  v10,
                  &v44,
                  &v46);
        goto LABEL_4;
      }
      Pool2 = ExAllocatePool2(260LL, 152LL, 1886417746LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v10 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v10,
                                  Pool2,
                                  v36,
                                  BackTrace) )
          {
            v15 = (_QWORD *)Pool2;
            goto LABEL_5;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v10,
                                     Pool2,
                                     v36,
                                     BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_4;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v10 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70707352u) )
    return 0LL;
  v21 = (_QWORD *)ExAllocatePool2(v39 & 0xFFFFFFFFFFFFFFFDuLL, 152LL, v34);
  Pool2 = (__int64)v21;
  if ( !v21
    || (_InterlockedIncrement64((volatile signed __int64 *)v10 + 14),
        *v21 = 1886417746LL,
        Pool2 = (__int64)(v21 + 2),
        v21 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v10 + 1),
      (const void *)0x70707352);
  }
LABEL_4:
  v15 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return v15;
LABEL_5:
  if ( !SourceString )
    goto LABEL_12;
  v16 = gpLeakTrackingAllocator;
  v40 = 260LL;
  MaximumLength = SourceString->MaximumLength;
  LODWORD(v35) = 1886417746;
  v18 = *(_DWORD *)gpLeakTrackingAllocator;
  v41 = MaximumLength;
  if ( !v18 )
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       (unsigned int)MaximumLength,
                                                                                       1886417746LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v16 + 14);
    goto LABEL_9;
  }
  if ( v18 != 1 )
  {
    if ( v18 != 2 )
      goto LABEL_62;
    v37 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x70707352u, &v37) )
    {
      v47[0] = &v40;
      v47[1] = &v35;
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                         v16,
                                                                                         v47,
                                                                                         &v41);
LABEL_9:
      v12 = 0;
      goto LABEL_10;
    }
    v24 = 0;
    if ( MaximumLength < 0x1000 || (MaximumLength & 0xFFF) != 0 )
    {
      MaximumLength += 16LL;
      v24 = 1;
      v41 = MaximumLength;
    }
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       MaximumLength,
                                                                                       v23);
    if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      goto LABEL_62;
    _InterlockedIncrement64((volatile signed __int64 *)v16 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(v49);
    if ( v24
      && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v16,
                              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                              v37,
                              v49) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_9;
      }
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v16,
                                 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                 v37,
                                 v49) )
    {
      goto LABEL_9;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v16 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    goto LABEL_62;
  }
  if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70707352u)
    && MaximumLength + 16 >= MaximumLength )
  {
    v22 = (_QWORD *)ExAllocatePool2(v40 & 0xFFFFFFFFFFFFFFFDuLL, MaximumLength + 16, (unsigned int)v35);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v22;
    if ( !v22
      || (_InterlockedIncrement64((volatile signed __int64 *)v16 + 14),
          *v22 = 1886417746LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v22 + 2),
          v22 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v16 + 1),
        (const void *)0x70707352);
    }
    goto LABEL_9;
  }
LABEL_62:
  v12 = 0;
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
LABEL_10:
  *(_QWORD *)(Pool2 + 48) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
    return 0LL;
  }
  *(_WORD *)(Pool2 + 42) = SourceString->MaximumLength;
  RtlCopyUnicodeString((PUNICODE_STRING)(Pool2 + 40), SourceString);
LABEL_12:
  if ( a10 == 6 )
  {
    v25 = a2[42];
    v42 = 260LL;
    v26 = gpLeakTrackingAllocator;
    v33 = 1969377874;
    v43 = v25;
    v27 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      v28 = ExAllocatePool2(260LL, v25, 1969377874LL);
      if ( v28 )
        _InterlockedIncrement64((volatile signed __int64 *)v26 + 14);
      goto LABEL_87;
    }
    if ( v27 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x75625252u)
        && v25 + 16 >= v25 )
      {
        v29 = (_QWORD *)ExAllocatePool2(v42 & 0xFFFFFFFFFFFFFFFDuLL, v25 + 16, v33);
        v28 = (__int64)v29;
        if ( !v29
          || (_InterlockedIncrement64((volatile signed __int64 *)v26 + 14),
              *v29 = 1969377874LL,
              v28 = (__int64)(v29 + 2),
              v29 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v26 + 1),
            (const void *)0x75625252);
        }
        goto LABEL_87;
      }
      goto LABEL_86;
    }
    if ( v27 == 2 )
    {
      v38 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x75625252u, &v38) )
      {
        v44 = &v42;
        v45 = &v33;
        v28 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                v26,
                &v44,
                &v43);
LABEL_87:
        v15[15] = v28;
        if ( !v28 )
        {
          v30 = (void *)v15[6];
          if ( v30 )
          {
            NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v30);
            v15[6] = 0LL;
          }
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v15);
          v15 = 0LL;
        }
        v31 = *((_DWORD *)a2 + 84);
        v32 = (void *)v15[15];
        *((_DWORD *)v15 + 29) = v31;
        memmove(v32, *(const void **)(a2[66] + 24LL), v31);
        goto LABEL_13;
      }
      if ( v25 < 0x1000 || (v25 & 0xFFF) != 0 )
      {
        v25 += 16LL;
        v12 = 1;
        v43 = v25;
      }
      v28 = ExAllocatePool2(260LL, v25, 1969377874LL);
      if ( v28 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v26 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(v50);
        if ( v12 && (unsigned __int64)(v28 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v26,
                                  v28,
                                  v38,
                                  v50) )
          {
            v28 += 16LL;
            goto LABEL_87;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v26,
                                     v28,
                                     v38,
                                     v50) )
        {
          goto LABEL_87;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v26 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v28);
      }
    }
LABEL_86:
    v28 = 0LL;
    goto LABEL_87;
  }
LABEL_13:
  v15[1] = v15;
  *v15 = v15;
  if ( ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0) < 0 )
  {
    v33 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 86LL);
  }
  v15[3] = a1;
  if ( a2 )
  {
    if ( ObReferenceObjectByPointer(a2, 3u, ExRawInputManagerObjectType, 0) < 0 )
    {
      v33 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 101LL);
    }
    v15[7] = a2;
  }
  if ( a3 )
    v15[12] = a3;
  if ( a4 )
    v15[13] = a4;
  *((_DWORD *)v15 + 28) = a9;
  *((_DWORD *)v15 + 8) = a5;
  if ( a6 )
    *((_OWORD *)v15 + 4) = *a6;
  if ( a7 )
    *((_OWORD *)v15 + 5) = *a7;
  *((_DWORD *)v15 + 4) = a10;
  *((_DWORD *)v15 + 32) = 0;
  return v15;
}
