/*
 * XREFs of ?OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180046AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x180044E50 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x18008A10C (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::OnApplicationViewChanged(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        int a3)
{
  PVOID Ptr; // rbx
  WINBOOL v5; // r8d
  RTL_SRWLOCK *v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  RTL_SRWLOCK v10; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+50h] [rbp+18h] BYREF

  Ptr = 0LL;
  if ( !a3 )
    goto LABEL_10;
  if ( a3 <= 0 )
    goto LABEL_15;
  if ( a3 <= 2 )
    goto LABEL_20;
  switch ( a3 )
  {
    case 7:
      v5 = 2;
      goto LABEL_11;
    case 10:
LABEL_10:
      v5 = 0;
      goto LABEL_11;
    case 9:
      v5 = 3;
      goto LABEL_11;
  }
  if ( a3 != 11 )
  {
    if ( a3 != 14 )
      goto LABEL_15;
    v5 = 4;
    goto LABEL_11;
  }
LABEL_20:
  v5 = 1;
LABEL_11:
  v6 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
         (RTL_SRWLOCK *)(a1 - 16),
         &v10,
         v5,
         a2);
  Ptr = v6->Ptr;
  v6->Ptr = 0LL;
  if ( v10.Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10.Ptr + 16LL))(v10.Ptr);
  if ( Ptr )
  {
    LOWORD(v12) = 0;
    v7 = (*(__int64 (__fastcall **)(_QWORD, PVOID))(**(_QWORD **)(a1 + 72) + 64LL))(*(_QWORD *)(a1 + 72), Ptr);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
        (const char *)(unsigned int)v7,
        (int)Ptr);
      ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v12);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      return v8;
    }
  }
LABEL_15:
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return 0LL;
}
