/*
 * XREFs of ??1TargetingInfo@KeyboardProcessor@@QEAA@XZ @ 0x1800488F4
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800483F0 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@PEA.c)
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801356B0 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     _KeyboardProcessor::OnInputReport_::_1_::dtor$4 @ 0x1801359AA (_KeyboardProcessor--OnInputReport_--_1_--dtor$4.c)
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180187F90 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     _ButtonProcessor::OnInputReport_::_1_::dtor$2 @ 0x180188296 (_ButtonProcessor--OnInputReport_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall KeyboardProcessor::TargetingInfo::~TargetingInfo(KeyboardProcessor::TargetingInfo *this)
{
  __int64 v2; // rcx

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
