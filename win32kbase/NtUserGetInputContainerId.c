__int64 __fastcall NtUserGetInputContainerId(struct _GUID *a1, unsigned __int64 a2, __int64 a3, ULONG64 a4)
{
  struct _GUID *v5; // r14
  char v6; // di
  struct tagTHREADINFO *v7; // rax
  struct tagTHREADINFO *v8; // rcx
  int v9; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rax
  char v12; // al
  __int64 *i; // rsi
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PDEVICE_OBJECT v19; // r10
  __int16 v20; // ax
  int v21; // ecx
  _DWORD *v22; // rdx
  _UNKNOWN **v23; // rcx
  __int64 v24; // r9
  int v25; // eax
  PDEVICE_OBJECT v26; // r10
  __int16 v27; // ax
  __int64 v28; // r13
  __int64 v29; // r11
  __int16 v30; // cx
  char v31; // al
  char v32; // al
  NSInstrumentation::CLeakTrackingAllocator *v33; // r14
  int v34; // eax
  __int64 Pool2; // rsi
  _QWORD *v36; // rax
  unsigned int v37; // r10d
  __int64 v38; // r11
  unsigned __int16 *v39; // rcx
  __int64 v40; // rax
  _WORD *v41; // rcx
  char v42; // al
  char v43; // al
  int v45; // [rsp+70h] [rbp-178h] BYREF
  unsigned int v46; // [rsp+78h] [rbp-170h] BYREF
  unsigned __int64 v47; // [rsp+90h] [rbp-158h] BYREF
  __int64 v48; // [rsp+98h] [rbp-150h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-148h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-140h]
  ULONG64 v51; // [rsp+B8h] [rbp-130h]
  _QWORD v52[4]; // [rsp+C0h] [rbp-128h] BYREF
  struct _GUID v53; // [rsp+E0h] [rbp-108h]
  PVOID BackTrace[20]; // [rsp+F0h] [rbp-F8h] BYREF
  struct _GUID v55; // [rsp+190h] [rbp-58h] BYREF

  v51 = a4;
  v50 = a3;
  v5 = a1;
  v6 = 1;
  LOBYTE(a1) = 1;
  v7 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v7;
  v9 = 0;
  if ( v7 )
  {
    *((_DWORD *)v7 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( CurrentProcessWin32Process )
    {
      v8 = (struct tagTHREADINFO *)-*(_QWORD *)CurrentProcessWin32Process;
      v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 12) & 0x8000) != 0 )
        {
          v8 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v12 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v12 = 0;
          }
          if ( v12 )
          {
            for ( i = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  gpSharedUserCritDeferredUnlockListHead;
                  i = (__int64 *)gpSharedUserCritDeferredUnlockListHead )
            {
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
              i[2] = 0LL;
              if ( !*(_DWORD *)(*i + 8) )
              {
                v46 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              }
              HMUnlockObject(*i);
            }
          }
        }
      }
    }
  }
  v55 = 0LL;
  v45 = 0;
  v14 = PsGetCurrentProcessWin32Process(v8);
  v15 = v14;
  if ( v14 )
    v15 = -(__int64)(*(_QWORD *)v14 != 0LL) & v14;
  if ( isChildPartition() )
  {
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v6 = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_24;
    v20 = 82;
LABEL_23:
    LOBYTE(v16) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      v19->AttachedDevice,
      v16,
      v17,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      12,
      v20,
      (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
LABEL_24:
    v21 = 5;
LABEL_25:
    UserSetLastError(v21);
    goto LABEL_129;
  }
  if ( &v5[1] < v5 || (unsigned __int64)&v5[1] > MmUserProbeAddress )
    v5 = (struct _GUID *)MmUserProbeAddress;
  v53 = *v5;
  v55 = v53;
  if ( gpfnIVResolveContainerId )
    v25 = gpfnIVResolveContainerId(&v55, (struct CONTAINER_ID *)&v45);
  else
    v25 = -1073741637;
  if ( v25 < 0 )
  {
    v26 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v6 = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v27 = 84;
LABEL_40:
    LOBYTE(v16) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      v26->AttachedDevice,
      v16,
      v17,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      12,
      v27,
      (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
LABEL_41:
    v21 = 87;
    goto LABEL_25;
  }
  v28 = ValidateHbwnd(a2, v16, v17, v18);
  if ( !v28 )
  {
    v26 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v6 = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v27 = 85;
    goto LABEL_40;
  }
  v29 = v50;
  if ( !v50 )
  {
    v26 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v6 = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v27 = 86;
    goto LABEL_40;
  }
  v30 = *(_WORD *)(v15 + 1072);
  if ( v30 || (v31 = 1, *(_WORD *)(v15 + 1074)) )
    v31 = 0;
  if ( !v31 )
  {
    if ( v30 != (_WORD)v45 || (v32 = 1, *(_WORD *)(v15 + 1074) != HIWORD(v45)) )
      v32 = 0;
    if ( !v32 )
    {
      v19 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v6 = 0;
      }
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_24;
      v20 = 87;
      goto LABEL_23;
    }
  }
  if ( !*(_QWORD *)(v28 + 136) )
  {
    v46 = 1684236117;
    v48 = 260LL;
    v33 = gpLeakTrackingAllocator;
    LODWORD(v16) = 20;
    v49 = 20LL;
    v34 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(260LL, 20LL, 1684236117LL);
      if ( Pool2 )
        _InterlockedAdd64((volatile signed __int64 *)v33 + 14, 1uLL);
      goto LABEL_90;
    }
    if ( v34 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x64636755u) )
      {
        v36 = (_QWORD *)ExAllocatePool2(v48 & 0xFFFFFFFFFFFFFFFDuLL, 36LL, v46);
        Pool2 = (__int64)v36;
        if ( !v36
          || (_InterlockedAdd64((volatile signed __int64 *)v33 + 14, 1uLL),
              *v36 = 1684236117LL,
              Pool2 = (__int64)(v36 + 2),
              v36 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v33 + 1),
            (const void *)0x64636755);
        }
        goto LABEL_90;
      }
      goto LABEL_89;
    }
    if ( v34 == 2 )
    {
      v47 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x64636755u, &v47) )
      {
        v52[0] = &v48;
        v52[1] = &v46;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v33,
                  (__int64)v52,
                  &v49);
