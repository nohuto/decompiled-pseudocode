/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18006FCC0
 * Callers:
 *     ?FireCompletion@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1800703C0 (-FireCompletion@-$AsyncBaseWithProgressFTM@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@.c)
 *     ?InvokeFireCompletion@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1800705A0 (-InvokeFireCompletion@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVTargetedContentT.c)
 *     ?_AfterComplete@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x180071168 (-_AfterComplete@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVTargetedContentTrigger.c)
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x1800076DC (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x1800077D8 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // r14d
  void (__fastcall *v3)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, signed __int32); // r10
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rax
  IUnknown *v7; // rsi
  struct IUnknown *v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rcx
  LPSTREAM v11; // rcx
  struct IUnknown *v12; // rcx
  LPUNKNOWN v13; // rcx
  signed __int32 v15[8]; // [rsp+0h] [rbp-69h] BYREF
  LPUNKNOWN pUnk; // [rsp+40h] [rbp-29h] BYREF
  struct IRpcOptions *v17[3]; // [rsp+48h] [rbp-21h] BYREF
  LPSTREAM ppstm; // [rsp+60h] [rbp-9h] BYREF
  HRESULT v19; // [rsp+68h] [rbp-1h]
  GUID v20; // [rsp+70h] [rbp+7h] BYREF
  GUID v21; // [rsp+80h] [rbp+17h] BYREF
  signed __int32 v22; // [rsp+D0h] [rbp+67h] BYREF
  signed __int32 v23; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v24; // [rsp+E0h] [rbp+77h] BYREF
  struct IUnknown *v25; // [rsp+E8h] [rbp+7Fh] BYREF

  v17[1] = (struct IRpcOptions *)-2LL;
  v2 = 0;
  v22 = -2;
  _InterlockedCompareExchange(&v22, *(_DWORD *)(a1 + 48), -2);
  if ( !v22 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 1, 0);
  if ( *(int *)(a1 + 128) > 0 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
  {
    v17[2] = (struct IRpcOptions *)a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    pUnk = 0LL;
    if ( Microsoft::WRL::gCausality )
    {
      _InterlockedCompareExchange(&v23, *(_DWORD *)(a1 + 48), v23);
      v3 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, signed __int32))(*(_QWORD *)Microsoft::WRL::gCausality + 56LL);
      v20 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      v3(Microsoft::WRL::gCausality, 0LL, 2LL, &v20, a1, v23);
    }
    if ( (**(int (__fastcall ***)(__int64, GUID *, LPUNKNOWN *))a1)(
           a1,
           &GUID_8db07c2e_d5b7_55b8_b29e_1853d3eac30a,
           &pUnk) >= 0 )
    {
      v24 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v24, *(_DWORD *)(a1 + 48), -2);
      v4 = *(_QWORD *)(a1 + 112);
      v25 = 0LL;
      if ( v4 )
        v5 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v4 + 24LL))(
               v4,
               &GUID_08f0b54e_7aba_5ce4_bf52_79368d04b857,
               &v25);
      else
        v5 = -2147024809;
      if ( v5 >= 0 )
      {
        if ( Microsoft::WRL::gCausality )
        {
          v6 = *(_QWORD *)Microsoft::WRL::gCausality;
          v21 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
          (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, _DWORD))(v6 + 72))(
            Microsoft::WRL::gCausality,
            0LL,
            2LL,
            &v21,
            a1,
            0);
        }
        v17[0] = 0LL;
        RpcOptionsHelper::GetRpcOptions(v25, v17);
        v7 = pUnk;
        ppstm = 0LL;
        v19 = 0;
        v8 = v25;
        if ( v17[0] && v25 )
        {
          v19 = CreateStreamOnHGlobal(0LL, 1, &ppstm);
          if ( v19 >= 0 )
            v19 = CoMarshalInterface(ppstm, &GUID_00000000_0000_0000_c000_000000000046, v7, 0, 0LL, 1u);
          v8 = v25;
        }
        else
        {
          v19 = -2147467262;
        }
        v9 = ((__int64 (__fastcall *)(struct IUnknown *, LPUNKNOWN, _QWORD))v8->lpVtbl[1].QueryInterface)(v8, pUnk, v24);
        v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
               v9,
               (__int64)v25);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v15, 0);
          v10 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 112) = 0LL;
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        if ( Microsoft::WRL::gCausality )
          (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
            Microsoft::WRL::gCausality,
            0LL,
            2LL);
        if ( v19 >= 0 )
        {
          (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(ppstm, 0LL, 0LL, 0LL);
          CoReleaseMarshalData(ppstm);
        }
        v11 = ppstm;
        if ( ppstm )
        {
          ppstm = 0LL;
          (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v11 + 16LL))(v11);
        }
        if ( v17[0] )
          ((void (__fastcall *)(struct IRpcOptions *))v17[0]->lpVtbl->Release)(v17[0]);
      }
      v12 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
      }
    }
    v13 = pUnk;
    if ( pUnk )
    {
      pUnk = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v13->lpVtbl->Release)(v13);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
