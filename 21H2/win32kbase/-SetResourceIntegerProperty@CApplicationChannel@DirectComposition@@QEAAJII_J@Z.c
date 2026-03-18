/*
 * XREFs of ?SetResourceIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJII_J@Z @ 0x1C0085C2C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C008A134 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0085EE4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C0085F80 (-UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceIntegerProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3)
{
  unsigned __int64 v4; // rcx
  struct DirectComposition::CResourceMarshaler *v6; // rdi
  int v7; // esi
  bool v8; // cl

  v4 = (unsigned int)(a2 - 1);
  if ( a2
    && v4 < *((_QWORD *)this + 10)
    && (_mm_lfence(),
        (v6 = *(struct DirectComposition::CResourceMarshaler **)(v4 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7))) != 0LL) )
  {
    v7 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v6 + 112LL))(
           v6,
           this);
    if ( v7 >= 0 )
    {
      if ( *((_QWORD *)v6 + 5) )
        v8 = DirectComposition::CApplicationChannel::UnbindAnimation(this, v6, a3);
      else
        v8 = 0;
      if ( v8 )
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v6);
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v7;
}
