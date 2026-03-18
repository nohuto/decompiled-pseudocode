/*
 * XREFs of RIMIDECreateHIDDesc @ 0x1C019B10C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0056014 (RIMCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C0034434 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     rimCheckForExplicitRimConflictInProcess @ 0x1C00563E0 (rimCheckForExplicitRimConflictInProcess.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C0056498 (rimIsExplicitRimUsagesMatchingUsages.c)
 *     IsProcessHidRawInputSupported @ 0x1C005670C (IsProcessHidRawInputSupported.c)
 *     RIMIDEFreeInjectedInfo @ 0x1C00B7A2C (RIMIDEFreeInjectedInfo.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMFreeHidDesc @ 0x1C018B428 (RIMFreeHidDesc.c)
 *     RIMIsInteractiveCtrl @ 0x1C018C204 (RIMIsInteractiveCtrl.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDq @ 0x1C018E4F0 (WPP_RECORDER_AND_TRACE_SF_DDq.c)
 *     RIMFreePointerDevice @ 0x1C0191E14 (RIMFreePointerDevice.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0199C38 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C019A000 (RIMSearchHidTLCInfo.c)
 *     RIMIDEAllocateInjectedInfo @ 0x1C019AC4C (RIMIDEAllocateInjectedInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C019B9FC (RIMIDECreatePointerDeviceInfo.c)
 */

_WORD *__fastcall RIMIDECreateHIDDesc(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int128 v3; // xmm1
  __int64 v5; // rsi
  __int128 v6; // xmm0
  _WORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r12d
  size_t v11; // r13
  PVOID v12; // rdi
  __int64 v13; // rax
  __int64 Pool2; // rsi
  __int128 v15; // xmm0
  _DWORD *v16; // r15
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdi
  char v20; // r13
  PVOID v21; // r15
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdi
  int v25; // edx
  int v26; // r8d
  __int64 v27; // r15
  char v28; // r13
  int v29; // kr00_4
  __int64 v30; // rdi
  __int64 v31; // r9
  USAGE Usage; // dx
  unsigned int v33; // eax
  int v34; // eax
  USAGE v35; // r8
  int v36; // ecx
  USAGE UsagePage; // dx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v42; // rdx
  unsigned __int16 v43; // [rsp+60h] [rbp-A0h]
  _WORD *v44; // [rsp+68h] [rbp-98h]
  size_t v46; // [rsp+78h] [rbp-88h]
  __m128i v48; // [rsp+88h] [rbp-78h]
  struct _HIDP_CAPS v49; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v50; // [rsp+E0h] [rbp-20h]
  void *Src; // [rsp+110h] [rbp+10h]
  PVOID BackTrace[20]; // [rsp+120h] [rbp+20h] BYREF
  PVOID v53[20]; // [rsp+1C0h] [rbp+C0h] BYREF
  PVOID v54[20]; // [rsp+260h] [rbp+160h] BYREF
  struct _HIDP_CAPS v55; // [rsp+300h] [rbp+200h] BYREF
  struct _HIDP_DEVICE_DESC v56; // [rsp+340h] [rbp+240h] BYREF

  v3 = a3[3];
  v5 = a1;
  *(_OWORD *)&v56.CollectionDesc = a3[1];
  v6 = a3[2];
  v7 = 0LL;
  *(_OWORD *)&v56.Dbg.ErrorCode = v3;
  *(_OWORD *)&v56.ReportIDs = v6;
  *(_OWORD *)&v56.Dbg.Args[3] = a3[4];
  memset(&v55, 0, sizeof(v55));
  v10 = 0;
  v50 = *(_OWORD *)&v56.CollectionDesc->UsagePage;
  v48 = *(__m128i *)&v56.CollectionDesc->Reserved[11];
  Src = v56.CollectionDesc->PreparsedData;
  if ( !gpfnHidP_GetCaps
    || gpfnHidP_GetCaps((struct _HIDP_PREPARSED_DATA *)Src, &v55) < 0
    || !v55.InputReportByteLength
    || (LOWORD(v11) = _mm_extract_epi16(v48, 5), (v43 = v11) == 0) )
  {
    v10 = 1;
    goto LABEL_102;
  }
  v12 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x44687352) == 0x44687352
    && (v13 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v13) != 1147695954 )
    {
      if ( ++v13 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_9;
    }
    Pool2 = ExAllocatePool2(260LL, 136LL);
    if ( !Pool2 )
      goto LABEL_13;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
             (__int64)v12,
             Pool2,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        v44 = (_WORD *)Pool2;
        goto LABEL_17;
      }
