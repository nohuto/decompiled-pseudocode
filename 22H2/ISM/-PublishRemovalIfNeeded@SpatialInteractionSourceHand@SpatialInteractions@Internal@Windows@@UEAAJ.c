/*
 * XREFs of ?PublishRemovalIfNeeded@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E12C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::PublishRemovalIfNeeded(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *, _QWORD))(*(_QWORD *)a2 + 88LL))(
         a2,
         *((unsigned int *)this + 2));
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7F,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
