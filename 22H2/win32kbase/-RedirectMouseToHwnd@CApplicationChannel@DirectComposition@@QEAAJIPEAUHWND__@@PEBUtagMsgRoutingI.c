/*
 * XREFs of ?RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C020C58C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002D930 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C02140D4 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::RedirectMouseToHwnd(
        DirectComposition::CApplicationChannel *this,
        int a2,
        HWND a3,
        const struct tagMsgRoutingInfo *a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v9; // ebx
  struct DirectComposition::CResourceMarshaler *v10; // rax
  DirectComposition::CVisualMarshaler *v11; // r10

  v9 = 0;
  v10 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  if ( v10
    && (v11 = (DirectComposition::CVisualMarshaler *)(*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v10 + 168LL))(v10)) != 0LL
    && ((a6 | a5) & 0xFFFF7EC0) == 0 )
  {
    if ( a5 )
      return (unsigned int)DirectComposition::CVisualMarshaler::RedirectMouseToHwnd(v11, this, a3, a4, a5, a6);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v9;
}
