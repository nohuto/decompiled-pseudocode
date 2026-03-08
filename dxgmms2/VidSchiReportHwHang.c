/*
 * XREFs of VidSchiReportHwHang @ 0x1C00475B8
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C00A5940 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00ADD4C (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     VidSchiCheckFlipQueueTimeout @ 0x1C0007940 (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiDecrementContextReference @ 0x1C0011CE0 (VidSchiDecrementContextReference.c)
 *     VidSchiClearFlipDevice @ 0x1C0012708 (VidSchiClearFlipDevice.c)
 *     VidSchiIncrementContextReference @ 0x1C00146D0 (VidSchiIncrementContextReference.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     VidSchiUnwaitAllContexts @ 0x1C003CBF4 (VidSchiUnwaitAllContexts.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0046F70 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiCheckGPUTimeout @ 0x1C010605C (VidSchiCheckGPUTimeout.c)
 *     VidSchiBlockDriverCallback @ 0x1C010A3BC (VidSchiBlockDriverCallback.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1C010A464 (VidSchiMarkTdrFaultingDevice.c)
 */

__int64 __fastcall VidSchiReportHwHang(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // r12d
  __int64 v9; // r8
  __int64 *v11; // r14
  __int64 v12; // r14
  signed __int64 v13; // rbx
  signed __int64 v14; // r13
  signed __int64 v15; // rsi
  signed __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rdi
  ULONG TimeIncrement; // eax
  ULONG v21; // r12d
  __int64 v22; // r14
  LARGE_INTEGER v23; // r13
  __int64 v24; // rbx
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  struct _VIDSCH_GLOBAL *v26; // r15
  __int64 v27; // rbx
  int v28; // eax
  __int64 v29; // rax
  struct _VIDSCH_CONTEXT *v30; // rdi
  __int64 v31; // r13
  __int64 v32; // rdx
  _BYTE *v33; // rcx
  char v34; // al
  _BYTE *v35; // rax
  __int64 v36; // rax
  _BYTE *v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  _BYTE *v40; // rcx
  __int64 v41; // r9
  char v42; // al
  _BYTE *v43; // rax
  __int64 v44; // rcx
  int DriverVersion; // eax
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  _BYTE *v52; // rdx
  __int64 v53; // r8
  _BYTE *v54; // rcx
  __int64 v55; // r8
  char v56; // al
  _BYTE *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  bool IsRecoveryRequired; // al
  __int64 v62; // rdx
  unsigned int v63; // ebx
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rax
  bool v68; // cf
  __int64 v69; // rax
  unsigned int v70; // ebx
  signed __int32 v71[8]; // [rsp+0h] [rbp-A9h] BYREF
  unsigned int v72; // [rsp+30h] [rbp-79h] BYREF
  int v73; // [rsp+34h] [rbp-75h]
  signed __int64 v74; // [rsp+38h] [rbp-71h]
  int v75; // [rsp+40h] [rbp-69h] BYREF
  struct _VIDSCH_CONTEXT *v76; // [rsp+48h] [rbp-61h]
  int v77; // [rsp+50h] [rbp-59h]
  __int64 v78; // [rsp+58h] [rbp-51h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp-49h] BYREF
  __int64 v80; // [rsp+68h] [rbp-41h]
  unsigned __int64 v81; // [rsp+70h] [rbp-39h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-31h] BYREF
  struct _VIDSCH_GLOBAL *v83; // [rsp+90h] [rbp-19h] BYREF
  int v84; // [rsp+98h] [rbp-11h]
  PVOID BackTrace[2]; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v86; // [rsp+B0h] [rbp+7h]
  __int64 v87; // [rsp+C0h] [rbp+17h]

  v72 = -1;
  v77 = a3;
  v83 = (struct _VIDSCH_GLOBAL *)a1;
  v76 = 0LL;
  v80 = 0LL;
  v74 = 0LL;
  v78 = 0LL;
  v75 = 0;
  v81 = 0LL;
  v73 = 0;
  v8 = 0;
  v87 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  *(_OWORD *)BackTrace = 0LL;
  v86 = 0LL;
  RtlCaptureStackBackTrace(1u, 5u, BackTrace, 0LL);
  WdLogSingleEntry5(3LL, BackTrace[0], BackTrace[1], v86, *((_QWORD *)&v86 + 1), v87);
  v9 = *(_QWORD *)(a1 + 3016);
  if ( v9 )
  {
    WdLogSingleEntry2(3LL, *(_QWORD *)(a1 + 16), v9);
    return 1LL;
  }
  if ( a3 == 1 || (unsigned int)(a3 - 9) <= 2 )
  {
    if ( !a4 )
      a4 = **(_QWORD **)(a1 + 632);
    *(_QWORD *)(a1 + 3024) = a4;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 96), 0LL, 0LL);
    goto LABEL_30;
  }
  if ( a3 != 2 )
  {
    if ( a3 == 3 )
    {
      KeFlushQueuedDpcs();
      if ( !(unsigned int)VidSchiCheckFlipQueueTimeout((KSPIN_LOCK *)a1, &v75, &v81, 0LL, &v72) )
        return 0LL;
      if ( v72 < 0x10 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1728), &LockHandle);
        v18 = *(_QWORD *)(a1 + 8LL * v72 + 3200);
        if ( v18 )
          v73 = *(_DWORD *)(v18 + 78784);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    v15 = v74;
    goto LABEL_30;
  }
  KeFlushQueuedDpcs();
  if ( !*(_DWORD *)(a1 + 728) )
    return 0LL;
  v11 = (__int64 *)(a1 + 3024);
  if ( !a4 )
  {
    if ( (unsigned int)VidSchiCheckGPUTimeout(a1, 0LL, a1 + 3024) )
      goto LABEL_10;
    return 0LL;
  }
  *v11 = a4;
