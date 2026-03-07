PVOID __fastcall ReferenceDwmApiPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  PVOID DeviceContext; // rbx

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 8)) )
  {
    DeviceContext = WPP_MAIN_CB.Queue.Wcb.DeviceContext;
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
      ObfReferenceObject(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
  }
  else
  {
    PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(v6, v5, v7, v8);
    DeviceContext = WPP_MAIN_CB.Queue.Wcb.DeviceContext;
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
      ObfReferenceObject(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    UserSessionSwitchLeaveCrit();
  }
  return DeviceContext;
}
