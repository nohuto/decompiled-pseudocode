/*
 * XREFs of ?GetDefaultStateStreamInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@MEAAJPEAU_GUID@@PEAI@Z @ 0x1800DFD50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::GetDefaultStateStreamInfo(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this,
        struct _GUID *a2,
        unsigned int *a3)
{
  int v3; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 1;
  v3 = (*(__int64 (__fastcall **)(_QWORD, void *, struct _GUID *, __int64, _QWORD))(**((_QWORD **)this + 15) + 72LL))(
         *((_QWORD *)this + 15),
         &SPATIALPROP_Hand_StateStream,
         a2,
         16LL,
         0LL);
  if ( v3 >= 0 )
    return 0LL;
  result = 2147942450LL;
  if ( v3 != -2147024846 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD4,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  return result;
}
