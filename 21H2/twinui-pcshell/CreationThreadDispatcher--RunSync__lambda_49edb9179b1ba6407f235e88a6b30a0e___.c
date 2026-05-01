/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_49edb9179b1ba6407f235e88a6b30a0e___ @ 0x1803DE378
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170___::Run @ 0x1803E01B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800646D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x180255D20 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_bf65030659e9ce755ba66a91d341de58_____lambda_bf65030659e9ce755ba66a91d341de58___ @ 0x1803DD91C (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_bf65030659e9ce755ba66a91d341de58_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_49edb9179b1ba6407f235e88a6b30a0e___(
        __int64 a1,
        __int128 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 *CAsyncCallbackWithLambda__lambda_bf65030659e9ce755ba66a91d341de58_____lambda_bf65030659e9ce755ba66a91d341de58; // rax
  volatile int *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  __int128 v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IInspectable *v16; // [rsp+60h] [rbp+20h] BYREF
  __int64 v17; // [rsp+70h] [rbp+30h] BYREF
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF

  v16 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::WeakRef *)(a1 + 48), &v16);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v13 = *a2;
    v14 = *((_QWORD *)a2 + 2);
    CAsyncCallbackWithLambda__lambda_bf65030659e9ce755ba66a91d341de58_____lambda_bf65030659e9ce755ba66a91d341de58 = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_bf65030659e9ce755ba66a91d341de58_____lambda_bf65030659e9ce755ba66a91d341de58___(&v17, (__int64)&v13);
    v7 = *CAsyncCallbackWithLambda__lambda_bf65030659e9ce755ba66a91d341de58_____lambda_bf65030659e9ce755ba66a91d341de58;
    v18 = *CAsyncCallbackWithLambda__lambda_bf65030659e9ce755ba66a91d341de58_____lambda_bf65030659e9ce755ba66a91d341de58;
    *CAsyncCallbackWithLambda__lambda_bf65030659e9ce755ba66a91d341de58_____lambda_bf65030659e9ce755ba66a91d341de58 = 0LL;
    v8 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
        v8,
        v6);
    }
    if ( v7 )
    {
      v11 = ((__int64 (__fastcall *)(struct IInspectable *, __int64))v16->lpVtbl->GetIids)(v16, v7);
      v4 = v11;
      if ( v11 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        goto LABEL_11;
      }
      v9 = (unsigned int)v11;
      v10 = 81LL;
    }
    else
    {
      v4 = -2147024882;
      v9 = 2147942414LL;
      v10 = 80LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)v9);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (__int64)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return v4;
}
