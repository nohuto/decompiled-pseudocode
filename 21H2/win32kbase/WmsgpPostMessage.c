/*
 * XREFs of WmsgpPostMessage @ 0x1C027F2F0
 * Callers:
 *     PostWinlogonMessage @ 0x1C0074CD0 (PostWinlogonMessage.c)
 * Callees:
 *     ClientI_WMsgkSendMessage @ 0x1C0074D4C (ClientI_WMsgkSendMessage.c)
 *     WMsg_midl_user_allocate @ 0x1C0074D90 (WMsg_midl_user_allocate.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_63d17d6d41434870d2c55e28a74f5cc8_@@CAXPEAX@Z @ 0x1C00C7B60 (--$_lambda_invoker_cdecl_@PEAX@_lambda_63d17d6d41434870d2c55e28a74f5cc8_@@CAXPEAX@Z.c)
 */

__int64 __fastcall WmsgpPostMessage(__int64 a1, int a2, int a3)
{
  RPC_BINDING_HANDLE v5; // rsi
  struct _RPC_ASYNC_STATE *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi
  RPC_BINDING_HANDLE DestinationBinding; // [rsp+50h] [rbp+8h] BYREF
  PVOID Buffer; // [rsp+68h] [rbp+20h]

  v5 = gWinLogonRpcHandle;
  DestinationBinding = 0LL;
  v6 = (struct _RPC_ASYNC_STATE *)WMsg_midl_user_allocate(0x58uLL);
  v7 = (__int64)v6;
  Buffer = v6;
  if ( !v6 )
    return 3221225495LL;
  v8 = RpcAsyncInitializeHandle(v6, 0x58u);
  if ( v8 || (v8 = RpcBindingCopy(v5, &DestinationBinding)) != 0 )
  {
    _lambda_63d17d6d41434870d2c55e28a74f5cc8_::_lambda_invoker_cdecl_<void *>((PVOID)v7);
  }
  else
  {
    *(_QWORD *)(v7 + 24) = DestinationBinding;
    *(_DWORD *)(v7 + 44) = 2;
    *(_QWORD *)(v7 + 48) = I_RpcGetCompleteAndFreeRoutine();
    ClientI_WMsgkSendMessage(v7, (__int64)DestinationBinding, a2, a3);
  }
  return v8;
}
