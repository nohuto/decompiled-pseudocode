void __fastcall ivOnChildPartitionConnected(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const struct CONTAINER_ID *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  const struct CONTAINER_ID *v9; // rdx
  IVForegroundSync *v10; // rcx
  const struct CONTAINER_ID *v11; // rdx
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  IVRootDeliver::Settings::SendSettingsUpdateToContainer((IVRootDeliver::Settings *)&v12, v4);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  IVForegroundSync::ivOnChildPartitionConnected(v10, v9);
  IVContentRectsSync::ivOnChildPartitionConnected((IVContentRectsSync *)&v12, v11);
}