LABEL_10:
  v12 = *v11;
  if ( !*(_DWORD *)(v12 + 2888) )
    return 0LL;
  v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 96), 0LL, 0LL);
  v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 120), 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1728), &LockHandle);
  v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 96), 0LL, 0LL);
  v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 120), 0LL, 0LL);
  if ( v13 == v15 && v14 == v16 )
  {
    v78 = *(_QWORD *)(v12 + 40);
    v17 = *(_QWORD *)(v12 + 8LL * *(unsigned int *)(v12 + 1560) + 1568);
    v76 = (struct _VIDSCH_CONTEXT *)v17;
    if ( v17 )
    {
      VidSchiIncrementContextReference(v17);
      v80 = *(_QWORD *)(v17 + 104);
    }
    ++*(_DWORD *)(v12 + 492);
  }
  else
  {
    v15 = v74;
    v8 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v8 )
    return 0LL;
LABEL_30:
  ++*(_DWORD *)(a1 + 3032);
  LODWORD(v74) = 0;
  v19 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  PerformanceFrequency.QuadPart = 0LL;
  v21 = TimeIncrement;
  v22 = v19 - a2;
  v23 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v24 = MEMORY[0xFFFFF78000000014];
  RecoveryContext = TdrCreateRecoveryContext();
  v26 = v83;
  *((_QWORD *)v83 + 377) = RecoveryContext;
  WdLogSingleEntry5(3LL, *((_QWORD *)v26 + 2), v19, v21, KeGetCurrentThread(), RecoveryContext);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry4)(
    3LL,
    *((_QWORD *)v26 + 2),
    (LARGE_INTEGER)v23.QuadPart,
    (union _LARGE_INTEGER)PerformanceFrequency.QuadPart,
    v24);
  v27 = *((_QWORD *)v26 + 377);
  if ( v27 )
  {
    v28 = v77;
    *(_QWORD *)(v27 + 8) = (char *)v26 + 3012;
    *(_DWORD *)(v27 + 16) = v28;
    if ( !*(_QWORD *)(v27 + 32) )
    {
      v29 = *((_QWORD *)v26 + 2);
      *(_QWORD *)(v27 + 32) = v29;
      _InterlockedIncrement64((volatile signed __int64 *)(v29 + 24));
      *(_QWORD *)(v27 + 40) = -1LL;
    }
    v30 = v76;
    ++*(_DWORD *)(*(_QWORD *)(v27 + 32) + 3016LL);
    if ( !*(_QWORD *)(v27 + 48) && v30 )
    {
      VidSchiIncrementContextReference((__int64)v30);
      *(_QWORD *)(v27 + 48) = v30;
    }
    v31 = 15LL;
    if ( v26 == (struct _VIDSCH_GLOBAL *)-3037LL )
    {
      if ( v80 )
      {
        v36 = *(_QWORD *)(v80 + 40);
        if ( v36 )
        {
          if ( *(_QWORD *)(v36 + 8) )
          {
            v37 = (_BYTE *)(v27 + 2821);
            *(_QWORD *)(v27 + 2808) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v30 + 13) + 40LL) + 8LL)
                                                            + 64LL)
                                                + 80LL);
            v38 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v30 + 13) + 40LL) + 2648LL);
            if ( !v38 )
              goto LABEL_56;
            v39 = 15LL;
            v40 = (_BYTE *)(v27 + 2821);
            v41 = v38 - (_QWORD)v37;
            do
            {
              if ( v39 == -2147483631 )
                break;
              v42 = v40[v41];
              if ( !v42 )
                break;
              *v40++ = v42;
              --v39;
            }
            while ( v39 );
            v43 = v40 - 1;
            if ( v39 )
              v43 = v40;
            *v43 = 0;
            if ( !v39 )
