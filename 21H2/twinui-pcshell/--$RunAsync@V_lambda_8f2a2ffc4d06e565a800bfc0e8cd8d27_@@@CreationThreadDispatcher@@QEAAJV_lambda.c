/*
 * XREFs of ??$RunAsync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJV_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@K@Z @ 0x18028612C
 * Callers:
 *     ?HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z @ 0x180286720 (-HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801AA8CC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x180258040 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180258060 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$QueueTask@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_28273f6668f79f5db2d6a9fae521721a_@@@Z @ 0x180286090 (--$QueueTask@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync<_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r10
  __int64 v4; // rax
  std::_Ref_count_base *v5; // rax
  unsigned int v6; // r11d
  __int64 v7; // rcx
  unsigned int v8; // edi
  std::_Ref_count_base *v9; // rcx
  volatile int v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  std::_Ref_count_base *v13; // [rsp+30h] [rbp-18h]
  __int64 v14[2]; // [rsp+38h] [rbp-10h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = a1;
  v3 = a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
      a1,
      (volatile int *)a2);
  v11 = *(_DWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  v12 = v4;
  v5 = *(std::_Ref_count_base **)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  v13 = v5;
  v14[0] = v3;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(v14, (volatile int *)a2);
  v8 = Windows::Internal::ComTaskPool::QueueTask<_lambda_28273f6668f79f5db2d6a9fae521721a_>(
         v7,
         v6 != 0 ? 2 : 0,
         v6,
         (__int64)&v11);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(v14);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v15);
  v9 = *(std::_Ref_count_base **)(a2 + 16);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return v8;
}
