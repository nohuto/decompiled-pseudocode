/*
 * XREFs of ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180028DD0
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x18004B510 (-OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001216C (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001275C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?Provider@InputETW@@SAQEBU_tlgProvider_t@@XZ @ 0x180018DA8 (-Provider@InputETW@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputType@@H@Z @ 0x180027D50 (-CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputT.c)
 *     ??$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@?$unordered_map@KPEAUIRawInputProvider@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x180029058 (--$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@-$unordered_map@KPEAUIRawInputProvider@@U-$h.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x180029518 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     ??$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAKAEAPEAUIInputProcessor@@@Z @ 0x180029838 (--$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@-$vector@U-$pair@KPEAUIInputProcessor@@@std@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18008701C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputStateManager::OnDeviceAttach(
        RTL_SRWLOCK *this,
        struct DeviceInfo *a2,
        struct IRawInputProvider *a3)
{
  __int64 v6; // rcx
  const struct _tlgProvider_t *v7; // r8
  const struct _tlgProvider_t *v8; // rax
  int v9; // r9d
  _QWORD *i; // rax
  _QWORD *v11; // rbx
  struct IRawInputProvider *v12; // r14
  _QWORD *Ptr; // rdx
  struct IRawInputProvider *v14; // r14
  __int64 v15; // r9
  int InputProcessorWorker; // eax
  int v17; // ebx
  int v19; // eax
  int v20; // [rsp+20h] [rbp-30h]
  _QWORD v21[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  RTL_SRWLOCK *v23; // [rsp+80h] [rbp+30h] BYREF
  struct IRawInputProvider *v24; // [rsp+90h] [rbp+40h] BYREF
  __int64 v25; // [rsp+98h] [rbp+48h] BYREF

  v24 = a3;
  if ( InputETW::IsVerboseEnabled(1uLL) )
  {
    v8 = InputETW::Provider(v6);
    v7 = v8;
    if ( *(_DWORD *)v8 > 5u && tlgKeywordOn((__int64)v8, 1LL) )
    {
      v23 = (RTL_SRWLOCK *)*((int *)a2 + 1);
      v25 = *(unsigned int *)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (_DWORD)v7,
        (unsigned int)&unk_1801C9DFE,
        (_DWORD)v7,
        v9,
        (__int64)&v25,
        (__int64)&v23);
    }
  }
  if ( a3 )
  {
    wil::srwlock::lock_exclusive(this + 20, &v23);
    std::unordered_map<unsigned long,IRawInputProvider *>::_Insert_or_assign<unsigned long const &,IRawInputProvider * &>(
      &this[12],
      v21,
      a2,
      &v24);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v23);
  }
  for ( i = this[10].Ptr; ; i = v11 - 2 )
  {
    v11 = i;
    if ( i == this[9].Ptr )
      break;
    v12 = (struct IRawInputProvider *)*(i - 1);
    v24 = v12;
    if ( (*(unsigned __int8 (__fastcall **)(struct IRawInputProvider *, struct DeviceInfo *, const struct _tlgProvider_t *))(*(_QWORD *)v12 + 32LL))(
           v12,
           a2,
           v7) )
    {
      (*(void (__fastcall **)(struct IRawInputProvider *))(*(_QWORD *)v12 + 8LL))(v12);
      Ptr = this[10].Ptr;
      if ( this[11].Ptr != Ptr )
      {
        *(_DWORD *)Ptr = *(_DWORD *)a2;
        Ptr[1] = v12;
        this[10].Ptr = (char *)this[10].Ptr + 16;
        goto LABEL_32;
      }
LABEL_31:
      std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor * &>(
        &this[9],
        Ptr,
        a2,
        &v24);
      goto LABEL_32;
    }
  }
  v14 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[2] = 0LL;
  v21[0] = a2;
  v21[1] = this + 1;
  if ( !a2 || this == (RTL_SRWLOCK *)-8LL )
    v15 = 2147942487LL;
  else
    v15 = 0LL;
  if ( (int)v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)v15,
      v20);
    JUMPOUT(0x18002904ELL);
  }
  InputProcessorWorker = CreateInputProcessorWorker(v21, (__int64)&v24, 0, 0);
  v17 = InputProcessorWorker;
  if ( InputProcessorWorker >= 0 )
    v17 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE0,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)(unsigned int)InputProcessorWorker,
      v20);
  if ( v17 >= 0 )
  {
    v14 = v24;
    v17 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v17,
      v20);
  }
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v17,
      v20);
    if ( v14 )
      (*(void (__fastcall **)(struct IRawInputProvider *))(*(_QWORD *)v14 + 16LL))(v14);
    return (unsigned int)v17;
  }
  v23 = 0LL;
  v24 = v14;
  Ptr = this[10].Ptr;
  if ( this[11].Ptr == Ptr )
    goto LABEL_31;
  *(_DWORD *)Ptr = *(_DWORD *)a2;
  Ptr[1] = v14;
  this[10].Ptr = (char *)this[10].Ptr + 16;
LABEL_32:
  v19 = (*(__int64 (__fastcall **)(PVOID, struct DeviceInfo *))(*(_QWORD *)this[5].Ptr + 24LL))(this[5].Ptr, a2);
  v17 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x146,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v19,
      v20);
    return (unsigned int)v17;
  }
  return 0LL;
}
