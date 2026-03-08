/*
 * XREFs of ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C024B060
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1C00600B0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C00C2458 (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReleaseResource(
        DirectComposition::CApplicationChannel *this,
        int a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // r8
  __int64 v6; // r8
  __int64 v7; // rax
  struct DirectComposition::CResourceMarshaler *v8; // r14
  __int64 v9; // rax
  struct DirectComposition::CResourceMarshaler *v10; // rsi

  v2 = 0;
  v3 = (unsigned int)(a2 - 1);
  if ( a2
    && v3 < *((_QWORD *)this + 10)
    && (_mm_lfence(),
        v6 = *((_QWORD *)this + 11) * v3,
        v7 = *((_QWORD *)this + 7),
        (v8 = *(struct DirectComposition::CResourceMarshaler **)(v6 + v7)) != 0LL) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 168LL))(*(_QWORD *)(v6 + v7));
    if ( v9 )
    {
      v10 = *(struct DirectComposition::CResourceMarshaler **)(v9 + 192);
      if ( v10 )
      {
        if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 104LL))(*(_QWORD *)(v9 + 192)) )
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
