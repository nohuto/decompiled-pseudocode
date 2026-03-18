/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRemoteHotKeyCallBack@@UIMessageProxyReconnectAdapterOwner@@UIUnknown@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x14000ABFC
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHotKeyClient@@UIRemoteHotKeyCallBack@@UIMessageProxyReconnectAdapterOwner@@UIUnknown@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14000B0A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_14000B0A0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1400067C0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRemoteHotKeyCallBack,IMessageProxyReconnectAdapterOwner,IUnknown>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r10
  _QWORD *v10; // r8
  __int64 v11; // r10

  if ( InlineIsEqualGUID(a2, &GUID_f17ab79d_12a5_4878_ac23_c0eb1c6e1572) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_f40c54d9_03bb_449c_83a5_6796bd8f9dc5) )
    {
      *v7 = v9;
    }
    else if ( InlineIsEqualGUID(v6, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *v10 = v11 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v8;
  }
}
