/*
 * XREFs of ?OnPeerConnectedThunk@BamoConnectionImpl@MPCManagerBamo_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@PEA_NPEAPEAVBamoPrincipal@Bamo@5@@Z @ 0x1800117A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::MPCManagerBamo_AutoBamos::BamoConnectionImpl::OnPeerConnectedThunk(
        BamoImpl::MPCManagerBamo_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        bool *a3,
        struct Microsoft::Bamo::BamoPrincipal **a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool *, struct Microsoft::Bamo::BamoPrincipal **))(**((_QWORD **)this + 2) + 56LL))(
           *((_QWORD *)this + 2),
           *((_QWORD *)a2 + 2),
           a3,
           a4);
}
