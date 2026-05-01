/*
 * XREFs of ?_CreateLabel@CSwitchItemElement@@IEAAJAEBUCSize@Geometry@@@Z @ 0x180410FDC
 * Callers:
 *     ?v_LayoutChildren@CSwitchItemElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180411680 (-v_LayoutChildren@CSwitchItemElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboard.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_RenderLabel@CSwitchItemElement@@IEAAXXZ @ 0x180411334 (-_RenderLabel@CSwitchItemElement@@IEAAXXZ.c)
 */

__int64 __fastcall CSwitchItemElement::_CreateLabel(CSwitchItemElement *this, const struct Geometry::CSize *a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 616);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 77);
  v5 = *(_QWORD *)a2;
  v6 = *((_QWORD *)this + 71);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v6 + 80LL))(
         v6,
         *((_QWORD *)this + 11),
         v5,
         1LL,
         &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
         v2);
  v8 = v7;
  if ( v7 >= 0 )
  {
    CSwitchItemElement::_RenderLabel(this);
    *((_QWORD *)this + 79) = *(_QWORD *)a2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CA,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
