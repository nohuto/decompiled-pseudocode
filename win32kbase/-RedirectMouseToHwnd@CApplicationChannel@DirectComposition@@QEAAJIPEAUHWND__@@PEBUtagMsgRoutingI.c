/*
 * XREFs of ?RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C024AFAC
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0066180 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C0252A34 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::RedirectMouseToHwnd(
        DirectComposition::CApplicationChannel *this,
        int a2,
        HWND a3,
        const struct tagMsgRoutingInfo *a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // r10
  __int64 v11; // rcx
  DirectComposition::CVisualMarshaler *v12; // rax

  v6 = 0;
  v7 = (unsigned int)(a2 - 1);
  if ( a2
    && v7 < *((_QWORD *)this + 10)
    && (_mm_lfence(), (v11 = *(_QWORD *)(*((_QWORD *)this + 11) * v7 + *((_QWORD *)this + 7))) != 0)
    && (v12 = (DirectComposition::CVisualMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 168LL))(v11)) != 0LL
    && ((a6 | a5) & 0xFFFF7EC0) == 0 )
  {
    if ( a5 )
      return (unsigned int)DirectComposition::CVisualMarshaler::RedirectMouseToHwnd(v12, this, a3, a4, a5, a6);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
