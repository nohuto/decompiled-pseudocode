/*
 * XREFs of ?SplitViewCreated_@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@0W4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x18046B2E0
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180463894 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall TabletModeTelemetry::SplitViewCreated_(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v6; // eax
  bool v7; // bl
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  bool v12; // [rsp+30h] [rbp-50h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+40h] [rbp-40h] BYREF
  bool *v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]

  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 80LL))(a3, 1LL);
  if ( v6 == 2 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 80LL))(a2, 1LL);
    if ( v6 == 1 )
    {
      v7 = (a4 & 0x10) != 0;
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = qword_180650618;
        qword_180650618[0] = &ImmersiveIconsLogging::`vftable';
        qword_180650630 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650618, qword_180650630, v8);
        InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_180650618);
      }
      LOBYTE(v6) = (_BYTE)Context;
      v9 = (_DWORD *)*((_QWORD *)Context + 1);
      if ( *v9 > 5u )
      {
        LOBYTE(v6) = tlgKeywordOn((__int64)v9, 0x200000000000LL);
        if ( (_BYTE)v6 )
        {
          v12 = v7;
          v16 = &v12;
          v17 = 1;
          v18 = 0;
          LOBYTE(v6) = tlgWriteTransfer_EventWriteTransfer(v10, (unsigned __int8 *)dword_18059AC94, 0LL, 0LL, 3u, &v15);
        }
      }
    }
  }
  return v6;
}