LABEL_26:
      ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_13:
      v7 = 0LL;
      goto LABEL_11;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v12,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_26;
    Pool2 += 16LL;
  }
  else
  {
LABEL_9:
    Pool2 = ExAllocatePool2(260LL, 120LL);
  }
  v44 = (_WORD *)Pool2;
  v7 = (_WORD *)Pool2;
  if ( Pool2 )
  {
LABEL_17:
    v15 = *(_OWORD *)&v55.Usage;
    v16 = gpLeakTrackingAllocator;
    *(_QWORD *)(a2 + 456) = Pool2;
    *(_OWORD *)(Pool2 + 40) = v15;
    *(_OWORD *)(Pool2 + 56) = *(_OWORD *)&v55.Reserved[3];
    *(_OWORD *)(Pool2 + 72) = *(_OWORD *)&v55.Reserved[11];
    *(_OWORD *)(Pool2 + 88) = *(_OWORD *)&v55.NumberInputValueCaps;
    v17 = *(unsigned __int16 *)(Pool2 + 44);
    if ( (v16[10] & 0x6A6E6952) != 0x6A6E6952 || (v18 = 0LL, !v16[11]) )
    {
LABEL_21:
      v19 = ExAllocatePool2(260LL, v17);
      goto LABEL_22;
    }
    while ( v16[v18] != 1785620818 )
    {
      if ( ++v18 >= (unsigned __int64)(unsigned int)v16[11] )
        goto LABEL_21;
    }
    v20 = 0;
    if ( v17 < 0x1000 || (v17 & 0xFFF) != 0 )
    {
      v20 = 1;
      v17 += 16LL;
    }
    v19 = ExAllocatePool2(260LL, v17);
    if ( v19 )
    {
      memset(v53, 0, sizeof(v53));
      RtlCaptureStackBackTrace(0, 0x14u, v53, 0LL);
      if ( v20 && (unsigned __int64)(v19 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v16,
               (const void *)v19,
               (struct NSInstrumentation::CBackTrace *)v53) )
        {
          v19 += 16LL;
          goto LABEL_32;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v16,
                  v19,
                  (struct NSInstrumentation::CBackTrace *)v53) )
      {
        goto LABEL_32;
      }
      ExFreePoolWithTag((PVOID)v19, 0);
    }
    v19 = 0LL;
LABEL_32:
    LOWORD(v11) = v43;
LABEL_22:
    *(_QWORD *)(Pool2 + 24) = v19;
    if ( !v19 )
    {
LABEL_23:
      v10 = 1;
LABEL_100:
      v7 = v44;
      goto LABEL_101;
    }
    v21 = gpLeakTrackingAllocator;
    v11 = (unsigned __int16)v11;
    v46 = v11;
    v22 = (unsigned __int16)v11;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6A6E6952) != 0x6A6E6952
      || (v23 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_43:
      v24 = ExAllocatePool2(260LL, (unsigned __int16)v11);
      goto LABEL_44;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v23) != 1785620818 )
    {
      if ( ++v23 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_43;
    }
    v28 = 0;
    if ( v22 < 0x1000 || (v22 & 0xFFF) != 0 )
    {
      v28 = 1;
      v22 += 16LL;
    }
    v24 = ExAllocatePool2(260LL, v22);
    if ( v24 )
    {
      memset(v54, 0, sizeof(v54));
      RtlCaptureStackBackTrace(0, 0x14u, v54, 0LL);
      if ( v28 && (unsigned __int64)(v24 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v21,
               (const void *)v24,
               (struct NSInstrumentation::CBackTrace *)v54) )
        {
          v24 += 16LL;
          goto LABEL_58;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v21,
                  v24,
                  (struct NSInstrumentation::CBackTrace *)v54) )
      {
        goto LABEL_58;
      }
      ExFreePoolWithTag((PVOID)v24, 0);
    }
    v24 = 0LL;
LABEL_58:
    v11 = v46;
