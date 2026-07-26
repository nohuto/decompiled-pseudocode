/*
 * XREFs of ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1C0026CB0
 * Callers:
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C010228C (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C0127C0C (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0032060 (WPP_RECORDER_SF__guid_.c)
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C0039794 (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C00B3754 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     ??0NetSetupPropertyBag@@QEAA@AEAVKRegKey@@@Z @ 0x1C00F98F8 (--0NetSetupPropertyBag@@QEAA@AEAVKRegKey@@@Z.c)
 *     ?ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z @ 0x1C0101E50 (-ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z.c)
 */

__int64 __fastcall ndisIfReadNetworkGuidFromKey(struct KRegKey *a1, struct _GUID *a2)
{
  int v3; // esi
  int Guid; // eax
  unsigned int v5; // ebx
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  KIRQL v8; // r11
  int v9; // edx
  struct _GUID v10; // [rsp+30h] [rbp-38h] BYREF
  struct _GUID v11; // [rsp+40h] [rbp-28h] BYREF

  v11 = 0LL;
  NetSetupPropertyBag::NetSetupPropertyBag((NetSetupPropertyBag *)&v10, a1);
  v3 = NetSetupPropertyBag::ReadGuid((NetSetupPropertyBag *)&v10, (const struct _NETSETUPPROPKEY *)&unk_1C00CA3D8, &v11);
  Guid = NetSetupPropertyBag::ReadGuid((NetSetupPropertyBag *)&v10, (const struct _NETSETUPPROPKEY *)&unk_1C00CA3C0, a2);
  v5 = 0;
  if ( v3 < 0 )
  {
    if ( Guid >= 0 )
      return v5;
    if ( v3 == -1073741772 && Guid == -1073741772 )
    {
      *a2 = *ndisIfGetDefaultNetworkGuid(&v10);
      return v5;
    }
    return (unsigned int)-1073741823;
  }
  if ( Guid >= 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0x16u,
        0x11u,
        (struct _GUID *)&WPP_6ddb316d784933c58b4801ad2d08aa04_Traceguids);
    return (unsigned int)-1073741823;
  }
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid(&v11);
  if ( CompartmentBlockByGuid )
  {
    *a2 = *(struct _GUID *)(*((_QWORD *)CompartmentBlockByGuid + 7) + 32LL);
    KeReleaseSpinLock(&ndisIfListLock, v8);
    return v5;
  }
  KeReleaseSpinLock(&ndisIfListLock, v8);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 3;
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      22,
      18,
      (struct _GUID *)&WPP_6ddb316d784933c58b4801ad2d08aa04_Traceguids,
      (__int64)&v11);
  }
  return 3221225473LL;
}
