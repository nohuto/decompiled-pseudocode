/*
 * XREFs of ?EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0060D60
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1C00600B0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C0061AAC (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     Feature_191799614__private_IsEnabledDeviceUsage @ 0x1C00E1544 (Feature_191799614__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CApplicationChannel::EmitUpdateCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 i; // rbx

  for ( i = *((_QWORD *)this + 52); ; i = *((_QWORD *)this + 52) )
  {
    if ( !i )
      return 1;
    *((_QWORD *)this + 52) = *(_QWORD *)(i + 8);
    *(_QWORD *)(i + 8) = 0LL;
    if ( (unsigned int)Feature_191799614__private_IsEnabledDeviceUsage() )
      DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)i);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct DirectComposition::CBatch **))(*(_QWORD *)i + 40LL))(i, a2) )
      break;
    *(_DWORD *)(i + 16) &= ~2u;
    if ( (unsigned int)Feature_191799614__private_IsEnabledDeviceUsage() )
      DirectComposition::CApplicationChannel::ReleaseResource(this, (struct DirectComposition::CResourceMarshaler *)i);
  }
  *(_QWORD *)(i + 8) = *((_QWORD *)this + 52);
  *((_QWORD *)this + 52) = i;
  if ( (unsigned int)Feature_191799614__private_IsEnabledDeviceUsage() )
    DirectComposition::CApplicationChannel::ReleaseResource(this, (struct DirectComposition::CResourceMarshaler *)i);
  return 0;
}