LABEL_44:
    *(_QWORD *)(Pool2 + 16) = v24;
    if ( !v24 )
      goto LABEL_23;
    memmove((void *)v24, Src, v11);
    *(_DWORD *)(Pool2 + 104) = v43;
    *(_DWORD *)(Pool2 + 108) = 0;
    *(_DWORD *)(Pool2 + 112) = 0x10000;
    v27 = (__int64)RIMSearchHidTLCInfo(v55.UsagePage, v55.Usage);
    if ( v27 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v25) = 0;
      }
      if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_DDq(WPP_GLOBAL_Control->AttachedDevice, v25, v26, (_DWORD)WPP_GLOBAL_Control);
      }
    }
    else
    {
      v27 = RIMAllocateAndLinkHidTLCInfo(v55.UsagePage, v55.Usage);
      if ( !v27 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v8) = 0;
        }
        if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v8,
            v9,
            (_DWORD)gRimLog,
            3,
            1,
            13,
            (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
            a1);
        }
        v10 = 1;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v8) = 0;
      }
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qDD(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v9,
          (_DWORD)gRimLog,
          4,
          1,
          14,
          (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
          v27,
          v55.UsagePage,
          v55.Usage);
      if ( v10 )
        goto LABEL_100;
    }
    ++*(_DWORD *)(v27 + 20);
    v29 = *(_DWORD *)&v55.Usage;
    *(_QWORD *)(a2 + 464) = v27;
    if ( HIWORD(v29) == 13 && ((unsigned __int16)(v29 - 1) <= 1u || (unsigned __int16)(v29 - 4) <= 1u) )
    {
      v30 = (__int64)a3;
      v31 = Pool2;
      v5 = a1;
      *(_OWORD *)&v49.Usage = v50;
      *(_QWORD *)&v49.Reserved[11] = Src;
      *(__m128i *)&v49.Reserved[3] = v48;
      if ( !(unsigned int)RIMIDECreatePointerDeviceInfo(a1, a2, a3, v31, &v49) )
        goto LABEL_96;
      Usage = v55.Usage;
    }
    else
    {
      v49 = v55;
      v5 = a1;
      v30 = (__int64)a3;
      if ( (unsigned int)RIMIsInteractiveCtrl(&v49) )
        *(_DWORD *)(a2 + 200) |= 0x100u;
    }
    if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages(v5, v55.UsagePage, Usage) )
    {
      v33 = *(_DWORD *)(a2 + 184) & 0xFFFCFFFF | 0x10000;
      *(_DWORD *)(a2 + 200) |= 0x40u;
      *(_DWORD *)(a2 + 184) = v33;
    }
    else if ( *(_DWORD *)(v5 + 1088) )
    {
      v34 = IsProcessHidRawInputSupported();
      v35 = v55.Usage;
      v36 = 0;
      if ( v34 >= 0 )
        v36 = 0x20000;
      UsagePage = v55.UsagePage;
      *(_DWORD *)(a2 + 184) = v36 | *(_DWORD *)(a2 + 184) & 0xFFFDFFFF;
      if ( (unsigned int)rimCheckForExplicitRimConflictInProcess(*(struct _LIST_ENTRY **)(v5 + 32), UsagePage, v35) )
        goto LABEL_96;
    }
    v38 = RIMIDEAllocateInjectedInfo(v30);
    *(_QWORD *)(a2 + 384) = v38;
    if ( v38 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v39);
      *(_DWORD *)(CurrentProcessWin32Process + 820) |= 0x200000u;
      *(_QWORD *)(*(_QWORD *)(a2 + 384) + 88LL) = CurrentProcessWin32Process;
      goto LABEL_97;
    }
LABEL_96:
    v10 = 1;
LABEL_97:
    v7 = v44;
    goto LABEL_102;
  }
LABEL_11:
  v10 = 1;
LABEL_101:
  v5 = a1;
LABEL_102:
  if ( gpfnHidP_FreeCollectionDescription )
    gpfnHidP_FreeCollectionDescription(&v56);
  v56.CollectionDesc = 0LL;
  if ( !v10 )
    return v7;
  if ( v7 )
    RIMFreeHidDesc(v7, v8, v9);
  v42 = *(_QWORD *)(a2 + 472);
  if ( v42 )
  {
    RIMFreePointerDevice(v5, v42);
    *(_QWORD *)(a2 + 472) = 0LL;
  }
  RIMIDEFreeInjectedInfo(a2);
  return 0LL;
}
