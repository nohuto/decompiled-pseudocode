/*
 * XREFs of ?OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180176CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000EDF8 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ToCompositionInputType@@YA?AW4CompositionInputType@@W4InputType@@@Z @ 0x180017E58 (-ToCompositionInputType@@YA-AW4CompositionInputType@@W4InputType@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x1800B6784 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUI.c)
 *     ??$_Try_emplace@AEB_K$$V@?$unordered_map@_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@_K@std@@U?$equal_to@_K@5@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x1801765E0 (--$_Try_emplace@AEB_K$$V@-$unordered_map@_KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@U-$hash@_K@s.c)
 *     ?GetInputForwardInputSite@InputForwardProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputType@@PEAUHitTestResult@@@Z @ 0x180176A38 (-GetInputForwardInputSite@InputForwardProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4I.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputForwardProcessor::OnHitTest(
        InputForwardProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 v7; // r15
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // edi
  __int64 v15; // [rsp+20h] [rbp-B9h] BYREF
  __int64 v16; // [rsp+28h] [rbp-B1h] BYREF
  __int64 v17; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v18; // [rsp+38h] [rbp-A1h] BYREF
  _OWORD v19[2]; // [rsp+48h] [rbp-91h] BYREF
  __int64 v20; // [rsp+68h] [rbp-71h]
  __int128 v21; // [rsp+70h] [rbp-69h] BYREF
  __int128 v22; // [rsp+80h] [rbp-59h]
  __int128 v23; // [rsp+90h] [rbp-49h]
  __int64 v24; // [rsp+A0h] [rbp-39h]
  _BYTE v25[64]; // [rsp+B0h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]

  *(_DWORD *)a4 = 0;
  if ( (*(_BYTE *)a2 & 0x1A) == 0 || (*(_DWORD *)a2 & 0x4000) != 0 )
    return 0LL;
  v7 = *((unsigned int *)a2 + 10);
  v8 = *((_QWORD *)a3 + 22);
  v9 = *(_QWORD *)(v8 + 32);
  InputForwardProcessor::GetInputForwardInputSite((__int64)this, &v17, *(_DWORD *)a2, v8);
  v10 = v17;
  if ( !v17 )
    goto LABEL_12;
  if ( !v9 )
    goto LABEL_12;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  memset_0(v25, 0, sizeof(v25));
  v11 = ToCompositionInputType(*(_DWORD *)a2);
  if ( (int)NtQueryCompositionInputQueueAndTransform(v9, v11, &v21, v25) < 0 || (unsigned int)(v21 - 3) > 1 )
    goto LABEL_12;
  v19[0] = v22;
  v19[1] = v23;
  v20 = v24;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  v16 = v10;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v16);
  v12 = DWMInputTarget::Create((int)v19, &v16, &v15);
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( v15 )
    {
      v16 = v7;
      std::unordered_map<unsigned __int64,Microsoft::WRL::ComPtr<IInputTarget>>::_Try_emplace<unsigned __int64 const &,>(
        (__int64)this + 32,
        (__int64)&v18,
        (const unsigned __int8 *)&v16);
      Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)(v18 + 24), &v15);
      *(_DWORD *)a4 = 1;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
LABEL_12:
    v13 = 0;
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7C,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputforwarder\\system\\lib\\in"
             "putforwardprocessor.cpp",
    (const char *)(unsigned int)v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
LABEL_13:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v13;
}