LABEL_56:
              *v37 = 0;
          }
        }
      }
    }
    else
    {
      v32 = 15LL;
      v33 = (_BYTE *)(v27 + 2821);
      do
      {
        if ( v32 == -2147483631 )
          break;
        v34 = v33[(_QWORD)((char *)v26 - v27 + 216)];
        if ( !v34 )
          break;
        *v33++ = v34;
        --v32;
      }
      while ( v32 );
      v35 = v33 - 1;
      if ( v32 )
        v35 = v33;
      *v35 = 0;
      if ( !v32 )
        *(_BYTE *)(v27 + 2821) = 0;
    }
    v44 = *(_QWORD *)(v27 + 32);
    *(_DWORD *)(v27 + 144) = 65540;
    DriverVersion = DpiGetDriverVersion(*(_QWORD *)(v44 + 216));
    *(_QWORD *)(v27 + 24) = v22;
    *(_DWORD *)(v27 + 148) = DriverVersion;
    v46 = *((_QWORD *)v26 + 378);
    if ( v46 )
      v47 = *(unsigned __int16 *)(v46 + 4);
    else
      v47 = 0;
    v48 = v72;
    *(_DWORD *)(v27 + 56) = v47;
    *(_QWORD *)(v27 + 72) = v78;
    *(_DWORD *)(v27 + 88) = v75;
    *(_QWORD *)(v27 + 96) = v81;
    *(_QWORD *)(v27 + 64) = v15;
    *(_DWORD *)(v27 + 80) = v48;
    if ( (_DWORD)v48 != -1 )
    {
      v49 = *((_QWORD *)v26 + v48 + 400);
      if ( v49 )
      {
        v50 = *(_QWORD *)(v49 + 16);
        if ( v50 )
        {
          v51 = *(_QWORD *)(v50 + 40);
          if ( v51 )
          {
            v52 = (_BYTE *)(v27 + 2821);
            *(_QWORD *)(v27 + 2808) = *(_QWORD *)(v51 + 2640);
            v53 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26 + v48 + 400) + 16LL) + 40LL) + 2648LL);
            if ( !v53 )
              goto LABEL_72;
            v54 = (_BYTE *)(v27 + 2821);
            v55 = v53 - (_QWORD)v52;
            do
            {
              if ( v31 == -2147483631 )
                break;
              v56 = v54[v55];
              if ( !v56 )
                break;
              *v54++ = v56;
              --v31;
            }
            while ( v31 );
            v57 = v54 - 1;
            if ( v31 )
              v57 = v54;
            *v57 = 0;
            if ( !v31 )
