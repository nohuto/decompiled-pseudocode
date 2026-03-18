/*
 * XREFs of ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C020C628
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1C00275C0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C00B4258 (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReleaseResource(
        DirectComposition::CApplicationChannel *this,
        int a2)
{
  unsigned int v4; // ebx
  struct DirectComposition::CResourceMarshaler *v5; // rax
  struct DirectComposition::CResourceMarshaler *v6; // r14
  __int64 v7; // rax
  struct DirectComposition::CResourceMarshaler *v8; // rsi

  v4 = 0;
  v5 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  v6 = v5;
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v5 + 168LL))(v5);
    if ( v7 )
    {
      v8 = *(struct DirectComposition::CResourceMarshaler **)(v7 + 192);
      if ( v8 )
      {
        if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 104LL))(*(_QWORD *)(v7 + 192)) )
          DirectComposition::CApplicationChannel::ReleaseResource(this, v8);
      }
    }
    DirectComposition::CLinearObjectTableBase::ReleaseHandle(
      (DirectComposition::CApplicationChannel *)((char *)this + 56),
      a2);
    DirectComposition::CApplicationChannel::ReleaseResource(this, v6);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v4;
}
