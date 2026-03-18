/*
 * XREFs of ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x1C01EF2E0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01E8A48 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?ivOnChildPartitionConnected@IVForegroundSync@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01F1500 (-ivOnChildPartitionConnected@IVForegroundSync@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?ivOnChildPartitionConnected@IVContentRectsSync@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01F1DFC (-ivOnChildPartitionConnected@IVContentRectsSync@@YAXAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall ivOnChildPartitionConnected(__int64 a1, int a2)
{
  const struct CONTAINER_ID *v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  const struct CONTAINER_ID *v7; // rdx
  IVForegroundSync *v8; // rcx
  const struct CONTAINER_ID *v9; // rdx
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  IVRootDeliver::Settings::SendSettingsUpdateToContainer((IVRootDeliver::Settings *)&v10, v2);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  IVForegroundSync::ivOnChildPartitionConnected(v8, v7);
  IVContentRectsSync::ivOnChildPartitionConnected((IVContentRectsSync *)&v10, v9);
}