LABEL_90:
        *(_QWORD *)(v28 + 136) = Pool2;
        if ( !Pool2 )
        {
          v21 = 8;
          goto LABEL_25;
        }
        *(_OWORD *)Pool2 = 0LL;
        v29 = v50;
        goto LABEL_95;
      }
      v49 = 36LL;
      Pool2 = ExAllocatePool2(v38, 36LL, v37);
      if ( Pool2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v33 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v33,
                                  Pool2,
                                  v47,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_90;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v33,
                                     Pool2,
                                     v47,
                                     BackTrace) )
        {
          goto LABEL_90;
        }
        _InterlockedAdd64((volatile signed __int64 *)v33 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_89:
    Pool2 = 0LL;
    goto LABEL_90;
  }
LABEL_95:
  v39 = *(unsigned __int16 **)(v28 + 136);
  v40 = *((_QWORD *)v39 + 1);
  if ( v40 && v40 != v29 )
  {
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v6 = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_24;
    v20 = 88;
    goto LABEL_23;
  }
  LODWORD(v16) = *v39;
  v41 = v39 + 1;
  if ( (_WORD)v16 || (v42 = 1, *v41) )
    v42 = 0;
  if ( !v42 )
  {
    if ( (_WORD)v16 != (_WORD)v45 || (v43 = 1, *v41 != HIWORD(v45)) )
      v43 = 0;
    if ( !v43 )
    {
      v19 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v6 = 0;
      }
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_24;
      v20 = 89;
      goto LABEL_23;
    }
  }
  v22 = (_DWORD *)v51;
  if ( v51 >= MmUserProbeAddress )
    v22 = (_DWORD *)MmUserProbeAddress;
  *v22 = v45;
  **(_DWORD **)(v28 + 136) = v45;
  *(_QWORD *)(*(_QWORD *)(v28 + 136) + 8LL) = v29;
  *(_DWORD *)(v15 + 1072) = v45;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v22) = 0;
  }
  v23 = &WPP_RECORDER_INITIALIZED;
  LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qqddq(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)v22, v17, SHIWORD(v45));
  v9 = 1;
LABEL_129:
  UserSessionSwitchLeaveCrit((__int64)v23, (__int64)v22, v17, v24);
  return v9;
}
