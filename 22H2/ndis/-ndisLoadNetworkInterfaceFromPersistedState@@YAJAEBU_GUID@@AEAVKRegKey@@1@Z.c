/*
 * XREFs of ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C0106764
 * Callers:
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x1C00B2A34 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 *     _lambda_86c1c4c730e7c498c85e738815d56adf_::operator() @ 0x1C0101C68 (_lambda_86c1c4c730e7c498c85e738815d56adf_--operator().c)
 * Callees:
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x1C002ED34 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ??1NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x1C003917C (--1NdisNetworkInterfacePersistedState@@QEAA@XZ.c)
 *     ??0NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x1C0039624 (--0NdisNetworkInterfacePersistedState@@QEAA@XZ.c)
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C0039794 (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C010228C (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 */

__int64 __fastcall ndisLoadNetworkInterfaceFromPersistedState(
        struct _GUID *a1,
        struct KRegKey *this,
        struct KRegKey *a3)
{
  struct NdisNetworkInterfacePersistedState *v6; // r9
  int v7; // ebx
  unsigned int v8; // r8d
  __int64 v9; // rax
  struct _GUID v11; // [rsp+20h] [rbp-D8h] BYREF
  struct KRegKey v12; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v13; // [rsp+54h] [rbp-A4h]

  NdisNetworkInterfacePersistedState::NdisNetworkInterfacePersistedState((NdisNetworkInterfacePersistedState *)&v12);
  v7 = Ndis::BindRegistry::ReadNetworkInterfaceV2(this, a3, &v12, v6);
  if ( v7 >= 0 )
  {
    v9 = v13 - *(_QWORD *)&ndisDefaultNetworkGuid.Data1;
    if ( (_QWORD)v13 == *(_QWORD *)&ndisDefaultNetworkGuid.Data1 )
      v9 = *((_QWORD *)&v13 + 1) - *(_QWORD *)ndisDefaultNetworkGuid.Data4;
    if ( !v9 )
      v13 = (__int128)*ndisIfGetDefaultNetworkGuid(&v11);
    if ( (unsigned int)ndisIfCreateInterfaceFromPersistentStore(
                         a1,
                         (struct NdisNetworkInterfacePersistedState *)&v12,
                         v8) )
      v7 = -1073741823;
    else
      v7 = 0;
  }
  NdisNetworkInterfacePersistedState::~NdisNetworkInterfacePersistedState((NdisNetworkInterfacePersistedState *)&v12);
  return (unsigned int)v7;
}
