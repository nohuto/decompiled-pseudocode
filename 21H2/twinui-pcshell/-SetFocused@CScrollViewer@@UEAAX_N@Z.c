/*
 * XREFs of ?SetFocused@CScrollViewer@@UEAAX_N@Z @ 0x18042B450
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x180407FFC (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z @ 0x180413870 (-SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z.c)
 */

void __fastcall CScrollViewer::SetFocused(CScrollViewer *this, char a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  CMultitaskingViewElementBase::SetFocused(this, a2);
  if ( *((_BYTE *)this + 176) && !*((_QWORD *)this + 21) )
  {
    v3 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>((_QWORD *)this + 31, &v3) >= 0 )
      (*(void (__fastcall **)(CScrollViewer *, __int64))(*(_QWORD *)this + 288LL))(this, v3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
  }
}
