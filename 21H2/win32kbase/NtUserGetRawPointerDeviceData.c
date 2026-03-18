/*
 * XREFs of NtUserGetRawPointerDeviceData @ 0x1C015A920
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01CC1B8 (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 */

__int64 __fastcall NtUserGetRawPointerDeviceData(
        int a1,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        volatile void *Address)
{
  __int64 v6; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int PointerRawDataInternal; // edi
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r15
  __int64 v15; // rcx
  PVOID v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 Pool2; // rsi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  char v25; // r12
  CTouchProcessor *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v32; // [rsp+50h] [rbp-108h]
  struct tagTHREADINFO *v33; // [rsp+68h] [rbp-F0h]
  PVOID BackTrace[27]; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int16 v35; // [rsp+160h] [rbp+8h]

  v35 = a1;
  v6 = a3;
  v33 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  PointerRawDataInternal = 0;
  if ( !a1
    || HIWORD(a1)
    || !a2
    || !(_DWORD)v6
    || !a4
    || !Address
    || (v13 = v6 * a2, v32 = v6 * a2, v13 > 0xFFFFFFFF)
    || (v14 = 28LL * (unsigned int)v6, v14 > 0xFFFFFFFF) )
  {
    v15 = 87LL;
    goto LABEL_36;
  }
  if ( (unsigned int)v14 >= 0x2710000 )
  {
LABEL_10:
    v15 = 8LL;
LABEL_36:
    UserSetLastError(v15, v9, v10, v11);
    goto LABEL_37;
  }
  v16 = gpLeakTrackingAllocator;
  v17 = (unsigned int)v14;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x78707355) != 0x78707355
    || (v18 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_15:
    Pool2 = ExAllocatePool2(261LL, (unsigned int)v14);
    goto LABEL_16;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v18) != 2020635477 )
  {
    if ( ++v18 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_15;
  }
  v25 = 0;
  if ( (unsigned int)v14 < 0x1000uLL || (v14 & 0xFFF) != 0 )
  {
    v25 = 1;
    v17 = (unsigned int)v14 + 16LL;
  }
  Pool2 = ExAllocatePool2(261LL, v17);
  if ( !Pool2 )
    goto LABEL_10;
  memset(BackTrace, 0, 0xA0uLL);
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v25 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                            v16,
                            Pool2,
                            BackTrace) )
      goto LABEL_28;
LABEL_30:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    Pool2 = 0LL;
    goto LABEL_28;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                           v16,
                           Pool2,
                           BackTrace) )
    goto LABEL_30;
  Pool2 += 16LL;
LABEL_28:
  LODWORD(v13) = v32;
LABEL_16:
  if ( !Pool2 )
    goto LABEL_10;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v19, v9, v10);
  ProbeForWrite(Address, 4LL * (unsigned int)v13, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( v14 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v23, v22, v24) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a4[v14] > MmUserProbeAddress || &a4[v14] < a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove((void *)Pool2, a4, (unsigned int)v14);
  PointerRawDataInternal = CTouchProcessor::GetPointerRawDataInternal(
                             v26,
                             v33,
                             v35,
                             a2,
                             a3,
                             (const struct tagPOINTER_DEVICE_PROPERTY *)Pool2,
                             v13,
                             (int *)Address);
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (char *)Pool2);
LABEL_37:
  UserSessionSwitchLeaveCrit(v28, v27, v29, v30);
  return PointerRawDataInternal;
}
