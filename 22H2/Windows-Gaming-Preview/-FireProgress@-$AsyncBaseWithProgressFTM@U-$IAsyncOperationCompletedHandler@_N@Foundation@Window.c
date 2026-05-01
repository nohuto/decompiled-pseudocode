/*
 * XREFs of ?FireProgress@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x180023374
 * Callers:
 *     ?SetProgress@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJH@Z @ 0x1800219F0 (-SetProgress@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationComple.c)
 * Callees:
 *     ?CreateBias@?$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA?AV?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@PEAUIRpcOptions@@PEAUIUnknown@@PEAUINilDelegate@Internal@Windows@@@Z @ 0x180023C90 (-CreateBias@-$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA-AV-$AutoStubBias@UIU.c)
 *     ??$CopyLocal@UINilDelegate@Internal@Windows@@@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJV?$ComPtrRef@V?$ComPtr@UINilDelegate@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180024144 (--$CopyLocal@UINilDelegate@Internal@Windows@@@-$GitPtrSupportsAgile@UINilDelegate@Internal@Windo.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x180025D3C (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x180026158 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireProgress(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v4; // r15d
  signed __int32 v5; // edx
  __int64 v6; // rcx
  __int64 *v7; // r14
  struct IRpcOptions *v8; // rdi
  unsigned int v9; // eax
  LPSTREAM v10; // rcx
  __int64 v11; // rcx
  struct IUnknown *v12; // rcx
  __int64 v13; // rcx
  signed __int32 v15[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v16; // [rsp+40h] [rbp-30h]
  LPSTREAM pStm; // [rsp+48h] [rbp-28h] BYREF
  int v18; // [rsp+50h] [rbp-20h]
  GUID v19; // [rsp+60h] [rbp-10h] BYREF
  struct IUnknown *v20; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+40h] BYREF
  struct IRpcOptions *v22; // [rsp+B8h] [rbp+48h] BYREF

  v4 = 0;
  v16 = a1;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v21 = 0LL;
  v5 = *(_DWORD *)(a1 + 152);
  if ( v5 > 0 )
  {
    do
    {
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 152), v5 + 1, v5) )
        break;
      v5 = *(_DWORD *)(a1 + 152);
    }
    while ( v5 > 0 );
    if ( v5 > 0 )
    {
      v6 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a1)(
             a1,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v21) >= 0 )
      {
        v20 = 0LL;
        v7 = (__int64 *)(a1 + 136);
        if ( (int)Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::CopyLocal<Windows::Internal::INilDelegate>(
                    a1 + 136,
                    &v20) >= 0 )
        {
          if ( Microsoft::WRL::gCausality )
          {
            v19 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, int))(*(_QWORD *)Microsoft::WRL::gCausality + 72LL))(
              Microsoft::WRL::gCausality,
              1LL,
              2LL,
              &v19,
              a1,
              1);
          }
          v22 = 0LL;
          RpcOptionsHelper::GetRpcOptions(v20, &v22);
          v8 = v22;
          BiasHelper<IUnknown,Windows::Internal::INilDelegate,1>::CreateBias(&pStm);
          v9 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))v20->lpVtbl[1].QueryInterface)(v20, v21, a2);
          v4 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v9,
                 v20,
                 *(_QWORD *)(a1 + 144));
          if ( Microsoft::WRL::gCausality )
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
              Microsoft::WRL::gCausality,
              1LL,
              2LL,
              1LL);
          if ( v18 >= 0 )
          {
            (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)pStm + 40LL))(pStm, 0LL, 0LL, 0LL);
            CoReleaseMarshalData(pStm);
          }
          v10 = pStm;
          if ( pStm )
          {
            pStm = 0LL;
            (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v10 + 16LL))(v10);
          }
          if ( v8 )
            ((void (__fastcall *)(struct IRpcOptions *))v8->lpVtbl->Release)(v8);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 152), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v15, 0);
          v11 = *v7;
          *v7 = 0LL;
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        v12 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
        }
      }
    }
  }
  v13 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return v4;
}
