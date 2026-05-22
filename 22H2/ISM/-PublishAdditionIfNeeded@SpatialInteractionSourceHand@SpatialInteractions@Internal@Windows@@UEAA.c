/*
 * XREFs of ?PublishAdditionIfNeeded@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E11C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::PublishAdditionIfNeeded(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  _BYTE v7[960]; // [rsp+30h] [rbp-3D8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+408h] [rbp+0h]

  *((_DWORD *)this + 2) = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *))(*(_QWORD *)a2 + 56LL))(a2);
  *((_DWORD *)this + 3) = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *))(*(_QWORD *)a2 + 64LL))(a2);
  memset_0(v7, 0, 0x3B8uLL);
  v4 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *, _BYTE *))(*(_QWORD *)this + 144LL))(
         this,
         v7);
  if ( v4 < 0 )
  {
    v5 = 120LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *, __int64, _QWORD, _BYTE *))(*(_QWORD *)a2 + 72LL))(
         a2,
         512LL,
         *((unsigned int *)this + 2),
         v7);
  if ( v4 < 0 )
  {
    v5 = 121LL;
    goto LABEL_3;
  }
  return 0LL;
}
