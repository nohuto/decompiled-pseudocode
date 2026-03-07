__int64 __fastcall NtUserMapPointsByVisualIdentifier(
        _QWORD *a1,
        struct _LUID *a2,
        unsigned int a3,
        NSInstrumentation::CLeakTrackingAllocator *a4,
        volatile void *Address)
{
  __int64 v6; // r12
  struct _LUID *v7; // r15
  PDEVICE_OBJECT v9; // rcx
  char v10; // r14
  _UNKNOWN **v11; // r8
  struct VisualPoint *v12; // rsi
  struct VisualPoint *v13; // rdi
  unsigned __int64 v14; // r12
  NSInstrumentation::CLeakTrackingAllocator *v15; // rcx
  struct VisualPoint *QuotaZInit; // rax
  unsigned __int64 v17; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v18; // rcx
  struct VisualPoint *v19; // rax
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // ebx
  ULONG v26; // ecx
  __int64 CurrentProcessWow64Process; // rax
  bool v28; // di
  char LastError; // al
  int v30; // r8d
  int v31; // edx
  __int64 v33; // [rsp+70h] [rbp-68h] BYREF
  struct _LUID v34; // [rsp+78h] [rbp-60h] BYREF
  struct _LUID *v35; // [rsp+80h] [rbp-58h]
  __int64 *v36; // [rsp+90h] [rbp-48h]
  struct _LUID *v37; // [rsp+98h] [rbp-40h]

  v6 = a3;
  v7 = a2;
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    LOBYTE(a2) = 0;
    v10 = 1;
  }
  else
  {
    v10 = 1;
    LOBYTE(a2) = 1;
  }
  v11 = &WPP_RECORDER_INITIALIZED;
  LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)v11,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      21,
      92,
      (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
      (char)a1,
      (char)v7);
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 8 * v6;
  if ( v14 > 0xFFFFFFFF )
    goto LABEL_33;
  if ( !(_DWORD)v14 )
  {
LABEL_32:
    v25 = 1;
    goto LABEL_35;
  }
  if ( a1 )
  {
    v9 = (PDEVICE_OBJECT)(a1 + 1);
    if ( a1 + 1 < a1 || (unsigned __int64)v9 > MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    v33 = *a1;
    v35 = (struct _LUID *)&v33;
    v36 = &v33;
  }
  if ( v7 )
  {
    v9 = (PDEVICE_OBJECT)&v7[1];
    if ( &v7[1] < v7 || (unsigned __int64)v9 > MmUserProbeAddress )
      v7 = (struct _LUID *)MmUserProbeAddress;
    v34 = *v7;
    v7 = &v34;
    v37 = &v34;
  }
  if ( ((PsGetCurrentProcessWow64Process(v9, a2, v11, a4) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (NSInstrumentation::CLeakTrackingAllocator *)((char *)a4 + (unsigned int)v14);
  if ( (unsigned __int64)v15 > MmUserProbeAddress || v15 < a4 )
    *(_BYTE *)MmUserProbeAddress = 0;
  QuotaZInit = (struct VisualPoint *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                       v15,
                                       MmUserProbeAddress,
                                       (unsigned int)v14,
                                       0x766E6355u);
  v12 = QuotaZInit;
  if ( !QuotaZInit )
    ExRaiseStatus(-1073741801);
  memmove(QuotaZInit, a4, (unsigned int)v14);
  v19 = (struct VisualPoint *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                v18,
                                v17,
                                (unsigned int)v14,
                                0x766E6355u);
  v13 = v19;
  if ( !v19 )
  {
LABEL_33:
    v25 = 0;
    v26 = 8;
    goto LABEL_34;
  }
  v20 = MapPointsByVisualIdentifierInternal(v35, v7, a3, v12, v19);
  if ( v20 >= 0 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v22, v21, v23, v24);
    ProbeForWrite(Address, (unsigned int)v14, CurrentProcessWow64Process != 0 ? 1 : 4);
    memmove((void *)Address, v13, (unsigned int)v14);
    goto LABEL_32;
  }
  v25 = 0;
  v26 = RtlNtStatusToDosError(v20);
LABEL_34:
  UserSetLastError(v26);
LABEL_35:
  if ( v12 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v12);
  if ( v13 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v13);
  if ( !v25 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError(WPP_GLOBAL_Control, a2, v11, a4);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v10;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v31,
        v30,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        93,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
        LastError);
    }
  }
  return v25;
}
