/*
 * XREFs of NtRIMQueryDevicePath @ 0x1C01A2530
 * Callers:
 *     <none>
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall NtRIMQueryDevicePath(ULONG64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int *v5; // rdx
  __int64 v6; // rcx
  WCHAR *v7; // rax
  unsigned __int64 v8; // rbx
  ULONG64 v9; // rdx
  NTSTATUS v10; // ebx
  NSInstrumentation::CLeakTrackingAllocator *v11; // rsi
  int v12; // edx
  __int64 Pool2; // rbx
  _QWORD *v14; // rax
  __int64 v15; // r10
  char v16; // r14
  PWSTR Buffer; // rdx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 **v27; // r15
  __int64 *i; // rsi
  int v29; // eax
  __int64 v30; // rax
  __int64 v32; // [rsp+50h] [rbp-148h] BYREF
  unsigned __int64 v33; // [rsp+58h] [rbp-140h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-138h] BYREF
  unsigned __int64 v35; // [rsp+70h] [rbp-128h] BYREF
  void *Handle; // [rsp+78h] [rbp-120h] BYREF
  _QWORD *v37; // [rsp+80h] [rbp-118h]
  UNICODE_STRING SourceString; // [rsp+88h] [rbp-110h] BYREF
  _QWORD v39[4]; // [rsp+A0h] [rbp-F8h] BYREF
  PVOID BackTrace[27]; // [rsp+C0h] [rbp-D8h] BYREF
  unsigned int v41; // [rsp+1B0h] [rbp+18h] BYREF
  int v42; // [rsp+1B8h] [rbp+20h]

  v5 = (unsigned int *)a1;
  Handle = 0LL;
  DestinationString = 0LL;
  SourceString = 0LL;
  if ( a1 >= MmUserProbeAddress )
    v5 = (unsigned int *)MmUserProbeAddress;
  v6 = *v5;
  v42 = v6;
  *(_DWORD *)&SourceString.Length = v6;
  v7 = (WCHAR *)*((_QWORD *)v5 + 1);
  SourceString.Buffer = v7;
  if ( ((unsigned __int8)v7 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = (unsigned __int16)v6;
  v9 = (ULONG64)v7 + (unsigned __int16)v6 + 2;
  if ( v9 <= (unsigned __int64)v7 || v9 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v6 > HIWORD(v42) )
  {
    if ( (v6 & 1) == 0 )
      goto LABEL_42;
    goto LABEL_41;
  }
  if ( (v6 & 1) != 0 )
  {
LABEL_41:
    v42 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5981);
LABEL_42:
    ExRaiseAccessViolation();
  }
  if ( (unsigned __int16)v6 >= 6u )
  {
    DestinationString.MaximumLength = v6;
    DestinationString.Length = v6;
    v41 = 1886221394;
    v32 = 260LL;
    v11 = gpLeakTrackingAllocator;
    v39[2] = &v32;
    v39[3] = &v41;
    v35 = (unsigned __int16)v6;
    v12 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(260LL, (unsigned __int16)v6, 1886221394LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 14);
      goto LABEL_37;
    }
    if ( v12 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7452u)
        && v8 + 16 >= v8 )
      {
        v14 = (_QWORD *)ExAllocatePool2(v32 & 0xFFFFFFFFFFFFFFFDuLL, v8 + 16, v41);
        Pool2 = (__int64)v14;
        if ( v14 )
          _InterlockedIncrement64((volatile signed __int64 *)v11 + 14);
        v37 = v14;
        if ( !v14 || (*v14 = 1886221394LL, Pool2 = (__int64)(v14 + 2), v37 = v14 + 2, v14 == (_QWORD *)-16LL) )
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v11 + 1),
            0x706D7452uLL);
        goto LABEL_37;
      }
    }
    else if ( v12 == 2 )
    {
      v33 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886221394, &v33) )
      {
        v39[0] = &v32;
        v39[1] = &v41;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v11,
                  (__int64)v39,
                  &v35);
        goto LABEL_37;
      }
      v16 = 0;
      if ( v8 < 0x1000 || (v8 & 0xFFF) != 0 )
      {
        v16 = 1;
        v8 += 16LL;
        v35 = v8;
      }
      Pool2 = ExAllocatePool2(v15, v8, 1886221394LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v16 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v11,
                 (const void *)Pool2,
                 v33,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_37;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v11,
                    Pool2,
                    v33,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_37;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    Pool2 = 0LL;
LABEL_37:
    DestinationString.Buffer = (PWSTR)Pool2;
    if ( Pool2 )
    {
      RtlCopyUnicodeString(&DestinationString, &SourceString);
      v10 = 0;
    }
    else
    {
      v10 = -1073741670;
    }
    goto LABEL_44;
  }
  v10 = -1073741811;
LABEL_44:
  if ( v10 >= 0 )
  {
    Buffer = DestinationString.Buffer;
    if ( *DestinationString.Buffer == 92 && DestinationString.Buffer[1] == 92 && DestinationString.Buffer[2] == 63 )
      DestinationString.Buffer[1] = 63;
    else
      v10 = -1073741811;
    if ( v10 >= 0 )
    {
      v18 = SGDGetUserSessionState(v6, Buffer, a3, a4) + 240;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v18, 0LL);
      v10 = -1073741275;
      v27 = (__int64 **)(SGDGetUserSessionState(v20, v19, v21, v22) + 320);
      for ( i = *v27; i != (__int64 *)v27; i = (__int64 *)*i )
      {
        v29 = *((_DWORD *)i + 60);
        if ( (v29 & 0x400) == 0
          && ((v29 & 0x2000) == 0 || (i[32] & 4) == 0)
          && RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)(i + 33), 0) )
        {
          v10 = ObOpenObjectByPointer(i - 2, 0, 0LL, 1u, ExRawInputManagerObjectType, 0, &Handle);
          break;
        }
      }
      v30 = SGDGetUserSessionState(v24, v23, v25, v26);
      ExReleasePushLockSharedEx(v30 + 240, 0LL);
      KeLeaveCriticalRegion();
      if ( v10 >= 0 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_QWORD *)MmUserProbeAddress;
        *a2 = Handle;
      }
    }
  }
  if ( DestinationString.Buffer )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)DestinationString.Buffer);
  return (unsigned int)v10;
}
