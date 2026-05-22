/*
 * XREFs of ?OnPeerDisconnected@AnimationDataProviderConnection@@MEAAJPEAVBamoPeer@dataprovider_AutoBamos@@_N@Z @ 0x180145110
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180011AD4 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AnimationDataProviderConnection::OnPeerDisconnected(
        AnimationDataProviderConnection *this,
        struct dataprovider_AutoBamos::BamoPeer *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 23);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 24);
    if ( v3 )
    {
      *(_QWORD *)(v2 + 24) = 0LL;
      (*(void (__fastcall **)(__int64, struct dataprovider_AutoBamos::BamoPeer *))(*(_QWORD *)v3 + 8LL))(v3, a2);
    }
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)(v2 + 32));
  }
  return 0LL;
}
