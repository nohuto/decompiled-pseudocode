/*
 * XREFs of ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800189A0
 * Callers:
 *     ?GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800490C0 (-GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0ContextualProcessorInitialState@@QEAA@AEBU0@@Z @ 0x180018C70 (--0ContextualProcessorInitialState@@QEAA@AEBU0@@Z.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018CC0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ??$As@UIInputTarget@@@?$ComPtr@VContextualProcessorBuffer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180018DC8 (--$As@UIInputTarget@@@-$ComPtr@VContextualProcessorBuffer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?Create@ContextualProcessorBuffer@@SAJPEAVInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z @ 0x180019834 (-Create@ContextualProcessorBuffer@@SAJPEAVInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180029560 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180029CD0 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x180033710 (-InternalAddRef@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180041B84 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18007FCF4 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSz@D@@@Z @ 0x180149424 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z @ 0x180149B80 (-ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContextualProcessorManager::OnFocusRequest(
        ContextualProcessorManager **this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct IInputBuffer *a4,
        struct IInputTarget **a5)
{
  struct InputContext *v5; // r14
  struct DeviceInfo *v6; // rsi
  unsigned int v8; // r12d
  struct ContextualProcessorBuffer *v9; // rbx
  unsigned int v10; // r15d
  ContextualProcessorManager *v11; // rdi
  ContextualProcessorManager *v12; // r13
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rax
  void (__fastcall *v21)(char *, _QWORD, ContextualProcessorInitialState *); // rsi
  ContextualProcessorInitialState *v22; // rax
  int v23; // eax
  int v24; // eax
  int v26; // r8d
  int v27; // [rsp+20h] [rbp-E0h]
  struct ContextualProcessorBuffer *v28; // [rsp+30h] [rbp-D0h] BYREF
  struct IInputTarget *v29; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  struct DeviceInfo *v32; // [rsp+50h] [rbp-B0h]
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  struct InputContext *v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  struct IInputBuffer *v36; // [rsp+70h] [rbp-90h]
  ContextualProcessorManager *v37; // [rsp+78h] [rbp-88h]
  struct IInputTarget **v38; // [rsp+80h] [rbp-80h]
  char v39[16]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v40[48]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v41[48]; // [rsp+C8h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v36 = a4;
  v5 = a3;
  v34 = a3;
  v6 = a2;
  v32 = a2;
  v37 = (ContextualProcessorManager *)this;
  v38 = a5;
  InputTraceLogging::PerfRegion::PerfRegion(
    (InputTraceLogging::PerfRegion *)v40,
    "ContextualProcessingFocusRequest",
    0LL);
  v8 = 0;
  v29 = 0LL;
  v9 = 0LL;
  v28 = 0LL;
  v10 = 0;
  v11 = this[2];
  v12 = this[3];
  if ( v11 == v12 )
    goto LABEL_16;
LABEL_2:
  v31 = 0LL;
  v30 = 0LL;
  InputTraceLogging::PerfRegion::PerfRegion(
    (InputTraceLogging::PerfRegion *)v41,
    "ContextualProcessorFocusRequest",
    (const struct InputTraceLogging::PerfRegion *)v40);
  v13 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *, struct InputContext *, __int64 *))(**(_QWORD **)v11
                                                                                                 + 32LL))(
          *(_QWORD *)v11,
          v6,
          v5,
          &v30);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
      (const char *)(unsigned int)v13,
      v27);
LABEL_14:
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v28);
    v23 = ContextualProcessorBuffer::Create(v34, v36, &v28);
    if ( v23 >= 0 )
      goto LABEL_22;
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF0,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
      (const char *)(unsigned int)v23,
      v27);
    goto LABEL_16;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v11 + 48LL))(*(_QWORD *)v11);
  v16 = wil::details::static_lazy<InputETW>::get(v15, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v16 + 8) > 4u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v16 + 8), 1LL) )
  {
    v33 = v14;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      v17,
      (int)&dword_1801CF7A6,
      (__int64)&v33);
  }
  v6 = (struct DeviceInfo *)(unsigned int)v30;
  v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v11 + 48LL))(*(_QWORD *)v11);
  v20 = wil::details::static_lazy<InputTraceLogging>::get(
          v19,
          _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v20 + 8) > 4u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v20 + 8), 1024LL) )
  {
    v33 = InputTraceLogging::ProcessorStateToString((unsigned int)v6);
    v35 = v18;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
      v26,
      (int)&dword_1801CF705,
      (__int64)&v35,
      (__int64)&v33);
  }
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v41);
  if ( !v9 )
    goto LABEL_14;
  while ( 1 )
  {
    v21 = *(void (__fastcall **)(char *, _QWORD, ContextualProcessorInitialState *))(*((_QWORD *)v9 + 2) + 32LL);
    v22 = ContextualProcessorInitialState::ContextualProcessorInitialState(
            (ContextualProcessorInitialState *)v39,
            (const struct ContextualProcessorInitialState *)&v30);
    v21((char *)v9 + 16, *(_QWORD *)v11, v22);
    if ( (_DWORD)v30 == 2 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
      v6 = v32;
      goto LABEL_16;
    }
    if ( (_DWORD)v30 == 3 )
      v10 = 1;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
    v11 = (ContextualProcessorManager *)((char *)v11 + 16);
    v6 = v32;
    if ( v11 != v12 )
    {
      v5 = v34;
      goto LABEL_2;
    }
LABEL_16:
    if ( (*((_BYTE *)v6 + 4) & 4) != 0 )
    {
      v11 = v37;
      if ( v10 != *((_DWORD *)v37 + 10) )
      {
        NtMITSetKeyboardInputRoutingPolicy(v10);
        *((_DWORD *)v11 + 10) = v10;
      }
    }
    if ( !v9 )
    {
      v8 = -2147467259;
      goto LABEL_24;
    }
    v24 = Microsoft::WRL::ComPtr<ContextualProcessorBuffer>::As<IInputTarget>(&v28, &v29);
    if ( v24 >= 0 )
      break;
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x114,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
      (const char *)(unsigned int)v24,
      v27);
LABEL_22:
    v9 = v28;
  }
  Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef(&v29);
  *v38 = v29;
LABEL_24:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v28);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v40);
  return v8;
}