LABEL_72:
              *v52 = 0;
          }
        }
      }
    }
    v58 = v73;
    *(_DWORD *)(v27 + 84) = v73;
    if ( (_DWORD)v58 )
      WdLogSingleEntry2(3LL, *((_QWORD *)v26 + 2), v58);
    v59 = *(_QWORD *)(v27 + 32);
    v60 = *(_QWORD *)(v59 + 592);
    if ( !v60 )
      v60 = *(_QWORD *)(v59 + 448);
    *(_QWORD *)(v27 + 104) = v60;
    IsRecoveryRequired = TdrIsRecoveryRequired((struct _TDR_RECOVERY_CONTEXT *)v27);
    v62 = *((_QWORD *)v26 + 2);
    if ( IsRecoveryRequired )
    {
      WdLogSingleEntry2(3LL, v62, *((_QWORD *)v26 + 377));
      *((_DWORD *)v26 + 753) = 1;
      VidSchiBlockDriverCallback(v26);
      *((_DWORD *)v26 + 9) = 23;
      RtlClearAllBitsEx((char *)v26 + 584);
      if ( v30 )
        VidSchiMarkTdrFaultingDevice(*((_QWORD *)v30 + 13));
      if ( (unsigned int)DpiGetDriverVersion(*(_QWORD *)(*((_QWORD *)v26 + 2) + 216LL)) >= 0x6002 )
      {
        v63 = 0;
        if ( *((_DWORD *)v26 + 19) )
        {
          while ( 1 )
          {
            if ( !*((_BYTE *)v26 + 55) )
            {
              v64 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 33) + 8LL * v63) + 96LL);
              if ( *(_DWORD *)(v64 + 2888) )
              {
                v65 = *(unsigned __int16 *)(v64 + 4);
                v66 = *((_QWORD *)v26 + 79);
                v83 = 0LL;
                v84 = 0;
                v67 = v66 + 8 * v65;
                v68 = (unsigned int)v65 < *((_DWORD *)v26 + 176);
                if ( (unsigned int)v65 >= *((_DWORD *)v26 + 176) )
                  v67 = v66;
                HIDWORD(v83) = *(unsigned __int16 *)(*(_QWORD *)v67 + 6LL);
                if ( v68 )
                  v66 += 8 * v65;
                LODWORD(v83) = *(unsigned __int16 *)(*(_QWORD *)v66 + 8LL);
                if ( (int)DxgCoreInterface[38](
                            *((ADAPTER_DISPLAY **)v26 + 1),
                            (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v83) < 0 )
                  break;
              }
            }
            if ( ++v63 >= *((_DWORD *)v26 + 19) )
              goto LABEL_92;
          }
          *((_BYTE *)v26 + 3036) |= 4u;
        }
      }
LABEL_92:
      v69 = *((_QWORD *)v26 + 2);
      *(_BYTE *)(v69 + 2871) = 0;
      _InterlockedOr(v71, 0);
      *(_BYTE *)(v69 + 2870) = 1;
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v26 + 1) + 768LL) + 7088LL) = 1;
      VidSchiCompleteAllPendingCommand((__int64)v26);
      VidSchiUnwaitAllContexts((__int64)v26);
      VidSchiClearFlipDevice(v26, 0LL, 9u, 0xFFFFFFFD, 0);
      v70 = 1;
      goto LABEL_95;
    }
    WdLogSingleEntry1(3LL, v62);
    TdrCompleteRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v27, 0, 1);
    *((_QWORD *)v26 + 377) = 0LL;
  }
  v70 = v74;
LABEL_95:
  if ( v76 )
    VidSchiDecrementContextReference(v76, 0);
  return v70;
}
