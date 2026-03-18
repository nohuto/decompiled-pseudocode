/*
 * XREFs of NtUserMapPointsByVisualIdentifier @ 0x1C015F740
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003D298 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ?MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z @ 0x1C0145644 (-MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     UserGetLastError @ 0x1C0210CAC (UserGetLastError.c)
 */

__int64 __fastcall NtUserMapPointsByVisualIdentifier(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        const void *a4,
        volatile void *Address)
{
  __int64 v6; // r12
  __int64 *v7; // r14
  __int64 *v8; // rsi
  char v9; // r15
  _UNKNOWN **v10; // r8
  ULONG64 v11; // rcx
  __int64 Pool2; // rdi
  __int64 v13; // rbx
  unsigned __int64 v14; // r12
  SIZE_T v15; // r14
  ULONG64 v16; // rcx
  PVOID v17; // rbx
  __int64 v18; // rdx
  unsigned __int64 i; // rcx
  char v20; // si
  PVOID v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // esi
  __int64 v29; // rcx
  char v30; // r14
  __int64 CurrentProcessWow64Process; // rax
  bool v32; // bl
  char LastError; // al
  int v34; // r8d
  int v35; // edx
  int v37; // [rsp+68h] [rbp-230h] BYREF
  void *v38; // [rsp+80h] [rbp-218h]
  void *v39; // [rsp+88h] [rbp-210h]
  __int64 v40; // [rsp+90h] [rbp-208h] BYREF
  __int64 v41; // [rsp+98h] [rbp-200h] BYREF
  struct _LUID *v42; // [rsp+A0h] [rbp-1F8h]
  struct _LUID *v43; // [rsp+A8h] [rbp-1F0h]
  __int128 v44; // [rsp+B0h] [rbp-1E8h]
  int v45; // [rsp+C0h] [rbp-1D8h]
  __int64 *v46; // [rsp+D0h] [rbp-1C8h]
  __int64 *v47; // [rsp+D8h] [rbp-1C0h]
  __int64 v48; // [rsp+E0h] [rbp-1B8h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-1B0h]
  unsigned __int64 v50; // [rsp+F0h] [rbp-1A8h]
  __int128 v51; // [rsp+100h] [rbp-198h]
  __int64 v52; // [rsp+110h] [rbp-188h]
  PVOID BackTrace[20]; // [rsp+130h] [rbp-168h] BYREF
  PVOID v54[20]; // [rsp+1D0h] [rbp-C8h] BYREF

  v6 = a3;
  v7 = (__int64 *)a2;
  v8 = a1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    LOBYTE(a2) = 0;
    v9 = 1;
  }
  else
  {
    v9 = 1;
    LOBYTE(a2) = 1;
  }
  v10 = &WPP_RECORDER_INITIALIZED;
  LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)v10,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      21,
      92,
      (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
      (char)a1,
      v7,
      0);
  v11 = 0LL;
  v43 = 0LL;
  v46 = 0LL;
  v42 = 0LL;
  v47 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  Pool2 = 0LL;
  v38 = 0LL;
  v13 = 0LL;
  v39 = 0LL;
  v14 = 8 * v6;
  if ( v14 > 0xFFFFFFFF )
    goto LABEL_68;
  if ( !(_DWORD)v14 )
  {
LABEL_67:
    v28 = 1;
    goto LABEL_70;
  }
  if ( v8 )
  {
    v11 = (ULONG64)(v8 + 1);
    if ( v8 + 1 < v8 || v11 > MmUserProbeAddress )
      v8 = (__int64 *)MmUserProbeAddress;
    v40 = *v8;
    v43 = (struct _LUID *)&v40;
    v46 = &v40;
  }
  if ( v7 )
  {
    v11 = (ULONG64)(v7 + 1);
    if ( v7 + 1 < v7 || v11 > MmUserProbeAddress )
      v7 = (__int64 *)MmUserProbeAddress;
    v41 = *v7;
    v42 = (struct _LUID *)&v41;
    v47 = &v41;
  }
  if ( ((PsGetCurrentProcessWow64Process(v11, a2, v10) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (unsigned int)v14;
  v16 = (ULONG64)a4 + (unsigned int)v14;
  if ( v16 > MmUserProbeAddress || v16 < (unsigned __int64)a4 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v37 = 1986945877;
  v48 = 260LL;
  v17 = gpLeakTrackingAllocator;
  *(_QWORD *)&v51 = &v48;
  *((_QWORD *)&v51 + 1) = &v37;
  v44 = v51;
  v18 = (unsigned int)v14;
  v49 = (unsigned int)v14;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x766E6355) == 0x766E6355 )
  {
    for ( i = 0LL; ; ++i )
    {
      v50 = i;
      if ( i >= *((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_43;
      if ( *((_DWORD *)gpLeakTrackingAllocator + i) == 1986945877 )
        break;
    }
    v20 = 0;
    if ( (unsigned int)v14 < 0x1000uLL || (v14 & 0xFFF) != 0 )
    {
      v20 = 1;
      v18 = (unsigned int)v14 + 16LL;
      v49 = v18;
    }
    Pool2 = ExAllocatePool2(*(_QWORD *)v44 & 0xFFFFFFFFFFFFFFFCuLL | 1, v18);
    if ( !Pool2 )
    {
LABEL_34:
      Pool2 = 0LL;
      goto LABEL_44;
    }
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v20 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v17,
                              Pool2,
                              BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_44;
      }
LABEL_41:
      ExFreePoolWithTag((PVOID)Pool2, 0);
      goto LABEL_34;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                             v17,
                             Pool2,
                             BackTrace) )
      goto LABEL_41;
  }
  else
  {
LABEL_43:
    Pool2 = ExAllocatePool2(*(_QWORD *)v44 & 0xFFFFFFFFFFFFFFFCuLL | 1, (unsigned int)v14);
  }
LABEL_44:
  v38 = (void *)Pool2;
  if ( !Pool2 )
    ExRaiseStatus(-1073741801);
  memmove((void *)Pool2, a4, (unsigned int)v14);
  v45 = 1986945877;
  v52 = 260LL;
  v21 = gpLeakTrackingAllocator;
  v22 = (unsigned int)v14;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x766E6355) != 0x766E6355
    || (v23 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_50:
    v13 = ExAllocatePool2(261LL, (unsigned int)v14);
    goto LABEL_51;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v23) != 1986945877 )
  {
    if ( ++v23 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_50;
  }
  v30 = 0;
  if ( (unsigned int)v14 < 0x1000uLL || (v14 & 0xFFF) != 0 )
  {
    v30 = 1;
    v22 = (unsigned int)v14 + 16LL;
  }
  v13 = ExAllocatePool2(261LL, v22);
  if ( v13 )
  {
    memset(v54, 0, sizeof(v54));
    RtlCaptureStackBackTrace(0, 0x14u, v54, 0LL);
    if ( v30 && (unsigned __int64)(v13 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v21,
                              v13,
                              v54) )
      {
        v13 += 16LL;
        goto LABEL_59;
      }
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v21,
                                 v13,
                                 v54) )
    {
      goto LABEL_59;
    }
    ExFreePoolWithTag((PVOID)v13, 0);
  }
  v13 = 0LL;
LABEL_59:
  v15 = (unsigned int)v14;
LABEL_51:
  v39 = (void *)v13;
  if ( !v13 )
  {
LABEL_68:
    v28 = 0;
    v29 = 8LL;
    goto LABEL_69;
  }
  v24 = MapPointsByVisualIdentifierInternal(v43, v42, a3, (struct VisualPoint *)Pool2, (struct VisualPoint *)v13);
  if ( v24 >= 0 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v26, v25, v27);
    ProbeForWrite(Address, v15, CurrentProcessWow64Process != 0 ? 1 : 4);
    memmove((void *)Address, (const void *)v13, v15);
    goto LABEL_67;
  }
  v28 = 0;
  v29 = RtlNtStatusToDosError(v24);
LABEL_69:
  UserSetLastError(v29, a2, (__int64)v10, (__int64)a4);
LABEL_70:
  if ( Pool2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
  if ( v13 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)v13);
  if ( !v28 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v9 = 0;
    }
    v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError(WPP_GLOBAL_Control, a2, v10, a4);
      LOBYTE(v34) = v32;
      LOBYTE(v35) = v9;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v35,
        v34,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        93,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
        LastError);
    }
  }
  return v28;
}
