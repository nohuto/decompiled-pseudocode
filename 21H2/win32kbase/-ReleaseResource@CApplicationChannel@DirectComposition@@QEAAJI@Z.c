/*
 * XREFs of ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C0014068
 * Callers:
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C0014D9C (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C008A134 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C00143F4 (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReleaseResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  struct DirectComposition::CResourceMarshaler *v8; // rdi
  struct DirectComposition::CResourceMarshaler *v10; // rsi

  v2 = 0;
  v3 = a2 - 1;
  if ( a2
    && v3 < *((_QWORD *)this + 10)
    && (_mm_lfence(),
        v6 = *((_QWORD *)this + 7),
        v7 = v3 * *((_QWORD *)this + 11),
        (v8 = *(struct DirectComposition::CResourceMarshaler **)(v7 + v6)) != 0LL) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v8 + 96LL))(*(_QWORD *)(v7 + v6), 195LL) )
    {
      v10 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v8 + 25);
      if ( v10 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 200LL))(*((_QWORD *)v8 + 25)) )
          DirectComposition::CApplicationChannel::ReleaseResource(this, v10);
      }
    }
    DirectComposition::CLinearObjectTableBase::ReleaseHandle(
      (DirectComposition::CApplicationChannel *)((char *)this + 56),
      a2);
    DirectComposition::CApplicationChannel::ReleaseResource(this, v8);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v2;
}
