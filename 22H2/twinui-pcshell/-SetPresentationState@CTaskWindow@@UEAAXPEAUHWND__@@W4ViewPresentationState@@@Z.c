/*
 * XREFs of ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x180045AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CAppManagerTelemetry@@IEAAXXZ @ 0x1801B9098 (-Create@CAppManagerTelemetry@@IEAAXXZ.c)
 *     WPP_SF_Ld @ 0x1801D4768 (WPP_SF_Ld.c)
 */

// Hidden C++ exception states: #wind=1
signed int __fastcall CTaskWindow::SetPresentationState(__int64 a1, __int64 a2, int a3)
{
  signed int result; // eax
  _DWORD *v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r14d
  __int64 v18; // rcx
  void (*v19)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v20; // [rsp+30h] [rbp-69h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-61h] BYREF
  WINBOOL v22; // [rsp+3Ch] [rbp-5Dh] BYREF
  int v23; // [rsp+40h] [rbp-59h] BYREF
  int v24; // [rsp+44h] [rbp-55h] BYREF
  int v25; // [rsp+48h] [rbp-51h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-49h] BYREF
  LPVOID v27; // [rsp+58h] [rbp-41h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-29h] BYREF
  void *v30; // [rsp+80h] [rbp-19h]
  int v31; // [rsp+88h] [rbp-11h]
  int v32; // [rsp+8Ch] [rbp-Dh]
  int *v33; // [rsp+90h] [rbp-9h]
  int v34; // [rsp+98h] [rbp-1h]
  int v35; // [rsp+9Ch] [rbp+3h]
  int *v36; // [rsp+A0h] [rbp+7h]
  int v37; // [rsp+A8h] [rbp+Fh]
  int v38; // [rsp+ACh] [rbp+13h]
  int *v39; // [rsp+B0h] [rbp+17h]
  int v40; // [rsp+B8h] [rbp+1Fh]
  int v41; // [rsp+BCh] [rbp+23h]

  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Ld(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_57aa434970eb334441637f8eaa75da73_Traceguids,
      *(unsigned int *)(a1 + 136),
      a3);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180650438;
    qword_180650438[0] = &IamTraceLogging::`vftable';
    atexit(_lambda_8127ed7c5a5c4820bb697a3afc89f3a5_::_lambda_invoker_cdecl_);
    CAppManagerTelemetry::Create((CAppManagerTelemetry *)qword_180650438);
    InitOnceComplete(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, qword_180650438);
  }
  result = (int)Context;
  v7 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v7 && *v7 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    v27 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v22, &v27) && v22 )
    {
      v27 = qword_1806504F0;
      qword_1806504F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180650508 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806504F0, qword_180650508, v19);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1806504F0);
    }
    result = (int)v27;
    v18 = *((_QWORD *)v27 + 1);
    if ( *(_DWORD *)v18 > 5u )
    {
      v23 = a2;
      v24 = a3;
      v25 = v17;
      v39 = &v23;
      v40 = 4;
      v41 = 0;
      v36 = &v24;
      v37 = 4;
      v38 = 0;
      v33 = &v25;
      v34 = 4;
      v35 = 0;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v18 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v30 = &unk_180573A0D;
      v31 = 56;
      v32 = 1;
      fPending = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      result = EventWriteTransfer(*(_QWORD *)(v18 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
  *(_DWORD *)(a1 + 136) = a3;
  v20 = 0LL;
  v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 48);
  if ( v8 )
  {
    result = (**v8)(v8, &GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20, &v20);
    if ( result >= 0 )
    {
      v9 = *(_DWORD *)(a1 + 136);
      if ( !v9 || (v10 = v9 - 1) == 0 || (v11 = v10 - 1) == 0 )
      {
        v14 = 0LL;
        v15 = 0LL;
        goto LABEL_18;
      }
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( !v13 )
        {
          v14 = 1LL;
LABEL_17:
          v15 = a2;
LABEL_18:
          result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v20 + 24LL))(v20, v15, v14);
          goto LABEL_19;
        }
        if ( v13 != 1 )
          goto LABEL_19;
      }
      v14 = 0LL;
      goto LABEL_17;
    }
  }
LABEL_19:
  v16 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return result;
}
