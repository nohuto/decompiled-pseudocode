/*
 * XREFs of ?Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@W4AppModelKind@4567@UAppViewId@4567@PEAUIWindow@4567@UWindowId@4567@PEBGW4WindowCreatedType@@@Z @ 0x180024670
 * Callers:
 *     ??0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x180023E90 (--0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@Applica.c)
 *     ??0LegacyWindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x180349B40 (--0LegacyWindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@A.c)
 * Callees:
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x1800244C0 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6aa4af50edda24595030ce1ebc68707d___ @ 0x180024548 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_6aa4af50edda24595030ce1ebc68707d.c)
 *     ?_Reset_move@?$_Func_class@X_N@std@@IEAAX$$QEAV12@@Z @ 0x180024A70 (-_Reset_move@-$_Func_class@X_N@std@@IEAAX$$QEAV12@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_36b68ccfaceedfb8db0ac3d16eb7f5b9__void_bool_::_Move @ 0x180024AE0 (std--_Func_impl_no_alloc__lambda_36b68ccfaceedfb8db0ac3d16eb7f5b9__void_bool_--_Move.c)
 *     ?_Tidy@?$_Func_class@X_N@std@@IEAAXXZ @ 0x18007D380 (-_Tidy@-$_Func_class@X_N@std@@IEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowWrapperBase::Initialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        char a8,
        unsigned __int16 *a9,
        char a10)
{
  unsigned __int16 *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdi
  _QWORD *v18; // rdi
  int v19; // eax
  _BYTE *v20; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v22; // ecx
  int v23; // eax
  __int64 v24; // rbx
  const WCHAR *v25; // rsi
  const WCHAR *v26; // rdi
  int v27; // ebx
  __int64 v28; // r10
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // edx
  int v33; // ecx
  void (*v34)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  ULONG UserDataCount; // [rsp+20h] [rbp-E0h]
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  int v38; // [rsp+3Ch] [rbp-C4h] BYREF
  const WCHAR *v39; // [rsp+40h] [rbp-C0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v41[3]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v42[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v43[56]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE *v44; // [rsp+E8h] [rbp-18h]
  _BYTE v45[56]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v46; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+30h] BYREF
  void *v48; // [rsp+140h] [rbp+40h]
  int v49; // [rsp+148h] [rbp+48h]
  int v50; // [rsp+14Ch] [rbp+4Ch]
  int *v51; // [rsp+150h] [rbp+50h]
  __int64 v52; // [rsp+158h] [rbp+58h]
  const WCHAR *v53; // [rsp+160h] [rbp+60h]
  int v54; // [rsp+168h] [rbp+68h]
  int v55; // [rsp+16Ch] [rbp+6Ch]
  const WCHAR *v56; // [rsp+170h] [rbp+70h]
  int v57; // [rsp+178h] [rbp+78h]
  int v58; // [rsp+17Ch] [rbp+7Ch]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v14 = a9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 216LL))(a2);
  RmActivityImportanceInitialize(a1 + 260);
  v15 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = *(_QWORD *)(a1 + 328);
  *(_QWORD *)(a1 + 328) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  *(_DWORD *)(a1 + 336) = a5;
  *(_DWORD *)(a1 + 360) = a6;
  v17 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 128) = a7;
  if ( a7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 8LL))(a7);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = *(_QWORD **)(a1 + 288);
  *(_QWORD *)(a1 + 288) = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v18 )
    (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
  if ( v14 )
    v19 = Windows::Internal::String::_InitializeHelper((HSTRING *)(a1 + 320), v14);
  else
    v19 = -2147467261;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x70,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v19,
      UserDataCount);
  }
  else
  {
    v42[0] = off_18050A2C0;
    v42[1] = a1;
    v42[7] = v42;
    Context = v42;
    v18 = (_QWORD *)(a1 + 408);
    v44 = 0LL;
    v20 = (_BYTE *)std::_Func_impl_no_alloc__lambda_36b68ccfaceedfb8db0ac3d16eb7f5b9__void_bool_::_Move(v42, v43);
    v44 = v20;
    if ( v20 == v43 )
    {
LABEL_19:
      v46 = 0LL;
      std::_Func_class<void,bool>::_Reset_move(v45, v43);
      std::_Func_class<void,bool>::_Reset_move(v43, v18);
      std::_Func_class<void,bool>::_Reset_move(v18, v45);
      std::_Func_class<void,bool>::_Tidy(v45);
      goto LABEL_20;
    }
  }
  if ( (_QWORD *)v18[7] == v18 )
    goto LABEL_19;
  v44 = (_BYTE *)v18[7];
  v18[7] = v20;
LABEL_20:
  std::_Func_class<void,bool>::_Tidy(v43);
  std::_Func_class<void,bool>::_Tidy(v42);
  v41[0] = a1;
  v41[1] = &a8;
  v41[2] = &a10;
  CurrentThreadId = GetCurrentThreadId();
  v23 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6aa4af50edda24595030ce1ebc68707d___(
          v22,
          CurrentThreadId,
          (__int64)v41);
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC1,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v23,
      UserDataCount);
    __debugbreak();
  }
  v24 = a1 + 16;
  v25 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 280LL))(v24);
  v26 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 272LL))(v24);
  v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 288LL))(v24);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_180650D68;
    qword_180650D68 = &ShellScreenClippingLogging::`vftable';
    qword_180650D80 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180650D68, qword_180650D80, v34);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_180650D68);
  }
  v28 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v28 > 5u )
  {
    v39 = v26;
    v38 = v27;
    v30 = -1LL;
    if ( v25 )
    {
      v31 = -1LL;
      do
        ++v31;
      while ( v25[v31] );
      v32 = 2 * v31 + 2;
    }
    else
    {
      v25 = &szAgent;
      v32 = 2;
    }
    v56 = v25;
    v57 = v32;
    v58 = 0;
    if ( v26 )
    {
      do
        ++v30;
      while ( v26[v30] );
      v33 = 2 * v30 + 2;
    }
    else
    {
      v26 = &szAgent;
      v33 = 2;
    }
    v53 = v26;
    v54 = v33;
    v55 = 0;
    v51 = &v38;
    v52 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v28 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v48 = &unk_18058CFF1;
    v49 = 68;
    v50 = 1;
    LODWORD(v39) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v28 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return 0LL;
}
