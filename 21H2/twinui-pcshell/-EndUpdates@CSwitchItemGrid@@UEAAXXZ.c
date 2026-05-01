/*
 * XREFs of ?EndUpdates@CSwitchItemGrid@@UEAAXXZ @ 0x180416690
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180414050 (-_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationS.c)
 */

void __fastcall CSwitchItemGrid::EndUpdates(CSwitchItemGrid *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 180, 0xFFFFFFFF) == 1 )
  {
    v2 = (_QWORD *)((char *)this - 208);
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 26) + 304LL))((char *)this - 208)
      && !*((_QWORD *)this - 5) )
    {
      (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, _DWORD))(*v2 + 272LL))(v2, &v3, 0LL, 7LL, 0);
      if ( v3 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 288LL))(v2);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
    }
    CMultitaskingViewElementBase::_LayoutChildren(v2, 0, 0LL);
  }
}
