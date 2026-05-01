/*
 * XREFs of ?v_OnPointerMove@CVirtualDesktopContainerElement@@MEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180430FE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x1804140DC (-_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA-AVMultitaskingViewPointerInputArgs@@AEB.c)
 *     ?AllUpViewHoverScrubSelectVirtualDesktop@MultitaskingViewTelemetry@@SAXXZ @ 0x18042F3A8 (-AllUpViewHoverScrubSelectVirtualDesktop@MultitaskingViewTelemetry@@SAXXZ.c)
 */

void __fastcall CVirtualDesktopContainerElement::v_OnPointerMove(
        CVirtualDesktopContainerElement *this,
        const struct MultitaskingViewPointerInputArgs *a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 824) )
  {
    v2 = (__int64 *)*((_QWORD *)this + 17);
    if ( v2 )
    {
      v3 = *v2;
      v4 = CMultitaskingViewElementBase::_MapArgumentsToChild((__int64)this, (__int64)v5, (__int64 *)a2);
      (*(void (__fastcall **)(__int64 *, __int64))(v3 + 224))(v2, v4);
      MultitaskingViewTelemetry::AllUpViewHoverScrubSelectVirtualDesktop();
    }
  }
}
