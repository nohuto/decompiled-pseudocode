__int64 __fastcall PlaySoundPostMessage(RPC_BINDING_HANDLE SourceBinding, int a2, int a3)
{
  struct _RPC_ASYNC_STATE *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi
  RPC_BINDING_HANDLE DestinationBinding; // [rsp+78h] [rbp+20h] BYREF

  DestinationBinding = 0LL;
  v6 = (struct _RPC_ASYNC_STATE *)PlaySndClient_midl_user_allocate(88LL);
  v7 = (__int64)v6;
  if ( !v6 )
    return 3221225495LL;
  v8 = RpcAsyncInitializeHandle(v6, 0x58u);
  if ( v8 || (v8 = RpcBindingCopy(SourceBinding, &DestinationBinding)) != 0 )
  {
    PlaySndClient_midl_user_free((void *)v7);
  }
  else
  {
    *(_QWORD *)(v7 + 24) = DestinationBinding;
    *(_DWORD *)(v7 + 44) = 2;
    *(_QWORD *)(v7 + 48) = I_RpcGetCompleteAndFreeRoutine();
    I_PlaySoundkPostMessage(v7, (__int64)DestinationBinding, a2, a3);
  }
  return v8;
}
